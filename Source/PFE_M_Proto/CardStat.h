// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CardStat.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct PFE_M_PROTO_API FCardStat
{

	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Description")
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cost")
	int32 Cost;


};
