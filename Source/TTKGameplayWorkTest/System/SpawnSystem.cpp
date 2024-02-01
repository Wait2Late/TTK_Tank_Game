// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnSystem.h"

#include "NavigationSystem.h"
#include "NiagaraFunctionLibrary.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"


// Loops through the TMap storing the different pools for enemies and initializes them.
void ASpawnSystem::OnInitializePools()
{
	for (auto Pool : EnemyPools)
	{
		Pool.Value->OnBeginPool();
	}
}

//BUG fix this bizarre bug
// //Spawns around the player randomly, while checking if the location has a nav mesh.
FVector ASpawnSystem::GetRandomValidLocationAroundPlayer()
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return FVector::ZeroVector; 
	}
	ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(this, 0); // Assuming 0 for the first player
	if (!PlayerCharacter)
	{
		return FVector::ZeroVector; 
	}
	UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(World);
	if (!NavSystem)
	{
		return FVector::ZeroVector; 
	}

	//The logic behind the enemy spawn location. 
	float RandomAngle = FMath::RandRange(0.0f, 360.0f);
	FVector OurCharPos = PlayerCharacter->GetActorLocation();
	FVector SpawnDirection = FVector::ForwardVector.RotateAngleAxis(RandomAngle, FVector::UpVector);
	float Radius = 1000.0f;
	FVector RandomLocation = OurCharPos + SpawnDirection * Radius ;


	FVector LocalOffSetZ = FVector(0.0f, 0.0f, OffSetZ);
	FNavLocation NavLocation;
	// Check if the random location is on the navigation mesh
	if (NavSystem->GetRandomPointInNavigableRadius(RandomLocation, Radius, NavLocation))
	{
		return NavLocation.Location + LocalOffSetZ;
	}
	else
	{
		return FVector::ZeroVector;
	}
}

//When enemies dies. They are broadcasted which activates this method and removes the dead enemy from the wave array.
void ASpawnSystem::RemoveDeadEnemyFromWave(APooledActor* PooledActor)
{
	RemainingEnemiesAmount -= 1;
	UE_LOG(LogTemp, Warning, TEXT("Remainging Enemies: %d"), RemainingEnemiesAmount);
	PooledActor->OnPooledActorDespawn.RemoveDynamic(this, &ASpawnSystem::RemoveDeadEnemyFromWave);

	CurrentWaveEnemies.Remove(PooledActor);
	CurrentWaveEnemies.Shrink();
}

//The main spawn system. It can further adjust for a designer's vision. Right now this is a base version of it.
void ASpawnSystem::SpawnWaves()
{
	EEnemyTypes CurrentEnemyType;

	if (MaxEnemies >= CurrentWaveEnemies.Num())
	{
		CurrentEnemyType = EnemyTypes;
		
		for (int j = 0; j < AmountOfEnemiesToSpawn; j++)
		{
			if (MaxEnemies <= CurrentWaveEnemies.Num())
			{
				GEngine->AddOnScreenDebugMessage(-1, 4, FColor::Yellow, TEXT("Max amount of enemies. Not allowed to spawn more!"));	
				break;
			}

			SpawnOnRandomLocations = GetRandomValidLocationAroundPlayer();
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), SpawnVfx, SpawnOnRandomLocations);

			//Place a SpawnVFX inside the blueprint.
			OnSpawnVFX(SpawnOnRandomLocations);

			APooledActor* CurrentEnemy = EnemyPools[CurrentEnemyType]->OnSpawnActor(SpawnOnRandomLocations);//spawns randomly around the player
			
			if(CurrentEnemy == nullptr)
			{
				continue;
			}
			
			CurrentEnemy->OnPooledActorDespawn.AddDynamic(this, &ASpawnSystem::RemoveDeadEnemyFromWave);
			CurrentWaveEnemies.Add(CurrentEnemy);
			RemainingEnemiesAmount += 1;
			
		}
		CurrentWaveIndex += 1;
	}

}

// Called when the game starts or when spawned
void ASpawnSystem::BeginPlay()
{
	Super::BeginPlay();
	OnInitializePools();
}

ASpawnSystem::ASpawnSystem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called every frame
void ASpawnSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

