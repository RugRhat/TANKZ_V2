// Copyright Epic Games, Inc. All Rights Reserved.


#include "TankzGameModeBase.h"
#include "EnemyCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"
#include "TankzController.h"

void ATankzGameModeBase::BeginPlay()
{
    Enemies = GetEnemyCount();
    PlayerTank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
    PlayerControllerRef = Cast<ATankzController>(UGameplayStatics::GetPlayerController(this, 0));

    HandleGameStart();
    
    Super::BeginPlay();
}


int32 ATankzGameModeBase::GetEnemyCount()
{
    TSubclassOf<AEnemyCharacter> ClassToFind;
    ClassToFind = AEnemyCharacter::StaticClass(); 
    TArray<AActor*> EnemyActors;
    UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassToFind, EnemyActors);

    return EnemyActors.Num();
}


void ATankzGameModeBase::HandleGameStart()
{
    GameStart();

    if(PlayerControllerRef){
        PlayerControllerRef->SetPlayerEnabledState(false);

        FTimerHandle PlayerEnableHandle;
        FTimerDelegate PlayerEnableDelegate = FTimerDelegate::CreateUObject(PlayerControllerRef, &ATankzController::SetPlayerEnabledState, true);

        GetWorldTimerManager().SetTimer(PlayerEnableHandle, PlayerEnableDelegate, StartDelay, false);
    
        PlayerControllerRef->SetHUD();
    }
}


void ATankzGameModeBase::HandleGameOver(bool PlayerWon)
{
    if(PlayerControllerRef){
        PlayerControllerRef->RemoveHUD();
    }
    
    GameOver(PlayerWon);
}


void ATankzGameModeBase::ActorDied(AActor* DeadActor)
{
    if(DeadActor == PlayerTank){
        PlayerTank->CharDestroyed();
        HandleGameOver(false);

        if(PlayerControllerRef){
            PlayerControllerRef->SetPlayerEnabledState(false);
        }
    } else if(AEnemyCharacter* DestroyedEnemy = Cast<AEnemyCharacter>(DeadActor)){
        DestroyedEnemy->CharDestroyed();
        
        Enemies --;

        if(Enemies == 0){
            HandleGameOver(true); // TODO: Implement Next Wave
        }
    }
}
