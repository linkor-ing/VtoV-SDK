#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABplushSpawner

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ABplushSpawner.ABplushSpawner_C.ExecuteUbergraph_ABplushSpawner
// 0x0070 (0x0070 - 0x0000)
struct ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x001F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_abplush_C*                        CallFunc_FinishSpawningActor_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner) == 0x000010, "Wrong alignment on ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner");
static_assert(sizeof(ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner) == 0x000070, "Wrong size on ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner");
static_assert(offsetof(ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner, EntryPoint) == 0x000000, "Member 'ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner::EntryPoint' has a wrong offset!");
static_assert(offsetof(ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000008, "Member 'ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000010, "Member 'ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner, CallFunc_GetDistanceTo_ReturnValue) == 0x000018, "Member 'ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00001C, "Member 'ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x00001D, "Member 'ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner, CallFunc_BooleanAND_ReturnValue) == 0x00001E, "Member 'ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner, CallFunc_Less_FloatFloat_ReturnValue) == 0x00001F, "Member 'ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner, CallFunc_BooleanAND_ReturnValue_1) == 0x000050, "Member 'ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000058, "Member 'ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner, CallFunc_FinishSpawningActor_ReturnValue) == 0x000060, "Member 'ABplushSpawner_C_ExecuteUbergraph_ABplushSpawner::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

