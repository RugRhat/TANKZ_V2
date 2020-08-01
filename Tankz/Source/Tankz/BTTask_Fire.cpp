// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_Fire.h"
#include "AIController.h"
#include "EnemyCharacter.h"


UBTTask_Fire::UBTTask_Fire() 
{
    NodeName = TEXT("Shoot");
}

EBTNodeResult::Type UBTTask_Fire::ExecuteTask(UBehaviorTreeComponent &OwnerComp, uint8 *NodeMemory) 
{
    Super::ExecuteTask(OwnerComp, NodeMemory);

    if(OwnerComp.GetAIOwner() == nullptr){return EBTNodeResult::Failed;}
    
    AEnemyCharacter* Self = Cast<AEnemyCharacter>(OwnerComp.GetAIOwner()->GetPawn());
    if(Self == nullptr){return EBTNodeResult::Failed;}

    Self->Fire();

    return EBTNodeResult::Succeeded;
}
