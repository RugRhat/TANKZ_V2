// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Tank.h"


void AEnemyCharacter::BeginPlay() 
{
    Super::BeginPlay();

    PlayerTank = Cast<ATank>(UGameplayStatics::GetPlayerPawn(this, 0));
}

void AEnemyCharacter::Fire() 
{
    if(GetPlayerAlive() && PlayerTank->GetPlayerAlive()){
        Super::Fire();
    }
}


bool AEnemyCharacter::GetPlayerAlive() 
{
    return bAlive;
}


void AEnemyCharacter::HandleDestruction() 
{
    Super::HandleDestruction();

    bAlive = false;

    SetActorHiddenInGame(true);
    SetActorTickEnabled(false);

    Destroy();
}


