#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Kel_lmao_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Kel_lmao_Skeleton_AnimBlueprint_classes.hpp"
#include "Kel_lmao_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function kel_lmao_Skeleton_AnimBlueprint.kel_lmao_Skeleton_AnimBlueprint_C.ExecuteUbergraph_kel_lmao_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKel_lmao_Skeleton_AnimBlueprint_C::ExecuteUbergraph_kel_lmao_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("kel_lmao_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_kel_lmao_Skeleton_AnimBlueprint");

	Params::Kel_lmao_Skeleton_AnimBlueprint_C_ExecuteUbergraph_kel_lmao_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function kel_lmao_Skeleton_AnimBlueprint.kel_lmao_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UKel_lmao_Skeleton_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("kel_lmao_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::Kel_lmao_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

