// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "TankzGameModeBase.h"


// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	Health = MaxHealth;

	UE_LOG(LogTemp, Warning, TEXT("Health: %f"), Health);
	UE_LOG(LogTemp, Warning, TEXT("Max Health: %f"), MaxHealth);

	GameModeRef = Cast<ATankzGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));

	Owner = GetOwner();
	if(Owner){
		Owner->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::TakeDamage);
	} else{
		UE_LOG(LogTemp, Warning, TEXT("Health component has no reference to owner"));
	}

	
}


void UHealthComponent::RegenHealth() 
{
	if(Health <= (MaxHealth - 5)){
		Health += 5;
	}
}


void UHealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InistigatedBy, AActor* DamageCauser)
{
	if(Damage == 0 || Health == 0){return;}

	Health = FMath::Clamp(Health - Damage, 0.f, MaxHealth);
		
	if(Health <= 0){
		if(GameModeRef){
			GameModeRef->ActorDied(Owner);
		} else{
			UE_LOG(LogTemp, Warning, TEXT("Health component has no reference to GameMode"));
		}
	}
}


float UHealthComponent::GetHealth() const
{
	float Percent = Health/MaxHealth;

	return Percent;
}
