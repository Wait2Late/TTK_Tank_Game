
#include "TTKGameplayWorkTestEnemySystem.h"
#include "Engine/GameInstance.h"
#include "TTKGameplayWorkTestBullet.h"
#include "Components/SphereComponent.h"

//////////////////////////////////////////////////////////
void UTTKGameplayWorkTestEnemySystemComponent::TakeDamage(int DamageAmount)
{
	Health -= DamageAmount;

	if (Health <= 0)
		this->GetOwner()->Destroy();
}

void UTTKGameplayWorkTestEnemySystemComponent::BeginPlay()
{
	Super::BeginPlay();

	Health = EnemyStats->Health;
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

			if (CollisionComp)
			{
				const float Dist = FVector::Distance(BulletIt->GetActorLocation(), EnemyIt->GetComponentLocation()); //Getting an error and crash here
				if(Dist < CollisionComp->GetScaledSphereRadius() + 900) //Increased the sphere radius to be able hit easier
				{
					
					BulletIt->HandleCollision(EnemyIt->GetOwner());
					//TODO I want to add a health system for the enemy

					EnemyIt->TakeDamage(1);
					
					// EnemyIt->GetOwner()->Destroy(); //OG

					Bullets.Remove(BulletIt);
					
				}
			}
		}
	}
}
