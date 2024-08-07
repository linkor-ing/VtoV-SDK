#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_potatoCooked

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Struct_food1_structs.hpp"
#include "Struct_prop_structs.hpp"


namespace SDK::Params
{

// Function prop_food_potatoCooked.prop_food_potatoCooked_C.ExecuteUbergraph_prop_food_potatoCooked
// 0x01B0 (0x01B0 - 0x0000)
struct Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0xC];                                        // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x3];                                       // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_food_C*                           CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_propToObject_ReturnValue;                 // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_food1                          CallFunc_propToObject_foodData;                    // 0x008C(0x0018)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_propToObject_object;                      // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_propToObject_isFood;                      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_prop                           CallFunc_propToObject_propData;                    // 0x00B8(0x0080)(HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0138(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x7];                                      // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_player_C>         K2Node_DynamicCast_AsInt_Player;                   // 0x0158(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_C*                                CallFunc_asProp_return;                            // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0178(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable_1;                              // 0x0188(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_clean;                                // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_195[0x3];                                      // 0x0195(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_4;                               // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x019C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19D[0x3];                                      // 0x019D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked) == 0x000010, "Wrong alignment on Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked");
static_assert(sizeof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked) == 0x0001B0, "Wrong size on Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, EntryPoint) == 0x000000, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, Temp_int_Variable) == 0x000040, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000048, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_FinishSpawningActor_ReturnValue) == 0x000050, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000058, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000060, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000068, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, Temp_int_Variable_1) == 0x000070, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000074, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_Add_IntInt_ReturnValue_1) == 0x000078, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, Temp_int_Variable_2) == 0x00007C, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000080, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_Add_IntInt_ReturnValue_2) == 0x000084, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_propToObject_ReturnValue) == 0x000088, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_propToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_propToObject_foodData) == 0x00008C, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_propToObject_foodData' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_propToObject_object) == 0x0000A8, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_propToObject_object' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_propToObject_isFood) == 0x0000B0, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_propToObject_isFood' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_propToObject_propData) == 0x0000B8, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_propToObject_propData' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, Temp_name_Variable) == 0x000138, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x000140, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_IsValidClass_ReturnValue) == 0x000148, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x000150, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, K2Node_DynamicCast_AsInt_Player) == 0x000158, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::K2Node_DynamicCast_AsInt_Player' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, K2Node_DynamicCast_bSuccess) == 0x000168, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_asProp_return) == 0x000170, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_asProp_return' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_Conv_NameToString_ReturnValue) == 0x000178, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, Temp_name_Variable_1) == 0x000188, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::Temp_name_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, Temp_int_Variable_3) == 0x000190, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, K2Node_Event_clean) == 0x000194, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::K2Node_Event_clean' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, Temp_int_Variable_4) == 0x000198, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x00019C, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked, CallFunc_Add_IntInt_ReturnValue_3) == 0x0001A0, "Member 'Prop_food_potatoCooked_C_ExecuteUbergraph_prop_food_potatoCooked::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");

// Function prop_food_potatoCooked.prop_food_potatoCooked_C.slice
// 0x0001 (0x0001 - 0x0000)
struct Prop_food_potatoCooked_C_Slice final
{
public:
	bool                                          Clean;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_food_potatoCooked_C_Slice) == 0x000001, "Wrong alignment on Prop_food_potatoCooked_C_Slice");
static_assert(sizeof(Prop_food_potatoCooked_C_Slice) == 0x000001, "Wrong size on Prop_food_potatoCooked_C_Slice");
static_assert(offsetof(Prop_food_potatoCooked_C_Slice, Clean) == 0x000000, "Member 'Prop_food_potatoCooked_C_Slice::Clean' has a wrong offset!");

}

