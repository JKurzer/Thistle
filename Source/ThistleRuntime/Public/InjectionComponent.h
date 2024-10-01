// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SwarmKine.h"
#include "Components/ActorComponent.h"
#include "InjectionComponent.generated.h"

//Hopefully, the other heart of thistle.
// I'd like it if we get to use this instead of ThistleInject, as it'd let us get pretty finegrained about composition in our actors instead
//of being forced to let the pawn own at least aspects of the transform. That's really gross from a speed, blueprints, and compositional
//standpoint.

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class THISTLERUNTIME_API UInjectionComponent : public USwarmKineManager
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInjectionComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
