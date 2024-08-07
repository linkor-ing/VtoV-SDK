#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FallingBody

#include "Basic.hpp"

#include "Struct_prop_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_food1_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function fallingBody.fallingBody_C.ExecuteUbergraph_fallingBody
// 0x03C0 (0x03C0 - 0x0000)
struct FallingBody_C_ExecuteUbergraph_fallingBody final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_RandomRotator_ReturnValue;                // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C9B[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C9C[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C9D[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0030(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C9E[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      CallFunc_obj_static_obj;                           // 0x0068(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_SphereTraceSingleForObjects_OutHit;       // 0x0090(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingleForObjects_ReturnValue;  // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C9F[0x1];                                     // 0x011B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CA0[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0190(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_4;                               // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x01A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CA1[0x4];                                     // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x01B0(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CA2[0x7];                                     // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrunge_C*                              CallFunc_FinishSpawningActor_ReturnValue;          // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_4;                 // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x01FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0208(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0214(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_propToObject_ReturnValue;                 // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CA3[0x3];                                     // 0x022D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_food1                          CallFunc_propToObject_foodData;                    // 0x0230(0x0018)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 CallFunc_propToObject_object;                      // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_propToObject_isFood;                      // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CA4[0x7];                                     // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_prop                           CallFunc_propToObject_propData;                    // 0x0258(0x0080)(HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x02D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CA5[0x2];                                     // 0x02DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_5;                               // 0x02DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x02E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x02EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x02F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x0304(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0310(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0340(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x0348(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0350(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_player_C>         K2Node_DynamicCast_AsInt_Player;                   // 0x0358(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CA6[0x7];                                     // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_food_C*                           CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x0370(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_asProp_return;                            // 0x0378(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3; // 0x0380(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_FinishSpawningActor_ReturnValue_3;        // 0x0388(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Select_Default;                             // 0x0390(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_player_C>         K2Node_DynamicCast_AsInt_Player_1;                 // 0x0398(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CA7[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_C*                                CallFunc_asProp_return_1;                          // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x03B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FallingBody_C_ExecuteUbergraph_fallingBody) == 0x000010, "Wrong alignment on FallingBody_C_ExecuteUbergraph_fallingBody");
static_assert(sizeof(FallingBody_C_ExecuteUbergraph_fallingBody) == 0x0003C0, "Wrong size on FallingBody_C_ExecuteUbergraph_fallingBody");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, EntryPoint) == 0x000000, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::EntryPoint' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_RandomRotator_ReturnValue) == 0x000004, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_RandomRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, Temp_int_Variable) == 0x000010, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, Temp_int_Variable_1) == 0x000014, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000020, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_Add_IntInt_ReturnValue_1) == 0x000024, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, Temp_int_Variable_2) == 0x000028, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, Temp_object_Variable) == 0x000030, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, Temp_int_Loop_Counter_Variable) == 0x000040, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_Add_IntInt_ReturnValue_2) == 0x000044, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, Temp_int_Array_Index_Variable) == 0x000048, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, Temp_int_Variable_3) == 0x00004C, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_LessEqual_IntInt_ReturnValue_2) == 0x000050, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_LessEqual_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_Add_IntInt_ReturnValue_3) == 0x000054, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, K2Node_Event_DeltaSeconds) == 0x000058, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00005C, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_obj_static_obj) == 0x000068, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_obj_static_obj' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000078, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000084, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_SphereTraceSingleForObjects_OutHit) == 0x000090, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_SphereTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_SphereTraceSingleForObjects_ReturnValue) == 0x000118, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_SphereTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_bBlockingHit) == 0x000119, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_bInitialOverlap) == 0x00011A, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_Time) == 0x00011C, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_Distance) == 0x000120, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_Location) == 0x000124, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_ImpactPoint) == 0x000130, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_Normal) == 0x00013C, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_ImpactNormal) == 0x000148, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_PhysMat) == 0x000158, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_HitActor) == 0x000160, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_HitComponent) == 0x000168, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_HitBoneName) == 0x000170, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_HitItem) == 0x000178, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_ElementIndex) == 0x00017C, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_FaceIndex) == 0x000180, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_TraceStart) == 0x000184, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BreakHitResult_TraceEnd) == 0x000190, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, Temp_int_Variable_4) == 0x00019C, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::Temp_int_Variable_4' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0001A0, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_MakeTransform_ReturnValue) == 0x0001B0, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_LessEqual_IntInt_ReturnValue_3) == 0x0001E0, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_LessEqual_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001E8, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001F0, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_Add_IntInt_ReturnValue_4) == 0x0001F8, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_Add_IntInt_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_Add_VectorVector_ReturnValue) == 0x0001FC, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000208, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_GetVelocity_ReturnValue) == 0x000214, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_Array_Get_Item) == 0x000220, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_Array_Length_ReturnValue) == 0x000228, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_propToObject_ReturnValue) == 0x00022C, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_propToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_propToObject_foodData) == 0x000230, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_propToObject_foodData' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_propToObject_object) == 0x000248, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_propToObject_object' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_propToObject_isFood) == 0x000250, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_propToObject_isFood' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_propToObject_propData) == 0x000258, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_propToObject_propData' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_Less_IntInt_ReturnValue) == 0x0002D8, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_IsValidClass_ReturnValue) == 0x0002D9, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, Temp_int_Variable_5) == 0x0002DC, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::Temp_int_Variable_5' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_RandomUnitVector_ReturnValue) == 0x0002E0, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0002EC, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0002F8, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_Add_VectorVector_ReturnValue_2) == 0x000304, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_MakeTransform_ReturnValue_1) == 0x000310, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000340, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x000348, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000350, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, K2Node_DynamicCast_AsInt_Player) == 0x000358, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::K2Node_DynamicCast_AsInt_Player' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, K2Node_DynamicCast_bSuccess) == 0x000368, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x000370, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_asProp_return) == 0x000378, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_asProp_return' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3) == 0x000380, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_FinishSpawningActor_ReturnValue_3) == 0x000388, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_FinishSpawningActor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, K2Node_Select_Default) == 0x000390, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, K2Node_DynamicCast_AsInt_Player_1) == 0x000398, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::K2Node_DynamicCast_AsInt_Player_1' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, K2Node_DynamicCast_bSuccess_1) == 0x0003A8, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_asProp_return_1) == 0x0003B0, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_asProp_return_1' has a wrong offset!");
static_assert(offsetof(FallingBody_C_ExecuteUbergraph_fallingBody, CallFunc_SpawnEmitterAttached_ReturnValue) == 0x0003B8, "Member 'FallingBody_C_ExecuteUbergraph_fallingBody::CallFunc_SpawnEmitterAttached_ReturnValue' has a wrong offset!");

// Function fallingBody.fallingBody_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct FallingBody_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FallingBody_C_ReceiveTick) == 0x000004, "Wrong alignment on FallingBody_C_ReceiveTick");
static_assert(sizeof(FallingBody_C_ReceiveTick) == 0x000004, "Wrong size on FallingBody_C_ReceiveTick");
static_assert(offsetof(FallingBody_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'FallingBody_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

