// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"
#include "HealthComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Projectile.h"


// Sets default values
ABaseCharacter::ABaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ProjectileSpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Projectile Spawn Point"));
	ProjectileSpawnPoint->SetupAttachment(RootComponent);

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health Component"));
}


void ABaseCharacter::Fire() 
{
	if(ProjectileClass){
		FVector SpawnLocation = ProjectileSpawnPoint->GetComponentLocation();
		FRotator SpawnRotation = ProjectileSpawnPoint->GetComponentRotation();

		AProjectile* TempProjectile = GetWorld()->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
		TempProjectile->SetOwner(this);
	}
}


float ABaseCharacter::GetHealth() const
{
	return HealthComponent->GetHealth();
}


void ABaseCharacter::RegenHealth() 
{
	HealthComponent->RegenHealth();
}


void ABaseCharacter::CharDestroyed() 
{
	HandleDestruction();
}


void ABaseCharacter::HandleDestruction() 
{
	if(DeathParticle){
		UGameplayStatics::SpawnEmitterAtLocation(this, DeathParticle, GetActorLocation(), FRotator::ZeroRotator);
	}

	if(DeathSound){
		UGameplayStatics::PlaySoundAtLocation(this, DeathSound, GetActorLocation());
	}

	if(DeathShake){
		GetWorld()->GetFirstPlayerController()->PlayerCameraManager->PlayCameraShake(DeathShake, 1);
	}
}



