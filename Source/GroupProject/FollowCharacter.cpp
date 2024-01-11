// Fill out your copyright notice in the Description page of Project Settings.


#include "FollowCharacter.h"

// Sets default values
AFollowCharacter::AFollowCharacter()
{

	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFollowCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFollowCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

