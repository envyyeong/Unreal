// Fill out your copyright notice in the Description page of Project Settings.


#include "EDULevelmode.h"

AEDULevelmode::AEDULevelmode()
{

}

void AEDULevelmode::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Log, TEXT("Text"));
	UE_LOG(LogTemp, Warning, TEXT("Text"));
	UE_LOG(LogTemp, Error, TEXT("Text"));
	// UE_LOG(LogTemp, Fatal, TEXT("Text"));
}