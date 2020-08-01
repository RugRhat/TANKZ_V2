// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
//#include "BaseCharacter.h"


void AEnemyAIController::BeginPlay() 
{
    Super::BeginPlay();
    
    if(AIBehavior != nullptr){
        RunBehaviorTree(AIBehavior);
    }
}


void AEnemyAIController::Tick(float DeltaSeconds) 
{
    Super::Tick(DeltaSeconds);

    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    GetBlackboardComponent()->SetValueAsObject(TEXT("Player"), PlayerPawn);
}


// bool AEnemyAIController::IsDead() const
// {
//     AShooter* ControlledCharacter = Cast<AShooter>(GetPawn());
    
//     if(ControlledCharacter != nullptr){
//         return ControlledCharacter->IsDead();
//     }

//     return true;
// }
