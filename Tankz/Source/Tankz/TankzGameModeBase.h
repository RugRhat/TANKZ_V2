// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TankzGameModeBase.generated.h"

class AEnemyCharacter;
class ATank;
class ATankzController;

UCLASS()
class TANKZ_API ATankzGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintImplementableEvent)
	void GameStart();

	UFUNCTION(BlueprintImplementableEvent)
	void GameOver(bool PlayerWon);

	void ActorDied(AActor* DeadActor);
	

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player", meta = (AllowPrivateAccess = "true"))
	ATank* PlayerTank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Loop", meta = (AllowPrivateAccess = "true"))
	int StartDelay = 4;

	void HandleGameStart();
	void HandleGameOver(bool PlayerWon);

	int32 GetEnemyCount();

	ATankzController* PlayerControllerRef;

	int32 Enemies = 0;

protected:

	virtual void BeginPlay() override;
};
