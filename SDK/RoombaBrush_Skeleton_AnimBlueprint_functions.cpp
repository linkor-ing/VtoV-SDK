#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RoombaBrush_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "RoombaBrush_Skeleton_AnimBlueprint_classes.hpp"
#include "RoombaBrush_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function roombaBrush_Skeleton_AnimBlueprint.roombaBrush_Skeleton_AnimBlueprint_C.ExecuteUbergraph_roombaBrush_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URoombaBrush_Skeleton_AnimBlueprint_C::ExecuteUbergraph_roombaBrush_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("roombaBrush_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_roombaBrush_Skeleton_AnimBlueprint");

	Params::RoombaBrush_Skeleton_AnimBlueprint_C_ExecuteUbergraph_roombaBrush_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function roombaBrush_Skeleton_AnimBlueprint.roombaBrush_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_roombaBrush_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_3ADEDAE14A67F2DB65842185FF7442A5
// (BlueprintEvent)

void URoombaBrush_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_roombaBrush_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_3ADEDAE14A67F2DB65842185FF7442A5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("roombaBrush_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_roombaBrush_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_3ADEDAE14A67F2DB65842185FF7442A5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function roombaBrush_Skeleton_AnimBlueprint.roombaBrush_Skeleton_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_roombaBrush_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_D0EAB5F44A6DDD768D7C5BB863CD43D5
// (BlueprintEvent)

void URoombaBrush_Skeleton_AnimBlueprint_C::EvaluateGraphExposedInputs_ExecuteUbergraph_roombaBrush_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_D0EAB5F44A6DDD768D7C5BB863CD43D5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("roombaBrush_Skeleton_AnimBlueprint_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_roombaBrush_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_D0EAB5F44A6DDD768D7C5BB863CD43D5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function roombaBrush_Skeleton_AnimBlueprint.roombaBrush_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void URoombaBrush_Skeleton_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("roombaBrush_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::RoombaBrush_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

