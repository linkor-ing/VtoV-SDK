#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_cannedFood

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Struct_mInt_structs.hpp"
#include "Struct_mBool_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_cannedFood.prop_cannedFood_C.ExecuteUbergraph_prop_cannedFood
// 0x00A8 (0x00A8 - 0x0000)
struct Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0018(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood) == 0x000008, "Wrong alignment on Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood");
static_assert(sizeof(Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood) == 0x0000A8, "Wrong size on Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood");
static_assert(offsetof(Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood, EntryPoint) == 0x000000, "Member 'Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood, K2Node_Event_player) == 0x000008, "Member 'Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood, K2Node_Event_player_1) == 0x000010, "Member 'Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood, K2Node_Event_hit) == 0x000018, "Member 'Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood, K2Node_Event_action) == 0x0000A0, "Member 'Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood, K2Node_SwitchEnum_CmpSuccess) == 0x0000A1, "Member 'Prop_cannedFood_C_ExecuteUbergraph_prop_cannedFood::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function prop_cannedFood.prop_cannedFood_C.eat
// 0x0018 (0x0018 - 0x0000)
struct Prop_cannedFood_C_Eat final
{
public:
	class AMainPlayer_C*                          Self2;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_addFood_full;                             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_cannedFood_C_Eat) == 0x000008, "Wrong alignment on Prop_cannedFood_C_Eat");
static_assert(sizeof(Prop_cannedFood_C_Eat) == 0x000018, "Wrong size on Prop_cannedFood_C_Eat");
static_assert(offsetof(Prop_cannedFood_C_Eat, Self2) == 0x000000, "Member 'Prop_cannedFood_C_Eat::Self2' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Eat, CallFunc_addFood_full) == 0x000008, "Member 'Prop_cannedFood_C_Eat::CallFunc_addFood_full' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Eat, CallFunc_Greater_IntInt_ReturnValue) == 0x000009, "Member 'Prop_cannedFood_C_Eat::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Eat, Temp_int_Variable) == 0x00000C, "Member 'Prop_cannedFood_C_Eat::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Eat, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'Prop_cannedFood_C_Eat::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function prop_cannedFood.prop_cannedFood_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_cannedFood_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_cannedFood_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_cannedFood_C_ActionOptionIndex");
static_assert(sizeof(Prop_cannedFood_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_cannedFood_C_ActionOptionIndex");
static_assert(offsetof(Prop_cannedFood_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_cannedFood_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_ActionOptionIndex, Param_Hit) == 0x000008, "Member 'Prop_cannedFood_C_ActionOptionIndex::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_ActionOptionIndex, Action) == 0x000090, "Member 'Prop_cannedFood_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_cannedFood.prop_cannedFood_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_cannedFood_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_cannedFood_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_cannedFood_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_cannedFood_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_cannedFood_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_cannedFood_C_PlayerHandUse_RMB, Player) == 0x000000, "Member 'Prop_cannedFood_C_PlayerHandUse_RMB::Player' has a wrong offset!");

// Function prop_cannedFood.prop_cannedFood_C.Init
// 0x009C (0x009C - 0x0000)
struct Prop_cannedFood_C_Init final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_2;                              // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x001C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_4;                              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_5;                              // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_6;                              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_7;                              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_8;                              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_9;                              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_10;                             // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_11;                             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_72[0x2];                                       // 0x0072(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_1;                           // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_2;                           // 0x0084(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_3;                           // 0x008C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_4;                           // 0x0094(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_cannedFood_C_Init) == 0x000004, "Wrong alignment on Prop_cannedFood_C_Init");
static_assert(sizeof(Prop_cannedFood_C_Init) == 0x00009C, "Wrong size on Prop_cannedFood_C_Init");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_int_Variable) == 0x000000, "Member 'Prop_cannedFood_C_Init::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_name_Variable) == 0x000004, "Member 'Prop_cannedFood_C_Init::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_name_Variable_1) == 0x00000C, "Member 'Prop_cannedFood_C_Init::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_name_Variable_2) == 0x000014, "Member 'Prop_cannedFood_C_Init::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_name_Variable_3) == 0x00001C, "Member 'Prop_cannedFood_C_Init::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_int_Variable_1) == 0x000024, "Member 'Prop_cannedFood_C_Init::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_name_Variable_4) == 0x000028, "Member 'Prop_cannedFood_C_Init::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_name_Variable_5) == 0x000030, "Member 'Prop_cannedFood_C_Init::Temp_name_Variable_5' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_name_Variable_6) == 0x000038, "Member 'Prop_cannedFood_C_Init::Temp_name_Variable_6' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_name_Variable_7) == 0x000040, "Member 'Prop_cannedFood_C_Init::Temp_name_Variable_7' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_bool_Variable) == 0x000048, "Member 'Prop_cannedFood_C_Init::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_int_Variable_2) == 0x00004C, "Member 'Prop_cannedFood_C_Init::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_name_Variable_8) == 0x000050, "Member 'Prop_cannedFood_C_Init::Temp_name_Variable_8' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_name_Variable_9) == 0x000058, "Member 'Prop_cannedFood_C_Init::Temp_name_Variable_9' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_name_Variable_10) == 0x000060, "Member 'Prop_cannedFood_C_Init::Temp_name_Variable_10' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_name_Variable_11) == 0x000068, "Member 'Prop_cannedFood_C_Init::Temp_name_Variable_11' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, Temp_bool_Variable_1) == 0x000070, "Member 'Prop_cannedFood_C_Init::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, CallFunc_Greater_IntInt_ReturnValue) == 0x000071, "Member 'Prop_cannedFood_C_Init::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, K2Node_Select_Default) == 0x000074, "Member 'Prop_cannedFood_C_Init::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, K2Node_Select_Default_1) == 0x00007C, "Member 'Prop_cannedFood_C_Init::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, K2Node_Select_Default_2) == 0x000084, "Member 'Prop_cannedFood_C_Init::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, K2Node_Select_Default_3) == 0x00008C, "Member 'Prop_cannedFood_C_Init::K2Node_Select_Default_3' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_Init, K2Node_Select_Default_4) == 0x000094, "Member 'Prop_cannedFood_C_Init::K2Node_Select_Default_4' has a wrong offset!");

