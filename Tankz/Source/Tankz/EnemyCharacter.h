// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCharacter.h"
#include "EnemyCharacter.generated.h"

class ATank;

UCLASS()
class TANKZ_API AEnemyCharacter : public ABaseCharacter
{
	GENERATED_BODY()

public:

	bool GetPlayerAlive();

	virtual void Fire() override;

private:

	bool bAlive = true;

	ATank* PlayerTank;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	virtual void HandleDestruction() override;

};
