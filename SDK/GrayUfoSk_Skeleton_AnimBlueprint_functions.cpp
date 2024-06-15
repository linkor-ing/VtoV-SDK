#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GrayUfoSk_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "GrayUfoSk_Skeleton_AnimBlueprint_classes.hpp"
#include "GrayUfoSk_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function grayUfoSk_Skeleton_AnimBlueprint.grayUfoSk_Skeleton_AnimBlueprint_C.ExecuteUbergraph_grayUfoSk_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrayUfoSk_Skeleton_AnimBlueprint_C::ExecuteUbergraph_grayUfoSk_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("grayUfoSk_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_grayUfoSk_Skeleton_AnimBlueprint");

	Params::GrayUfoSk_Skeleton_AnimBlueprint_C_ExecuteUbergraph_grayUfoSk_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function grayUfoSk_Skeleton_AnimBlueprint.grayUfoSk_Skeleton_AnimBlueprint_C.BlueprintBeginPlay
// (Event, Public, BlueprintEvent)

void UGrayUfoSk_Skeleton_AnimBlueprint_C::BlueprintBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("grayUfoSk_Skeleton_AnimBlueprint_C", "BlueprintBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function grayUfoSk_Skeleton_AnimBlueprint.grayUfoSk_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGrayUfoSk_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("grayUfoSk_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::GrayUfoSk_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function grayUfoSk_Skeleton_AnimBlueprint.grayUfoSk_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_grayUfoSk_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_9FAF96ED4B1A78A3301FBB82C67D8A93
// (BlueprintEvent)

void UGrayUfoSk_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_grayUfoSk_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_9FAF96ED4B1A78A3301FBB82C67D8A93()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("grayUfoSk_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_grayUfoSk_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_9FAF96ED4B1A78A3301FBB82C67D8A93");

	UObject::ProcessEvent(Func, nullptr);
}


// Function grayUfoSk_Skeleton_AnimBlueprint.grayUfoSk_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UGrayUfoSk_Skeleton_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("grayUfoSk_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::GrayUfoSk_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

