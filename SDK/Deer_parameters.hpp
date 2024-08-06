#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Deer

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function deer.deer_C.ExecuteUbergraph_deer
// 0x0248 (0x0248 - 0x0000)
struct Deer_C_ExecuteUbergraph_deer final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_1;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	EPathFollowingResult                          Temp_byte_Variable;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_5;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_6;            // 0x0098(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   Temp_name_Variable;                                // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation; // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue; // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue;      // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DD[0x3];                                       // 0x00DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_ED[0x3];                                       // 0x00ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00FD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_FE[0x2];                                       // 0x00FE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0108(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0114(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x012C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0148(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0164(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;           // 0x017C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x0188(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue_1;         // 0x018C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotationFromAxes_ReturnValue;         // 0x0198(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x01A4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_22C[0x4];                                      // 0x022C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0244(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Deer_C_ExecuteUbergraph_deer) == 0x000008, "Wrong alignment on Deer_C_ExecuteUbergraph_deer");
static_assert(sizeof(Deer_C_ExecuteUbergraph_deer) == 0x000248, "Wrong size on Deer_C_ExecuteUbergraph_deer");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, EntryPoint) == 0x000000, "Member 'Deer_C_ExecuteUbergraph_deer::EntryPoint' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_RandomFloatInRange_ReturnValue) == 0x000004, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_CustomEvent_MovementResult_1) == 0x000018, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_CustomEvent_MovementResult_1' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_CustomEvent_MovementResult) == 0x000019, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_CustomEvent_MovementResult' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, Temp_byte_Variable) == 0x00002C, "Member 'Deer_C_ExecuteUbergraph_deer::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_CustomEvent_NotifyName_4) == 0x000040, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_CustomEvent_NotifyName_3) == 0x000048, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_CreateDelegate_OutputDelegate_3) == 0x000050, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_CustomEvent_NotifyName_2) == 0x000060, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_CreateDelegate_OutputDelegate_4) == 0x000068, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_CustomEvent_NotifyName_1) == 0x000078, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_CreateDelegate_OutputDelegate_5) == 0x000080, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_CustomEvent_NotifyName) == 0x000090, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_CreateDelegate_OutputDelegate_6) == 0x000098, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, Temp_name_Variable) == 0x0000A8, "Member 'Deer_C_ExecuteUbergraph_deer::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x0000B0, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B4, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation) == 0x0000C0, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue) == 0x0000CC, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_CreateMoveToProxyObject_ReturnValue) == 0x0000D0, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_CreateMoveToProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x0000D8, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_IsValid_ReturnValue) == 0x0000DC, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x0000E0, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, K2Node_Event_DeltaSeconds) == 0x0000E8, "Member 'Deer_C_ExecuteUbergraph_deer::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_IsValid_ReturnValue_1) == 0x0000EC, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_GetActorForwardVector_ReturnValue) == 0x0000F0, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_bBlockingHit) == 0x0000FC, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000FD, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_Time) == 0x000100, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_Distance) == 0x000104, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_Location) == 0x000108, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_ImpactPoint) == 0x000114, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_Normal) == 0x000120, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_ImpactNormal) == 0x00012C, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_PhysMat) == 0x000138, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_HitActor) == 0x000140, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_HitComponent) == 0x000148, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_HitBoneName) == 0x000150, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_HitItem) == 0x000158, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_ElementIndex) == 0x00015C, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_FaceIndex) == 0x000160, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_TraceStart) == 0x000164, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_BreakHitResult_TraceEnd) == 0x000170, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_Cross_VectorVector_ReturnValue) == 0x00017C, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x000188, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_Cross_VectorVector_ReturnValue_1) == 0x00018C, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_Cross_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_MakeRotationFromAxes_ReturnValue) == 0x000198, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_MakeRotationFromAxes_ReturnValue' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0001A4, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000230, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000238, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_GetDistanceTo_ReturnValue) == 0x000240, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(Deer_C_ExecuteUbergraph_deer, CallFunc_Less_FloatFloat_ReturnValue) == 0x000244, "Member 'Deer_C_ExecuteUbergraph_deer::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function deer.deer_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Deer_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Deer_C_ReceiveTick) == 0x000004, "Wrong alignment on Deer_C_ReceiveTick");
static_assert(sizeof(Deer_C_ReceiveTick) == 0x000004, "Wrong size on Deer_C_ReceiveTick");
static_assert(offsetof(Deer_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Deer_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function deer.deer_C.OnCompleted_2B335E8D47F780E7A147A08168D3E410
// 0x0008 (0x0008 - 0x0000)
struct Deer_C_OnCompleted_2B335E8D47F780E7A147A08168D3E410 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Deer_C_OnCompleted_2B335E8D47F780E7A147A08168D3E410) == 0x000004, "Wrong alignment on Deer_C_OnCompleted_2B335E8D47F780E7A147A08168D3E410");
static_assert(sizeof(Deer_C_OnCompleted_2B335E8D47F780E7A147A08168D3E410) == 0x000008, "Wrong size on Deer_C_OnCompleted_2B335E8D47F780E7A147A08168D3E410");
static_assert(offsetof(Deer_C_OnCompleted_2B335E8D47F780E7A147A08168D3E410, NotifyName) == 0x000000, "Member 'Deer_C_OnCompleted_2B335E8D47F780E7A147A08168D3E410::NotifyName' has a wrong offset!");

