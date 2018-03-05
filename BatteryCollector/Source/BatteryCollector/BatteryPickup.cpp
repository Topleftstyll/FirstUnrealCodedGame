// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"

// set default value
ABatteryPickup::ABatteryPickup() {

	GetMesh()->SetSimulatePhysics(true);

	// the base power level of the battery
	BatteryPower = 150.0f;
}

void ABatteryPickup::WasCollected_Implementation() {
	// use the base pickup behaviour
	Super::WasCollected_Implementation();

	// destroy the batter
	Destroy();
}

// reports the power level of the battery
float ABatteryPickup::GetPower() {
	return BatteryPower;
}
