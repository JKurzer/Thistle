// Fill out your copyright notice in the Description page of Project Settings.


#include "ThistleAIController.h"


// Sets default values
AThistleAIController::AThistleAIController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AThistleAIController::BeginPlay()
{
	Super::BeginPlay();
	SetPathFollowingComponent(nullptr);	
}

// Called every frame
void AThistleAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

