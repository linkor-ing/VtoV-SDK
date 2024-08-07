#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Int_save1

#include "Basic.hpp"

#include "Struct_save_structs.hpp"


namespace SDK::Params
{

// Function int_save1.int_save1_C.getData
// 0x00C0 (0x00C0 - 0x0000)
struct Int_save1_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
};
static_assert(alignof(Int_save1_C_GetData) == 0x000010, "Wrong alignment on Int_save1_C_GetData");
static_assert(sizeof(Int_save1_C_GetData) == 0x0000C0, "Wrong size on Int_save1_C_GetData");
static_assert(offsetof(Int_save1_C_GetData, Data) == 0x000000, "Member 'Int_save1_C_GetData::Data' has a wrong offset!");

// Function int_save1.int_save1_C.loadData
// 0x00D0 (0x00D0 - 0x0000)
struct Int_save1_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Int_save1_C_LoadData) == 0x000010, "Wrong alignment on Int_save1_C_LoadData");
static_assert(sizeof(Int_save1_C_LoadData) == 0x0000D0, "Wrong size on Int_save1_C_LoadData");
static_assert(offsetof(Int_save1_C_LoadData, Data) == 0x000000, "Member 'Int_save1_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Int_save1_C_LoadData, Return) == 0x0000C0, "Member 'Int_save1_C_LoadData::Return' has a wrong offset!");

// Function int_save1.int_save1_C.ignoreSave
// 0x0001 (0x0001 - 0x0000)
struct Int_save1_C_IgnoreSave final
{
public:
	bool                                          Param_IgnoreSave;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Int_save1_C_IgnoreSave) == 0x000001, "Wrong alignment on Int_save1_C_IgnoreSave");
static_assert(sizeof(Int_save1_C_IgnoreSave) == 0x000001, "Wrong size on Int_save1_C_IgnoreSave");
static_assert(offsetof(Int_save1_C_IgnoreSave, Param_IgnoreSave) == 0x000000, "Member 'Int_save1_C_IgnoreSave::Param_IgnoreSave' has a wrong offset!");

// Function int_save1.int_save1_C.setIgnoreSave
// 0x0001 (0x0001 - 0x0000)
struct Int_save1_C_SetIgnoreSave final
{
public:
	bool                                          Ignore;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Int_save1_C_SetIgnoreSave) == 0x000001, "Wrong alignment on Int_save1_C_SetIgnoreSave");
static_assert(sizeof(Int_save1_C_SetIgnoreSave) == 0x000001, "Wrong size on Int_save1_C_SetIgnoreSave");
static_assert(offsetof(Int_save1_C_SetIgnoreSave, Ignore) == 0x000000, "Member 'Int_save1_C_SetIgnoreSave::Ignore' has a wrong offset!");

// Function int_save1.int_save1_C.skipPreDelete
// 0x0001 (0x0001 - 0x0000)
struct Int_save1_C_SkipPreDelete final
{
public:
	bool                                          Skip;                                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Int_save1_C_SkipPreDelete) == 0x000001, "Wrong alignment on Int_save1_C_SkipPreDelete");
static_assert(sizeof(Int_save1_C_SkipPreDelete) == 0x000001, "Wrong size on Int_save1_C_SkipPreDelete");
static_assert(offsetof(Int_save1_C_SkipPreDelete, Skip) == 0x000000, "Member 'Int_save1_C_SkipPreDelete::Skip' has a wrong offset!");

// Function int_save1.int_save1_C.gatherDataFromKey
// 0x0001 (0x0001 - 0x0000)
struct Int_save1_C_GatherDataFromKey final
{
public:
	bool                                          Gather;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Int_save1_C_GatherDataFromKey) == 0x000001, "Wrong alignment on Int_save1_C_GatherDataFromKey");
static_assert(sizeof(Int_save1_C_GatherDataFromKey) == 0x000001, "Wrong size on Int_save1_C_GatherDataFromKey");
static_assert(offsetof(Int_save1_C_GatherDataFromKey, Gather) == 0x000000, "Member 'Int_save1_C_GatherDataFromKey::Gather' has a wrong offset!");

}

