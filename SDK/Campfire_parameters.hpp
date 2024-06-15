#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Campfire

#include "Basic.hpp"

#include "Struct_triggerSave_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Struct_mBool_structs.hpp"
#include "Struct_settings_structs.hpp"
#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function campfire.campfire_C.getTriggerData
// 0x00F0 (0x00F0 - 0x0000)
struct Campfire_C_GetTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(Campfire_C_GetTriggerData) == 0x000010, "Wrong alignment on Campfire_C_GetTriggerData");
static_assert(sizeof(Campfire_C_GetTriggerData) == 0x0000F0, "Wrong size on Campfire_C_GetTriggerData");
static_assert(offsetof(Campfire_C_GetTriggerData, Data) == 0x000000, "Member 'Campfire_C_GetTriggerData::Data' has a wrong offset!");

// Function campfire.campfire_C.loadTriggerData
// 0x0100 (0x0100 - 0x0000)
struct Campfire_C_LoadTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Campfire_C_LoadTriggerData) == 0x000010, "Wrong alignment on Campfire_C_LoadTriggerData");
static_assert(sizeof(Campfire_C_LoadTriggerData) == 0x000100, "Wrong size on Campfire_C_LoadTriggerData");
static_assert(offsetof(Campfire_C_LoadTriggerData, Data) == 0x000000, "Member 'Campfire_C_LoadTriggerData::Data' has a wrong offset!");
static_assert(offsetof(Campfire_C_LoadTriggerData, Return) == 0x0000F0, "Member 'Campfire_C_LoadTriggerData::Return' has a wrong offset!");

// Function campfire.campfire_C.ignoreSave_trigger
// 0x0001 (0x0001 - 0x0000)
struct Campfire_C_IgnoreSave_trigger final
{
public:
	bool                                          Ignore;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Campfire_C_IgnoreSave_trigger) == 0x000001, "Wrong alignment on Campfire_C_IgnoreSave_trigger");
static_assert(sizeof(Campfire_C_IgnoreSave_trigger) == 0x000001, "Wrong size on Campfire_C_IgnoreSave_trigger");
static_assert(offsetof(Campfire_C_IgnoreSave_trigger, Ignore) == 0x000000, "Member 'Campfire_C_IgnoreSave_trigger::Ignore' has a wrong offset!");

// Function campfire.campfire_C.dreamInv
// 0x0018 (0x0018 - 0x0000)
struct Campfire_C_DreamInv final
{
public:
	TArray<struct FStruct_save>                   Invv;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ADreamBase_C*                           Base;                                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Campfire_C_DreamInv) == 0x000008, "Wrong alignment on Campfire_C_DreamInv");
static_assert(sizeof(Campfire_C_DreamInv) == 0x000018, "Wrong size on Campfire_C_DreamInv");
static_assert(offsetof(Campfire_C_DreamInv, Invv) == 0x000000, "Member 'Campfire_C_DreamInv::Invv' has a wrong offset!");
static_assert(offsetof(Campfire_C_DreamInv, Base) == 0x000010, "Member 'Campfire_C_DreamInv::Base' has a wrong offset!");

// Function campfire.campfire_C.getData
// 0x0270 (0x0270 - 0x0000)
struct Campfire_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mBool                          K2Node_MakeStruct_struct_mBool;                    // 0x0190(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mBool>                  K2Node_MakeArray_Array_1;                          // 0x01A0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01B0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Campfire_C_GetData) == 0x000010, "Wrong alignment on Campfire_C_GetData");
static_assert(sizeof(Campfire_C_GetData) == 0x000270, "Wrong size on Campfire_C_GetData");
static_assert(offsetof(Campfire_C_GetData, Data) == 0x000000, "Member 'Campfire_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Campfire_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Campfire_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Campfire_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Campfire_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Campfire_C_GetData, K2Node_MakeStruct_struct_mBool) == 0x000190, "Member 'Campfire_C_GetData::K2Node_MakeStruct_struct_mBool' has a wrong offset!");
static_assert(offsetof(Campfire_C_GetData, K2Node_MakeArray_Array_1) == 0x0001A0, "Member 'Campfire_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Campfire_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001B0, "Member 'Campfire_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function campfire.campfire_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct Campfire_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4391[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mBool                          CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Campfire_C_LoadData) == 0x000010, "Wrong alignment on Campfire_C_LoadData");
static_assert(sizeof(Campfire_C_LoadData) == 0x0000E0, "Wrong size on Campfire_C_LoadData");
static_assert(offsetof(Campfire_C_LoadData, Data) == 0x000000, "Member 'Campfire_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Campfire_C_LoadData, Return) == 0x0000C0, "Member 'Campfire_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Campfire_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Campfire_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Campfire_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Campfire_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Campfire_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Campfire_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function campfire.campfire_C.set_ignoreSave_trigger
// 0x0001 (0x0001 - 0x0000)
struct Campfire_C_Set_ignoreSave_trigger final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Campfire_C_Set_ignoreSave_trigger) == 0x000001, "Wrong alignment on Campfire_C_Set_ignoreSave_trigger");
static_assert(sizeof(Campfire_C_Set_ignoreSave_trigger) == 0x000001, "Wrong size on Campfire_C_Set_ignoreSave_trigger");
static_assert(offsetof(Campfire_C_Set_ignoreSave_trigger, NewParam) == 0x000000, "Member 'Campfire_C_Set_ignoreSave_trigger::NewParam' has a wrong offset!");

// Function campfire.campfire_C.cordPlugged
// 0x0010 (0x0010 - 0x0000)
struct Campfire_C_CordPlugged final
{
public:
	class ACord_C*                                Cord;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACordSocket_C*                          Socket;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Campfire_C_CordPlugged) == 0x000008, "Wrong alignment on Campfire_C_CordPlugged");
