#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_argm

#include "Basic.hpp"

#include "Struct_mBool_structs.hpp"
#include "Struct_triggerSave_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK::Params
{

// Function prop_argm.prop_argm_C.ExecuteUbergraph_prop_argm
// 0x00E8 (0x00E8 - 0x0000)
struct Prop_argm_C_ExecuteUbergraph_prop_argm final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ACord_C*                                K2Node_Event_cord_1;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACordSocket_C*                          K2Node_Event_socket_1;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_sentFrom;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_active;                               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACord_C*                                K2Node_Event_cord;                                 // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACordSocket_C*                          K2Node_Event_socket;                               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_NewParam;                             // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_owner;                                // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0058(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_argm_C_ExecuteUbergraph_prop_argm) == 0x000008, "Wrong alignment on Prop_argm_C_ExecuteUbergraph_prop_argm");
static_assert(sizeof(Prop_argm_C_ExecuteUbergraph_prop_argm) == 0x0000E8, "Wrong size on Prop_argm_C_ExecuteUbergraph_prop_argm");
static_assert(offsetof(Prop_argm_C_ExecuteUbergraph_prop_argm, EntryPoint) == 0x000000, "Member 'Prop_argm_C_ExecuteUbergraph_prop_argm::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_ExecuteUbergraph_prop_argm, K2Node_Event_cord_1) == 0x000008, "Member 'Prop_argm_C_ExecuteUbergraph_prop_argm::K2Node_Event_cord_1' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_ExecuteUbergraph_prop_argm, K2Node_Event_socket_1) == 0x000010, "Member 'Prop_argm_C_ExecuteUbergraph_prop_argm::K2Node_Event_socket_1' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_ExecuteUbergraph_prop_argm, K2Node_Event_sentFrom) == 0x000018, "Member 'Prop_argm_C_ExecuteUbergraph_prop_argm::K2Node_Event_sentFrom' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_ExecuteUbergraph_prop_argm, K2Node_Event_active) == 0x000020, "Member 'Prop_argm_C_ExecuteUbergraph_prop_argm::K2Node_Event_active' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_ExecuteUbergraph_prop_argm, K2Node_Event_cord) == 0x000028, "Member 'Prop_argm_C_ExecuteUbergraph_prop_argm::K2Node_Event_cord' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_ExecuteUbergraph_prop_argm, K2Node_Event_socket) == 0x000030, "Member 'Prop_argm_C_ExecuteUbergraph_prop_argm::K2Node_Event_socket' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_ExecuteUbergraph_prop_argm, K2Node_Event_NewParam) == 0x000038, "Member 'Prop_argm_C_ExecuteUbergraph_prop_argm::K2Node_Event_NewParam' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_ExecuteUbergraph_prop_argm, K2Node_Event_owner) == 0x000040, "Member 'Prop_argm_C_ExecuteUbergraph_prop_argm::K2Node_Event_owner' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_ExecuteUbergraph_prop_argm, K2Node_Event_index) == 0x000048, "Member 'Prop_argm_C_ExecuteUbergraph_prop_argm::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_ExecuteUbergraph_prop_argm, K2Node_Event_player) == 0x000050, "Member 'Prop_argm_C_ExecuteUbergraph_prop_argm::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_ExecuteUbergraph_prop_argm, K2Node_Event_hit) == 0x000058, "Member 'Prop_argm_C_ExecuteUbergraph_prop_argm::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_ExecuteUbergraph_prop_argm, K2Node_Event_action) == 0x0000E0, "Member 'Prop_argm_C_ExecuteUbergraph_prop_argm::K2Node_Event_action' has a wrong offset!");

// Function prop_argm.prop_argm_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct Prop_argm_C_RunTrigger final
{
public:
	class AActor*                                 Param_Owner;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_argm_C_RunTrigger) == 0x000008, "Wrong alignment on Prop_argm_C_RunTrigger");
static_assert(sizeof(Prop_argm_C_RunTrigger) == 0x000010, "Wrong size on Prop_argm_C_RunTrigger");
static_assert(offsetof(Prop_argm_C_RunTrigger, Param_Owner) == 0x000000, "Member 'Prop_argm_C_RunTrigger::Param_Owner' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_RunTrigger, Param_Index) == 0x000008, "Member 'Prop_argm_C_RunTrigger::Param_Index' has a wrong offset!");

// Function prop_argm.prop_argm_C.set_ignoreSave_trigger
// 0x0001 (0x0001 - 0x0000)
struct Prop_argm_C_Set_ignoreSave_trigger final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_argm_C_Set_ignoreSave_trigger) == 0x000001, "Wrong alignment on Prop_argm_C_Set_ignoreSave_trigger");
static_assert(sizeof(Prop_argm_C_Set_ignoreSave_trigger) == 0x000001, "Wrong size on Prop_argm_C_Set_ignoreSave_trigger");
static_assert(offsetof(Prop_argm_C_Set_ignoreSave_trigger, NewParam) == 0x000000, "Member 'Prop_argm_C_Set_ignoreSave_trigger::NewParam' has a wrong offset!");

