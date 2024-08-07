#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_flickerer

#include "Basic.hpp"

#include "Struct_settings_structs.hpp"
#include "Struct_save_structs.hpp"
#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ticker_flickerer.ticker_flickerer_C.ExecuteUbergraph_ticker_flickerer
// 0x01D8 (0x01D8 - 0x0000)
struct Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        K2Node_Event_gamemode;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_settings                       K2Node_Event_settings;                             // 0x0020(0x00F0)(HasGetValueTypeHash)
	struct FKey                                   K2Node_Event_key;                                  // 0x0110(0x0018)(HasGetValueTypeHash)
	bool                                          K2Node_Event_pressed;                              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_color;                                // 0x012C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUmg_texturePicker_C*                   K2Node_Event_picker;                               // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Event_texture;                              // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ATrigger_lightRoot_C*>           CallFunc_GetAllActorsOfClass_OutActors;            // 0x0158(0x0010)(ReferenceParm)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATrigger_lightRoot_C*                   CallFunc_Array_Get_Item;                           // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGenerator_C*                           CallFunc_Array_Get_Item_1;                         // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0184(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_185[0x3];                                      // 0x0185(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199[0x3];                                      // 0x0199(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue;           // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_FMin_ReturnValue;                         // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x01B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x01C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x01C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C5[0x3];                                      // 0x01C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer) == 0x000008, "Wrong alignment on Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer");
static_assert(sizeof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer) == 0x0001D8, "Wrong size on Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, EntryPoint) == 0x000000, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, Temp_int_Variable) == 0x000004, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, K2Node_Event_gamemode) == 0x000018, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::K2Node_Event_gamemode' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, K2Node_Event_settings) == 0x000020, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::K2Node_Event_settings' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, K2Node_Event_key) == 0x000110, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::K2Node_Event_key' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, K2Node_Event_pressed) == 0x000128, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::K2Node_Event_pressed' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, K2Node_Event_color) == 0x00012C, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::K2Node_Event_color' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, K2Node_Event_picker) == 0x000140, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::K2Node_Event_picker' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, K2Node_Event_texture) == 0x000148, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::K2Node_Event_texture' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, K2Node_Event_index) == 0x000150, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, K2Node_Event_DeltaSeconds) == 0x000154, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_GetAllActorsOfClass_OutActors) == 0x000158, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000168, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Array_Get_Item) == 0x000170, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Array_Get_Item_1) == 0x000178, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Array_Length_ReturnValue) == 0x000180, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Less_IntInt_ReturnValue) == 0x000184, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000188, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00018C, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Array_Length_ReturnValue_1) == 0x000190, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000194, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Less_IntInt_ReturnValue_1) == 0x000198, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_FClamp_ReturnValue) == 0x00019C, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Conv_FloatToString_ReturnValue) == 0x0001A0, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Conv_FloatToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_FMin_ReturnValue) == 0x0001B0, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0001B4, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_RandomFloatInRange_ReturnValue) == 0x0001B8, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x0001BC, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Add_FloatFloat_ReturnValue) == 0x0001C0, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x0001C4, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer, CallFunc_Conv_FloatToString_ReturnValue_1) == 0x0001C8, "Member 'Ticker_flickerer_C_ExecuteUbergraph_ticker_flickerer::CallFunc_Conv_FloatToString_ReturnValue_1' has a wrong offset!");

// Function ticker_flickerer.ticker_flickerer_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Ticker_flickerer_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ticker_flickerer_C_ReceiveTick) == 0x000004, "Wrong alignment on Ticker_flickerer_C_ReceiveTick");
static_assert(sizeof(Ticker_flickerer_C_ReceiveTick) == 0x000004, "Wrong size on Ticker_flickerer_C_ReceiveTick");
static_assert(offsetof(Ticker_flickerer_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Ticker_flickerer_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function ticker_flickerer.ticker_flickerer_C.texturePickerApply
// 0x0018 (0x0018 - 0x0000)
struct Ticker_flickerer_C_TexturePickerApply final
{
public:
	class UUmg_texturePicker_C*                   Picker;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ticker_flickerer_C_TexturePickerApply) == 0x000008, "Wrong alignment on Ticker_flickerer_C_TexturePickerApply");
static_assert(sizeof(Ticker_flickerer_C_TexturePickerApply) == 0x000018, "Wrong size on Ticker_flickerer_C_TexturePickerApply");
static_assert(offsetof(Ticker_flickerer_C_TexturePickerApply, Picker) == 0x000000, "Member 'Ticker_flickerer_C_TexturePickerApply::Picker' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_TexturePickerApply, Texture) == 0x000008, "Member 'Ticker_flickerer_C_TexturePickerApply::Texture' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_TexturePickerApply, Param_Index) == 0x000010, "Member 'Ticker_flickerer_C_TexturePickerApply::Param_Index' has a wrong offset!");

