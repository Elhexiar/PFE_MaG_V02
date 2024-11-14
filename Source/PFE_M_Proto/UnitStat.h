// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UnitStat.generated.h"
/**
 * 
 */

USTRUCT(Blueprintable)
struct FUnitStat
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats", meta = (displayName = "Max HP"))
	float MaxHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats", meta = (displayName = "Speed"))
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats", meta = (displayName = "Attack Damage"))
	float AttackDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats", meta = (displayName = "Armor"))
	float Armor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats", meta = (displayName = "AttackSpeed"))
	float AttackSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats", meta = (displayName = "AttackRange"))
	float AttackRange;

	FUnitStat() :
		MaxHP(100.0f),
		Speed(500.0f),
		AttackDamage(5.0f),
		Armor(0.0f),
		AttackSpeed(1.0f),
		AttackRange(200.0f)
	{
	}
	
};
