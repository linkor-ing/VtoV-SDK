#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Effect_lsd

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Struct_save_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"
#include "Struct_settings_structs.hpp"


namespace SDK::Params
{

// Function effect_lsd.effect_lsd_C.ExecuteUbergraph_effect_lsd
// 0x02C0 (0x02C0 - 0x0000)
struct Effect_lsd_C_ExecuteUbergraph_effect_lsd final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_258B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable;               // 0x0008(0x0010)(NoDestructor)
	struct FKey                                   K2Node_Event_key;                                  // 0x0018(0x0018)(HasGetValueTypeHash)
	bool                                          K2Node_Event_pressed;                              // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_258C[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_color;                                // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_258D[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_258E[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatPlusEquals_FloatOut;          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_258F[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1; // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        K2Node_Event_gamemode;                             // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeightedBlendable                     K2Node_MakeStruct_WeightedBlendable_1;             // 0x0090(0x0010)(NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2590[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FWeightedBlendable>             K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	struct FStruct_settings                       K2Node_Event_settings;                             // 0x00B8(0x00CC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2591[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FWeightedBlendables                    K2Node_MakeStruct_WeightedBlendables;              // 0x0188(0x0010)()
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue_1;     // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFOVAngle_ReturnValue;                  // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x01B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x01D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_4;        // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatPlusEquals_FloatOut_1;        // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2592[0x4];                                     // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue_2;     // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_K2_GetActorRotation_ReturnValue;          // 0x01E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x01F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2; // 0x0204(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2593[0x4];                                     // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player_1;            // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RInterpTo_ReturnValue;                    // 0x021C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0228(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player_2;            // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_lsd_C_ExecuteUbergraph_effect_lsd) == 0x000008, "Wrong alignment on Effect_lsd_C_ExecuteUbergraph_effect_lsd");
static_assert(sizeof(Effect_lsd_C_ExecuteUbergraph_effect_lsd) == 0x0002C0, "Wrong size on Effect_lsd_C_ExecuteUbergraph_effect_lsd");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, EntryPoint) == 0x000000, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::EntryPoint' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, K2Node_MakeStruct_WeightedBlendable) == 0x000008, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::K2Node_MakeStruct_WeightedBlendable' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, K2Node_Event_key) == 0x000018, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::K2Node_Event_key' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, K2Node_Event_pressed) == 0x000030, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::K2Node_Event_pressed' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, K2Node_Event_color) == 0x000034, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::K2Node_Event_color' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000048, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, K2Node_Event_DeltaSeconds) == 0x000050, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000054, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000058, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x00005C, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x000060, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_VictoryFloatPlusEquals_FloatOut) == 0x000064, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_VictoryFloatPlusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000068, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_Less_FloatFloat_ReturnValue) == 0x00006C, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x000070, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1) == 0x000074, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, K2Node_Event_gamemode) == 0x000078, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::K2Node_Event_gamemode' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000080, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000088, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, K2Node_MakeStruct_WeightedBlendable_1) == 0x000090, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::K2Node_MakeStruct_WeightedBlendable_1' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0000A0, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, K2Node_MakeArray_Array) == 0x0000A8, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, K2Node_Event_settings) == 0x0000B8, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::K2Node_Event_settings' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, K2Node_MakeStruct_WeightedBlendables) == 0x000188, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::K2Node_MakeStruct_WeightedBlendables' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000198, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_CreateDynamicMaterialInstance_ReturnValue_2) == 0x0001A0, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_CreateDynamicMaterialInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_GetPlayerCameraManager_ReturnValue_1) == 0x0001A8, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_GetPlayerCameraManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_GetFOVAngle_ReturnValue) == 0x0001B0, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_GetFOVAngle_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0001B4, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_Conv_FloatToString_ReturnValue) == 0x0001B8, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_getMainPlayer_AsMain_Player) == 0x0001C8, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x0001D0, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_Multiply_FloatFloat_ReturnValue_4) == 0x0001D4, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_Multiply_FloatFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_VictoryFloatPlusEquals_FloatOut_1) == 0x0001D8, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_VictoryFloatPlusEquals_FloatOut_1' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_GetPlayerCameraManager_ReturnValue_2) == 0x0001E0, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_GetPlayerCameraManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_K2_GetActorRotation_ReturnValue) == 0x0001E8, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_K2_GetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_K2_GetComponentRotation_ReturnValue) == 0x0001F4, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_K2_GetComponentRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x000200, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2) == 0x000204, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000208, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_getMainPlayer_AsMain_Player_1) == 0x000210, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_getMainPlayer_AsMain_Player_1' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x000218, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_RInterpTo_ReturnValue) == 0x00021C, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_RInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000228, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_getMainPlayer_AsMain_Player_2) == 0x0002B0, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_getMainPlayer_AsMain_Player_2' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_ExecuteUbergraph_effect_lsd, CallFunc_Array_Add_ReturnValue) == 0x0002B8, "Member 'Effect_lsd_C_ExecuteUbergraph_effect_lsd::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function effect_lsd.effect_lsd_C.settingsApplied
// 0x00CC (0x00CC - 0x0000)
struct Effect_lsd_C_SettingsApplied final
{
public:
	struct FStruct_settings                       Settings;                                          // 0x0000(0x00CC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_lsd_C_SettingsApplied) == 0x000004, "Wrong alignment on Effect_lsd_C_SettingsApplied");
static_assert(sizeof(Effect_lsd_C_SettingsApplied) == 0x0000CC, "Wrong size on Effect_lsd_C_SettingsApplied");
static_assert(offsetof(Effect_lsd_C_SettingsApplied, Settings) == 0x000000, "Member 'Effect_lsd_C_SettingsApplied::Settings' has a wrong offset!");

// Function effect_lsd.effect_lsd_C.stuffUpgraded
// 0x0008 (0x0008 - 0x0000)
struct Effect_lsd_C_StuffUpgraded final
{
public:
	class AMainGamemode_C*                        GameMode;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_lsd_C_StuffUpgraded) == 0x000008, "Wrong alignment on Effect_lsd_C_StuffUpgraded");
