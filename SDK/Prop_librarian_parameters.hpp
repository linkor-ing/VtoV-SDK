#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_librarian

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Struct_mInt_structs.hpp"
#include "Struct_mBool_structs.hpp"


namespace SDK::Params
{

// Function prop_librarian.prop_librarian_C.ExecuteUbergraph_prop_librarian
// 0x0014 (0x0014 - 0x0000)
struct Prop_librarian_C_ExecuteUbergraph_prop_librarian final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3825[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_librarian_C_ExecuteUbergraph_prop_librarian) == 0x000004, "Wrong alignment on Prop_librarian_C_ExecuteUbergraph_prop_librarian");
static_assert(sizeof(Prop_librarian_C_ExecuteUbergraph_prop_librarian) == 0x000014, "Wrong size on Prop_librarian_C_ExecuteUbergraph_prop_librarian");
static_assert(offsetof(Prop_librarian_C_ExecuteUbergraph_prop_librarian, EntryPoint) == 0x000000, "Member 'Prop_librarian_C_ExecuteUbergraph_prop_librarian::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_ExecuteUbergraph_prop_librarian, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Prop_librarian_C_ExecuteUbergraph_prop_librarian::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_ExecuteUbergraph_prop_librarian, CallFunc_Greater_IntInt_ReturnValue) == 0x000008, "Member 'Prop_librarian_C_ExecuteUbergraph_prop_librarian::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_ExecuteUbergraph_prop_librarian, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'Prop_librarian_C_ExecuteUbergraph_prop_librarian::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_ExecuteUbergraph_prop_librarian, Temp_int_Variable) == 0x000010, "Member 'Prop_librarian_C_ExecuteUbergraph_prop_librarian::Temp_int_Variable' has a wrong offset!");

// Function prop_librarian.prop_librarian_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_librarian_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_librarian_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_librarian_C_ReceiveTick");
static_assert(sizeof(Prop_librarian_C_ReceiveTick) == 0x000004, "Wrong size on Prop_librarian_C_ReceiveTick");
static_assert(offsetof(Prop_librarian_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_librarian_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function prop_librarian.prop_librarian_C.upd
// 0x0004 (0x0004 - 0x0000)
struct Prop_librarian_C_Upd final
{
public:
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_librarian_C_Upd) == 0x000004, "Wrong alignment on Prop_librarian_C_Upd");
static_assert(sizeof(Prop_librarian_C_Upd) == 0x000004, "Wrong size on Prop_librarian_C_Upd");
static_assert(offsetof(Prop_librarian_C_Upd, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000000, "Member 'Prop_librarian_C_Upd::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");

// Function prop_librarian.prop_librarian_C.loadData
// 0x00F0 (0x00F0 - 0x0000)
struct Prop_librarian_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3826[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mInt                           CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	struct FStruct_mBool                          CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0010)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_2;                         // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item_3;                         // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_librarian_C_LoadData) == 0x000010, "Wrong alignment on Prop_librarian_C_LoadData");
static_assert(sizeof(Prop_librarian_C_LoadData) == 0x0000F0, "Wrong size on Prop_librarian_C_LoadData");
static_assert(offsetof(Prop_librarian_C_LoadData, Data) == 0x000000, "Member 'Prop_librarian_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_LoadData, Return) == 0x0000C0, "Member 'Prop_librarian_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_librarian_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_librarian_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_librarian_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_LoadData, CallFunc_Array_Get_Item_2) == 0x0000E8, "Member 'Prop_librarian_C_LoadData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_LoadData, CallFunc_Array_Get_Item_3) == 0x0000EC, "Member 'Prop_librarian_C_LoadData::CallFunc_Array_Get_Item_3' has a wrong offset!");

// Function prop_librarian.prop_librarian_C.getData
// 0x02B0 (0x02B0 - 0x0000)
struct Prop_librarian_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	TArray<bool>                                  K2Node_MakeArray_Array_1;                          // 0x00D0(0x0010)(ReferenceParm)
	struct FStruct_mInt                           K2Node_MakeStruct_struct_mInt;                     // 0x00E0(0x0010)(HasGetValueTypeHash)
	struct FStruct_mBool                          K2Node_MakeStruct_struct_mBool;                    // 0x00F0(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mInt>                   K2Node_MakeArray_Array_2;                          // 0x0100(0x0010)(ReferenceParm)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x0110(0x00C0)(HasGetValueTypeHash)
	struct FStruct_mBool                          CallFunc_Array_Get_Item;                           // 0x01D0(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mBool>                  K2Node_MakeArray_Array_3;                          // 0x01E0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01F0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_librarian_C_GetData) == 0x000010, "Wrong alignment on Prop_librarian_C_GetData");
static_assert(sizeof(Prop_librarian_C_GetData) == 0x0002B0, "Wrong size on Prop_librarian_C_GetData");
static_assert(offsetof(Prop_librarian_C_GetData, Data) == 0x000000, "Member 'Prop_librarian_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_GetData, K2Node_MakeArray_Array) == 0x0000C0, "Member 'Prop_librarian_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_GetData, K2Node_MakeArray_Array_1) == 0x0000D0, "Member 'Prop_librarian_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_GetData, K2Node_MakeStruct_struct_mInt) == 0x0000E0, "Member 'Prop_librarian_C_GetData::K2Node_MakeStruct_struct_mInt' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_GetData, K2Node_MakeStruct_struct_mBool) == 0x0000F0, "Member 'Prop_librarian_C_GetData::K2Node_MakeStruct_struct_mBool' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_GetData, K2Node_MakeArray_Array_2) == 0x000100, "Member 'Prop_librarian_C_GetData::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_GetData, CallFunc_getData_data) == 0x000110, "Member 'Prop_librarian_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_GetData, CallFunc_Array_Get_Item) == 0x0001D0, "Member 'Prop_librarian_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_GetData, K2Node_MakeArray_Array_3) == 0x0001E0, "Member 'Prop_librarian_C_GetData::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(Prop_librarian_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001F0, "Member 'Prop_librarian_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}

