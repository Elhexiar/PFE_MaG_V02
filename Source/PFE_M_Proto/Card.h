// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Card.generated.h"

/**
 * 
 */

UCLASS(Blueprintable)
class PFE_M_PROTO_API UCard : public UObject
{

	GENERATED_BODY()
	
public:
	UCard();
	virtual ~UCard() override;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 Cost;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	AActor* InHandActor;

	
	
};
