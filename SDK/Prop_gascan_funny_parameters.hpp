#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_gascan_funny

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_gascan_funny.prop_gascan_funny_C.ExecuteUbergraph_prop_gascan_funny
// 0x0198 (0x0198 - 0x0000)
struct Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19B9[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19BA[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      CallFunc_obj_statDyn_obj;                          // 0x0058(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_ClampVectorSize_ReturnValue;              // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0080(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x010A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19BB[0x1];                                     // 0x010B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0114(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x012C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19BC[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny) == 0x000008, "Wrong alignment on Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny");
static_assert(sizeof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny) == 0x000198, "Wrong size on Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, EntryPoint) == 0x000000, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, Temp_object_Variable) == 0x000008, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, K2Node_Event_DeltaSeconds) == 0x000018, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000020, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000034, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_Add_VectorVector_ReturnValue) == 0x000040, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00004C, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_obj_statDyn_obj) == 0x000058, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_obj_statDyn_obj' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_ClampVectorSize_ReturnValue) == 0x000068, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_ClampVectorSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000074, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000080, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000108, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_bBlockingHit) == 0x000109, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_bInitialOverlap) == 0x00010A, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_Time) == 0x00010C, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_Distance) == 0x000110, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_Location) == 0x000114, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_ImpactPoint) == 0x000120, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_Normal) == 0x00012C, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_ImpactNormal) == 0x000138, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_PhysMat) == 0x000148, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_HitActor) == 0x000150, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_HitComponent) == 0x000158, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_HitBoneName) == 0x000160, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_HitItem) == 0x000168, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_ElementIndex) == 0x00016C, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_FaceIndex) == 0x000170, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_TraceStart) == 0x000174, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_BreakHitResult_TraceEnd) == 0x000180, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_Vector_Distance_ReturnValue) == 0x00018C, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny, CallFunc_Less_FloatFloat_ReturnValue) == 0x000190, "Member 'Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function prop_gascan_funny.prop_gascan_funny_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_gascan_funny_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_gascan_funny_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_gascan_funny_C_ReceiveTick");
static_assert(sizeof(Prop_gascan_funny_C_ReceiveTick) == 0x000004, "Wrong size on Prop_gascan_funny_C_ReceiveTick");
static_assert(offsetof(Prop_gascan_funny_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_gascan_funny_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

