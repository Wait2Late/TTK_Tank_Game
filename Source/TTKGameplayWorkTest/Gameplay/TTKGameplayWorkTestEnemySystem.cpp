
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
				EnemySystem->EnemyHealth = EnemyStats->Health;
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

			const float Dist = FVector::Distance(BulletIt->GetActorLocation(), EnemyIt->GetComponentLocation()); //Getting an error and crash here
			if(Dist < CollisionComp->GetScaledSphereRadius() + 900) //Increased the sphere radius to be able hit easier
			{
				BulletIt->HandleCollision(EnemyIt->GetOwner());

				EnemyHealth--;
				
				if (EnemyHealth <= 0)
					EnemyIt->GetOwner()->Destroy();

				Bullets.Remove(BulletIt);
			}
		}
	}
}
