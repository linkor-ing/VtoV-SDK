#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint18

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function NewBlueprint18.NewBlueprint18_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct NewBlueprint18_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewBlueprint18_C_ReceiveTick) == 0x000004, "Wrong alignment on NewBlueprint18_C_ReceiveTick");
static_assert(sizeof(NewBlueprint18_C_ReceiveTick) == 0x000004, "Wrong size on NewBlueprint18_C_ReceiveTick");
static_assert(offsetof(NewBlueprint18_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'NewBlueprint18_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function NewBlueprint18.NewBlueprint18_C.ExecuteUbergraph_NewBlueprint18
// 0x0110 (0x0110 - 0x0000)
struct NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UblackScreen_C*                         CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetGamePaused_ReturnValue;                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D[0x3];                                       // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SetVectorLength_ReturnValue;              // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddActorWorldOffset_SweepHitResult;    // 0x007C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UblackScreen_C*                         CallFunc_Create_ReturnValue_1;                     // 0x0108(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18) == 0x000008, "Wrong alignment on NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18");
static_assert(sizeof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18) == 0x000110, "Wrong size on NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, EntryPoint) == 0x000000, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::EntryPoint' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000004, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_Create_ReturnValue) == 0x000010, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_SetGamePaused_ReturnValue) == 0x000018, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_SetGamePaused_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, K2Node_Event_DeltaSeconds) == 0x00001C, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_GetPlayerPawn_ReturnValue) == 0x000020, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000028, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x00002C, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000038, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x00003C, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000040, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_GetPlayerPawn_ReturnValue_1) == 0x000050, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_GetPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000058, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000064, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_SetVectorLength_ReturnValue) == 0x000070, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_SetVectorLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_K2_AddActorWorldOffset_SweepHitResult) == 0x00007C, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_K2_AddActorWorldOffset_SweepHitResult' has a wrong offset!");
static_assert(offsetof(NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18, CallFunc_Create_ReturnValue_1) == 0x000108, "Member 'NewBlueprint18_C_ExecuteUbergraph_NewBlueprint18::CallFunc_Create_ReturnValue_1' has a wrong offset!");

}

