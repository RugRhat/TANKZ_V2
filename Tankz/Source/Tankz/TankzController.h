// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankzController.generated.h"

/**
 * 
 */
UCLASS()
class TANKZ_API ATankzController : public APlayerController
{
	GENERATED_BODY()

public:

	void SetPlayerEnabledState(bool SetPlayerEnabled);

	void SetHUD();

	void RemoveHUD();

private:

	UPROPERTY(EditAnywhere)
	TSubclassOf<class UUserWidget> HUDClass;

	UUserWidget* HUD;
};
