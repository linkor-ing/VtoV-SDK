#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShrimpEaterMaster

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function shrimpEaterMaster.shrimpEaterMaster_C.ExecuteUbergraph_shrimpEaterMaster
// 0x0140 (0x0140 - 0x0000)
struct ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0038(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_closestActor_nearest;                     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_LowEntry_LocalVariable_Value__Object;       // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0xF];                                       // 0x0051(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0060(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorBounds_Origin;                    // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorBounds_BoxExtent;                 // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue;          // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_food_C*                           K2Node_DynamicCast_AsProp_Food;                    // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C9[0x3];                                       // 0x00C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00E6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E7[0x1];                                       // 0x00E7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_1;        // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10B[0x5];                                      // 0x010B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_2;        // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_2;                  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_119[0x3];                                      // 0x0119(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_calcRep_ReturnValue;                      // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAudioComponent*                        CallFunc_SpawnSoundAtLocation_ReturnValue;         // 0x0128(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue_1;       // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster) == 0x000010, "Wrong alignment on ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster");
static_assert(sizeof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster) == 0x000140, "Wrong size on ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, EntryPoint) == 0x000000, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::EntryPoint' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x000004, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, Temp_int_Variable) == 0x000018, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000028, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000030, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, Temp_name_Variable) == 0x000038, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_closestActor_nearest) == 0x000040, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_closestActor_nearest' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, K2Node_LowEntry_LocalVariable_Value__Object) == 0x000048, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::K2Node_LowEntry_LocalVariable_Value__Object' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000050, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_GetTransform_ReturnValue) == 0x000060, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000090, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_FinishSpawningActor_ReturnValue) == 0x000098, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_GetActorBounds_Origin) == 0x0000A0, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_GetActorBounds_Origin' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_GetActorBounds_BoxExtent) == 0x0000AC, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_GetActorBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_WasRecentlyRendered_ReturnValue) == 0x0000B8, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_WasRecentlyRendered_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, K2Node_DynamicCast_AsProp_Food) == 0x0000C0, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::K2Node_DynamicCast_AsProp_Food' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_RandomUnitVector_ReturnValue) == 0x0000CC, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000D8, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0000E4, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0000E5, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_BooleanOR_ReturnValue) == 0x0000E6, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_getMainGamemode_AsMain_Gamemode_1) == 0x0000E8, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_getMainGamemode_AsMain_Gamemode_1' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_GetPlayerPawn_ReturnValue) == 0x0000F0, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000F8, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_Vector_Distance_ReturnValue) == 0x000104, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000108, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_Less_FloatFloat_ReturnValue) == 0x000109, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_BooleanOR_ReturnValue_1) == 0x00010A, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_getMainGamemode_AsMain_Gamemode_2) == 0x000110, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_getMainGamemode_AsMain_Gamemode_2' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_BooleanOR_ReturnValue_2) == 0x000118, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_BooleanOR_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_calcRep_ReturnValue) == 0x00011C, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_calcRep_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, K2Node_SwitchInteger_CmpSuccess) == 0x000120, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_SpawnSoundAtLocation_ReturnValue) == 0x000128, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_SpawnSoundAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster, CallFunc_RandomBoolWithWeight_ReturnValue_1) == 0x000130, "Member 'ShrimpEaterMaster_C_ExecuteUbergraph_shrimpEaterMaster::CallFunc_RandomBoolWithWeight_ReturnValue_1' has a wrong offset!");

}
