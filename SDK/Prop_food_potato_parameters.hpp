#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_potato

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Struct_food1_structs.hpp"
#include "Struct_prop_structs.hpp"


namespace SDK::Params
{

// Function prop_food_potato.prop_food_potato_C.ExecuteUbergraph_prop_food_potato
// 0x01A0 (0x01A0 - 0x0000)
struct Prop_food_potato_C_ExecuteUbergraph_prop_food_potato final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38A2[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38A3[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38A4[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_propToObject_ReturnValue;                 // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38A5[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_food1                          CallFunc_propToObject_foodData;                    // 0x002C(0x0018)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38A6[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_propToObject_object;                      // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_propToObject_isFood;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38A7[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_prop                           CallFunc_propToObject_propData;                    // 0x0058(0x0080)(HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x00D8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38A8[0x3];                                     // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_1;                              // 0x00E4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_clean;                                // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38A9[0xF];                                     // 0x00F1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0100(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable_4;                               // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38AA[0x4];                                     // 0x0134(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38AB[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_player_C>         K2Node_DynamicCast_AsInt_Player;                   // 0x0150(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38AC[0x7];                                     // 0x0161(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_C*                                CallFunc_asProp_return;                            // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38AD[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_food_C*                           CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato) == 0x000010, "Wrong alignment on Prop_food_potato_C_ExecuteUbergraph_prop_food_potato");
static_assert(sizeof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato) == 0x0001A0, "Wrong size on Prop_food_potato_C_ExecuteUbergraph_prop_food_potato");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, EntryPoint) == 0x000000, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, Temp_int_Variable) == 0x000004, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, Temp_int_Variable_1) == 0x000010, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000014, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, Temp_int_Variable_2) == 0x00001C, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000020, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_Add_IntInt_ReturnValue_2) == 0x000024, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_propToObject_ReturnValue) == 0x000028, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_propToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_propToObject_foodData) == 0x00002C, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_propToObject_foodData' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_propToObject_object) == 0x000048, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_propToObject_object' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_propToObject_isFood) == 0x000050, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_propToObject_isFood' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_propToObject_propData) == 0x000058, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_propToObject_propData' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, Temp_name_Variable) == 0x0000D8, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_IsValidClass_ReturnValue) == 0x0000E0, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, Temp_name_Variable_1) == 0x0000E4, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, Temp_int_Variable_3) == 0x0000EC, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, K2Node_Event_clean) == 0x0000F0, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::K2Node_Event_clean' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_GetTransform_ReturnValue) == 0x000100, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, Temp_int_Variable_4) == 0x000130, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000138, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_FinishSpawningActor_ReturnValue) == 0x000140, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x000148, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, K2Node_DynamicCast_AsInt_Player) == 0x000150, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::K2Node_DynamicCast_AsInt_Player' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, K2Node_DynamicCast_bSuccess) == 0x000160, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_asProp_return) == 0x000168, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_asProp_return' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_Add_IntInt_ReturnValue_3) == 0x000170, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000178, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x000180, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000188, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_ExecuteUbergraph_prop_food_potato, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x000190, "Member 'Prop_food_potato_C_ExecuteUbergraph_prop_food_potato::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");

