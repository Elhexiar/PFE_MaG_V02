// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPSelectableUnit.h"

#include "Components/CapsuleComponent.h"

// Sets default values
ACPPSelectableUnit::ACPPSelectableUnit()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
}

// Called when the game starts or when spawned
void ACPPSelectableUnit::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPPSelectableUnit::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACPPSelectableUnit::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	
}
