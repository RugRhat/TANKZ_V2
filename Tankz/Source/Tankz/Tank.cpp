// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"


ATank::ATank(){

    SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
    SpringArm->TargetArmLength = 500.f;
    SpringArm->SocketOffset = FVector(0.f, 0.f, 300.f);
    SpringArm->SetupAttachment(RootComponent);

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetRelativeRotation(FRotator(-20.f, 0.f, 0.f));
    Camera->SetupAttachment(SpringArm);
}


// Called when the game starts or when spawned
void ATank::BeginPlay(){
	
    Super::BeginPlay();
}


// Called every frame
void ATank::Tick(float DeltaTime){

	Super::Tick(DeltaTime);
}


// Called to bind functionality to input
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent){

	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("Move", this, &ATank::Move);
    PlayerInputComponent->BindAxis("Turn", this, &ATank::Turn);

    PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ATank::Fire);
}


void ATank::Move(float AxisValue) 
{
    AddMovementInput(GetActorForwardVector() * AxisValue);
}


void ATank::Turn(float AxisValue) 
{
    AddControllerYawInput(AxisValue * RotateSpeed * GetWorld()->GetDeltaSeconds());
}


bool ATank::GetPlayerAlive() 
{
    return bAlive;
}


void ATank::HandleDestruction() 
{
    Super::HandleDestruction();

    bAlive = false;

    SetActorHiddenInGame(true);
    SetActorTickEnabled(false);
}


