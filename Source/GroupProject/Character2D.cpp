// Fill out your copyright notice in the Description page of Project Settings.


#include "Character2D.h"

// Sets default values
ACharacter2D::ACharacter2D()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

   
}

// Called when the game starts or when spawned
void ACharacter2D::BeginPlay()
{
    Super::BeginPlay();

    check(GEngine != nullptr)

        // Display a debug message for five seconds. 
       // The -1 "Key" value (first argument) indicates that we will never need to update or refresh this message.
        GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("We are using Character2D."));

}

// Called every frame
void ACharacter2D::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacter2D::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Set up "movement" bindings.
    PlayerInputComponent->BindAxis("MoveRight", this, &ACharacter2D::MoveRight);

    // Set up "action" bindings.
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter2D::StartJump);
    PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter2D::StopJump);
}

void ACharacter2D::MoveRight(float Value)
{
    // Find out which way is "right" and record that the player wants to move that way.
    FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
    AddMovementInput(Direction, Value);
}

void ACharacter2D::StartJump()
{
    bPressedJump = true;
}

void ACharacter2D::StopJump()
{
    bPressedJump = false;
}