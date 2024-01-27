
#include "TTKGameplayWorkTestGameMode.h"
#include "UObject/ConstructorHelpers.h"

ATTKGameplayWorkTestGameMode::ATTKGameplayWorkTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Hero/BP_Hero"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
