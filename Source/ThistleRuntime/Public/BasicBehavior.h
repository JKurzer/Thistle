// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BasicBehavior.generated.h"

/**
 * https://dev.epicgames.com/documentation/en-us/unreal-engine/API/Runtime/AIModule/BehaviorTree/UBehaviorTree
 * Right now, we're looking at UBehaviorTree, but it's VERY striking that there appears to be a near identical FBehaviorTreeInstance
 * This class looks to be the underlying executor of any given specific BT subtree, meaning that under the hood, this isn't exactly blueprint
 * which was likely necessary for performance reasons or historical reasons. 
 * A lot of blueprint is actually implemented this way, as thin shims over C++ systems,  and it's one reason why blueprint's actually
 * quite performant for some tasks but not others. 
 *	
 *	It does look like you can programmatically load blueprints IF you have an instance.
 *	Here's an example of a binding from the AI Functional Tests :
 *		FunctionalTesting\Classes\FunctionalAITest.h
 *		if set will be applied to spawned AI 
 *		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = AISpawn)
 *		TObjectPtr<class UBehaviorTree> BehaviorTree;
 * 
 * And here's the model for building one programmatically, from another test:
 *		\Engine\Source\Developer\AITestSuite\Public\BTBuilder.h
 * 
 * I'm wondering if maybe there's a really pretty little domain specific language here. Actually, since we only use it for storing
 * we could just use it to print the tree in a sane format, then generate the uassets. that would get us a working mergeable format.
 * 
 * Alternatively, we can just use a small number of composable trees.
 * 
 * Our goal here is to try to capture our behavior trees in ways that can actually be source controlled and used programmatically.
 * We might well have to scotch it, but it'd allow us a really nice separation.
 * 
 * For reference:
 * https://dev.epicgames.com/documentation/en-us/unreal-engine/API/Runtime/AIModule/BehaviorTree/Decorators
 * https://dev.epicgames.com/documentation/en-us/unreal-engine/API/Runtime/AIModule/BehaviorTree/FBehaviorTreeInstance
 *
 * 
 * 
 */
UCLASS()
class THISTLERUNTIME_API UBasicBehavior : public UBehaviorTree
{
	GENERATED_BODY()
	
};
