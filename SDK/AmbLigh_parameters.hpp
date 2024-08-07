#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbLigh

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Struct_triggerSave_structs.hpp"


namespace SDK::Params
{

// Function ambLigh.ambLigh_C.SetActive
// 0x0002 (0x0002 - 0x0000)
struct AmbLigh_C_SetActive final
{
public:
	bool                                          Active;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AmbLigh_C_SetActive) == 0x000001, "Wrong alignment on AmbLigh_C_SetActive");
static_assert(sizeof(AmbLigh_C_SetActive) == 0x000002, "Wrong size on AmbLigh_C_SetActive");
static_assert(offsetof(AmbLigh_C_SetActive, Active) == 0x000000, "Member 'AmbLigh_C_SetActive::Active' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_SetActive, CallFunc_Not_PreBool_ReturnValue) == 0x000001, "Member 'AmbLigh_C_SetActive::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function ambLigh.ambLigh_C.upd
// 0x0014 (0x0014 - 0x0000)
struct AmbLigh_C_Upd final
{
public:
	float                                         CallFunc_BreakVector2D_X;                          // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FMax_ReturnValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X_1;                        // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y_1;                        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AmbLigh_C_Upd) == 0x000004, "Wrong alignment on AmbLigh_C_Upd");
static_assert(sizeof(AmbLigh_C_Upd) == 0x000014, "Wrong size on AmbLigh_C_Upd");
static_assert(offsetof(AmbLigh_C_Upd, CallFunc_BreakVector2D_X) == 0x000000, "Member 'AmbLigh_C_Upd::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_Upd, CallFunc_BreakVector2D_Y) == 0x000004, "Member 'AmbLigh_C_Upd::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_Upd, CallFunc_FMax_ReturnValue) == 0x000008, "Member 'AmbLigh_C_Upd::CallFunc_FMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_Upd, CallFunc_BreakVector2D_X_1) == 0x00000C, "Member 'AmbLigh_C_Upd::CallFunc_BreakVector2D_X_1' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_Upd, CallFunc_BreakVector2D_Y_1) == 0x000010, "Member 'AmbLigh_C_Upd::CallFunc_BreakVector2D_Y_1' has a wrong offset!");

// Function ambLigh.ambLigh_C.loadTriggerData
// 0x0120 (0x0120 - 0x0000)
struct AmbLigh_C_LoadTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00F0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadTriggerData_return;                   // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_192A[0x2];                                     // 0x00F2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item;                           // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item_1;                         // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_192B[0x3];                                     // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AmbLigh_C_LoadTriggerData) == 0x000010, "Wrong alignment on AmbLigh_C_LoadTriggerData");
static_assert(sizeof(AmbLigh_C_LoadTriggerData) == 0x000120, "Wrong size on AmbLigh_C_LoadTriggerData");
static_assert(offsetof(AmbLigh_C_LoadTriggerData, Data) == 0x000000, "Member 'AmbLigh_C_LoadTriggerData::Data' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_LoadTriggerData, Return) == 0x0000F0, "Member 'AmbLigh_C_LoadTriggerData::Return' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_LoadTriggerData, CallFunc_loadTriggerData_return) == 0x0000F1, "Member 'AmbLigh_C_LoadTriggerData::CallFunc_loadTriggerData_return' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_LoadTriggerData, CallFunc_Array_Get_Item) == 0x0000F4, "Member 'AmbLigh_C_LoadTriggerData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_LoadTriggerData, CallFunc_BreakVector_X) == 0x000100, "Member 'AmbLigh_C_LoadTriggerData::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_LoadTriggerData, CallFunc_BreakVector_Y) == 0x000104, "Member 'AmbLigh_C_LoadTriggerData::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_LoadTriggerData, CallFunc_BreakVector_Z) == 0x000108, "Member 'AmbLigh_C_LoadTriggerData::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_LoadTriggerData, CallFunc_Array_Get_Item_1) == 0x00010C, "Member 'AmbLigh_C_LoadTriggerData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_LoadTriggerData, CallFunc_MakeVector2D_ReturnValue) == 0x000110, "Member 'AmbLigh_C_LoadTriggerData::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

// Function ambLigh.ambLigh_C.getTriggerData
// 0x0300 (0x0300 - 0x0000)
struct AmbLigh_C_GetTriggerData final
{
public:
	struct FStruct_triggerSave                    Data;                                              // 0x0000(0x00F0)(Parm, OutParm, HasGetValueTypeHash)
	TArray<bool>                                  K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm)
	struct FStruct_triggerSave                    CallFunc_getTriggerData_data;                      // 0x0100(0x00F0)(HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_Vector2DToVector_ReturnValue;        // 0x01F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_192C[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        K2Node_MakeArray_Array_1;                          // 0x0200(0x0010)(ReferenceParm)
	struct FStruct_triggerSave                    K2Node_SetFieldsInStruct_StructOut;                // 0x0210(0x00F0)(HasGetValueTypeHash)
};
static_assert(alignof(AmbLigh_C_GetTriggerData) == 0x000010, "Wrong alignment on AmbLigh_C_GetTriggerData");
static_assert(sizeof(AmbLigh_C_GetTriggerData) == 0x000300, "Wrong size on AmbLigh_C_GetTriggerData");
static_assert(offsetof(AmbLigh_C_GetTriggerData, Data) == 0x000000, "Member 'AmbLigh_C_GetTriggerData::Data' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_GetTriggerData, K2Node_MakeArray_Array) == 0x0000F0, "Member 'AmbLigh_C_GetTriggerData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_GetTriggerData, CallFunc_getTriggerData_data) == 0x000100, "Member 'AmbLigh_C_GetTriggerData::CallFunc_getTriggerData_data' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_GetTriggerData, CallFunc_Conv_Vector2DToVector_ReturnValue) == 0x0001F0, "Member 'AmbLigh_C_GetTriggerData::CallFunc_Conv_Vector2DToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_GetTriggerData, K2Node_MakeArray_Array_1) == 0x000200, "Member 'AmbLigh_C_GetTriggerData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(AmbLigh_C_GetTriggerData, K2Node_SetFieldsInStruct_StructOut) == 0x000210, "Member 'AmbLigh_C_GetTriggerData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}

