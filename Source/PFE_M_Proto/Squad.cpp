// Fill out your copyright notice in the Description page of Project Settings.


#include "Squad.h"

// Sets default values
ASquad::ASquad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASquad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASquad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int32 ASquad::GetValueAt(int32 x, int32 y)
{
	int32 Index = y * NumCols + x;
	if(FormationArray.IsValidIndex(Index))
	{
		return FormationArray[Index];
	}
	return -1;
}


int ASquad::SetValueAt(int32 x, int32 y, int32 value)
{
	int32 Index = y * NumCols + x;
	if(FormationArray.IsValidIndex(Index))
	{
		FormationArray[Index] = value;
		return value;
	}
	return -1;
}

