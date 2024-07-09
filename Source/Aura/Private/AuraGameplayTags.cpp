// Copyright Nugget Studios


#include "AuraGameplayTags.h"
#include "GameplayTagsManager.h"

FAuraGameplayTags FAuraGameplayTags::GameplayTags;

void FAuraGameplayTags::InitializeNativeGameplayTags()
{
	// Primary Attributes

	GameplayTags.Attributes_Primary_Strength = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Strength"), FString("Makes Stronk boi"));
	GameplayTags.Attributes_Primary_Intelligence = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Intelligence"), FString("Makes Smort boi"));
	GameplayTags.Attributes_Primary_Resilience = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Resilience"), FString("Makes Tough boi"));
	GameplayTags.Attributes_Primary_Vigor = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Primary.Vigor"), FString("Makes Healthy boi"));

	// Secondary Attributes

	GameplayTags.Attributes_Secondary_MaxHealth = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MaxHealth"), FString("Sets Max Health"));
	GameplayTags.Attributes_Secondary_MaxMana = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.MaxMana"), FString("Sets Max Mana"));
	GameplayTags.Attributes_Secondary_Armor = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.Armor"), FString("Reduces damage taken, improve Block Chance"));
	GameplayTags.Attributes_Secondary_ArmorPenetration = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.ArmorPenetration"), FString("Ignores percentage of enemy armor, increases Crit Hit Chance"));
	GameplayTags.Attributes_Secondary_BlockChance = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.BlockChance"), FString("Chance to cut incoming damage in half"));
	GameplayTags.Attributes_Secondary_CriticalHitChance = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitChance"), FString("Chance to double damage plus critical hit bonus"));
	GameplayTags.Attributes_Secondary_CriticalHitDamage = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitDamage"), FString("Bonus Damage added when a critical hit is scored"));
	GameplayTags.Attributes_Secondary_CriticalHitResistance = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.CriticalHitResistance"), FString("Reduces critical hit chance of attacking enemies"));
	GameplayTags.Attributes_Secondary_HealthRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.HealthRegeneration"), FString("Amount of Health regenerated every 1 second"));
	GameplayTags.Attributes_Secondary_ManaRegeneration = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Attributes.Secondary.ManaRegeneration"), FString("Amount of Mana regenerated every 1 second"));

	// Input Tags

	GameplayTags.InputTag_LMB = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.LMB"), FString("Input Tag for Left Mouse Button"));
	GameplayTags.InputTag_RMB = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.RMB"), FString("Input Tag for Right Mouse Button"));
	GameplayTags.InputTag_1 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.1"), FString("Input Tag for 1 Key"));
	GameplayTags.InputTag_2 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.2"), FString("Input Tag for 2 Key"));
	GameplayTags.InputTag_3 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.3"), FString("Input Tag for 3 Key"));
	GameplayTags.InputTag_4 = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("InputTag.4"), FString("Input Tag for 4 Key"));

	// Combat
	GameplayTags.Combat_HitReact = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Combat.HitReact"), FString("Reacting to Damage"));

	/*
	* Damage Types
	*/

	GameplayTags.Combat_Damage = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Combat.Damage"), FString("Damage"));

	GameplayTags.Combat_Damage_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Combat.Damage.Physical"), FString("Physical Damage Type"));
	GameplayTags.Combat_Damage_Fire = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Combat.Damage.Fire"), FString("Fire Damage Type"));
	GameplayTags.Combat_Damage_Lighting = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Combat.Damage.Lighting"), FString("Lighting Damage Type"));
	GameplayTags.Combat_Damage_Arcane = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Combat.Damage.Arcane"), FString("Arcane Damage Type"));

	/*
	* Damage Resistances
	*/

	GameplayTags.Combat_DamageResistance_Physical = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Combat.DamageResistance.Physical"), FString("Resistance to Physical Damage"));
	GameplayTags.Combat_DamageResistance_Fire = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Combat.DamageResistance.Fire"), FString("Resistance to Fire Damage"));
	GameplayTags.Combat_DamageResistance_Lighting = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Combat.DamageResistance.Lighting"), FString("Resistance to Lighting Damage"));
	GameplayTags.Combat_DamageResistance_Arcane = UGameplayTagsManager::Get().AddNativeGameplayTag(FName("Combat.DamageResistance.Arcane"), FString("Resistance to Arcane Damage"));

	/*
	* Map of Damage Types to Resistances
	*/

	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Combat_Damage_Physical, GameplayTags.Combat_DamageResistance_Physical);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Combat_Damage_Fire, GameplayTags.Combat_DamageResistance_Fire);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Combat_Damage_Lighting, GameplayTags.Combat_DamageResistance_Lighting);
	GameplayTags.DamageTypesToResistances.Add(GameplayTags.Combat_Damage_Arcane, GameplayTags.Combat_DamageResistance_Arcane);


}
