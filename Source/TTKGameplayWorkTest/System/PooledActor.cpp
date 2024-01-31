// Fill out your copyright notice in the Description page of Project Settings.


#include "PooledActor.h"




void APooledActor::Deactivate()
{
	GetWorldTimerManager().ClearAllTimersForObject(this);
	// SetIsAttacking(false);
	OnPooledActorDespawn.Broadcast(this);
	SetActive(false);
}

void APooledActor::SetActive(bool IsActive)
{
	bIsActive = IsActive;

	OnSetActiveCalled(IsActive); //Blueprint Implementable Event

	SetActorHiddenInGame(!IsActive);
	SetActorTickEnabled(IsActive);
	SetActorEnableCollision(IsActive);

	
}

void APooledActor::SetLifeSpan(float LifeTime) { LifeSpan = LifeTime; }

void APooledActor::SetPoolIndex(int32 Index) { PoolIndex = Index; }

int APooledActor::GetPoolIndex() { return PoolIndex; }

bool APooledActor::IsActive()  { return bIsActive; }

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