// Function prop_cannedFood.prop_cannedFood_C.getData
// 0x02B0 (0x02B0 - 0x0000)
struct Prop_cannedFood_C_GetData final
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
static_assert(alignof(Prop_cannedFood_C_GetData) == 0x000010, "Wrong alignment on Prop_cannedFood_C_GetData");
static_assert(sizeof(Prop_cannedFood_C_GetData) == 0x0002B0, "Wrong size on Prop_cannedFood_C_GetData");
static_assert(offsetof(Prop_cannedFood_C_GetData, Data) == 0x000000, "Member 'Prop_cannedFood_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetData, K2Node_MakeArray_Array) == 0x0000C0, "Member 'Prop_cannedFood_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetData, K2Node_MakeArray_Array_1) == 0x0000D0, "Member 'Prop_cannedFood_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetData, K2Node_MakeStruct_struct_mInt) == 0x0000E0, "Member 'Prop_cannedFood_C_GetData::K2Node_MakeStruct_struct_mInt' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetData, K2Node_MakeStruct_struct_mBool) == 0x0000F0, "Member 'Prop_cannedFood_C_GetData::K2Node_MakeStruct_struct_mBool' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetData, K2Node_MakeArray_Array_2) == 0x000100, "Member 'Prop_cannedFood_C_GetData::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetData, CallFunc_getData_data) == 0x000110, "Member 'Prop_cannedFood_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetData, CallFunc_Array_Get_Item) == 0x0001D0, "Member 'Prop_cannedFood_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetData, K2Node_MakeArray_Array_3) == 0x0001E0, "Member 'Prop_cannedFood_C_GetData::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001F0, "Member 'Prop_cannedFood_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function prop_cannedFood.prop_cannedFood_C.loadData
// 0x0100 (0x0100 - 0x0000)
struct Prop_cannedFood_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mInt                           CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	struct FStruct_mBool                          CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0010)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_2;                         // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item_3;                         // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Get_Item_4;                         // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_cannedFood_C_LoadData) == 0x000010, "Wrong alignment on Prop_cannedFood_C_LoadData");
static_assert(sizeof(Prop_cannedFood_C_LoadData) == 0x000100, "Wrong size on Prop_cannedFood_C_LoadData");
static_assert(offsetof(Prop_cannedFood_C_LoadData, Data) == 0x000000, "Member 'Prop_cannedFood_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_LoadData, Return) == 0x0000C0, "Member 'Prop_cannedFood_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_cannedFood_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_cannedFood_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_cannedFood_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_LoadData, CallFunc_Array_Get_Item_2) == 0x0000E8, "Member 'Prop_cannedFood_C_LoadData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_LoadData, CallFunc_Array_Get_Item_3) == 0x0000EC, "Member 'Prop_cannedFood_C_LoadData::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_LoadData, CallFunc_Array_Get_Item_4) == 0x0000F0, "Member 'Prop_cannedFood_C_LoadData::CallFunc_Array_Get_Item_4' has a wrong offset!");

// Function prop_cannedFood.prop_cannedFood_C.getActionOptions
// 0x0060 (0x0060 - 0x0000)
struct Prop_cannedFood_C_GetActionOptions final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Options;                                           // 0x0018(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               Options_enum;                                      // 0x0028(0x0010)(Parm, OutParm)
	TArray<class FText>                           OptionsNamesOverlay;                               // 0x0038(0x0010)(Parm, OutParm)
	uint8                                         Number;                                            // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<Enum_interactionActions>               K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
};
static_assert(alignof(Prop_cannedFood_C_GetActionOptions) == 0x000008, "Wrong alignment on Prop_cannedFood_C_GetActionOptions");
static_assert(sizeof(Prop_cannedFood_C_GetActionOptions) == 0x000060, "Wrong size on Prop_cannedFood_C_GetActionOptions");
static_assert(offsetof(Prop_cannedFood_C_GetActionOptions, Player) == 0x000000, "Member 'Prop_cannedFood_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetActionOptions, Component) == 0x000008, "Member 'Prop_cannedFood_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetActionOptions, Actor) == 0x000010, "Member 'Prop_cannedFood_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetActionOptions, Options) == 0x000018, "Member 'Prop_cannedFood_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Prop_cannedFood_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Prop_cannedFood_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetActionOptions, Number) == 0x000048, "Member 'Prop_cannedFood_C_GetActionOptions::Number' has a wrong offset!");
static_assert(offsetof(Prop_cannedFood_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000050, "Member 'Prop_cannedFood_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}

