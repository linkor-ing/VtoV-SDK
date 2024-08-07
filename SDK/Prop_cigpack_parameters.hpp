#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_cigpack

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Struct_prop_structs.hpp"
#include "Struct_mInt_structs.hpp"
#include "Struct_food1_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_cigpack.prop_cigpack_C.ExecuteUbergraph_prop_cigpack
// 0x0290 (0x0290 - 0x0000)
struct Prop_cigpack_C_ExecuteUbergraph_prop_cigpack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0060(0x0018)()
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x3];                                       // 0x0091(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_98[0x8];                                       // 0x0098(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00A0(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_propToObject_ReturnValue;                 // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_food1                          CallFunc_propToObject_foodData;                    // 0x00D4(0x0018)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_propToObject_object;                      // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_propToObject_isFood;                      // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_prop                           CallFunc_propToObject_propData;                    // 0x0100(0x0080)(HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACig_lawn_C*                            CallFunc_FinishSpawningActor_ReturnValue;          // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_191[0x3];                                      // 0x0191(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable;                                // 0x0194(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x01A0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACig_C*                                 CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x01E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E5[0x3];                                      // 0x01E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F1[0x3];                                      // 0x01F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_1;                              // 0x01F4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0200(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3; // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_player_C>         K2Node_DynamicCast_AsInt_Player;                   // 0x0248(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0258(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_C*                                CallFunc_FinishSpawningActor_ReturnValue_3;        // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_asProp_return;                            // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4; // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_food_C*                           CallFunc_FinishSpawningActor_ReturnValue_4;        // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0280(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack) == 0x000010, "Wrong alignment on Prop_cigpack_C_ExecuteUbergraph_prop_cigpack");
static_assert(sizeof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack) == 0x000290, "Wrong size on Prop_cigpack_C_ExecuteUbergraph_prop_cigpack");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, EntryPoint) == 0x000000, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, Temp_int_Variable) == 0x000048, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, K2Node_MakeArray_Array) == 0x000050, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_Format_ReturnValue) == 0x000060, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000078, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_Add_IntInt_ReturnValue) == 0x00007C, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, Temp_int_Variable_1) == 0x000080, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, Temp_int_Variable_2) == 0x000084, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000088, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_Add_IntInt_ReturnValue_1) == 0x00008C, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000090, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_Add_IntInt_ReturnValue_2) == 0x000094, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_MakeTransform_ReturnValue) == 0x0000A0, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_propToObject_ReturnValue) == 0x0000D0, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_propToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_propToObject_foodData) == 0x0000D4, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_propToObject_foodData' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_propToObject_object) == 0x0000F0, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_propToObject_object' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_propToObject_isFood) == 0x0000F8, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_propToObject_isFood' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_propToObject_propData) == 0x000100, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_propToObject_propData' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000180, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_FinishSpawningActor_ReturnValue) == 0x000188, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_IsValidClass_ReturnValue) == 0x000190, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, Temp_name_Variable) == 0x000194, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, Temp_int_Variable_3) == 0x00019C, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_MakeTransform_ReturnValue_1) == 0x0001A0, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0001D0, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0001D8, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, Temp_int_Variable_4) == 0x0001E0, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x0001E4, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, K2Node_Event_player) == 0x0001E8, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_IsValid_ReturnValue) == 0x0001F0, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, Temp_name_Variable_1) == 0x0001F4, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001FC, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_GetTransform_ReturnValue) == 0x000200, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x000230, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3) == 0x000238, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x000240, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, K2Node_DynamicCast_AsInt_Player) == 0x000248, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::K2Node_DynamicCast_AsInt_Player' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, K2Node_DynamicCast_bSuccess) == 0x000258, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_FinishSpawningActor_ReturnValue_3) == 0x000260, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_FinishSpawningActor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_asProp_return) == 0x000268, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_asProp_return' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4) == 0x000270, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_FinishSpawningActor_ReturnValue_4) == 0x000278, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_FinishSpawningActor_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_ExecuteUbergraph_prop_cigpack, CallFunc_Conv_NameToString_ReturnValue) == 0x000280, "Member 'Prop_cigpack_C_ExecuteUbergraph_prop_cigpack::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");

// Function prop_cigpack.prop_cigpack_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_cigpack_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_cigpack_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_cigpack_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_cigpack_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_cigpack_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_cigpack_C_PlayerHandUse_RMB, Player) == 0x000000, "Member 'Prop_cigpack_C_PlayerHandUse_RMB::Player' has a wrong offset!");

// Function prop_cigpack.prop_cigpack_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct Prop_cigpack_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mInt                           CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_cigpack_C_LoadData) == 0x000010, "Wrong alignment on Prop_cigpack_C_LoadData");
static_assert(sizeof(Prop_cigpack_C_LoadData) == 0x0000E0, "Wrong size on Prop_cigpack_C_LoadData");
static_assert(offsetof(Prop_cigpack_C_LoadData, Data) == 0x000000, "Member 'Prop_cigpack_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_LoadData, Return) == 0x0000C0, "Member 'Prop_cigpack_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_cigpack_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_cigpack_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_cigpack_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_cigpack.prop_cigpack_C.getData
// 0x0270 (0x0270 - 0x0000)
struct Prop_cigpack_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<int32>                                 K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mInt                           K2Node_MakeStruct_struct_mInt;                     // 0x0190(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mInt>                   K2Node_MakeArray_Array_1;                          // 0x01A0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01B0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_cigpack_C_GetData) == 0x000010, "Wrong alignment on Prop_cigpack_C_GetData");
static_assert(sizeof(Prop_cigpack_C_GetData) == 0x000270, "Wrong size on Prop_cigpack_C_GetData");
static_assert(offsetof(Prop_cigpack_C_GetData, Data) == 0x000000, "Member 'Prop_cigpack_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Prop_cigpack_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Prop_cigpack_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_GetData, K2Node_MakeStruct_struct_mInt) == 0x000190, "Member 'Prop_cigpack_C_GetData::K2Node_MakeStruct_struct_mInt' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_GetData, K2Node_MakeArray_Array_1) == 0x0001A0, "Member 'Prop_cigpack_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_cigpack_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001B0, "Member 'Prop_cigpack_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}