// Function deer.deer_C.OnBlendOut_2B335E8D47F780E7A147A08168D3E410
// 0x0008 (0x0008 - 0x0000)
struct Deer_C_OnBlendOut_2B335E8D47F780E7A147A08168D3E410 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Deer_C_OnBlendOut_2B335E8D47F780E7A147A08168D3E410) == 0x000004, "Wrong alignment on Deer_C_OnBlendOut_2B335E8D47F780E7A147A08168D3E410");
static_assert(sizeof(Deer_C_OnBlendOut_2B335E8D47F780E7A147A08168D3E410) == 0x000008, "Wrong size on Deer_C_OnBlendOut_2B335E8D47F780E7A147A08168D3E410");
static_assert(offsetof(Deer_C_OnBlendOut_2B335E8D47F780E7A147A08168D3E410, NotifyName) == 0x000000, "Member 'Deer_C_OnBlendOut_2B335E8D47F780E7A147A08168D3E410::NotifyName' has a wrong offset!");

// Function deer.deer_C.OnInterrupted_2B335E8D47F780E7A147A08168D3E410
// 0x0008 (0x0008 - 0x0000)
struct Deer_C_OnInterrupted_2B335E8D47F780E7A147A08168D3E410 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Deer_C_OnInterrupted_2B335E8D47F780E7A147A08168D3E410) == 0x000004, "Wrong alignment on Deer_C_OnInterrupted_2B335E8D47F780E7A147A08168D3E410");
static_assert(sizeof(Deer_C_OnInterrupted_2B335E8D47F780E7A147A08168D3E410) == 0x000008, "Wrong size on Deer_C_OnInterrupted_2B335E8D47F780E7A147A08168D3E410");
static_assert(offsetof(Deer_C_OnInterrupted_2B335E8D47F780E7A147A08168D3E410, NotifyName) == 0x000000, "Member 'Deer_C_OnInterrupted_2B335E8D47F780E7A147A08168D3E410::NotifyName' has a wrong offset!");

// Function deer.deer_C.OnNotifyBegin_2B335E8D47F780E7A147A08168D3E410
// 0x0008 (0x0008 - 0x0000)
struct Deer_C_OnNotifyBegin_2B335E8D47F780E7A147A08168D3E410 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Deer_C_OnNotifyBegin_2B335E8D47F780E7A147A08168D3E410) == 0x000004, "Wrong alignment on Deer_C_OnNotifyBegin_2B335E8D47F780E7A147A08168D3E410");
static_assert(sizeof(Deer_C_OnNotifyBegin_2B335E8D47F780E7A147A08168D3E410) == 0x000008, "Wrong size on Deer_C_OnNotifyBegin_2B335E8D47F780E7A147A08168D3E410");
static_assert(offsetof(Deer_C_OnNotifyBegin_2B335E8D47F780E7A147A08168D3E410, NotifyName) == 0x000000, "Member 'Deer_C_OnNotifyBegin_2B335E8D47F780E7A147A08168D3E410::NotifyName' has a wrong offset!");

// Function deer.deer_C.OnNotifyEnd_2B335E8D47F780E7A147A08168D3E410
// 0x0008 (0x0008 - 0x0000)
struct Deer_C_OnNotifyEnd_2B335E8D47F780E7A147A08168D3E410 final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Deer_C_OnNotifyEnd_2B335E8D47F780E7A147A08168D3E410) == 0x000004, "Wrong alignment on Deer_C_OnNotifyEnd_2B335E8D47F780E7A147A08168D3E410");
static_assert(sizeof(Deer_C_OnNotifyEnd_2B335E8D47F780E7A147A08168D3E410) == 0x000008, "Wrong size on Deer_C_OnNotifyEnd_2B335E8D47F780E7A147A08168D3E410");
static_assert(offsetof(Deer_C_OnNotifyEnd_2B335E8D47F780E7A147A08168D3E410, NotifyName) == 0x000000, "Member 'Deer_C_OnNotifyEnd_2B335E8D47F780E7A147A08168D3E410::NotifyName' has a wrong offset!");

// Function deer.deer_C.OnSuccess_75A9BA0E4DB0CE711F734395D44D4C89
// 0x0001 (0x0001 - 0x0000)
struct Deer_C_OnSuccess_75A9BA0E4DB0CE711F734395D44D4C89 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Deer_C_OnSuccess_75A9BA0E4DB0CE711F734395D44D4C89) == 0x000001, "Wrong alignment on Deer_C_OnSuccess_75A9BA0E4DB0CE711F734395D44D4C89");
static_assert(sizeof(Deer_C_OnSuccess_75A9BA0E4DB0CE711F734395D44D4C89) == 0x000001, "Wrong size on Deer_C_OnSuccess_75A9BA0E4DB0CE711F734395D44D4C89");
static_assert(offsetof(Deer_C_OnSuccess_75A9BA0E4DB0CE711F734395D44D4C89, MovementResult) == 0x000000, "Member 'Deer_C_OnSuccess_75A9BA0E4DB0CE711F734395D44D4C89::MovementResult' has a wrong offset!");

// Function deer.deer_C.OnFail_75A9BA0E4DB0CE711F734395D44D4C89
// 0x0001 (0x0001 - 0x0000)
struct Deer_C_OnFail_75A9BA0E4DB0CE711F734395D44D4C89 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Deer_C_OnFail_75A9BA0E4DB0CE711F734395D44D4C89) == 0x000001, "Wrong alignment on Deer_C_OnFail_75A9BA0E4DB0CE711F734395D44D4C89");
static_assert(sizeof(Deer_C_OnFail_75A9BA0E4DB0CE711F734395D44D4C89) == 0x000001, "Wrong size on Deer_C_OnFail_75A9BA0E4DB0CE711F734395D44D4C89");
static_assert(offsetof(Deer_C_OnFail_75A9BA0E4DB0CE711F734395D44D4C89, MovementResult) == 0x000000, "Member 'Deer_C_OnFail_75A9BA0E4DB0CE711F734395D44D4C89::MovementResult' has a wrong offset!");

}

