#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Rozship_anim_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Rozship_anim_Skeleton_AnimBlueprint_classes.hpp"
#include "Rozship_anim_Skeleton_AnimBlueprint_parameters.hpp"


namespace SDK
{

// Function rozship_anim_Skeleton_AnimBlueprint.rozship_anim_Skeleton_AnimBlueprint_C.ExecuteUbergraph_rozship_anim_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URozship_anim_Skeleton_AnimBlueprint_C::ExecuteUbergraph_rozship_anim_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("rozship_anim_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_rozship_anim_Skeleton_AnimBlueprint");

	Params::Rozship_anim_Skeleton_AnimBlueprint_C_ExecuteUbergraph_rozship_anim_Skeleton_AnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function rozship_anim_Skeleton_AnimBlueprint.rozship_anim_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void URozship_anim_Skeleton_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("rozship_anim_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::Rozship_anim_Skeleton_AnimBlueprint_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

