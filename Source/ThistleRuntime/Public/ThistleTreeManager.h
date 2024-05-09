// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeManager.h"
#include "ThistleTreeManager.generated.h"

/**
 * https://dev.epicgames.com/documentation/en-us/unreal-engine/API/Runtime/AIModule/BehaviorTree/UBehaviorTreeManager
 * Actually rather unpleasant to find the docs for this. Behavior trees are really probably best used through blueprint,
 * but I hope to segregate out some aspects for easier source control, and that means experimenting with the manager to
 * understand the data lifecycle.
 * 
 * Of particular interest:
 * https://dev.epicgames.com/documentation/en-us/unreal-engine/API/Runtime/AIModule/BehaviorTree/Services
 * 
 * It's likely that we don't want thistle to manage trees at all, but instead serve as a service that allows
 * us to abstract the idea of squad dispatch more prettily and to hide some of the awful complexity of networked
 * AI if we need to. That said, the Lyra pawns just used straight Iris, so maybe I'm borrowing trouble and
 * Thistle will just be a place where we put actually normal behavior trees. 
 *
 * If either happens, this will probably merge with the ThistleDispatch, and may end up encapsulated even if not merged.
 */
UCLASS()
class THISTLERUNTIME_API UThistleTreeManager : public UBehaviorTreeManager
{
	GENERATED_BODY()
	
};