// Function prop_argm.prop_argm_C.cordPlugged
// 0x0010 (0x0010 - 0x0000)
struct Prop_argm_C_CordPlugged final
{
public:
	class ACord_C*                                Cord;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACordSocket_C*                          Socket;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_argm_C_CordPlugged) == 0x000008, "Wrong alignment on Prop_argm_C_CordPlugged");
static_assert(sizeof(Prop_argm_C_CordPlugged) == 0x000010, "Wrong size on Prop_argm_C_CordPlugged");
static_assert(offsetof(Prop_argm_C_CordPlugged, Cord) == 0x000000, "Member 'Prop_argm_C_CordPlugged::Cord' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_CordPlugged, Socket) == 0x000008, "Member 'Prop_argm_C_CordPlugged::Socket' has a wrong offset!");

// Function prop_argm.prop_argm_C.setActiveTrigger
// 0x0010 (0x0010 - 0x0000)
struct Prop_argm_C_SetActiveTrigger final
{
public:
	class AActor*                                 SentFrom;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_argm_C_SetActiveTrigger) == 0x000008, "Wrong alignment on Prop_argm_C_SetActiveTrigger");
static_assert(sizeof(Prop_argm_C_SetActiveTrigger) == 0x000010, "Wrong size on Prop_argm_C_SetActiveTrigger");
static_assert(offsetof(Prop_argm_C_SetActiveTrigger, SentFrom) == 0x000000, "Member 'Prop_argm_C_SetActiveTrigger::SentFrom' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_SetActiveTrigger, Active) == 0x000008, "Member 'Prop_argm_C_SetActiveTrigger::Active' has a wrong offset!");

// Function prop_argm.prop_argm_C.cordUnplugged
// 0x0010 (0x0010 - 0x0000)
struct Prop_argm_C_CordUnplugged final
{
public:
	class ACord_C*                                Cord;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACordSocket_C*                          Socket;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_argm_C_CordUnplugged) == 0x000008, "Wrong alignment on Prop_argm_C_CordUnplugged");
static_assert(sizeof(Prop_argm_C_CordUnplugged) == 0x000010, "Wrong size on Prop_argm_C_CordUnplugged");
static_assert(offsetof(Prop_argm_C_CordUnplugged, Cord) == 0x000000, "Member 'Prop_argm_C_CordUnplugged::Cord' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_CordUnplugged, Socket) == 0x000008, "Member 'Prop_argm_C_CordUnplugged::Socket' has a wrong offset!");

// Function prop_argm.prop_argm_C.setmats
// 0x0018 (0x0018 - 0x0000)
struct Prop_argm_C_Setmats final
{
public:
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item_1;                         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_argm_C_Setmats) == 0x000008, "Wrong alignment on Prop_argm_C_Setmats");
static_assert(sizeof(Prop_argm_C_Setmats) == 0x000018, "Wrong size on Prop_argm_C_Setmats");
static_assert(offsetof(Prop_argm_C_Setmats, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000000, "Member 'Prop_argm_C_Setmats::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_Setmats, CallFunc_Array_Get_Item) == 0x000008, "Member 'Prop_argm_C_Setmats::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_Setmats, CallFunc_Array_Get_Item_1) == 0x000010, "Member 'Prop_argm_C_Setmats::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_argm.prop_argm_C.ignoreSave_trigger
// 0x0001 (0x0001 - 0x0000)
struct Prop_argm_C_IgnoreSave_trigger final
{
public:
	bool                                          Ignore;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_argm_C_IgnoreSave_trigger) == 0x000001, "Wrong alignment on Prop_argm_C_IgnoreSave_trigger");
static_assert(sizeof(Prop_argm_C_IgnoreSave_trigger) == 0x000001, "Wrong size on Prop_argm_C_IgnoreSave_trigger");
static_assert(offsetof(Prop_argm_C_IgnoreSave_trigger, Ignore) == 0x000000, "Member 'Prop_argm_C_IgnoreSave_trigger::Ignore' has a wrong offset!");

// Function prop_argm.prop_argm_C.loadTriggerData
// 0x0100 (0x0100 - 0x0000)
struct Prop_argm_C_LoadTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_argm_C_LoadTriggerData) == 0x000010, "Wrong alignment on Prop_argm_C_LoadTriggerData");
static_assert(sizeof(Prop_argm_C_LoadTriggerData) == 0x000100, "Wrong size on Prop_argm_C_LoadTriggerData");
static_assert(offsetof(Prop_argm_C_LoadTriggerData, Data) == 0x000000, "Member 'Prop_argm_C_LoadTriggerData::Data' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_LoadTriggerData, Return) == 0x0000F0, "Member 'Prop_argm_C_LoadTriggerData::Return' has a wrong offset!");

// Function prop_argm.prop_argm_C.getTriggerData
// 0x00F0 (0x00F0 - 0x0000)
struct Prop_argm_C_GetTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(Prop_argm_C_GetTriggerData) == 0x000010, "Wrong alignment on Prop_argm_C_GetTriggerData");
static_assert(sizeof(Prop_argm_C_GetTriggerData) == 0x0000F0, "Wrong size on Prop_argm_C_GetTriggerData");
static_assert(offsetof(Prop_argm_C_GetTriggerData, Data) == 0x000000, "Member 'Prop_argm_C_GetTriggerData::Data' has a wrong offset!");

