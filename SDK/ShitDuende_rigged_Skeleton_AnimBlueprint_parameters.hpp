#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShitDuende_rigged_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function shitDuende_rigged_Skeleton_AnimBlueprint.shitDuende_rigged_Skeleton_AnimBlueprint_C.ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint
// 0x0020 (0x0020 - 0x0000)
struct ShitDuende_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTimeX;                           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShitDuende_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint) == 0x000008, "Wrong alignment on ShitDuende_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint");
static_assert(sizeof(ShitDuende_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint) == 0x000020, "Wrong size on ShitDuende_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint");
static_assert(offsetof(ShitDuende_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint, EntryPoint) == 0x000000, "Member 'ShitDuende_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShitDuende_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000008, "Member 'ShitDuende_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShitDuende_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'ShitDuende_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShitDuende_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint, K2Node_Event_DeltaTimeX) == 0x00001C, "Member 'ShitDuende_rigged_Skeleton_AnimBlueprint_C_ExecuteUbergraph_shitDuende_rigged_Skeleton_AnimBlueprint::K2Node_Event_DeltaTimeX' has a wrong offset!");

// Function shitDuende_rigged_Skeleton_AnimBlueprint.shitDuende_rigged_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// 0x0004 (0x0004 - 0x0000)
struct ShitDuende_rigged_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation final
{
public:
	float                                         DeltaTimeX;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ShitDuende_rigged_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation) == 0x000004, "Wrong alignment on ShitDuende_rigged_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation");
static_assert(sizeof(ShitDuende_rigged_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation) == 0x000004, "Wrong size on ShitDuende_rigged_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation");
static_assert(offsetof(ShitDuende_rigged_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation, DeltaTimeX) == 0x000000, "Member 'ShitDuende_rigged_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation::DeltaTimeX' has a wrong offset!");

// Function shitDuende_rigged_Skeleton_AnimBlueprint.shitDuende_rigged_Skeleton_AnimBlueprint_C.AnimGraph
// 0x0010 (0x0010 - 0x0000)
struct ShitDuende_rigged_Skeleton_AnimBlueprint_C_AnimGraph final
{
public:
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0000(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(ShitDuende_rigged_Skeleton_AnimBlueprint_C_AnimGraph) == 0x000008, "Wrong alignment on ShitDuende_rigged_Skeleton_AnimBlueprint_C_AnimGraph");
static_assert(sizeof(ShitDuende_rigged_Skeleton_AnimBlueprint_C_AnimGraph) == 0x000010, "Wrong size on ShitDuende_rigged_Skeleton_AnimBlueprint_C_AnimGraph");
static_assert(offsetof(ShitDuende_rigged_Skeleton_AnimBlueprint_C_AnimGraph, Param_AnimGraph) == 0x000000, "Member 'ShitDuende_rigged_Skeleton_AnimBlueprint_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

