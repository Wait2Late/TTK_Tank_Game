
#include "TTKGameplayWorkTestEnemySystem.h"
#include "Engine/GameInstance.h"
#include "TTKGameplayWorkTestBullet.h"
#include "Components/SphereComponent.h"

//////////////////////////////////////////////////////////

void UTTKGameplayWorkTestEnemySystemComponent::BeginPlay()
{
	Super::BeginPlay();

	if (const UWorld* World = GetWorld())
	{
		if (const UGameInstance* GameInstance = World->GetGameInstance())
		{
			if (auto* EnemySystem = GameInstance->GetSubsystem<UTTKGameplayWorkTestEnemySystem>())
			{
				EnemySystem->Enemies.Add(this);
			}
		}
	}
}

void UTTKGameplayWorkTestEnemySystemComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (const UWorld* World = GetWorld())
	{
		if (const UGameInstance* GameInstance = World->GetGameInstance())
		{
			if (auto* EnemySystem = GameInstance->GetSubsystem<UTTKGameplayWorkTestEnemySystem>())
			{
				EnemySystem->Enemies.Add(this);
			}
		}
	}
}

//////////////////////////////////////////////////////////


void UTTKGameplayWorkTestEnemySystem::Tick(float DeltaTime)
{
	for(auto* EnemyIt : Enemies)
	{
		for(auto* BulletIt : Bullets)
		{
			auto* CollisionComp = BulletIt->FindComponentByClass<USphereComponent>();

			const float Dist = FVector::Distance(BulletIt->GetActorLocation(), EnemyIt->GetComponentLocation());
			if(Dist < CollisionComp->GetScaledSphereRadius() + 300)
			{
				BulletIt->HandleCollision(EnemyIt->GetOwner());
				EnemyIt->GetOwner()->Destroy();
				Bullets.Remove(BulletIt);
			}
		}
	}
}
