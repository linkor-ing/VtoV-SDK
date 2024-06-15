#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_keybinds

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Struct_settings_structs.hpp"
#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Struct_keybind_structs.hpp"


namespace SDK::Params
{

// Function umg_keybinds.umg_keybinds_C.ExecuteUbergraph_umg_keybinds
// 0x0180 (0x0180 - 0x0000)
struct Umg_keybinds_C_ExecuteUbergraph_umg_keybinds final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        K2Node_Event_gamemode;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_settings                       K2Node_Event_settings;                             // 0x0018(0x00CC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2161[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_Event_key;                                  // 0x00E8(0x0018)(HasGetValueTypeHash)
	bool                                          K2Node_Event_pressed;                              // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2162[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_color;                                // 0x0104(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUmg_keybindSlot_C*                     CallFunc_Create_ReturnValue;                       // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_1;        // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2163[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_keybind                        CallFunc_Array_Get_Item;                           // 0x0148(0x0030)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds) == 0x000008, "Wrong alignment on Umg_keybinds_C_ExecuteUbergraph_umg_keybinds");
static_assert(sizeof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds) == 0x000180, "Wrong size on Umg_keybinds_C_ExecuteUbergraph_umg_keybinds");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, EntryPoint) == 0x000000, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, Temp_int_Array_Index_Variable) == 0x000004, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, K2Node_Event_gamemode) == 0x000010, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::K2Node_Event_gamemode' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, K2Node_Event_settings) == 0x000018, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::K2Node_Event_settings' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, K2Node_Event_key) == 0x0000E8, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::K2Node_Event_key' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, K2Node_Event_pressed) == 0x000100, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::K2Node_Event_pressed' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, K2Node_Event_color) == 0x000104, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::K2Node_Event_color' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, K2Node_Event_index) == 0x000114, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000118, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, CallFunc_GetPlayerController_ReturnValue) == 0x000120, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, CallFunc_Create_ReturnValue) == 0x000128, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, CallFunc_getMainGamemode_AsMain_Gamemode_1) == 0x000130, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::CallFunc_getMainGamemode_AsMain_Gamemode_1' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, CallFunc_Array_Add_ReturnValue) == 0x000138, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, CallFunc_AddChild_ReturnValue) == 0x000140, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, CallFunc_Array_Get_Item) == 0x000148, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, CallFunc_Array_Length_ReturnValue) == 0x000178, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_ExecuteUbergraph_umg_keybinds, CallFunc_Less_IntInt_ReturnValue) == 0x00017C, "Member 'Umg_keybinds_C_ExecuteUbergraph_umg_keybinds::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function umg_keybinds.umg_keybinds_C.setIndex
// 0x0004 (0x0004 - 0x0000)
struct Umg_keybinds_C_SetIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_keybinds_C_SetIndex) == 0x000004, "Wrong alignment on Umg_keybinds_C_SetIndex");
static_assert(sizeof(Umg_keybinds_C_SetIndex) == 0x000004, "Wrong size on Umg_keybinds_C_SetIndex");
static_assert(offsetof(Umg_keybinds_C_SetIndex, Param_Index) == 0x000000, "Member 'Umg_keybinds_C_SetIndex::Param_Index' has a wrong offset!");

// Function umg_keybinds.umg_keybinds_C.applyColor
// 0x0010 (0x0010 - 0x0000)
struct Umg_keybinds_C_ApplyColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_keybinds_C_ApplyColor) == 0x000004, "Wrong alignment on Umg_keybinds_C_ApplyColor");
static_assert(sizeof(Umg_keybinds_C_ApplyColor) == 0x000010, "Wrong size on Umg_keybinds_C_ApplyColor");
static_assert(offsetof(Umg_keybinds_C_ApplyColor, Color) == 0x000000, "Member 'Umg_keybinds_C_ApplyColor::Color' has a wrong offset!");

// Function umg_keybinds.umg_keybinds_C.AnyKey
// 0x0020 (0x0020 - 0x0000)
struct Umg_keybinds_C_AnyKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Pressed;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Umg_keybinds_C_AnyKey) == 0x000008, "Wrong alignment on Umg_keybinds_C_AnyKey");
static_assert(sizeof(Umg_keybinds_C_AnyKey) == 0x000020, "Wrong size on Umg_keybinds_C_AnyKey");
static_assert(offsetof(Umg_keybinds_C_AnyKey, Key) == 0x000000, "Member 'Umg_keybinds_C_AnyKey::Key' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_AnyKey, Pressed) == 0x000018, "Member 'Umg_keybinds_C_AnyKey::Pressed' has a wrong offset!");

// Function umg_keybinds.umg_keybinds_C.settingsApplied
// 0x00CC (0x00CC - 0x0000)
struct Umg_keybinds_C_SettingsApplied final
{
public:
	struct FStruct_settings                       Param_Settings;                                    // 0x0000(0x00CC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_keybinds_C_SettingsApplied) == 0x000004, "Wrong alignment on Umg_keybinds_C_SettingsApplied");
static_assert(sizeof(Umg_keybinds_C_SettingsApplied) == 0x0000CC, "Wrong size on Umg_keybinds_C_SettingsApplied");
static_assert(offsetof(Umg_keybinds_C_SettingsApplied, Param_Settings) == 0x000000, "Member 'Umg_keybinds_C_SettingsApplied::Param_Settings' has a wrong offset!");

// Function umg_keybinds.umg_keybinds_C.stuffUpgraded
// 0x0008 (0x0008 - 0x0000)
struct Umg_keybinds_C_StuffUpgraded final
{
public:
	class AMainGamemode_C*                        GameMode;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_keybinds_C_StuffUpgraded) == 0x000008, "Wrong alignment on Umg_keybinds_C_StuffUpgraded");
static_assert(sizeof(Umg_keybinds_C_StuffUpgraded) == 0x000008, "Wrong size on Umg_keybinds_C_StuffUpgraded");
static_assert(offsetof(Umg_keybinds_C_StuffUpgraded, GameMode) == 0x000000, "Member 'Umg_keybinds_C_StuffUpgraded::GameMode' has a wrong offset!");

// Function umg_keybinds.umg_keybinds_C.dreamInv
// 0x0018 (0x0018 - 0x0000)
struct Umg_keybinds_C_DreamInv final
{
public:
	TArray<struct FStruct_save>                   Invv;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ADreamBase_C*                           Base;                                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_keybinds_C_DreamInv) == 0x000008, "Wrong alignment on Umg_keybinds_C_DreamInv");
static_assert(sizeof(Umg_keybinds_C_DreamInv) == 0x000018, "Wrong size on Umg_keybinds_C_DreamInv");
static_assert(offsetof(Umg_keybinds_C_DreamInv, Invv) == 0x000000, "Member 'Umg_keybinds_C_DreamInv::Invv' has a wrong offset!");
static_assert(offsetof(Umg_keybinds_C_DreamInv, Base) == 0x000010, "Member 'Umg_keybinds_C_DreamInv::Base' has a wrong offset!");

}
