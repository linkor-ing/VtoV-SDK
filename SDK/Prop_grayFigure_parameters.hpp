#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_grayFigure

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_grayFigure.prop_grayFigure_C.ExecuteUbergraph_prop_grayFigure
// 0x00C8 (0x00C8 - 0x0000)
struct Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsAyy_Lmao_Figure_Rigged_Skeleton_Anim_Blueprint; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0040(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure) == 0x000008, "Wrong alignment on Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure");
static_assert(sizeof(Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure) == 0x0000C8, "Wrong size on Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure");
static_assert(offsetof(Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure, EntryPoint) == 0x000000, "Member 'Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure, CallFunc_GetAnimInstance_ReturnValue) == 0x000008, "Member 'Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure, K2Node_DynamicCast_AsAyy_Lmao_Figure_Rigged_Skeleton_Anim_Blueprint) == 0x000010, "Member 'Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure::K2Node_DynamicCast_AsAyy_Lmao_Figure_Rigged_Skeleton_Anim_Blueprint' has a wrong offset!");
static_assert(offsetof(Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure, CallFunc_WasRecentlyRendered_ReturnValue) == 0x000019, "Member 'Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure::CallFunc_WasRecentlyRendered_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00001C, "Member 'Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000028, "Member 'Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x00003C, "Member 'Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000040, "Member 'Prop_grayFigure_C_ExecuteUbergraph_prop_grayFigure::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

// Function prop_grayFigure.prop_grayFigure_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_grayFigure_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_grayFigure_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_grayFigure_C_ReceiveTick");
static_assert(sizeof(Prop_grayFigure_C_ReceiveTick) == 0x000004, "Wrong size on Prop_grayFigure_C_ReceiveTick");
static_assert(offsetof(Prop_grayFigure_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_grayFigure_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

