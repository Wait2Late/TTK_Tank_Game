// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PooledActor.h"
#include "GameFramework/Actor.h"
#include "PoolingSystem.generated.h"

UCLASS()
class TTKGAMEPLAYWORKTEST_API APoolingSystem : public APooledActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APoolingSystem();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Pools Enemy Category")
	TSubclassOf<APooledActor> PooledActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Pools Enemy Category")
	int PoolSize = 20;

	int GetPoolSize();

	UPROPERTY(EditAnywhere, Category = "Pools Enemy Category")
	float PooledActorLifeSpan = 0.0f;

	UFUNCTION(BlueprintCallable, Category = "Pools Enemy Category")
	APooledActor* OnSpawnActor(FVector SpawnLocation);

	UFUNCTION(BlueprintCallable, Category = "Pools Enemy Category")
	APooledActor* OnBeginPool();

	UFUNCTION()
	void OnPooledActorDespawn(APooledActor* PooledActor);

	UPROPERTY(BlueprintReadWrite, Category="Pooled Actor Category")
	TArray<APooledActor*> PooledActors;

	TArray<int32> SpawnPooledActorIndexes;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