// Function prop_argm.prop_argm_C.gatherDataFromKeyT
// 0x0001 (0x0001 - 0x0000)
struct Prop_argm_C_GatherDataFromKeyT final
{
public:
	bool                                          Gather;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_argm_C_GatherDataFromKeyT) == 0x000001, "Wrong alignment on Prop_argm_C_GatherDataFromKeyT");
static_assert(sizeof(Prop_argm_C_GatherDataFromKeyT) == 0x000001, "Wrong size on Prop_argm_C_GatherDataFromKeyT");
static_assert(offsetof(Prop_argm_C_GatherDataFromKeyT, Gather) == 0x000000, "Member 'Prop_argm_C_GatherDataFromKeyT::Gather' has a wrong offset!");

// Function prop_argm.prop_argm_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_argm_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_argm_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_argm_C_ActionOptionIndex");
static_assert(sizeof(Prop_argm_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_argm_C_ActionOptionIndex");
static_assert(offsetof(Prop_argm_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_argm_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_ActionOptionIndex, Param_Hit) == 0x000008, "Member 'Prop_argm_C_ActionOptionIndex::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_ActionOptionIndex, Action) == 0x000090, "Member 'Prop_argm_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_argm.prop_argm_C.UserConstructionScript
// 0x0010 (0x0010 - 0x0000)
struct Prop_argm_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_argm_C_UserConstructionScript) == 0x000008, "Wrong alignment on Prop_argm_C_UserConstructionScript");
static_assert(sizeof(Prop_argm_C_UserConstructionScript) == 0x000010, "Wrong size on Prop_argm_C_UserConstructionScript");
static_assert(offsetof(Prop_argm_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'Prop_argm_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000008, "Member 'Prop_argm_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");

// Function prop_argm.prop_argm_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct Prop_argm_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mBool                          CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_argm_C_LoadData) == 0x000010, "Wrong alignment on Prop_argm_C_LoadData");
static_assert(sizeof(Prop_argm_C_LoadData) == 0x0000E0, "Wrong size on Prop_argm_C_LoadData");
static_assert(offsetof(Prop_argm_C_LoadData, Data) == 0x000000, "Member 'Prop_argm_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_LoadData, Return) == 0x0000C0, "Member 'Prop_argm_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_argm_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_argm_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_argm_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_argm.prop_argm_C.getData
// 0x0290 (0x0290 - 0x0000)
struct Prop_argm_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mBool                          K2Node_MakeStruct_struct_mBool;                    // 0x0190(0x0010)(HasGetValueTypeHash)
	struct FStruct_mBool                          CallFunc_Array_Get_Item;                           // 0x01A0(0x0010)(HasGetValueTypeHash)
	struct FStruct_mBool                          CallFunc_Array_Get_Item_1;                         // 0x01B0(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mBool>                  K2Node_MakeArray_Array_1;                          // 0x01C0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01D0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_argm_C_GetData) == 0x000010, "Wrong alignment on Prop_argm_C_GetData");
static_assert(sizeof(Prop_argm_C_GetData) == 0x000290, "Wrong size on Prop_argm_C_GetData");
static_assert(offsetof(Prop_argm_C_GetData, Data) == 0x000000, "Member 'Prop_argm_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Prop_argm_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Prop_argm_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_GetData, K2Node_MakeStruct_struct_mBool) == 0x000190, "Member 'Prop_argm_C_GetData::K2Node_MakeStruct_struct_mBool' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_GetData, CallFunc_Array_Get_Item) == 0x0001A0, "Member 'Prop_argm_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_GetData, CallFunc_Array_Get_Item_1) == 0x0001B0, "Member 'Prop_argm_C_GetData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_GetData, K2Node_MakeArray_Array_1) == 0x0001C0, "Member 'Prop_argm_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_argm_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001D0, "Member 'Prop_argm_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}

