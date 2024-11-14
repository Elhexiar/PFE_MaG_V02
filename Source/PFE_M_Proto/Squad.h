// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Squad.generated.h"

UCLASS(Blueprintable)
class PFE_M_PROTO_API ASquad : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASquad();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FormationArray")
	TArray<int32> FormationArray;
	int32 NumCols = 64;

	UFUNCTION(BlueprintCallable, Category = "FormationArray")
	int32 GetValueAt(int32 x, int32 y);

	UFUNCTION(BlueprintCallable, Category = "FormationArray")
	int SetValueAt(int32 x, int32 y, int32 value);
};
