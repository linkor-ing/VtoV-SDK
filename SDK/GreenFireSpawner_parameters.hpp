#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GreenFireSpawner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function greenFireSpawner.greenFireSpawner_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct GreenFireSpawner_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GreenFireSpawner_C_ReceiveTick) == 0x000004, "Wrong alignment on GreenFireSpawner_C_ReceiveTick");
static_assert(sizeof(GreenFireSpawner_C_ReceiveTick) == 0x000004, "Wrong size on GreenFireSpawner_C_ReceiveTick");
static_assert(offsetof(GreenFireSpawner_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'GreenFireSpawner_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function greenFireSpawner.greenFireSpawner_C.ExecuteUbergraph_greenFireSpawner
// 0x00C0 (0x00C0 - 0x0000)
struct GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue;          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGreenfire_C*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x006B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue_1;               // 0x0070(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGreenfire_C*                           CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner) == 0x000010, "Wrong alignment on GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner");
static_assert(sizeof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner) == 0x0000C0, "Wrong size on GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, EntryPoint) == 0x000000, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::EntryPoint' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_WasRecentlyRendered_ReturnValue) == 0x000008, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_WasRecentlyRendered_ReturnValue' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000010, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000058, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_FinishSpawningActor_ReturnValue) == 0x000060, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000068, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_IsValid_ReturnValue_1) == 0x000069, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00006A, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_BooleanAND_ReturnValue) == 0x00006B, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_IsValid_ReturnValue_2) == 0x00006C, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_GetTransform_ReturnValue_1) == 0x000070, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_GetTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0000A0, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0000A8, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner, CallFunc_IsValid_ReturnValue_3) == 0x0000B0, "Member 'GreenFireSpawner_C_ExecuteUbergraph_greenFireSpawner::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

}

