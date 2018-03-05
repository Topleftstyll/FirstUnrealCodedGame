// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class BATTERYCOLLECTOR_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

	// return the mesh for the pickup
	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return PickupMesh; }

	// return weather or not the pickup is active
	UFUNCTION(BlueprintPure, Category = "Pickup")
	bool IsActive();

	// allows other classes to safely change whether or not the pickup is active
	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void SetActive(bool PickupState);

	// function to call when the pickup is collected
	UFUNCTION(BlueprintNativeEvent)
	void WasCollected();
	// any child can override since its virtual 
	virtual void WasCollected_Implementation();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// true when the pickup can be used and false when the pickup is deactivated
	bool bIsActive;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	// Static mesh to represent the pick up in the level
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pickup", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* PickupMesh;
};
