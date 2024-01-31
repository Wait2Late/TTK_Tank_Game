// Fill out your copyright notice in the Description page of Project Settings.


#include "PooledActor.h"

//This method can be placed in Blueprint. It is behaving similar to Destroy() method
void APooledActor::Deactivate()
{
	GetWorldTimerManager().ClearAllTimersForObject(this);
	OnPooledActorDespawn.Broadcast(this);
	SetActive(false);
}

//An easy access for designers activate pooled actors. After they die, they turn invisible. If spawned again then, visible.
void APooledActor::SetActive(bool IsActive)
{
	bIsActive = IsActive;

	OnSetActiveCalled(IsActive); //Blueprint Implementable Event

	SetActorHiddenInGame(!IsActive);
	SetActorTickEnabled(IsActive);
	SetActorEnableCollision(IsActive);
}

//When they are needed.
bool APooledActor::GetIsActive()  { return bIsActive; }

void APooledActor::SetLifeSpan(float LifeTime) { LifeSpan = LifeTime; }

void APooledActor::SetPoolIndex(int32 Index) { PoolIndex = Index; }

int APooledActor::GetPoolIndex() { return PoolIndex; }


// Sets default values
APooledActor::APooledActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void APooledActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APooledActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

