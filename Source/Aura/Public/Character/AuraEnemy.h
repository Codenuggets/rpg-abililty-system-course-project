// Copyright Nugget Studios

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/HighLightInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IHighlightInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();

	// Highlight Interface
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;

	// Combat Interface
	virtual int32 GetPlayerLevel() override;

protected:
	virtual void BeginPlay() override;
	virtual void InitAbilityActorInfo() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Character Class Defaults")
	int32 Level = 1;
	
};
