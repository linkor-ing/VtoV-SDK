#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DoohickeyLazer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function doohickeyLazer.doohickeyLazer_C.ExecuteUbergraph_doohickeyLazer
// 0x0460 (0x0460 - 0x0000)
struct DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x0010(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      CallFunc_obj_statDynPhys_obj;                      // 0x0048(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0xC];                                       // 0x0064(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0070(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UParticleSystemComponent*               CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue_1;      // 0x00D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array_1;                          // 0x00F0(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0100(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x018A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_18B[0x1];                                      // 0x018B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0194(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C4[0x4];                                      // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0200(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x020C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0218(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMass_ReturnValue;                      // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                     CallFunc_SphereTraceMulti_OutHits;                 // 0x0228(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceMulti_ReturnValue;             // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_239[0x3];                                      // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_Array_Get_Item;                           // 0x0240(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x02C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x02CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x02CD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CE[0x2];                                      // 0x02CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x02D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x02D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x02E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x02F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x02FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x0318(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x0334(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x0340(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SetVectorLength_ReturnValue;              // 0x034C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects;                  // 0x0358(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0369(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36A[0x2];                                      // 0x036A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSimulatingPhysics_ReturnValue;          // 0x0370(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_371[0x3];                                      // 0x0371(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x0374(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0380(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x038C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0390(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MirrorVectorByNormal_ReturnValue;         // 0x039C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A9[0x3];                                      // 0x03A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x03AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x03B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x03C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x03C8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x0450(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_451[0x3];                                      // 0x0451(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0454(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer) == 0x000010, "Wrong alignment on DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer");
static_assert(sizeof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer) == 0x000460, "Wrong size on DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, EntryPoint) == 0x000000, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::EntryPoint' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_GetOwner_ReturnValue) == 0x000008, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, K2Node_MakeArray_Array) == 0x000010, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000020, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, Temp_int_Array_Index_Variable) == 0x00002C, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_GetActorForwardVector_ReturnValue) == 0x000030, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00003C, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_obj_statDynPhys_obj) == 0x000048, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_obj_statDynPhys_obj' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_Add_VectorVector_ReturnValue) == 0x000058, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_GetTransform_ReturnValue) == 0x000070, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakTransform_Location) == 0x0000A0, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakTransform_Rotation) == 0x0000AC, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakTransform_Scale) == 0x0000B8, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_SpawnEmitterAtLocation_ReturnValue) == 0x0000C8, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_SpawnEmitterAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_GetActorForwardVector_ReturnValue_1) == 0x0000D0, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_GetActorForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_Subtract_IntInt_ReturnValue) == 0x0000DC, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_GetOwner_ReturnValue_1) == 0x0000E0, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000E8, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, K2Node_MakeArray_Array_1) == 0x0000F0, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000100, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000188, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_bBlockingHit) == 0x000189, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_bInitialOverlap) == 0x00018A, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_Time) == 0x00018C, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_Distance) == 0x000190, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_Location) == 0x000194, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_ImpactPoint) == 0x0001A0, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_Normal) == 0x0001AC, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_ImpactNormal) == 0x0001B8, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_PhysMat) == 0x0001C8, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_HitActor) == 0x0001D0, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_HitComponent) == 0x0001D8, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_HitBoneName) == 0x0001E0, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_HitItem) == 0x0001E8, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_ElementIndex) == 0x0001EC, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_FaceIndex) == 0x0001F0, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_TraceStart) == 0x0001F4, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_TraceEnd) == 0x000200, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00020C, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_SelectVector_ReturnValue) == 0x000218, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_GetMass_ReturnValue) == 0x000224, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_GetMass_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_SphereTraceMulti_OutHits) == 0x000228, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_SphereTraceMulti_OutHits' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_SphereTraceMulti_ReturnValue) == 0x000238, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_SphereTraceMulti_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00023C, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_Array_Get_Item) == 0x000240, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0002C8, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_bBlockingHit_1) == 0x0002CC, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x0002CD, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_Time_1) == 0x0002D0, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_Distance_1) == 0x0002D4, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_Location_1) == 0x0002D8, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_ImpactPoint_1) == 0x0002E4, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_Normal_1) == 0x0002F0, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_ImpactNormal_1) == 0x0002FC, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_PhysMat_1) == 0x000308, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_HitActor_1) == 0x000310, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_HitComponent_1) == 0x000318, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_HitBoneName_1) == 0x000320, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_HitItem_1) == 0x000328, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_ElementIndex_1) == 0x00032C, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_FaceIndex_1) == 0x000330, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_TraceStart_1) == 0x000334, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_BreakHitResult_TraceEnd_1) == 0x000340, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_SetVectorLength_ReturnValue) == 0x00034C, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_SetVectorLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, K2Node_DynamicCast_AsInt_Objects) == 0x000358, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::K2Node_DynamicCast_AsInt_Objects' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, K2Node_DynamicCast_bSuccess) == 0x000368, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_DoesImplementInterface_ReturnValue) == 0x000369, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_Array_Length_ReturnValue) == 0x00036C, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_IsSimulatingPhysics_ReturnValue) == 0x000370, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_IsSimulatingPhysics_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_RandomUnitVector_ReturnValue) == 0x000374, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_VLerp_ReturnValue) == 0x000380, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, Temp_int_Loop_Counter_Variable) == 0x00038C, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_Normal_ReturnValue) == 0x000390, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_MirrorVectorByNormal_ReturnValue) == 0x00039C, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_MirrorVectorByNormal_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_Less_IntInt_ReturnValue) == 0x0003A8, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0003AC, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0003B8, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_Add_IntInt_ReturnValue) == 0x0003C4, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x0003C8, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x000450, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer, Temp_int_Variable) == 0x000454, "Member 'DoohickeyLazer_C_ExecuteUbergraph_doohickeyLazer::Temp_int_Variable' has a wrong offset!");

}
