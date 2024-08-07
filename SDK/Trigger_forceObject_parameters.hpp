#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_forceObject

#include "Basic.hpp"

#include "Struct_triggerSave_structs.hpp"


namespace SDK::Params
{

// Function trigger_forceObject.trigger_forceObject_C.getTriggerData
// 0x02F0 (0x02F0 - 0x0000)
struct Trigger_forceObject_C_GetTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_triggerSave                    CallFunc_getTriggerData_data;                      // 0x00F0(0x00F0)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x01E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x01F0(0x0010)(ReferenceParm)
	struct FStruct_triggerSave                    K2Node_SetFieldsInStruct_StructOut;                // 0x0200(0x00F0)(HasGetValueTypeHash)
};
static_assert(alignof(Trigger_forceObject_C_GetTriggerData) == 0x000010, "Wrong alignment on Trigger_forceObject_C_GetTriggerData");
static_assert(sizeof(Trigger_forceObject_C_GetTriggerData) == 0x0002F0, "Wrong size on Trigger_forceObject_C_GetTriggerData");
static_assert(offsetof(Trigger_forceObject_C_GetTriggerData, Data) == 0x000000, "Member 'Trigger_forceObject_C_GetTriggerData::Data' has a wrong offset!");
static_assert(offsetof(Trigger_forceObject_C_GetTriggerData, CallFunc_getTriggerData_data) == 0x0000F0, "Member 'Trigger_forceObject_C_GetTriggerData::CallFunc_getTriggerData_data' has a wrong offset!");
static_assert(offsetof(Trigger_forceObject_C_GetTriggerData, CallFunc_Conv_NameToString_ReturnValue) == 0x0001E0, "Member 'Trigger_forceObject_C_GetTriggerData::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_forceObject_C_GetTriggerData, K2Node_MakeArray_Array) == 0x0001F0, "Member 'Trigger_forceObject_C_GetTriggerData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Trigger_forceObject_C_GetTriggerData, K2Node_SetFieldsInStruct_StructOut) == 0x000200, "Member 'Trigger_forceObject_C_GetTriggerData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function trigger_forceObject.trigger_forceObject_C.loadTriggerData
// 0x0110 (0x0110 - 0x0000)
struct Trigger_forceObject_C_LoadTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadTriggerData_return;                   // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F2[0x6];                                       // 0x00F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item;                           // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_forceObject_C_LoadTriggerData) == 0x000010, "Wrong alignment on Trigger_forceObject_C_LoadTriggerData");
static_assert(sizeof(Trigger_forceObject_C_LoadTriggerData) == 0x000110, "Wrong size on Trigger_forceObject_C_LoadTriggerData");
static_assert(offsetof(Trigger_forceObject_C_LoadTriggerData, Data) == 0x000000, "Member 'Trigger_forceObject_C_LoadTriggerData::Data' has a wrong offset!");
static_assert(offsetof(Trigger_forceObject_C_LoadTriggerData, Return) == 0x0000F0, "Member 'Trigger_forceObject_C_LoadTriggerData::Return' has a wrong offset!");
static_assert(offsetof(Trigger_forceObject_C_LoadTriggerData, CallFunc_loadTriggerData_return) == 0x0000F1, "Member 'Trigger_forceObject_C_LoadTriggerData::CallFunc_loadTriggerData_return' has a wrong offset!");
static_assert(offsetof(Trigger_forceObject_C_LoadTriggerData, CallFunc_Array_Get_Item) == 0x0000F8, "Member 'Trigger_forceObject_C_LoadTriggerData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Trigger_forceObject_C_LoadTriggerData, CallFunc_Conv_StringToName_ReturnValue) == 0x000108, "Member 'Trigger_forceObject_C_LoadTriggerData::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

// Function trigger_forceObject.trigger_forceObject_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct Trigger_forceObject_C_RunTrigger final
{
public:
	class AActor*                                 Param_Owner;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_forceObject_C_RunTrigger) == 0x000008, "Wrong alignment on Trigger_forceObject_C_RunTrigger");
static_assert(sizeof(Trigger_forceObject_C_RunTrigger) == 0x000010, "Wrong size on Trigger_forceObject_C_RunTrigger");
static_assert(offsetof(Trigger_forceObject_C_RunTrigger, Param_Owner) == 0x000000, "Member 'Trigger_forceObject_C_RunTrigger::Param_Owner' has a wrong offset!");
static_assert(offsetof(Trigger_forceObject_C_RunTrigger, Param_Index) == 0x000008, "Member 'Trigger_forceObject_C_RunTrigger::Param_Index' has a wrong offset!");

// Function trigger_forceObject.trigger_forceObject_C.ExecuteUbergraph_trigger_forceObject
// 0x0020 (0x0020 - 0x0000)
struct Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_owner;                                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject) == 0x000008, "Wrong alignment on Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject");
static_assert(sizeof(Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject) == 0x000020, "Wrong size on Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject");
static_assert(offsetof(Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject, EntryPoint) == 0x000000, "Member 'Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject::EntryPoint' has a wrong offset!");
static_assert(offsetof(Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000008, "Member 'Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject, K2Node_Event_owner) == 0x000010, "Member 'Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject::K2Node_Event_owner' has a wrong offset!");
static_assert(offsetof(Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject, K2Node_Event_index) == 0x000018, "Member 'Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject, CallFunc_Array_Add_ReturnValue) == 0x00001C, "Member 'Trigger_forceObject_C_ExecuteUbergraph_trigger_forceObject::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