// Function prop_food_potato.prop_food_potato_C.cooked
// 0x0190 (0x0190 - 0x0000)
struct Prop_food_potato_C_Cooked final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38AE[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38AF[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_propToObject_ReturnValue;                 // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38B0[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_food1                          CallFunc_propToObject_foodData;                    // 0x0020(0x0018)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_propToObject_object;                      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_propToObject_isFood;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38B1[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_prop                           CallFunc_propToObject_propData;                    // 0x0048(0x0080)(HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x00C8(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38B2[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Temp_name_Variable_1;                              // 0x00D4(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38B3[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38B4[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00F0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_player_C>         K2Node_DynamicCast_AsInt_Player;                   // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38B5[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_food_C*                           CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_asProp_return;                            // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Select_Default;                             // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_food_C*                           K2Node_DynamicCast_AsProp_Food;                    // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_food_potato_C_Cooked) == 0x000010, "Wrong alignment on Prop_food_potato_C_Cooked");
static_assert(sizeof(Prop_food_potato_C_Cooked) == 0x000190, "Wrong size on Prop_food_potato_C_Cooked");
static_assert(offsetof(Prop_food_potato_C_Cooked, Temp_int_Variable) == 0x000000, "Member 'Prop_food_potato_C_Cooked::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, Temp_int_Variable_1) == 0x000004, "Member 'Prop_food_potato_C_Cooked::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'Prop_food_potato_C_Cooked::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Prop_food_potato_C_Cooked::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, Temp_int_Variable_2) == 0x000010, "Member 'Prop_food_potato_C_Cooked::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000014, "Member 'Prop_food_potato_C_Cooked::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'Prop_food_potato_C_Cooked::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_propToObject_ReturnValue) == 0x00001C, "Member 'Prop_food_potato_C_Cooked::CallFunc_propToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_propToObject_foodData) == 0x000020, "Member 'Prop_food_potato_C_Cooked::CallFunc_propToObject_foodData' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_propToObject_object) == 0x000038, "Member 'Prop_food_potato_C_Cooked::CallFunc_propToObject_object' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_propToObject_isFood) == 0x000040, "Member 'Prop_food_potato_C_Cooked::CallFunc_propToObject_isFood' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_propToObject_propData) == 0x000048, "Member 'Prop_food_potato_C_Cooked::CallFunc_propToObject_propData' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, Temp_name_Variable) == 0x0000C8, "Member 'Prop_food_potato_C_Cooked::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_IsValidClass_ReturnValue) == 0x0000D0, "Member 'Prop_food_potato_C_Cooked::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, Temp_name_Variable_1) == 0x0000D4, "Member 'Prop_food_potato_C_Cooked::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, Temp_int_Variable_3) == 0x0000DC, "Member 'Prop_food_potato_C_Cooked::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, Temp_int_Variable_4) == 0x0000E0, "Member 'Prop_food_potato_C_Cooked::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x0000E4, "Member 'Prop_food_potato_C_Cooked::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000E8, "Member 'Prop_food_potato_C_Cooked::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_GetTransform_ReturnValue) == 0x0000F0, "Member 'Prop_food_potato_C_Cooked::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000120, "Member 'Prop_food_potato_C_Cooked::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000128, "Member 'Prop_food_potato_C_Cooked::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_FinishSpawningActor_ReturnValue) == 0x000130, "Member 'Prop_food_potato_C_Cooked::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, K2Node_DynamicCast_AsInt_Player) == 0x000138, "Member 'Prop_food_potato_C_Cooked::K2Node_DynamicCast_AsInt_Player' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, K2Node_DynamicCast_bSuccess) == 0x000148, "Member 'Prop_food_potato_C_Cooked::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000150, "Member 'Prop_food_potato_C_Cooked::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_asProp_return) == 0x000158, "Member 'Prop_food_potato_C_Cooked::CallFunc_asProp_return' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x000160, "Member 'Prop_food_potato_C_Cooked::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x000168, "Member 'Prop_food_potato_C_Cooked::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, K2Node_Select_Default) == 0x000170, "Member 'Prop_food_potato_C_Cooked::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, K2Node_DynamicCast_AsProp_Food) == 0x000178, "Member 'Prop_food_potato_C_Cooked::K2Node_DynamicCast_AsProp_Food' has a wrong offset!");
static_assert(offsetof(Prop_food_potato_C_Cooked, K2Node_DynamicCast_bSuccess_1) == 0x000180, "Member 'Prop_food_potato_C_Cooked::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function prop_food_potato.prop_food_potato_C.slice
// 0x0001 (0x0001 - 0x0000)
struct Prop_food_potato_C_Slice final
{
public:
	bool                                          Clean;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_food_potato_C_Slice) == 0x000001, "Wrong alignment on Prop_food_potato_C_Slice");
static_assert(sizeof(Prop_food_potato_C_Slice) == 0x000001, "Wrong size on Prop_food_potato_C_Slice");
static_assert(offsetof(Prop_food_potato_C_Slice, Clean) == 0x000000, "Member 'Prop_food_potato_C_Slice::Clean' has a wrong offset!");

}

