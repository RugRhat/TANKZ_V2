// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class TANKZ_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()

public:

	virtual void Tick(float DeltaSeconds) override;

	// bool IsDead() const;

private:

	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehavior;

protected:

	virtual void BeginPlay() override;
};
