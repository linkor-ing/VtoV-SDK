#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_arirGamerYogur

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Struct_mInt_structs.hpp"
#include "Struct_mBool_structs.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK::Params
{

// Function prop_arirGamerYogur.prop_arirGamerYogur_C.ExecuteUbergraph_prop_arirGamerYogur
// 0x00B8 (0x00B8 - 0x0000)
struct Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38B8[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38B9[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38BA[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0028(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         K2Node_Event_index;                                // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_addFood_full;                             // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00B6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur) == 0x000008, "Wrong alignment on Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur");
static_assert(sizeof(Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur) == 0x0000B8, "Wrong size on Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur");
static_assert(offsetof(Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur, EntryPoint) == 0x000000, "Member 'Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur, K2Node_Event_player) == 0x000008, "Member 'Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x000010, "Member 'Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur, Temp_int_Variable) == 0x000018, "Member 'Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur, CallFunc_Greater_IntInt_ReturnValue) == 0x00001C, "Member 'Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur, K2Node_Event_player_1) == 0x000020, "Member 'Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur, K2Node_Event_hit) == 0x000028, "Member 'Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur, K2Node_Event_index) == 0x0000B0, "Member 'Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur, K2Node_Event_action) == 0x0000B4, "Member 'Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur, CallFunc_addFood_full) == 0x0000B5, "Member 'Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur::CallFunc_addFood_full' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur, K2Node_SwitchEnum_CmpSuccess) == 0x0000B6, "Member 'Prop_arirGamerYogur_C_ExecuteUbergraph_prop_arirGamerYogur::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function prop_arirGamerYogur.prop_arirGamerYogur_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_arirGamerYogur_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         Param_Index;                                       // 0x0090(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_interactionActions                       Action;                                            // 0x0094(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_arirGamerYogur_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_arirGamerYogur_C_ActionOptionIndex");
static_assert(sizeof(Prop_arirGamerYogur_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_arirGamerYogur_C_ActionOptionIndex");
static_assert(offsetof(Prop_arirGamerYogur_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_arirGamerYogur_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_ActionOptionIndex, Param_Hit) == 0x000008, "Member 'Prop_arirGamerYogur_C_ActionOptionIndex::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_ActionOptionIndex, Param_Index) == 0x000090, "Member 'Prop_arirGamerYogur_C_ActionOptionIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_ActionOptionIndex, Action) == 0x000094, "Member 'Prop_arirGamerYogur_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_arirGamerYogur.prop_arirGamerYogur_C.set
// 0x0058 (0x0058 - 0x0000)
struct Prop_arirGamerYogur_C_Set final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38BB[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x000C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_2;                              // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38BC[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_2;                              // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_3;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38BD[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_4;                              // 0x002C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38BE[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Select_Default;                             // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_1;                           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_2;                           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Select_Default_3;                           // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_arirGamerYogur_C_Set) == 0x000004, "Wrong alignment on Prop_arirGamerYogur_C_Set");
static_assert(sizeof(Prop_arirGamerYogur_C_Set) == 0x000058, "Wrong size on Prop_arirGamerYogur_C_Set");
static_assert(offsetof(Prop_arirGamerYogur_C_Set, Temp_bool_Variable) == 0x000000, "Member 'Prop_arirGamerYogur_C_Set::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_Set, Temp_name_Variable) == 0x000004, "Member 'Prop_arirGamerYogur_C_Set::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_Set, Temp_name_Variable_1) == 0x00000C, "Member 'Prop_arirGamerYogur_C_Set::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_Set, Temp_bool_Variable_1) == 0x000014, "Member 'Prop_arirGamerYogur_C_Set::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_Set, Temp_bool_Variable_2) == 0x000015, "Member 'Prop_arirGamerYogur_C_Set::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_Set, Temp_name_Variable_2) == 0x000018, "Member 'Prop_arirGamerYogur_C_Set::Temp_name_Variable_2' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_Set, Temp_name_Variable_3) == 0x000020, "Member 'Prop_arirGamerYogur_C_Set::Temp_name_Variable_3' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_Set, Temp_bool_Variable_3) == 0x000028, "Member 'Prop_arirGamerYogur_C_Set::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_Set, Temp_name_Variable_4) == 0x00002C, "Member 'Prop_arirGamerYogur_C_Set::Temp_name_Variable_4' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_Set, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000034, "Member 'Prop_arirGamerYogur_C_Set::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_Set, K2Node_Select_Default) == 0x000038, "Member 'Prop_arirGamerYogur_C_Set::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_Set, K2Node_Select_Default_1) == 0x000040, "Member 'Prop_arirGamerYogur_C_Set::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_Set, K2Node_Select_Default_2) == 0x000048, "Member 'Prop_arirGamerYogur_C_Set::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_Set, K2Node_Select_Default_3) == 0x000050, "Member 'Prop_arirGamerYogur_C_Set::K2Node_Select_Default_3' has a wrong offset!");

// Function prop_arirGamerYogur.prop_arirGamerYogur_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_arirGamerYogur_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_arirGamerYogur_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_arirGamerYogur_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_arirGamerYogur_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_arirGamerYogur_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_arirGamerYogur_C_PlayerHandUse_RMB, Player) == 0x000000, "Member 'Prop_arirGamerYogur_C_PlayerHandUse_RMB::Player' has a wrong offset!");

// Function prop_arirGamerYogur.prop_arirGamerYogur_C.loadData
// 0x00F0 (0x00F0 - 0x0000)
struct Prop_arirGamerYogur_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38BF[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mInt                           CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	struct FStruct_mBool                          CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0010)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_2;                         // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item_3;                         // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Get_Item_4;                         // 0x00ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_arirGamerYogur_C_LoadData) == 0x000010, "Wrong alignment on Prop_arirGamerYogur_C_LoadData");
static_assert(sizeof(Prop_arirGamerYogur_C_LoadData) == 0x0000F0, "Wrong size on Prop_arirGamerYogur_C_LoadData");
static_assert(offsetof(Prop_arirGamerYogur_C_LoadData, Data) == 0x000000, "Member 'Prop_arirGamerYogur_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_LoadData, Return) == 0x0000C0, "Member 'Prop_arirGamerYogur_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_arirGamerYogur_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_arirGamerYogur_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_arirGamerYogur_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_LoadData, CallFunc_Array_Get_Item_2) == 0x0000E8, "Member 'Prop_arirGamerYogur_C_LoadData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_LoadData, CallFunc_Array_Get_Item_3) == 0x0000EC, "Member 'Prop_arirGamerYogur_C_LoadData::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_LoadData, CallFunc_Array_Get_Item_4) == 0x0000ED, "Member 'Prop_arirGamerYogur_C_LoadData::CallFunc_Array_Get_Item_4' has a wrong offset!");

// Function prop_arirGamerYogur.prop_arirGamerYogur_C.getData
// 0x02B0 (0x02B0 - 0x0000)
struct Prop_arirGamerYogur_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	struct FStruct_mInt                           K2Node_MakeStruct_struct_mInt;                     // 0x00D0(0x0010)(HasGetValueTypeHash)
	TArray<bool>                                  K2Node_MakeArray_Array_1;                          // 0x00E0(0x0010)(ReferenceParm)
	TArray<struct FStruct_mInt>                   K2Node_MakeArray_Array_2;                          // 0x00F0(0x0010)(ReferenceParm)
	struct FStruct_mBool                          K2Node_MakeStruct_struct_mBool;                    // 0x0100(0x0010)(HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x0110(0x00C0)(HasGetValueTypeHash)
	struct FStruct_mBool                          CallFunc_Array_Get_Item;                           // 0x01D0(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mBool>                  K2Node_MakeArray_Array_3;                          // 0x01E0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01F0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_arirGamerYogur_C_GetData) == 0x000010, "Wrong alignment on Prop_arirGamerYogur_C_GetData");
static_assert(sizeof(Prop_arirGamerYogur_C_GetData) == 0x0002B0, "Wrong size on Prop_arirGamerYogur_C_GetData");
static_assert(offsetof(Prop_arirGamerYogur_C_GetData, Data) == 0x000000, "Member 'Prop_arirGamerYogur_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_GetData, K2Node_MakeArray_Array) == 0x0000C0, "Member 'Prop_arirGamerYogur_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_GetData, K2Node_MakeStruct_struct_mInt) == 0x0000D0, "Member 'Prop_arirGamerYogur_C_GetData::K2Node_MakeStruct_struct_mInt' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_GetData, K2Node_MakeArray_Array_1) == 0x0000E0, "Member 'Prop_arirGamerYogur_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_GetData, K2Node_MakeArray_Array_2) == 0x0000F0, "Member 'Prop_arirGamerYogur_C_GetData::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_GetData, K2Node_MakeStruct_struct_mBool) == 0x000100, "Member 'Prop_arirGamerYogur_C_GetData::K2Node_MakeStruct_struct_mBool' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_GetData, CallFunc_getData_data) == 0x000110, "Member 'Prop_arirGamerYogur_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_GetData, CallFunc_Array_Get_Item) == 0x0001D0, "Member 'Prop_arirGamerYogur_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_GetData, K2Node_MakeArray_Array_3) == 0x0001E0, "Member 'Prop_arirGamerYogur_C_GetData::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(Prop_arirGamerYogur_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001F0, "Member 'Prop_arirGamerYogur_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}
