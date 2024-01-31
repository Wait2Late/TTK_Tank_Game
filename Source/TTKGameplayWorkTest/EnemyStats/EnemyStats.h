// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EnemyStats.generated.h"

/**
 * 
 */
UCLASS()
class TTKGAMEPLAYWORKTEST_API UEnemyStats : public UDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int Health;
};
