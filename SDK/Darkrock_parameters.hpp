#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Darkrock

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function darkrock.darkrock_C.UserConstructionScript
// 0x00A0 (0x00A0 - 0x0000)
struct Darkrock_C_UserConstructionScript final
{
public:
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0018(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Darkrock_C_UserConstructionScript) == 0x000004, "Wrong alignment on Darkrock_C_UserConstructionScript");
static_assert(sizeof(Darkrock_C_UserConstructionScript) == 0x0000A0, "Wrong size on Darkrock_C_UserConstructionScript");
static_assert(offsetof(Darkrock_C_UserConstructionScript, CallFunc_RandomFloatInRange_ReturnValue) == 0x000000, "Member 'Darkrock_C_UserConstructionScript::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Darkrock_C_UserConstructionScript, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000004, "Member 'Darkrock_C_UserConstructionScript::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Darkrock_C_UserConstructionScript, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000008, "Member 'Darkrock_C_UserConstructionScript::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Darkrock_C_UserConstructionScript, CallFunc_MakeRotator_ReturnValue) == 0x00000C, "Member 'Darkrock_C_UserConstructionScript::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Darkrock_C_UserConstructionScript, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000018, "Member 'Darkrock_C_UserConstructionScript::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");

// Function darkrock.darkrock_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Darkrock_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Darkrock_C_ReceiveTick) == 0x000004, "Wrong alignment on Darkrock_C_ReceiveTick");
static_assert(sizeof(Darkrock_C_ReceiveTick) == 0x000004, "Wrong size on Darkrock_C_ReceiveTick");
static_assert(offsetof(Darkrock_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Darkrock_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function darkrock.darkrock_C.ExecuteUbergraph_darkrock
// 0x0038 (0x0038 - 0x0000)
struct Darkrock_C_ExecuteUbergraph_darkrock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue;          // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue_1;        // 0x0013(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInst_C*                            CallFunc_getMainGameInstance_AsGame_Inst;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Darkrock_C_ExecuteUbergraph_darkrock) == 0x000008, "Wrong alignment on Darkrock_C_ExecuteUbergraph_darkrock");
static_assert(sizeof(Darkrock_C_ExecuteUbergraph_darkrock) == 0x000038, "Wrong size on Darkrock_C_ExecuteUbergraph_darkrock");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, EntryPoint) == 0x000000, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::EntryPoint' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000008, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, CallFunc_WasRecentlyRendered_ReturnValue) == 0x000010, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::CallFunc_WasRecentlyRendered_ReturnValue' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, CallFunc_IsValid_ReturnValue) == 0x000011, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000012, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, CallFunc_WasRecentlyRendered_ReturnValue_1) == 0x000013, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::CallFunc_WasRecentlyRendered_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000018, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, CallFunc_getMainGameInstance_AsGame_Inst) == 0x000020, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::CallFunc_getMainGameInstance_AsGame_Inst' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, CallFunc_GetDistanceTo_ReturnValue) == 0x000028, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, CallFunc_GreaterEqual_FloatFloat_ReturnValue_1) == 0x00002C, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::CallFunc_GreaterEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00002D, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00002E, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00002F, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, CallFunc_BooleanOR_ReturnValue) == 0x000030, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Darkrock_C_ExecuteUbergraph_darkrock, CallFunc_BooleanAND_ReturnValue) == 0x000031, "Member 'Darkrock_C_ExecuteUbergraph_darkrock::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

}

