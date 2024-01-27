
#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Tickable.h"
#include "TTKGameplayWorkTestEnemySystem.generated.h"

class ATTKGameplayWorkTestBullet;


/**
 * Enemy component registered in the enemy system
 */
UCLASS(NotBlueprintable, meta = (BlueprintSpawnableComponent))
class TTKGAMEPLAYWORKTEST_API UTTKGameplayWorkTestEnemySystemComponent
	: public USceneComponent
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};


/**
 * 
 */
UCLASS(NotBlueprintable)
class TTKGAMEPLAYWORKTEST_API UTTKGameplayWorkTestEnemySystem
	: public UGameInstanceSubsystem
	, public FTickableGameObject
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<UTTKGameplayWorkTestEnemySystemComponent*> Enemies;

	UPROPERTY(Transient)
	TArray<ATTKGameplayWorkTestBullet*> Bullets;

protected:
	
	virtual void Tick( float DeltaTime ) override;
	virtual TStatId GetStatId() const override { RETURN_QUICK_DECLARE_CYCLE_STAT(UTTKGameplayWorkTestEnemySystem, STATGROUP_Tickables); }
};
