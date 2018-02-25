// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"

UTankBarrel::UTankBarrel()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	// Move the barrel the right amount this frame
	// Given a max elevation speed, and the fram time
	UE_LOG(LogTemp, Warning, TEXT("Barrel->Elevate() called at speed %f"), DegreesPerSecond);
}