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
 * https://dev.epicgames.com/community/learning/tutorials/L9vK/unreal-engine-common-issues-with-behavior-trees-and-things-you-should-competely-avoid
 * 
 * The basic advice is don't do BTrees in C++. We won't be doing our BTrees in C++. But we will be organizing them,
 * supplementing them, and defining simple aspects of them here, especially around data-driven parts of the design. So why is this class here?
 * 
 * Because I need a place to record my thoughts on IF we are going to have a tree manager, and because I think that we'll want
 * access to some of the member functions some of the time.

 * Outcomes:
 * 
 * 1) This is a facade
 * This just exposes and owns helper functions, and just simplifies loading and paths. This is the likeliest outcome.
 *
 * 2) This is a shim
 * Maybe we don't want thistle to do more than select trees. This lets us hide some of the awful complexity of networked
 * AI if we need to. That said, the Lyra pawns just used straight Iris, so maybe I'm borrowing trouble and
 * Thistle will just be a place where we put actually totally normal behavior trees. In that case, this shim is short-lived
 *  
 * 3) blackboard manager, not behavior tree manager
 * It's likely that we'll be able to do almost everything we want by combining data-binding tools like DDG and config files
 * with dynamic management and composition of blackboards. In this model, we keep our tree manager around but it really just
 * associates trees with blackboards and really owns blackboards.
 * 
 * 4) I'm wrong, and I'm actually smart.
 * Kinda hoping this one doesn't come to pass. If we have to use Mass, we'll need a way to hide the fact that Mass controls our
 * units most of the time. Then this becomes a way to abstract swapping into and out of archetype-linked behavior trees for finegrained
 * ai near the players. I always want to minimize our dependency on Mass, cause I'm nervous about the state of it.
 */
UCLASS()
class THISTLERUNTIME_API UThistleTreeManager : public UBehaviorTreeManager
{
	GENERATED_BODY()
	
};
