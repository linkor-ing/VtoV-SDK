#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Int_ttrigger

#include "Basic.hpp"

#include "Struct_triggerSave_structs.hpp"


namespace SDK::Params
{

// Function int_ttrigger.int_ttrigger_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct Int_ttrigger_C_RunTrigger final
{
public:
	class AActor*                                 Owner;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Int_ttrigger_C_RunTrigger) == 0x000008, "Wrong alignment on Int_ttrigger_C_RunTrigger");
static_assert(sizeof(Int_ttrigger_C_RunTrigger) == 0x000010, "Wrong size on Int_ttrigger_C_RunTrigger");
static_assert(offsetof(Int_ttrigger_C_RunTrigger, Owner) == 0x000000, "Member 'Int_ttrigger_C_RunTrigger::Owner' has a wrong offset!");
static_assert(offsetof(Int_ttrigger_C_RunTrigger, Param_Index) == 0x000008, "Member 'Int_ttrigger_C_RunTrigger::Param_Index' has a wrong offset!");

// Function int_ttrigger.int_ttrigger_C.getTriggerData
// 0x00F0 (0x00F0 - 0x0000)
struct Int_ttrigger_C_GetTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(Int_ttrigger_C_GetTriggerData) == 0x000010, "Wrong alignment on Int_ttrigger_C_GetTriggerData");
static_assert(sizeof(Int_ttrigger_C_GetTriggerData) == 0x0000F0, "Wrong size on Int_ttrigger_C_GetTriggerData");
static_assert(offsetof(Int_ttrigger_C_GetTriggerData, Data) == 0x000000, "Member 'Int_ttrigger_C_GetTriggerData::Data' has a wrong offset!");

// Function int_ttrigger.int_ttrigger_C.loadTriggerData
// 0x0100 (0x0100 - 0x0000)
struct Int_ttrigger_C_LoadTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Int_ttrigger_C_LoadTriggerData) == 0x000010, "Wrong alignment on Int_ttrigger_C_LoadTriggerData");
static_assert(sizeof(Int_ttrigger_C_LoadTriggerData) == 0x000100, "Wrong size on Int_ttrigger_C_LoadTriggerData");
static_assert(offsetof(Int_ttrigger_C_LoadTriggerData, Data) == 0x000000, "Member 'Int_ttrigger_C_LoadTriggerData::Data' has a wrong offset!");
static_assert(offsetof(Int_ttrigger_C_LoadTriggerData, Return) == 0x0000F0, "Member 'Int_ttrigger_C_LoadTriggerData::Return' has a wrong offset!");

// Function int_ttrigger.int_ttrigger_C.ignoreSave_trigger
// 0x0001 (0x0001 - 0x0000)
struct Int_ttrigger_C_IgnoreSave_trigger final
{
public:
	bool                                          Ignore;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Int_ttrigger_C_IgnoreSave_trigger) == 0x000001, "Wrong alignment on Int_ttrigger_C_IgnoreSave_trigger");
static_assert(sizeof(Int_ttrigger_C_IgnoreSave_trigger) == 0x000001, "Wrong size on Int_ttrigger_C_IgnoreSave_trigger");
static_assert(offsetof(Int_ttrigger_C_IgnoreSave_trigger, Ignore) == 0x000000, "Member 'Int_ttrigger_C_IgnoreSave_trigger::Ignore' has a wrong offset!");

// Function int_ttrigger.int_ttrigger_C.set_ignoreSave_trigger
// 0x0001 (0x0001 - 0x0000)
struct Int_ttrigger_C_Set_ignoreSave_trigger final
{
public:
	bool                                          NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Int_ttrigger_C_Set_ignoreSave_trigger) == 0x000001, "Wrong alignment on Int_ttrigger_C_Set_ignoreSave_trigger");
static_assert(sizeof(Int_ttrigger_C_Set_ignoreSave_trigger) == 0x000001, "Wrong size on Int_ttrigger_C_Set_ignoreSave_trigger");
static_assert(offsetof(Int_ttrigger_C_Set_ignoreSave_trigger, NewParam) == 0x000000, "Member 'Int_ttrigger_C_Set_ignoreSave_trigger::NewParam' has a wrong offset!");

// Function int_ttrigger.int_ttrigger_C.cordPlugged
// 0x0010 (0x0010 - 0x0000)
struct Int_ttrigger_C_CordPlugged final
{
public:
	class ACord_C*                                Cord;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACordSocket_C*                          Socket;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Int_ttrigger_C_CordPlugged) == 0x000008, "Wrong alignment on Int_ttrigger_C_CordPlugged");
static_assert(sizeof(Int_ttrigger_C_CordPlugged) == 0x000010, "Wrong size on Int_ttrigger_C_CordPlugged");
static_assert(offsetof(Int_ttrigger_C_CordPlugged, Cord) == 0x000000, "Member 'Int_ttrigger_C_CordPlugged::Cord' has a wrong offset!");
static_assert(offsetof(Int_ttrigger_C_CordPlugged, Socket) == 0x000008, "Member 'Int_ttrigger_C_CordPlugged::Socket' has a wrong offset!");

// Function int_ttrigger.int_ttrigger_C.cordUnplugged
// 0x0010 (0x0010 - 0x0000)
struct Int_ttrigger_C_CordUnplugged final
{
public:
	class ACord_C*                                Cord;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACordSocket_C*                          Socket;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Int_ttrigger_C_CordUnplugged) == 0x000008, "Wrong alignment on Int_ttrigger_C_CordUnplugged");
static_assert(sizeof(Int_ttrigger_C_CordUnplugged) == 0x000010, "Wrong size on Int_ttrigger_C_CordUnplugged");
static_assert(offsetof(Int_ttrigger_C_CordUnplugged, Cord) == 0x000000, "Member 'Int_ttrigger_C_CordUnplugged::Cord' has a wrong offset!");
static_assert(offsetof(Int_ttrigger_C_CordUnplugged, Socket) == 0x000008, "Member 'Int_ttrigger_C_CordUnplugged::Socket' has a wrong offset!");

// Function int_ttrigger.int_ttrigger_C.setActiveTrigger
// 0x0010 (0x0010 - 0x0000)
struct Int_ttrigger_C_SetActiveTrigger final
{
public:
	class AActor*                                 SentFrom;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Int_ttrigger_C_SetActiveTrigger) == 0x000008, "Wrong alignment on Int_ttrigger_C_SetActiveTrigger");
static_assert(sizeof(Int_ttrigger_C_SetActiveTrigger) == 0x000010, "Wrong size on Int_ttrigger_C_SetActiveTrigger");
static_assert(offsetof(Int_ttrigger_C_SetActiveTrigger, SentFrom) == 0x000000, "Member 'Int_ttrigger_C_SetActiveTrigger::SentFrom' has a wrong offset!");
static_assert(offsetof(Int_ttrigger_C_SetActiveTrigger, Active) == 0x000008, "Member 'Int_ttrigger_C_SetActiveTrigger::Active' has a wrong offset!");

}
