#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AlarmLamp

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function alarmLamp.alarmLamp_C.ExecuteUbergraph_alarmLamp
// 0x013C (0x013C - 0x0000)
struct AlarmLamp_C_ExecuteUbergraph_alarmLamp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddRelativeRotation_SweepHitResult;    // 0x0020(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x00A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x00B4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(AlarmLamp_C_ExecuteUbergraph_alarmLamp) == 0x000004, "Wrong alignment on AlarmLamp_C_ExecuteUbergraph_alarmLamp");
static_assert(sizeof(AlarmLamp_C_ExecuteUbergraph_alarmLamp) == 0x00013C, "Wrong size on AlarmLamp_C_ExecuteUbergraph_alarmLamp");
static_assert(offsetof(AlarmLamp_C_ExecuteUbergraph_alarmLamp, EntryPoint) == 0x000000, "Member 'AlarmLamp_C_ExecuteUbergraph_alarmLamp::EntryPoint' has a wrong offset!");
static_assert(offsetof(AlarmLamp_C_ExecuteUbergraph_alarmLamp, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'AlarmLamp_C_ExecuteUbergraph_alarmLamp::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(AlarmLamp_C_ExecuteUbergraph_alarmLamp, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000008, "Member 'AlarmLamp_C_ExecuteUbergraph_alarmLamp::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlarmLamp_C_ExecuteUbergraph_alarmLamp, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00000C, "Member 'AlarmLamp_C_ExecuteUbergraph_alarmLamp::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlarmLamp_C_ExecuteUbergraph_alarmLamp, CallFunc_MakeRotator_ReturnValue) == 0x000010, "Member 'AlarmLamp_C_ExecuteUbergraph_alarmLamp::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlarmLamp_C_ExecuteUbergraph_alarmLamp, CallFunc_RandomFloatInRange_ReturnValue) == 0x00001C, "Member 'AlarmLamp_C_ExecuteUbergraph_alarmLamp::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(AlarmLamp_C_ExecuteUbergraph_alarmLamp, CallFunc_K2_AddRelativeRotation_SweepHitResult) == 0x000020, "Member 'AlarmLamp_C_ExecuteUbergraph_alarmLamp::CallFunc_K2_AddRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(AlarmLamp_C_ExecuteUbergraph_alarmLamp, CallFunc_MakeRotator_ReturnValue_1) == 0x0000A8, "Member 'AlarmLamp_C_ExecuteUbergraph_alarmLamp::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AlarmLamp_C_ExecuteUbergraph_alarmLamp, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x0000B4, "Member 'AlarmLamp_C_ExecuteUbergraph_alarmLamp::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");

// Function alarmLamp.alarmLamp_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct AlarmLamp_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlarmLamp_C_ReceiveTick) == 0x000004, "Wrong alignment on AlarmLamp_C_ReceiveTick");
static_assert(sizeof(AlarmLamp_C_ReceiveTick) == 0x000004, "Wrong size on AlarmLamp_C_ReceiveTick");
static_assert(offsetof(AlarmLamp_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'AlarmLamp_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function alarmLamp.alarmLamp_C.SetActive
// 0x0020 (0x0020 - 0x0000)
struct AlarmLamp_C_SetActive final
{
public:
	bool                                          Visibility;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AlarmLamp_C_SetActive) == 0x000008, "Wrong alignment on AlarmLamp_C_SetActive");
static_assert(sizeof(AlarmLamp_C_SetActive) == 0x000020, "Wrong size on AlarmLamp_C_SetActive");
static_assert(offsetof(AlarmLamp_C_SetActive, Visibility) == 0x000000, "Member 'AlarmLamp_C_SetActive::Visibility' has a wrong offset!");
static_assert(offsetof(AlarmLamp_C_SetActive, Temp_bool_Variable) == 0x000001, "Member 'AlarmLamp_C_SetActive::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(AlarmLamp_C_SetActive, Temp_object_Variable) == 0x000008, "Member 'AlarmLamp_C_SetActive::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(AlarmLamp_C_SetActive, Temp_object_Variable_1) == 0x000010, "Member 'AlarmLamp_C_SetActive::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(AlarmLamp_C_SetActive, K2Node_Select_Default) == 0x000018, "Member 'AlarmLamp_C_SetActive::K2Node_Select_Default' has a wrong offset!");

// Function alarmLamp.alarmLamp_C.gatherDataFromKey
// 0x0001 (0x0001 - 0x0000)
struct AlarmLamp_C_GatherDataFromKey final
{
public:
	bool                                          Gather;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AlarmLamp_C_GatherDataFromKey) == 0x000001, "Wrong alignment on AlarmLamp_C_GatherDataFromKey");
static_assert(sizeof(AlarmLamp_C_GatherDataFromKey) == 0x000001, "Wrong size on AlarmLamp_C_GatherDataFromKey");
static_assert(offsetof(AlarmLamp_C_GatherDataFromKey, Gather) == 0x000000, "Member 'AlarmLamp_C_GatherDataFromKey::Gather' has a wrong offset!");

}

