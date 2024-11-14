// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UnitStat.h"
#include "GameFramework/Character.h"
#include "CPPSelectableUnit.generated.h"

UCLASS(Blueprintable)
class PFE_M_PROTO_API ACPPSelectableUnit : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACPPSelectableUnit();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FUnitStat UnitStat;

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	UCapsuleComponent* Capsule;

};