// Function ticker_flickerer.ticker_flickerer_C.applyColor
// 0x0010 (0x0010 - 0x0000)
struct Ticker_flickerer_C_ApplyColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ticker_flickerer_C_ApplyColor) == 0x000004, "Wrong alignment on Ticker_flickerer_C_ApplyColor");
static_assert(sizeof(Ticker_flickerer_C_ApplyColor) == 0x000010, "Wrong size on Ticker_flickerer_C_ApplyColor");
static_assert(offsetof(Ticker_flickerer_C_ApplyColor, Color) == 0x000000, "Member 'Ticker_flickerer_C_ApplyColor::Color' has a wrong offset!");

// Function ticker_flickerer.ticker_flickerer_C.AnyKey
// 0x0020 (0x0020 - 0x0000)
struct Ticker_flickerer_C_AnyKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Pressed;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Ticker_flickerer_C_AnyKey) == 0x000008, "Wrong alignment on Ticker_flickerer_C_AnyKey");
static_assert(sizeof(Ticker_flickerer_C_AnyKey) == 0x000020, "Wrong size on Ticker_flickerer_C_AnyKey");
static_assert(offsetof(Ticker_flickerer_C_AnyKey, Key) == 0x000000, "Member 'Ticker_flickerer_C_AnyKey::Key' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_AnyKey, Pressed) == 0x000018, "Member 'Ticker_flickerer_C_AnyKey::Pressed' has a wrong offset!");

// Function ticker_flickerer.ticker_flickerer_C.settingsApplied
// 0x00F0 (0x00F0 - 0x0000)
struct Ticker_flickerer_C_SettingsApplied final
{
public:
	struct FStruct_settings                       Settings;                                          // 0x0000(0x00F0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(Ticker_flickerer_C_SettingsApplied) == 0x000008, "Wrong alignment on Ticker_flickerer_C_SettingsApplied");
static_assert(sizeof(Ticker_flickerer_C_SettingsApplied) == 0x0000F0, "Wrong size on Ticker_flickerer_C_SettingsApplied");
static_assert(offsetof(Ticker_flickerer_C_SettingsApplied, Settings) == 0x000000, "Member 'Ticker_flickerer_C_SettingsApplied::Settings' has a wrong offset!");

// Function ticker_flickerer.ticker_flickerer_C.stuffUpgraded
// 0x0008 (0x0008 - 0x0000)
struct Ticker_flickerer_C_StuffUpgraded final
{
public:
	class AMainGamemode_C*                        Param_GameMode;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ticker_flickerer_C_StuffUpgraded) == 0x000008, "Wrong alignment on Ticker_flickerer_C_StuffUpgraded");
static_assert(sizeof(Ticker_flickerer_C_StuffUpgraded) == 0x000008, "Wrong size on Ticker_flickerer_C_StuffUpgraded");
static_assert(offsetof(Ticker_flickerer_C_StuffUpgraded, Param_GameMode) == 0x000000, "Member 'Ticker_flickerer_C_StuffUpgraded::Param_GameMode' has a wrong offset!");

// Function ticker_flickerer.ticker_flickerer_C.dreamInv
// 0x0018 (0x0018 - 0x0000)
struct Ticker_flickerer_C_DreamInv final
{
public:
	TArray<struct FStruct_save>                   Invv;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ADreamBase_C*                           Base;                                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ticker_flickerer_C_DreamInv) == 0x000008, "Wrong alignment on Ticker_flickerer_C_DreamInv");
static_assert(sizeof(Ticker_flickerer_C_DreamInv) == 0x000018, "Wrong size on Ticker_flickerer_C_DreamInv");
static_assert(offsetof(Ticker_flickerer_C_DreamInv, Invv) == 0x000000, "Member 'Ticker_flickerer_C_DreamInv::Invv' has a wrong offset!");
static_assert(offsetof(Ticker_flickerer_C_DreamInv, Base) == 0x000010, "Member 'Ticker_flickerer_C_DreamInv::Base' has a wrong offset!");

}

