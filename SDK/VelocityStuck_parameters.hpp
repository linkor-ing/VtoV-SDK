#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VelocityStuck

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function velocityStuck.velocityStuck_C.ExecuteUbergraph_velocityStuck
// 0x02D0 (0x02D0 - 0x0000)
struct VelocityStuck_C_ExecuteUbergraph_velocityStuck final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3356[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_player_C>         K2Node_DynamicCast_AsInt_Player;                   // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3357[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_C*                                CallFunc_asProp_return;                            // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3358[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_HitComponent;                   // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_OtherActor;                     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_OtherComp;                      // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_CustomEvent_NormalImpulse;                  // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_CustomEvent_Hit;                            // 0x005C(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00E5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3359[0x2];                                     // 0x00E6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0108(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0114(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SetVectorLength_ReturnValue;              // 0x0168(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SetVectorLength_ReturnValue_1;            // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x018C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x0198(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_335A[0x8];                                     // 0x0228(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0230(0x0030)(IsPlainOldData, NoDestructor)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0260(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_TransformDirection_ReturnValue;           // 0x0270(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0280(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0284(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_335B[0x3];                                     // 0x0285(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x0288(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0290(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_DynamicCast_AsPrimitive_Component;          // 0x0298(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x02A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_335C[0x3];                                     // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x02A4(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_335D[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x02B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x02BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x02BD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Select_Default;                             // 0x02BE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_335E[0x1];                                     // 0x02BF(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMass_ReturnValue;                      // 0x02C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x02C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(VelocityStuck_C_ExecuteUbergraph_velocityStuck) == 0x000010, "Wrong alignment on VelocityStuck_C_ExecuteUbergraph_velocityStuck");
static_assert(sizeof(VelocityStuck_C_ExecuteUbergraph_velocityStuck) == 0x0002D0, "Wrong size on VelocityStuck_C_ExecuteUbergraph_velocityStuck");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, EntryPoint) == 0x000000, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::EntryPoint' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, K2Node_DynamicCast_AsInt_Player) == 0x000008, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::K2Node_DynamicCast_AsInt_Player' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_asProp_return) == 0x000020, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_asProp_return' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, Temp_bool_Variable) == 0x000028, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00002C, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, K2Node_CustomEvent_HitComponent) == 0x000038, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::K2Node_CustomEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, K2Node_CustomEvent_OtherActor) == 0x000040, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::K2Node_CustomEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, K2Node_CustomEvent_OtherComp) == 0x000048, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::K2Node_CustomEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, K2Node_CustomEvent_NormalImpulse) == 0x000050, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::K2Node_CustomEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, K2Node_CustomEvent_Hit) == 0x00005C, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::K2Node_CustomEvent_Hit' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_bBlockingHit) == 0x0000E4, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000E5, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_Time) == 0x0000E8, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_Distance) == 0x0000EC, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_Location) == 0x0000F0, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_ImpactPoint) == 0x0000FC, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_Normal) == 0x000108, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_ImpactNormal) == 0x000114, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_PhysMat) == 0x000120, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_HitActor) == 0x000128, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_HitComponent) == 0x000130, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_HitBoneName) == 0x000138, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_HitItem) == 0x000140, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_ElementIndex) == 0x000144, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_FaceIndex) == 0x000148, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_TraceStart) == 0x00014C, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BreakHitResult_TraceEnd) == 0x000158, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_VSize_ReturnValue) == 0x000164, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_SetVectorLength_ReturnValue) == 0x000168, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_SetVectorLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_SetVectorLength_ReturnValue_1) == 0x000174, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_SetVectorLength_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_Add_VectorVector_ReturnValue) == 0x000180, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_Add_VectorVector_ReturnValue_1) == 0x00018C, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x000198, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_GetOwner_ReturnValue) == 0x000220, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000230, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, K2Node_CreateDelegate_OutputDelegate) == 0x000260, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_TransformDirection_ReturnValue) == 0x000270, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_TransformDirection_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_Dot_VectorVector_ReturnValue) == 0x00027C, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_Abs_ReturnValue) == 0x000280, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_IsValid_ReturnValue) == 0x000284, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, K2Node_CustomEvent_DestroyedActor) == 0x000288, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000290, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, K2Node_DynamicCast_AsPrimitive_Component) == 0x000298, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::K2Node_DynamicCast_AsPrimitive_Component' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, K2Node_DynamicCast_bSuccess_1) == 0x0002A0, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, K2Node_CreateDelegate_OutputDelegate_1) == 0x0002A4, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_K2_AttachToComponent_ReturnValue) == 0x0002B4, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_SelectFloat_ReturnValue) == 0x0002B8, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x0002BC, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0002BD, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, K2Node_Select_Default) == 0x0002BE, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_GetMass_ReturnValue) == 0x0002C0, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_GetMass_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0002C4, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0002C8, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_ExecuteUbergraph_velocityStuck, CallFunc_BooleanAND_ReturnValue) == 0x0002C9, "Member 'VelocityStuck_C_ExecuteUbergraph_velocityStuck::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function velocityStuck.velocityStuck_C.dd
// 0x0008 (0x0008 - 0x0000)
struct VelocityStuck_C_Dd final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VelocityStuck_C_Dd) == 0x000008, "Wrong alignment on VelocityStuck_C_Dd");
static_assert(sizeof(VelocityStuck_C_Dd) == 0x000008, "Wrong size on VelocityStuck_C_Dd");
static_assert(offsetof(VelocityStuck_C_Dd, DestroyedActor) == 0x000000, "Member 'VelocityStuck_C_Dd::DestroyedActor' has a wrong offset!");

// Function velocityStuck.velocityStuck_C.Hit
// 0x00B0 (0x00B0 - 0x0000)
struct VelocityStuck_C_Hit final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0024(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(VelocityStuck_C_Hit) == 0x000008, "Wrong alignment on VelocityStuck_C_Hit");
static_assert(sizeof(VelocityStuck_C_Hit) == 0x0000B0, "Wrong size on VelocityStuck_C_Hit");
static_assert(offsetof(VelocityStuck_C_Hit, HitComponent) == 0x000000, "Member 'VelocityStuck_C_Hit::HitComponent' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_Hit, OtherActor) == 0x000008, "Member 'VelocityStuck_C_Hit::OtherActor' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_Hit, OtherComp) == 0x000010, "Member 'VelocityStuck_C_Hit::OtherComp' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_Hit, NormalImpulse) == 0x000018, "Member 'VelocityStuck_C_Hit::NormalImpulse' has a wrong offset!");
static_assert(offsetof(VelocityStuck_C_Hit, Param_Hit) == 0x000024, "Member 'VelocityStuck_C_Hit::Param_Hit' has a wrong offset!");

}
