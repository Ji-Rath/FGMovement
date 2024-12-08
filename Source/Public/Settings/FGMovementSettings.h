// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MovementMode.h"
#include "UObject/Object.h"
#include "FGMovementSettings.generated.h"

/**
 * 
 */
UCLASS()
class FGMOVEMENT_API UFGMovementSettings : public UObject, public IMovementSettingsInterface
{
public:
	virtual FString GetDisplayName() const override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement|Ground")
	float JumpForce = 600.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement|Air")
	float AirSpeed = 1200.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement|Ground")
	float GroundSpeed = 1200.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement|Ground")
	float GroundDamping = 6.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement|Air")
	float AirDamping = 5.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement|Ground")
	float SlipFactor = 750.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement|Ground")
	float GroundAcceleration = 8.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Movement|Air")
	float AirAcceleration = 2.f;

private:
	GENERATED_BODY()
};
