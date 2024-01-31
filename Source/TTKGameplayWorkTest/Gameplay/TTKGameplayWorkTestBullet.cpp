
#include "TTKGameplayWorkTestBullet.h"

#include "TTKGameplayWorkTestEnemySystem.h"
#include "Components/SphereComponent.h"

ATTKGameplayWorkTestBullet::ATTKGameplayWorkTestBullet(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickGroup = TG_PostPhysics;
	
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	CollisionComponent->SetSphereRadius(50);
	CollisionComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	CollisionComponent->SetCollisionProfileName("NoCollision");
	
	RootComponent = CollisionComponent;
}

void ATTKGameplayWorkTestBullet::BeginPlay()
{
	Super::BeginPlay();
	
	if (const UWorld* World = GetWorld())
	{
		if (const UGameInstance* GameInstance = World->GetGameInstance())
		{
			if (auto* EnemySystem = GameInstance->GetSubsystem<UTTKGameplayWorkTestEnemySystem>())
			{
				EnemySystem->Bullets.Add(this);
			}
		}
	}


	CurrentVelocity = FVector::VectorPlaneProject(GetActorForwardVector(), FVector::UpVector) * 100;
	CurrentVelocity += GetActorForwardVector().ProjectOnToNormal(FVector::UpVector) * 50;
}

void ATTKGameplayWorkTestBullet::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (const UWorld* World = GetWorld())
	{
		if (const UGameInstance* GameInstance = World->GetGameInstance())
		{
			if (auto* EnemySystem = GameInstance->GetSubsystem<UTTKGameplayWorkTestEnemySystem>())
			{
				EnemySystem->Bullets.Remove(this);
			}
		}
	}
}

void ATTKGameplayWorkTestBullet::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	FVector NewLocation = GetActorLocation();
	NewLocation += CurrentVelocity;

	// Apply gravity
	CurrentVelocity.Z -= 0.982;

	SetActorLocation(NewLocation);
}

void ATTKGameplayWorkTestBullet::HandleCollision(AActor* OtherActor)
{
	Destroy();
	
	//Little redundant to kill the same enemy multiple times in different scripts
	// OtherActor->Destroy(); 
}
