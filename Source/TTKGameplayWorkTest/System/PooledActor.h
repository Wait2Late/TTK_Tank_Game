// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PooledActor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPooledActorDespawn, APooledActor*, PooledActor);
UCLASS()
class TTKGAMEPLAYWORKTEST_API APooledActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APooledActor();

	FOnPooledActorDespawn OnPooledActorDespawn;

	UFUNCTION(BlueprintCallable, Category="Pooled Character Category")
	void Deactivate();

	UFUNCTION(BlueprintImplementableEvent)
	void OnSetActiveCalled(bool bIsActive);
	
	UFUNCTION(BlueprintCallable, Category="SetActive Category")
	void SetActive(bool IsActive);
	void SetLifeSpan(float LifeTime);
	void SetPoolIndex(int32 Index);
	int GetPoolIndex();

	bool IsActive();

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	bool bIsActive;
	float LifeSpan = 0.0f;
	int32 PoolIndex;

	FTimerHandle LifeSpawnTimerHandle;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
