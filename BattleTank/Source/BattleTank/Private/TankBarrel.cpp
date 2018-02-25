// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"

UTankBarrel::UTankBarrel()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UTankBarrel::Elevate(float RelativeSpeed)
{
	// Move the barrel the right amount this frame
	// Given a max elevation speed, and the fram time
}