// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ThistleBehavioralist.generated.h"

/**
 * This tickable system manages providing data to blackboards and assigning behavior or state trees.
 * Hopefully, not necessary! But maybe we find it very useful to think this way. Hard to say yet.
 * 
 * https://dev.epicgames.com/documentation/en-us/unreal-engine/API/Runtime/AIModule/BehaviorTree/Blackboard
 * 
 */
UCLASS()
class THISTLERUNTIME_API UThistleBehavioralist : public UTickableWorldSubsystem
{
	GENERATED_BODY()
	
};
