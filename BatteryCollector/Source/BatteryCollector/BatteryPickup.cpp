// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"

// set default value
ABatteryPickup::ABatteryPickup() {

	GetMesh()->SetSimulatePhysics(true);
}

void ABatteryPickup::WasCollected_Implementation() {
	// use the base pickup behaviour
	Super::WasCollected_Implementation();

	// destroy the batter
	Destroy();
}