static_assert(sizeof(Effect_lsd_C_StuffUpgraded) == 0x000008, "Wrong size on Effect_lsd_C_StuffUpgraded");
static_assert(offsetof(Effect_lsd_C_StuffUpgraded, GameMode) == 0x000000, "Member 'Effect_lsd_C_StuffUpgraded::GameMode' has a wrong offset!");

// Function effect_lsd.effect_lsd_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Effect_lsd_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_lsd_C_ReceiveTick) == 0x000004, "Wrong alignment on Effect_lsd_C_ReceiveTick");
static_assert(sizeof(Effect_lsd_C_ReceiveTick) == 0x000004, "Wrong size on Effect_lsd_C_ReceiveTick");
static_assert(offsetof(Effect_lsd_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Effect_lsd_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function effect_lsd.effect_lsd_C.applyColor
// 0x0010 (0x0010 - 0x0000)
struct Effect_lsd_C_ApplyColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_lsd_C_ApplyColor) == 0x000004, "Wrong alignment on Effect_lsd_C_ApplyColor");
static_assert(sizeof(Effect_lsd_C_ApplyColor) == 0x000010, "Wrong size on Effect_lsd_C_ApplyColor");
static_assert(offsetof(Effect_lsd_C_ApplyColor, Color) == 0x000000, "Member 'Effect_lsd_C_ApplyColor::Color' has a wrong offset!");

// Function effect_lsd.effect_lsd_C.AnyKey
// 0x0020 (0x0020 - 0x0000)
struct Effect_lsd_C_AnyKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Pressed;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Effect_lsd_C_AnyKey) == 0x000008, "Wrong alignment on Effect_lsd_C_AnyKey");
static_assert(sizeof(Effect_lsd_C_AnyKey) == 0x000020, "Wrong size on Effect_lsd_C_AnyKey");
static_assert(offsetof(Effect_lsd_C_AnyKey, Key) == 0x000000, "Member 'Effect_lsd_C_AnyKey::Key' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_AnyKey, Pressed) == 0x000018, "Member 'Effect_lsd_C_AnyKey::Pressed' has a wrong offset!");

// Function effect_lsd.effect_lsd_C.setRT
// 0x0028 (0x0028 - 0x0000)
struct Effect_lsd_C_SetRT final
{
public:
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue_1;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 CallFunc_CreateRenderTarget2D_ReturnValue_1;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_lsd_C_SetRT) == 0x000008, "Wrong alignment on Effect_lsd_C_SetRT");
static_assert(sizeof(Effect_lsd_C_SetRT) == 0x000028, "Wrong size on Effect_lsd_C_SetRT");
static_assert(offsetof(Effect_lsd_C_SetRT, CallFunc_GetViewportSize_ReturnValue) == 0x000000, "Member 'Effect_lsd_C_SetRT::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_SetRT, CallFunc_BreakVector2D_X) == 0x000008, "Member 'Effect_lsd_C_SetRT::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_SetRT, CallFunc_BreakVector2D_Y) == 0x00000C, "Member 'Effect_lsd_C_SetRT::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_SetRT, CallFunc_FTrunc_ReturnValue) == 0x000010, "Member 'Effect_lsd_C_SetRT::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_SetRT, CallFunc_FTrunc_ReturnValue_1) == 0x000014, "Member 'Effect_lsd_C_SetRT::CallFunc_FTrunc_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_SetRT, CallFunc_CreateRenderTarget2D_ReturnValue) == 0x000018, "Member 'Effect_lsd_C_SetRT::CallFunc_CreateRenderTarget2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_SetRT, CallFunc_CreateRenderTarget2D_ReturnValue_1) == 0x000020, "Member 'Effect_lsd_C_SetRT::CallFunc_CreateRenderTarget2D_ReturnValue_1' has a wrong offset!");

// Function effect_lsd.effect_lsd_C.dreamInv
// 0x0018 (0x0018 - 0x0000)
struct Effect_lsd_C_DreamInv final
{
public:
	TArray<struct FStruct_save>                   Invv;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ADreamBase_C*                           Base;                                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Effect_lsd_C_DreamInv) == 0x000008, "Wrong alignment on Effect_lsd_C_DreamInv");
static_assert(sizeof(Effect_lsd_C_DreamInv) == 0x000018, "Wrong size on Effect_lsd_C_DreamInv");
static_assert(offsetof(Effect_lsd_C_DreamInv, Invv) == 0x000000, "Member 'Effect_lsd_C_DreamInv::Invv' has a wrong offset!");
static_assert(offsetof(Effect_lsd_C_DreamInv, Base) == 0x000010, "Member 'Effect_lsd_C_DreamInv::Base' has a wrong offset!");

}