static_assert(sizeof(Campfire_C_CordPlugged) == 0x000010, "Wrong size on Campfire_C_CordPlugged");
static_assert(offsetof(Campfire_C_CordPlugged, Cord) == 0x000000, "Member 'Campfire_C_CordPlugged::Cord' has a wrong offset!");
static_assert(offsetof(Campfire_C_CordPlugged, Socket) == 0x000008, "Member 'Campfire_C_CordPlugged::Socket' has a wrong offset!");

// Function campfire.campfire_C.cordUnplugged
// 0x0010 (0x0010 - 0x0000)
struct Campfire_C_CordUnplugged final
{
public:
	class ACord_C*                                Cord;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACordSocket_C*                          Socket;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Campfire_C_CordUnplugged) == 0x000008, "Wrong alignment on Campfire_C_CordUnplugged");
static_assert(sizeof(Campfire_C_CordUnplugged) == 0x000010, "Wrong size on Campfire_C_CordUnplugged");
static_assert(offsetof(Campfire_C_CordUnplugged, Cord) == 0x000000, "Member 'Campfire_C_CordUnplugged::Cord' has a wrong offset!");
static_assert(offsetof(Campfire_C_CordUnplugged, Socket) == 0x000008, "Member 'Campfire_C_CordUnplugged::Socket' has a wrong offset!");

// Function campfire.campfire_C.setActiveTrigger
// 0x0010 (0x0010 - 0x0000)
struct Campfire_C_SetActiveTrigger final
{
public:
	class AActor*                                 SentFrom;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_Active;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Campfire_C_SetActiveTrigger) == 0x000008, "Wrong alignment on Campfire_C_SetActiveTrigger");
static_assert(sizeof(Campfire_C_SetActiveTrigger) == 0x000010, "Wrong size on Campfire_C_SetActiveTrigger");
static_assert(offsetof(Campfire_C_SetActiveTrigger, SentFrom) == 0x000000, "Member 'Campfire_C_SetActiveTrigger::SentFrom' has a wrong offset!");
static_assert(offsetof(Campfire_C_SetActiveTrigger, Param_Active) == 0x000008, "Member 'Campfire_C_SetActiveTrigger::Param_Active' has a wrong offset!");

// Function campfire.campfire_C.stuffUpgraded
// 0x0008 (0x0008 - 0x0000)
struct Campfire_C_StuffUpgraded final
{
public:
	class AMainGamemode_C*                        GameMode;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Campfire_C_StuffUpgraded) == 0x000008, "Wrong alignment on Campfire_C_StuffUpgraded");
static_assert(sizeof(Campfire_C_StuffUpgraded) == 0x000008, "Wrong size on Campfire_C_StuffUpgraded");
static_assert(offsetof(Campfire_C_StuffUpgraded, GameMode) == 0x000000, "Member 'Campfire_C_StuffUpgraded::GameMode' has a wrong offset!");

// Function campfire.campfire_C.settingsApplied
// 0x00CC (0x00CC - 0x0000)
struct Campfire_C_SettingsApplied final
{
public:
	struct FStruct_settings                       Settings;                                          // 0x0000(0x00CC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Campfire_C_SettingsApplied) == 0x000004, "Wrong alignment on Campfire_C_SettingsApplied");
static_assert(sizeof(Campfire_C_SettingsApplied) == 0x0000CC, "Wrong size on Campfire_C_SettingsApplied");
static_assert(offsetof(Campfire_C_SettingsApplied, Settings) == 0x000000, "Member 'Campfire_C_SettingsApplied::Settings' has a wrong offset!");

// Function campfire.campfire_C.AnyKey
// 0x0020 (0x0020 - 0x0000)
struct Campfire_C_AnyKey final
{
public:
	struct FKey                                   Param_Key;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Pressed;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Campfire_C_AnyKey) == 0x000008, "Wrong alignment on Campfire_C_AnyKey");
static_assert(sizeof(Campfire_C_AnyKey) == 0x000020, "Wrong size on Campfire_C_AnyKey");
static_assert(offsetof(Campfire_C_AnyKey, Param_Key) == 0x000000, "Member 'Campfire_C_AnyKey::Param_Key' has a wrong offset!");
static_assert(offsetof(Campfire_C_AnyKey, Pressed) == 0x000018, "Member 'Campfire_C_AnyKey::Pressed' has a wrong offset!");

