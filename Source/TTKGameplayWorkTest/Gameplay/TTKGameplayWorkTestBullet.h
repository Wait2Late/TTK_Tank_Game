#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TTKGameplayWorkTestBullet.generated.h"

/**
 * 
 */
UCLASS()
class TTKGAMEPLAYWORKTEST_API ATTKGameplayWorkTestBullet : public AActor
{
	GENERATED_BODY()

public:
	ATTKGameplayWorkTestBullet(const FObjectInitializer& ObjectInitializer);
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaSeconds) override;
	void HandleCollision(AActor* OtherActor);
	
protected:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Collision, meta = (AllowPrivateAccess = "true"))
	class USphereComponent* CollisionComponent;

	FVector CurrentVelocity = FVector::ZeroVector;
};
