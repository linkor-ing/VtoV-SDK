#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SkerfuroWalk

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function skerfuroWalk.skerfuroWalk_C.ExecuteUbergraph_skerfuroWalk
// 0x0430 (0x0430 - 0x0000)
struct SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0010(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      CallFunc_obj_static_obj;                           // 0x00A8(0x0010)(ReferenceParm)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x00E8(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x010C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_10D[0x3];                                      // 0x010D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatPlusEquals_FloatOut;          // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_13C[0x4];                                      // 0x013C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue_1;     // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_149[0x3];                                      // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0164(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0170(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      CallFunc_obj_static_obj_1;                         // 0x0200(0x0010)(ReferenceParm)
	TArray<class AActor*>                         Temp_object_Variable_1;                            // 0x0210(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0220(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x02A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A9[0x3];                                      // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x02AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x02B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x02C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit_1;       // 0x02D0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue_1;  // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0359(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x035A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35B[0x1];                                      // 0x035B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x035C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0364(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0370(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x037C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0388(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_394[0x4];                                      // 0x0394(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0398(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x03A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x03A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x03B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x03BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x03C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x03C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x03D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x03DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E8[0x8];                                      // 0x03E8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x03F0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0420(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrunge_C*                              CallFunc_FinishSpawningActor_ReturnValue;          // 0x0428(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk) == 0x000010, "Wrong alignment on SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk");
static_assert(sizeof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk) == 0x000430, "Wrong size on SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, EntryPoint) == 0x000000, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_VLerp_ReturnValue) == 0x000004, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000010, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000098, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_obj_static_obj) == 0x0000A8, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_obj_static_obj' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x0000B8, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000C0, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_Subtract_VectorVector_ReturnValue) == 0x0000CC, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_Normal_ReturnValue) == 0x0000D8, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, Temp_object_Variable) == 0x0000E8, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_GetForwardVector_ReturnValue) == 0x0000F8, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_Dot_VectorVector_ReturnValue) == 0x000104, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_RandomFloatInRange_ReturnValue) == 0x000108, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00010C, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_RotateAngleAxis_ReturnValue) == 0x000110, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_Conv_VectorToString_ReturnValue) == 0x000120, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, K2Node_Event_DeltaSeconds) == 0x000130, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000134, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_VictoryFloatPlusEquals_FloatOut) == 0x000138, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_VictoryFloatPlusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_GetPlayerCameraManager_ReturnValue_1) == 0x000140, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_GetPlayerCameraManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000148, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x00014C, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_Add_VectorVector_ReturnValue) == 0x000158, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000164, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000170, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_K2_SetActorLocation_ReturnValue) == 0x0001F8, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_obj_static_obj_1) == 0x000200, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_obj_static_obj_1' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, Temp_object_Variable_1) == 0x000210, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000220, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x0002A8, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x0002AC, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0002B8, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x0002C4, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_LineTraceSingleForObjects_OutHit_1) == 0x0002D0, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_LineTraceSingleForObjects_OutHit_1' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_LineTraceSingleForObjects_ReturnValue_1) == 0x000358, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_LineTraceSingleForObjects_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_bBlockingHit) == 0x000359, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_bInitialOverlap) == 0x00035A, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_Time) == 0x00035C, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_Distance) == 0x000360, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_Location) == 0x000364, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_ImpactPoint) == 0x000370, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_Normal) == 0x00037C, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_ImpactNormal) == 0x000388, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_PhysMat) == 0x000398, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_HitActor) == 0x0003A0, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_HitComponent) == 0x0003A8, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_HitBoneName) == 0x0003B0, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_HitItem) == 0x0003B8, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_ElementIndex) == 0x0003BC, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_FaceIndex) == 0x0003C0, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_TraceStart) == 0x0003C4, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BreakHitResult_TraceEnd) == 0x0003D0, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x0003DC, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_MakeTransform_ReturnValue) == 0x0003F0, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000420, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk, CallFunc_FinishSpawningActor_ReturnValue) == 0x000428, "Member 'SkerfuroWalk_C_ExecuteUbergraph_skerfuroWalk::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function skerfuroWalk.skerfuroWalk_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct SkerfuroWalk_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkerfuroWalk_C_ReceiveTick) == 0x000004, "Wrong alignment on SkerfuroWalk_C_ReceiveTick");
static_assert(sizeof(SkerfuroWalk_C_ReceiveTick) == 0x000004, "Wrong size on SkerfuroWalk_C_ReceiveTick");
static_assert(offsetof(SkerfuroWalk_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'SkerfuroWalk_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function skerfuroWalk.skerfuroWalk_C.upd
// 0x00B8 (0x00B8 - 0x0000)
struct SkerfuroWalk_C_Upd final
{
public:
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_SelectRotator_ReturnValue;                // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UKerfurOmegaV1_Skeleton_AnimBlueprint1_C* K2Node_DynamicCast_AsKerfur_Omega_V1_Skeleton_Anim_Blueprint_1; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x002C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(SkerfuroWalk_C_Upd) == 0x000008, "Wrong alignment on SkerfuroWalk_C_Upd");
static_assert(sizeof(SkerfuroWalk_C_Upd) == 0x0000B8, "Wrong size on SkerfuroWalk_C_Upd");
static_assert(offsetof(SkerfuroWalk_C_Upd, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x000000, "Member 'SkerfuroWalk_C_Upd::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_Upd, CallFunc_GetAnimInstance_ReturnValue) == 0x000008, "Member 'SkerfuroWalk_C_Upd::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_Upd, CallFunc_SelectRotator_ReturnValue) == 0x000010, "Member 'SkerfuroWalk_C_Upd::CallFunc_SelectRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_Upd, K2Node_DynamicCast_AsKerfur_Omega_V1_Skeleton_Anim_Blueprint_1) == 0x000020, "Member 'SkerfuroWalk_C_Upd::K2Node_DynamicCast_AsKerfur_Omega_V1_Skeleton_Anim_Blueprint_1' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_Upd, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'SkerfuroWalk_C_Upd::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkerfuroWalk_C_Upd, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x00002C, "Member 'SkerfuroWalk_C_Upd::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");

}
