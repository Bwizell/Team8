// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Character2D.generated.h"

/**
 * 
 */
UCLASS()
class GROUPPROJECT_API ACharacter2D : public APaperCharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this paper character's properties
	ACharacter2D();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Handles input for moving right and left.
	UFUNCTION()
		void MoveRight(float Value);

	// Sets jump flag when key is pressed.
	UFUNCTION()
		void StartJump();

	// Clears jump flag when key is released.
	UFUNCTION()
		void StopJump();

};
	
