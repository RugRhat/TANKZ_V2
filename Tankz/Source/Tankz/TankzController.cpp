// Fill out your copyright notice in the Description page of Project Settings.


#include "TankzController.h"


void ATankzController::SetPlayerEnabledState(bool SetPlayerEnabled) 
{
    if(SetPlayerEnabled){
        GetPawn()->EnableInput(this);
        ATankzController::bShowMouseCursor = true;
    } else{
        GetPawn()->DisableInput(this);
        ATankzController::bShowMouseCursor = false;
    }
}
