// Copyright Nugget Studios

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "AuraCharacter.generated.h"

class AAuraPlayerState;

/**
 * 
 */
UCLASS()
class AURA_API AAuraCharacter : public AAuraCharacterBase
{
	GENERATED_BODY()

public:
	AAuraCharacter();

	virtual void PossessedBy(AController* Controller) override;
	virtual void OnRep_PlayerState() override;

private:
	void InitAbilityActorInfo();
	void InitOverlay();

	TObjectPtr<AAuraPlayerState> AuraPlayerState;
	
};
