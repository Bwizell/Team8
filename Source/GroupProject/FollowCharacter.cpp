// Fill out your copyright notice in the Description page of Project Settings.


#include "FollowCharacter.h"

// Sets default values
AFollowCharacter::AFollowCharacter()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
<<<<<<< HEAD
=======
	
>>>>>>> 18365fdf029dab8d989a3479838e56c8bab4b0af

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

