#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_coffeeBag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Struct_mInt_structs.hpp"


namespace SDK::Params
{

// Function prop_coffeeBag.prop_coffeeBag_C.lookAt
// 0x0108 (0x0108 - 0x0000)
struct Prop_coffeeBag_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B2E[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00B0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_coffeeBag_C_LookAt) == 0x000008, "Wrong alignment on Prop_coffeeBag_C_LookAt");
static_assert(sizeof(Prop_coffeeBag_C_LookAt) == 0x000108, "Wrong size on Prop_coffeeBag_C_LookAt");
static_assert(offsetof(Prop_coffeeBag_C_LookAt, Player) == 0x000000, "Member 'Prop_coffeeBag_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_LookAt, Param_Hit) == 0x000008, "Member 'Prop_coffeeBag_C_LookAt::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_LookAt, Return) == 0x000090, "Member 'Prop_coffeeBag_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_LookAt, Text) == 0x000098, "Member 'Prop_coffeeBag_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Prop_coffeeBag_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_LookAt, CallFunc_MakeLiteralText_ReturnValue) == 0x0000B0, "Member 'Prop_coffeeBag_C_LookAt::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x0000C8, "Member 'Prop_coffeeBag_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_LookAt, CallFunc_Conv_IntToString_ReturnValue) == 0x0000D8, "Member 'Prop_coffeeBag_C_LookAt::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_LookAt, CallFunc_Concat_StrStr_ReturnValue) == 0x0000E8, "Member 'Prop_coffeeBag_C_LookAt::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_LookAt, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000F8, "Member 'Prop_coffeeBag_C_LookAt::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function prop_coffeeBag.prop_coffeeBag_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct Prop_coffeeBag_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B2F[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mInt                           CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_coffeeBag_C_LoadData) == 0x000010, "Wrong alignment on Prop_coffeeBag_C_LoadData");
static_assert(sizeof(Prop_coffeeBag_C_LoadData) == 0x0000E0, "Wrong size on Prop_coffeeBag_C_LoadData");
static_assert(offsetof(Prop_coffeeBag_C_LoadData, Data) == 0x000000, "Member 'Prop_coffeeBag_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_LoadData, Return) == 0x0000C0, "Member 'Prop_coffeeBag_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_coffeeBag_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_coffeeBag_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_coffeeBag_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_coffeeBag.prop_coffeeBag_C.getData
// 0x0270 (0x0270 - 0x0000)
struct Prop_coffeeBag_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mInt                           K2Node_MakeStruct_struct_mInt;                     // 0x0190(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mInt>                   K2Node_MakeArray_Array_1;                          // 0x01A0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01B0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_coffeeBag_C_GetData) == 0x000010, "Wrong alignment on Prop_coffeeBag_C_GetData");
static_assert(sizeof(Prop_coffeeBag_C_GetData) == 0x000270, "Wrong size on Prop_coffeeBag_C_GetData");
static_assert(offsetof(Prop_coffeeBag_C_GetData, Data) == 0x000000, "Member 'Prop_coffeeBag_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Prop_coffeeBag_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Prop_coffeeBag_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_GetData, K2Node_MakeStruct_struct_mInt) == 0x000190, "Member 'Prop_coffeeBag_C_GetData::K2Node_MakeStruct_struct_mInt' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_GetData, K2Node_MakeArray_Array_1) == 0x0001A0, "Member 'Prop_coffeeBag_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_coffeeBag_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001B0, "Member 'Prop_coffeeBag_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}

