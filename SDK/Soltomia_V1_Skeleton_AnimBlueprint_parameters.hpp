#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Soltomia_V1_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function soltomia_V1_Skeleton_AnimBlueprint.soltomia_V1_Skeleton_AnimBlueprint_C.ExecuteUbergraph_soltomia_V1_Skeleton_AnimBlueprint
// 0x0004 (0x0004 - 0x0000)
struct Soltomia_V1_Skeleton_AnimBlueprint_C_ExecuteUbergraph_soltomia_V1_Skeleton_AnimBlueprint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Soltomia_V1_Skeleton_AnimBlueprint_C_ExecuteUbergraph_soltomia_V1_Skeleton_AnimBlueprint) == 0x000004, "Wrong alignment on Soltomia_V1_Skeleton_AnimBlueprint_C_ExecuteUbergraph_soltomia_V1_Skeleton_AnimBlueprint");
static_assert(sizeof(Soltomia_V1_Skeleton_AnimBlueprint_C_ExecuteUbergraph_soltomia_V1_Skeleton_AnimBlueprint) == 0x000004, "Wrong size on Soltomia_V1_Skeleton_AnimBlueprint_C_ExecuteUbergraph_soltomia_V1_Skeleton_AnimBlueprint");
static_assert(offsetof(Soltomia_V1_Skeleton_AnimBlueprint_C_ExecuteUbergraph_soltomia_V1_Skeleton_AnimBlueprint, EntryPoint) == 0x000000, "Member 'Soltomia_V1_Skeleton_AnimBlueprint_C_ExecuteUbergraph_soltomia_V1_Skeleton_AnimBlueprint::EntryPoint' has a wrong offset!");

// Function soltomia_V1_Skeleton_AnimBlueprint.soltomia_V1_Skeleton_AnimBlueprint_C.AnimGraph
// 0x0020 (0x0020 - 0x0000)
struct Soltomia_V1_Skeleton_AnimBlueprint_C_AnimGraph final
{
public:
	struct FPoseLink                              InPose;                                            // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                              Param_AnimGraph;                                   // 0x0010(0x0010)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(Soltomia_V1_Skeleton_AnimBlueprint_C_AnimGraph) == 0x000008, "Wrong alignment on Soltomia_V1_Skeleton_AnimBlueprint_C_AnimGraph");
static_assert(sizeof(Soltomia_V1_Skeleton_AnimBlueprint_C_AnimGraph) == 0x000020, "Wrong size on Soltomia_V1_Skeleton_AnimBlueprint_C_AnimGraph");
static_assert(offsetof(Soltomia_V1_Skeleton_AnimBlueprint_C_AnimGraph, InPose) == 0x000000, "Member 'Soltomia_V1_Skeleton_AnimBlueprint_C_AnimGraph::InPose' has a wrong offset!");
static_assert(offsetof(Soltomia_V1_Skeleton_AnimBlueprint_C_AnimGraph, Param_AnimGraph) == 0x000010, "Member 'Soltomia_V1_Skeleton_AnimBlueprint_C_AnimGraph::Param_AnimGraph' has a wrong offset!");

}

