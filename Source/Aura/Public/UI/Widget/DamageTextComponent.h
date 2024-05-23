// Copyright Nugget Studios

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "DamageTextComponent.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API UDamageTextComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetDamageText(float Damage);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void SetCriticalDamageText(float CriticalDamage);
	
};
