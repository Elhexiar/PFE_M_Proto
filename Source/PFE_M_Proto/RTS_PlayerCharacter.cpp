// Fill out your copyright notice in the Description page of Project Settings.


#include "RTS_PlayerCharacter.h"

// Sets default values
ARTS_PlayerCharacter::ARTS_PlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARTS_PlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARTS_PlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARTS_PlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

