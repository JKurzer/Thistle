// Fill out your copyright notice in the Description page of Project Settings.


#include "ThistleInject.h"

// Sets default values
AThistleInject::AThistleInject()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AThistleInject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AThistleInject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AThistleInject::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