// Function campfire.campfire_C.applyColor
// 0x0010 (0x0010 - 0x0000)
struct Campfire_C_ApplyColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Campfire_C_ApplyColor) == 0x000004, "Wrong alignment on Campfire_C_ApplyColor");
static_assert(sizeof(Campfire_C_ApplyColor) == 0x000010, "Wrong size on Campfire_C_ApplyColor");
static_assert(offsetof(Campfire_C_ApplyColor, Color) == 0x000000, "Member 'Campfire_C_ApplyColor::Color' has a wrong offset!");

// Function campfire.campfire_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct Campfire_C_RunTrigger final
{
public:
	class AActor*                                 Param_Owner;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Campfire_C_RunTrigger) == 0x000008, "Wrong alignment on Campfire_C_RunTrigger");
static_assert(sizeof(Campfire_C_RunTrigger) == 0x000010, "Wrong size on Campfire_C_RunTrigger");
static_assert(offsetof(Campfire_C_RunTrigger, Param_Owner) == 0x000000, "Member 'Campfire_C_RunTrigger::Param_Owner' has a wrong offset!");
static_assert(offsetof(Campfire_C_RunTrigger, Param_Index) == 0x000008, "Member 'Campfire_C_RunTrigger::Param_Index' has a wrong offset!");

// Function campfire.campfire_C.ExecuteUbergraph_campfire
// 0x0150 (0x0150 - 0x0000)
struct Campfire_C_ExecuteUbergraph_campfire final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_NewParam;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4392[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ACord_C*                                K2Node_Event_cord_1;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACordSocket_C*                          K2Node_Event_socket_1;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACord_C*                                K2Node_Event_cord;                                 // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACordSocket_C*                          K2Node_Event_socket;                               // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_sentFrom;                             // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_active;                               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4393[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        K2Node_Event_gamemode;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_settings                       K2Node_Event_settings;                             // 0x0040(0x00CC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4394[0x4];                                     // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_Event_key;                                  // 0x0110(0x0018)(HasGetValueTypeHash)
	bool                                          K2Node_Event_pressed;                              // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4395[0x3];                                     // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_color;                                // 0x012C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4396[0x4];                                     // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_owner;                                // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Conv_IntToBool_ReturnValue;               // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Campfire_C_ExecuteUbergraph_campfire) == 0x000008, "Wrong alignment on Campfire_C_ExecuteUbergraph_campfire");
static_assert(sizeof(Campfire_C_ExecuteUbergraph_campfire) == 0x000150, "Wrong size on Campfire_C_ExecuteUbergraph_campfire");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, EntryPoint) == 0x000000, "Member 'Campfire_C_ExecuteUbergraph_campfire::EntryPoint' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, K2Node_Event_NewParam) == 0x000004, "Member 'Campfire_C_ExecuteUbergraph_campfire::K2Node_Event_NewParam' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, K2Node_Event_cord_1) == 0x000008, "Member 'Campfire_C_ExecuteUbergraph_campfire::K2Node_Event_cord_1' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, K2Node_Event_socket_1) == 0x000010, "Member 'Campfire_C_ExecuteUbergraph_campfire::K2Node_Event_socket_1' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, K2Node_Event_cord) == 0x000018, "Member 'Campfire_C_ExecuteUbergraph_campfire::K2Node_Event_cord' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, K2Node_Event_socket) == 0x000020, "Member 'Campfire_C_ExecuteUbergraph_campfire::K2Node_Event_socket' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, K2Node_Event_sentFrom) == 0x000028, "Member 'Campfire_C_ExecuteUbergraph_campfire::K2Node_Event_sentFrom' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, K2Node_Event_active) == 0x000030, "Member 'Campfire_C_ExecuteUbergraph_campfire::K2Node_Event_active' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, K2Node_Event_gamemode) == 0x000038, "Member 'Campfire_C_ExecuteUbergraph_campfire::K2Node_Event_gamemode' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, K2Node_Event_settings) == 0x000040, "Member 'Campfire_C_ExecuteUbergraph_campfire::K2Node_Event_settings' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, K2Node_Event_key) == 0x000110, "Member 'Campfire_C_ExecuteUbergraph_campfire::K2Node_Event_key' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, K2Node_Event_pressed) == 0x000128, "Member 'Campfire_C_ExecuteUbergraph_campfire::K2Node_Event_pressed' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, K2Node_Event_color) == 0x00012C, "Member 'Campfire_C_ExecuteUbergraph_campfire::K2Node_Event_color' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, K2Node_Event_owner) == 0x000140, "Member 'Campfire_C_ExecuteUbergraph_campfire::K2Node_Event_owner' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, K2Node_Event_index) == 0x000148, "Member 'Campfire_C_ExecuteUbergraph_campfire::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Campfire_C_ExecuteUbergraph_campfire, CallFunc_Conv_IntToBool_ReturnValue) == 0x00014C, "Member 'Campfire_C_ExecuteUbergraph_campfire::CallFunc_Conv_IntToBool_ReturnValue' has a wrong offset!");

}

