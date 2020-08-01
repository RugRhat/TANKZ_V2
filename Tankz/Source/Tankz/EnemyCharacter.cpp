// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"


void AEnemyCharacter::BeginPlay() 
{
    Super::BeginPlay();
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
}


