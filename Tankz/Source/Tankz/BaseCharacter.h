// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class AProjectile;
class UHealthComponent;

UCLASS()
class TANKZ_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	// Sets default values for this character's properties
	ABaseCharacter();

	UFUNCTION(BlueprintPure)
	float GetHealth() const;

	virtual void Fire();

	void RegenHealth();
	
	void CharDestroyed();

private:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	USceneComponent* ProjectileSpawnPoint;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components", meta = (AllowPrivateAccess = "true"))
	UHealthComponent* HealthComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Projectile Type", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<AProjectile> ProjectileClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Effects", meta = (AllowPrivateAccess = "true"))
	UParticleSystem* DeathParticle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Effects", meta = (AllowPrivateAccess = "true"))
	USoundBase* DeathSound;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Effects", meta = (AllowPrivateAccess = "true"))
	TSubclassOf<UCameraShake> DeathShake;


protected:

	virtual void HandleDestruction();
};
