// Fill out your copyright notice in the Description page of Project Settings.


#include "PoolingSystem.h"




APooledActor* APoolingSystem::OnSpawnActor(FVector SpawnLocation)
{
	for (APooledActor* SpawnActor : PooledActors)
	{
		if (SpawnActor != nullptr && SpawnActor->IsActive() == false)
		{
			SpawnActor->TeleportTo(SpawnLocation, FRotator::ZeroRotator);
			SpawnActor->SetLifeSpan(PooledActorLifeSpan); 
			SpawnActor->SetActive(true);
			SpawnPooledActorIndexes.Add(SpawnActor->GetPoolIndex());
			return SpawnActor;
		}
	}
	if (SpawnPooledActorIndexes.Num() > 0)
	{
		int SpawnCharIndex = SpawnPooledActorIndexes[0];
		SpawnPooledActorIndexes.Remove(SpawnCharIndex);
		APooledActor* SpawnChar = PooledActors[SpawnCharIndex];
		
		if (SpawnChar != nullptr)
		{
			SpawnChar->TeleportTo(SpawnLocation, FRotator::ZeroRotator);
			SpawnChar->SetLifeSpan(PooledActorLifeSpan);
			SpawnChar->SetActive(true);
			SpawnPooledActorIndexes.Add(SpawnChar->GetPoolIndex());

			return SpawnChar;
		}
	}
	return nullptr;
}

APooledActor* APoolingSystem::OnBeginPool()
{
	if (PooledActor != nullptr)
	{
		for (int i = 0; i < PoolSize; i++)
		{
			APooledActor* PoolsActor = GetWorld()->SpawnActor<APooledActor>(PooledActor, FVector(0.0f, 0.0f, 10000.0f), FRotator::ZeroRotator);
			if (PoolsActor != nullptr)
			{
				PoolsActor->SetActive(false);
				PoolsActor->SetPoolIndex(i);
				PoolsActor->OnPooledCharacterDelegateDespawn.AddDynamic(this, &APoolingSystem::OnPooledActorDespawn);
				PooledActors.Add(PoolsActor);
			}
		}
		
	}
	return nullptr;
}

void APoolingSystem::OnPooledActorDespawn(APooledActor* PooledActor)
{
	SpawnPooledActorIndexes.Remove(PooledActor->GetPoolIndex());
}

int APoolingSystem::GetPoolSize()
{
	return PoolSize;
}

// Sets default values
APoolingSystem::APoolingSystem()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}
// Called when the game starts or when spawned
void APoolingSystem::BeginPlay()
{
	Super::BeginPlay();
	
}
// Called every frame
void APoolingSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

