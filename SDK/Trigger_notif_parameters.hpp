#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_notif

#include "Basic.hpp"

#include "Struct_triggerSave_structs.hpp"


namespace SDK::Params
{

// Function trigger_notif.trigger_notif_C.getTriggerData
// 0x02F0 (0x02F0 - 0x0000)
struct Trigger_notif_C_GetTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_triggerSave                    CallFunc_getTriggerData_data;                      // 0x00F0(0x00F0)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x01F0(0x0010)(ReferenceParm)
	struct FStruct_triggerSave                    K2Node_SetFieldsInStruct_StructOut;                // 0x0200(0x00F0)(HasGetValueTypeHash)
};
static_assert(alignof(Trigger_notif_C_GetTriggerData) == 0x000010, "Wrong alignment on Trigger_notif_C_GetTriggerData");
static_assert(sizeof(Trigger_notif_C_GetTriggerData) == 0x0002F0, "Wrong size on Trigger_notif_C_GetTriggerData");
static_assert(offsetof(Trigger_notif_C_GetTriggerData, Data) == 0x000000, "Member 'Trigger_notif_C_GetTriggerData::Data' has a wrong offset!");
static_assert(offsetof(Trigger_notif_C_GetTriggerData, CallFunc_getTriggerData_data) == 0x0000F0, "Member 'Trigger_notif_C_GetTriggerData::CallFunc_getTriggerData_data' has a wrong offset!");
static_assert(offsetof(Trigger_notif_C_GetTriggerData, CallFunc_Conv_TextToString_ReturnValue) == 0x0001E0, "Member 'Trigger_notif_C_GetTriggerData::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_notif_C_GetTriggerData, K2Node_MakeArray_Array) == 0x0001F0, "Member 'Trigger_notif_C_GetTriggerData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Trigger_notif_C_GetTriggerData, K2Node_SetFieldsInStruct_StructOut) == 0x000200, "Member 'Trigger_notif_C_GetTriggerData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function trigger_notif.trigger_notif_C.loadTriggerData
// 0x0120 (0x0120 - 0x0000)
struct Trigger_notif_C_LoadTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadTriggerData_return;                   // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43B7[0x6];                                     // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0108(0x0018)()
};
static_assert(alignof(Trigger_notif_C_LoadTriggerData) == 0x000010, "Wrong alignment on Trigger_notif_C_LoadTriggerData");
static_assert(sizeof(Trigger_notif_C_LoadTriggerData) == 0x000120, "Wrong size on Trigger_notif_C_LoadTriggerData");
static_assert(offsetof(Trigger_notif_C_LoadTriggerData, Data) == 0x000000, "Member 'Trigger_notif_C_LoadTriggerData::Data' has a wrong offset!");
static_assert(offsetof(Trigger_notif_C_LoadTriggerData, Return) == 0x0000F0, "Member 'Trigger_notif_C_LoadTriggerData::Return' has a wrong offset!");
static_assert(offsetof(Trigger_notif_C_LoadTriggerData, CallFunc_loadTriggerData_return) == 0x0000F1, "Member 'Trigger_notif_C_LoadTriggerData::CallFunc_loadTriggerData_return' has a wrong offset!");
static_assert(offsetof(Trigger_notif_C_LoadTriggerData, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'Trigger_notif_C_LoadTriggerData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Trigger_notif_C_LoadTriggerData, CallFunc_Conv_StringToText_ReturnValue) == 0x000108, "Member 'Trigger_notif_C_LoadTriggerData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function trigger_notif.trigger_notif_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct Trigger_notif_C_RunTrigger final
{
public:
	class AActor*                                 Param_Owner;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_notif_C_RunTrigger) == 0x000008, "Wrong alignment on Trigger_notif_C_RunTrigger");
static_assert(sizeof(Trigger_notif_C_RunTrigger) == 0x000010, "Wrong size on Trigger_notif_C_RunTrigger");
static_assert(offsetof(Trigger_notif_C_RunTrigger, Param_Owner) == 0x000000, "Member 'Trigger_notif_C_RunTrigger::Param_Owner' has a wrong offset!");
static_assert(offsetof(Trigger_notif_C_RunTrigger, Param_Index) == 0x000008, "Member 'Trigger_notif_C_RunTrigger::Param_Index' has a wrong offset!");

// Function trigger_notif.trigger_notif_C.ExecuteUbergraph_trigger_notif
// 0x0018 (0x0018 - 0x0000)
struct Trigger_notif_C_ExecuteUbergraph_trigger_notif final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43B8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_owner;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_notif_C_ExecuteUbergraph_trigger_notif) == 0x000008, "Wrong alignment on Trigger_notif_C_ExecuteUbergraph_trigger_notif");
static_assert(sizeof(Trigger_notif_C_ExecuteUbergraph_trigger_notif) == 0x000018, "Wrong size on Trigger_notif_C_ExecuteUbergraph_trigger_notif");
static_assert(offsetof(Trigger_notif_C_ExecuteUbergraph_trigger_notif, EntryPoint) == 0x000000, "Member 'Trigger_notif_C_ExecuteUbergraph_trigger_notif::EntryPoint' has a wrong offset!");
static_assert(offsetof(Trigger_notif_C_ExecuteUbergraph_trigger_notif, K2Node_Event_owner) == 0x000008, "Member 'Trigger_notif_C_ExecuteUbergraph_trigger_notif::K2Node_Event_owner' has a wrong offset!");
static_assert(offsetof(Trigger_notif_C_ExecuteUbergraph_trigger_notif, K2Node_Event_index) == 0x000010, "Member 'Trigger_notif_C_ExecuteUbergraph_trigger_notif::K2Node_Event_index' has a wrong offset!");

}
