// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NiagaraSystem.h"
#include "PooledActor.h"
#include "PoolingSystem.h"
#include "GameFramework/Actor.h"
#include "SpawnSystem.generated.h"

UENUM(BlueprintType)
enum class EEnemyTypes : uint8
{
	None,
	MeleeEnemy UMETA(DisplayName = "MeleeEnemy"),
	RangedEnemy UMETA(DisplayName = "RangedEnemy"),
	FlyingEnemy UMETA(DisplayName = "FlyingEnemy")

};

UCLASS()
class TTKGAMEPLAYWORKTEST_API ASpawnSystem : public AActor
{
	GENERATED_BODY()

	void OnInitializePools();

	//BUG something bizarre happened with this method. Unable with time to fix it 1/2 11:55
	FVector GetRandomValidLocationAroundPlayer();

	UFUNCTION()
	void RemoveDeadEnemyFromWave(APooledActor* PooledActor);

public:
	
	// Sets default values for this actor's properties
	ASpawnSystem();

	UPROPERTY(EditAnywhere, Category="OffSet Category")
	float OffSetZ = 75.0f;

	UPROPERTY(BlueprintReadOnly)
	TArray<APooledActor*> CurrentWaveEnemies; //OG

	UPROPERTY(BlueprintReadOnly, Category= "WaveManager Category")
	int CurrentWaveIndex = 0;

	UPROPERTY(BlueprintReadOnly, Category = "WaveManager Category")
	int RemainingEnemiesAmount = 0;

	UPROPERTY(EditAnywhere, Category="SpawnWave Category")
	TMap<TEnumAsByte<EEnemyTypes>, APoolingSystem*> EnemyPools;

	UPROPERTY(BlueprintReadWrite, Category= "SpawnWave Category")
	int MaxEnemies = 20;

	UPROPERTY(BlueprintReadWrite, Category="SpawnWave Category")
	int AmountOfEnemiesToSpawn;
	
	UPROPERTY(BlueprintReadWrite, Category= "SpawnWave Category")
	EEnemyTypes EnemyTypes;

	UPROPERTY(EditAnywhere, Category= "SpawnWave Category")
	UNiagaraSystem* SpawnVfx;
	
	FVector SpawnOnRandomLocations;

	UFUNCTION(BlueprintCallable)
	void SpawnWaves();

	UFUNCTION(BlueprintImplementableEvent)
	void OnSpawnVFX(FVector VFXLocation);

	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
