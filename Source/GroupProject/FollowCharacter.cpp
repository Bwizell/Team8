// Fill out your copyright notice in the Description page of Project Settings.


#include "FollowCharacter.h"

// Sets default values
AFollowCharacter::AFollowCharacter()
{
<<<<<<< HEAD

	PrimaryActorTick.bCanEverTick = true;

}
=======
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

>>>>>>> 7e5d3856fb6a0ec672e058c788a16378e5522142
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

