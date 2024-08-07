#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EggyWolfgang

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Struct_mFloat_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function eggyWolfgang.eggyWolfgang_C.ExecuteUbergraph_eggyWolfgang
// 0x0060 (0x0060 - 0x0000)
struct EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AParentWolfgang_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatMinusEquals_FloatOut;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang) == 0x000010, "Wrong alignment on EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang");
static_assert(sizeof(EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang) == 0x000060, "Wrong size on EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang");
static_assert(offsetof(EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang, EntryPoint) == 0x000000, "Member 'EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang::EntryPoint' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000040, "Member 'EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang, K2Node_Event_DeltaSeconds) == 0x000048, "Member 'EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang, CallFunc_FinishSpawningActor_ReturnValue) == 0x000050, "Member 'EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang, CallFunc_VictoryFloatMinusEquals_FloatOut) == 0x000058, "Member 'EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang::CallFunc_VictoryFloatMinusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00005C, "Member 'EggyWolfgang_C_ExecuteUbergraph_eggyWolfgang::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function eggyWolfgang.eggyWolfgang_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct EggyWolfgang_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EggyWolfgang_C_ReceiveTick) == 0x000004, "Wrong alignment on EggyWolfgang_C_ReceiveTick");
static_assert(sizeof(EggyWolfgang_C_ReceiveTick) == 0x000004, "Wrong size on EggyWolfgang_C_ReceiveTick");
static_assert(offsetof(EggyWolfgang_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'EggyWolfgang_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function eggyWolfgang.eggyWolfgang_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct EggyWolfgang_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mFloat                         CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EggyWolfgang_C_LoadData) == 0x000010, "Wrong alignment on EggyWolfgang_C_LoadData");
static_assert(sizeof(EggyWolfgang_C_LoadData) == 0x0000E0, "Wrong size on EggyWolfgang_C_LoadData");
static_assert(offsetof(EggyWolfgang_C_LoadData, Data) == 0x000000, "Member 'EggyWolfgang_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_LoadData, Return) == 0x0000C0, "Member 'EggyWolfgang_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'EggyWolfgang_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'EggyWolfgang_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'EggyWolfgang_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function eggyWolfgang.eggyWolfgang_C.getData
// 0x0270 (0x0270 - 0x0000)
struct EggyWolfgang_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<float>                                 K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mFloat                         K2Node_MakeStruct_struct_mFloat;                   // 0x0190(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mFloat>                 K2Node_MakeArray_Array_1;                          // 0x01A0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01B0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(EggyWolfgang_C_GetData) == 0x000010, "Wrong alignment on EggyWolfgang_C_GetData");
static_assert(sizeof(EggyWolfgang_C_GetData) == 0x000270, "Wrong size on EggyWolfgang_C_GetData");
static_assert(offsetof(EggyWolfgang_C_GetData, Data) == 0x000000, "Member 'EggyWolfgang_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'EggyWolfgang_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'EggyWolfgang_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_GetData, K2Node_MakeStruct_struct_mFloat) == 0x000190, "Member 'EggyWolfgang_C_GetData::K2Node_MakeStruct_struct_mFloat' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_GetData, K2Node_MakeArray_Array_1) == 0x0001A0, "Member 'EggyWolfgang_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(EggyWolfgang_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001B0, "Member 'EggyWolfgang_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}

