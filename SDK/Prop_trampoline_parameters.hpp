#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_trampoline

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_trampoline.prop_trampoline_C.ExecuteUbergraph_prop_trampoline
// 0x0198 (0x0198 - 0x0000)
struct Prop_trampoline_C_ExecuteUbergraph_prop_trampoline final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue;             // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x0034(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA[0x2];                                       // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0118(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0128(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0134(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14D[0x3];                                      // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMass_ReturnValue;                      // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorFloat_ReturnValue;           // 0x0154(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSimulatingPhysics_ReturnValue;          // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_161[0x3];                                      // 0x0161(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0164(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_169[0x3];                                      // 0x0169(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_jump_ReturnValue;                         // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0194(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline) == 0x000008, "Wrong alignment on Prop_trampoline_C_ExecuteUbergraph_prop_trampoline");
static_assert(sizeof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline) == 0x000198, "Wrong size on Prop_trampoline_C_ExecuteUbergraph_prop_trampoline");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, EntryPoint) == 0x000000, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_GetActorUpVector_ReturnValue) == 0x000004, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_GetActorUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, K2Node_ComponentBoundEvent_HitComponent) == 0x000010, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, K2Node_ComponentBoundEvent_OtherActor) == 0x000018, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, K2Node_ComponentBoundEvent_OtherComp) == 0x000020, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000028, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, K2Node_ComponentBoundEvent_Hit) == 0x000034, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000BC, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_bBlockingHit) == 0x0000C8, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000C9, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_Time) == 0x0000CC, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_Distance) == 0x0000D0, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_Location) == 0x0000D4, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_ImpactPoint) == 0x0000E0, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_Normal) == 0x0000EC, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_ImpactNormal) == 0x0000F8, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_PhysMat) == 0x000108, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_HitActor) == 0x000110, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_HitComponent) == 0x000118, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_HitBoneName) == 0x000120, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_HitItem) == 0x000128, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_ElementIndex) == 0x00012C, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_FaceIndex) == 0x000130, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_TraceStart) == 0x000134, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_BreakHitResult_TraceEnd) == 0x000140, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_IsValid_ReturnValue) == 0x00014C, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_GetMass_ReturnValue) == 0x000150, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_GetMass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_Divide_VectorFloat_ReturnValue) == 0x000154, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_Divide_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_IsSimulatingPhysics_ReturnValue) == 0x000160, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_IsSimulatingPhysics_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_VSize_ReturnValue) == 0x000164, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000168, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_jump_ReturnValue) == 0x00016C, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_jump_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000178, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000184, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_Dot_VectorVector_ReturnValue) == 0x000190, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_ExecuteUbergraph_prop_trampoline, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000194, "Member 'Prop_trampoline_C_ExecuteUbergraph_prop_trampoline::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");

// Function prop_trampoline.prop_trampoline_C.BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0024(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Param_Hit) == 0x000024, "Member 'Prop_trampoline_C_BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Param_Hit' has a wrong offset!");

// Function prop_trampoline.prop_trampoline_C.Jump
// 0x0048 (0x0048 - 0x0000)
struct Prop_trampoline_C_Jump final
{
public:
	struct FVector                                InVec;                                             // 0x0000(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         B;                                                 // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                ReturnValue;                                       // 0x0010(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue;             // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_trampoline_C_Jump) == 0x000004, "Wrong alignment on Prop_trampoline_C_Jump");
static_assert(sizeof(Prop_trampoline_C_Jump) == 0x000048, "Wrong size on Prop_trampoline_C_Jump");
static_assert(offsetof(Prop_trampoline_C_Jump, InVec) == 0x000000, "Member 'Prop_trampoline_C_Jump::InVec' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_Jump, B) == 0x00000C, "Member 'Prop_trampoline_C_Jump::B' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_Jump, ReturnValue) == 0x000010, "Member 'Prop_trampoline_C_Jump::ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_Jump, CallFunc_GetActorUpVector_ReturnValue) == 0x00001C, "Member 'Prop_trampoline_C_Jump::CallFunc_GetActorUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_Jump, CallFunc_BreakVector_X) == 0x000028, "Member 'Prop_trampoline_C_Jump::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_Jump, CallFunc_BreakVector_Y) == 0x00002C, "Member 'Prop_trampoline_C_Jump::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_Jump, CallFunc_BreakVector_Z) == 0x000030, "Member 'Prop_trampoline_C_Jump::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_Jump, CallFunc_Abs_ReturnValue) == 0x000034, "Member 'Prop_trampoline_C_Jump::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_Jump, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000038, "Member 'Prop_trampoline_C_Jump::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_Jump, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00003C, "Member 'Prop_trampoline_C_Jump::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

// Function prop_trampoline.prop_trampoline_C.landedOn
// 0x0080 (0x0080 - 0x0000)
struct Prop_trampoline_C_LandedOn final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreFallDamage;                                  // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue;             // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue_1;                      // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorUpVector_ReturnValue_1;           // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_trampoline_C_LandedOn) == 0x000008, "Wrong alignment on Prop_trampoline_C_LandedOn");
static_assert(sizeof(Prop_trampoline_C_LandedOn) == 0x000080, "Wrong size on Prop_trampoline_C_LandedOn");
static_assert(offsetof(Prop_trampoline_C_LandedOn, Player) == 0x000000, "Member 'Prop_trampoline_C_LandedOn::Player' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_LandedOn, IgnoreFallDamage) == 0x000008, "Member 'Prop_trampoline_C_LandedOn::IgnoreFallDamage' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_LandedOn, CallFunc_GetActorUpVector_ReturnValue) == 0x00000C, "Member 'Prop_trampoline_C_LandedOn::CallFunc_GetActorUpVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_LandedOn, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'Prop_trampoline_C_LandedOn::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_LandedOn, CallFunc_VSize_ReturnValue) == 0x000024, "Member 'Prop_trampoline_C_LandedOn::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_LandedOn, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000028, "Member 'Prop_trampoline_C_LandedOn::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_LandedOn, CallFunc_GetVelocity_ReturnValue) == 0x00002C, "Member 'Prop_trampoline_C_LandedOn::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_LandedOn, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000038, "Member 'Prop_trampoline_C_LandedOn::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_LandedOn, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000044, "Member 'Prop_trampoline_C_LandedOn::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_LandedOn, CallFunc_VSize_ReturnValue_1) == 0x000050, "Member 'Prop_trampoline_C_LandedOn::CallFunc_VSize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_LandedOn, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000054, "Member 'Prop_trampoline_C_LandedOn::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_LandedOn, CallFunc_Dot_VectorVector_ReturnValue) == 0x000060, "Member 'Prop_trampoline_C_LandedOn::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_LandedOn, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000064, "Member 'Prop_trampoline_C_LandedOn::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_LandedOn, CallFunc_GetActorUpVector_ReturnValue_1) == 0x000068, "Member 'Prop_trampoline_C_LandedOn::CallFunc_GetActorUpVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_trampoline_C_LandedOn, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000074, "Member 'Prop_trampoline_C_LandedOn::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

}
