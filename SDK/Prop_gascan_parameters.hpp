#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_gascan

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Struct_mFloat_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_gascan.prop_gascan_C.ExecuteUbergraph_prop_gascan
// 0x01F0 (0x01F0 - 0x0000)
struct Prop_gascan_C_ExecuteUbergraph_prop_gascan final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2805[0xC];                                     // 0x0014(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_2;                       // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_3;                       // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_4;                       // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_5;                       // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_6;                       // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2806[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_HitComponent;           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                K2Node_ComponentBoundEvent_NormalImpulse;          // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_ComponentBoundEvent_Hit;                    // 0x009C(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_2807[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExplosion_C*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0149(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2808[0x2];                                     // 0x014A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0154(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0160(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0178(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2809[0x4];                                     // 0x0184(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x01CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_280A[0x3];                                     // 0x01CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects;                  // 0x01D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_gascanFuel_fueled;                        // 0x01E2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x01E3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_gascan_C_ExecuteUbergraph_prop_gascan) == 0x000010, "Wrong alignment on Prop_gascan_C_ExecuteUbergraph_prop_gascan");
static_assert(sizeof(Prop_gascan_C_ExecuteUbergraph_prop_gascan) == 0x0001F0, "Wrong size on Prop_gascan_C_ExecuteUbergraph_prop_gascan");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, EntryPoint) == 0x000000, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000004, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000010, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_MakeTransform_ReturnValue) == 0x000020, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_Lerp_ReturnValue) == 0x000050, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_Lerp_ReturnValue_1) == 0x000054, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_Lerp_ReturnValue_2) == 0x000058, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_Lerp_ReturnValue_3) == 0x00005C, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_Lerp_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_Lerp_ReturnValue_4) == 0x000060, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_Lerp_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_Round_ReturnValue) == 0x000064, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_Lerp_ReturnValue_5) == 0x000068, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_Lerp_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_Lerp_ReturnValue_6) == 0x00006C, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_Lerp_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_GreaterEqual_FloatFloat_ReturnValue) == 0x000070, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_GreaterEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, K2Node_ComponentBoundEvent_HitComponent) == 0x000078, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::K2Node_ComponentBoundEvent_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, K2Node_ComponentBoundEvent_OtherActor) == 0x000080, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, K2Node_ComponentBoundEvent_OtherComp) == 0x000088, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, K2Node_ComponentBoundEvent_NormalImpulse) == 0x000090, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::K2Node_ComponentBoundEvent_NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, K2Node_ComponentBoundEvent_Hit) == 0x00009C, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::K2Node_ComponentBoundEvent_Hit' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000128, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_FinishSpawningActor_ReturnValue) == 0x000130, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, K2Node_Event_player_1) == 0x000138, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, K2Node_Event_player) == 0x000140, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_bBlockingHit) == 0x000148, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_bInitialOverlap) == 0x000149, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_Time) == 0x00014C, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_Distance) == 0x000150, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_Location) == 0x000154, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_ImpactPoint) == 0x000160, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_Normal) == 0x00016C, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_ImpactNormal) == 0x000178, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_PhysMat) == 0x000188, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_HitActor) == 0x000190, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_HitComponent) == 0x000198, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_HitBoneName) == 0x0001A0, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_HitItem) == 0x0001A8, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_ElementIndex) == 0x0001AC, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_FaceIndex) == 0x0001B0, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_TraceStart) == 0x0001B4, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_BreakHitResult_TraceEnd) == 0x0001C0, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0001CC, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, K2Node_DynamicCast_AsInt_Objects) == 0x0001D0, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::K2Node_DynamicCast_AsInt_Objects' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, K2Node_DynamicCast_bSuccess) == 0x0001E0, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_DoesImplementInterface_ReturnValue) == 0x0001E1, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_gascanFuel_fueled) == 0x0001E2, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_gascanFuel_fueled' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_ExecuteUbergraph_prop_gascan, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0001E3, "Member 'Prop_gascan_C_ExecuteUbergraph_prop_gascan::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");

// Function prop_gascan.prop_gascan_C.BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// 0x00B0 (0x00B0 - 0x0000)
struct Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    HitComponent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NormalImpulse;                                     // 0x0018(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0024(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x000008, "Wrong alignment on Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(sizeof(Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature) == 0x0000B0, "Wrong size on Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");
static_assert(offsetof(Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, HitComponent) == 0x000000, "Member 'Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, NormalImpulse) == 0x000018, "Member 'Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::NormalImpulse' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature, Param_Hit) == 0x000024, "Member 'Prop_gascan_C_BndEvt__prop_gascan_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature::Param_Hit' has a wrong offset!");

// Function prop_gascan.prop_gascan_C.playerHandUse_LMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_gascan_C_PlayerHandUse_LMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_gascan_C_PlayerHandUse_LMB) == 0x000008, "Wrong alignment on Prop_gascan_C_PlayerHandUse_LMB");
static_assert(sizeof(Prop_gascan_C_PlayerHandUse_LMB) == 0x000008, "Wrong size on Prop_gascan_C_PlayerHandUse_LMB");
static_assert(offsetof(Prop_gascan_C_PlayerHandUse_LMB, Player) == 0x000000, "Member 'Prop_gascan_C_PlayerHandUse_LMB::Player' has a wrong offset!");

// Function prop_gascan.prop_gascan_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_gascan_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_gascan_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_gascan_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_gascan_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_gascan_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_gascan_C_PlayerHandUse_RMB, Player) == 0x000000, "Member 'Prop_gascan_C_PlayerHandUse_RMB::Player' has a wrong offset!");

// Function prop_gascan.prop_gascan_C.lookAt
// 0x0120 (0x0120 - 0x0000)
struct Prop_gascan_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_280B[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00B0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x00D8(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_gascan_C_LookAt) == 0x000008, "Wrong alignment on Prop_gascan_C_LookAt");
static_assert(sizeof(Prop_gascan_C_LookAt) == 0x000120, "Wrong size on Prop_gascan_C_LookAt");
static_assert(offsetof(Prop_gascan_C_LookAt, Player) == 0x000000, "Member 'Prop_gascan_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_LookAt, Param_Hit) == 0x000008, "Member 'Prop_gascan_C_LookAt::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_LookAt, Return) == 0x000090, "Member 'Prop_gascan_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_LookAt, Text) == 0x000098, "Member 'Prop_gascan_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Prop_gascan_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_LookAt, CallFunc_MakeLiteralText_ReturnValue) == 0x0000B0, "Member 'Prop_gascan_C_LookAt::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x0000C8, "Member 'Prop_gascan_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_LookAt, CallFunc_Conv_FloatToText_ReturnValue) == 0x0000D8, "Member 'Prop_gascan_C_LookAt::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_LookAt, CallFunc_Concat_StrStr_ReturnValue) == 0x0000F0, "Member 'Prop_gascan_C_LookAt::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_LookAt, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000100, "Member 'Prop_gascan_C_LookAt::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_LookAt, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000110, "Member 'Prop_gascan_C_LookAt::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function prop_gascan.prop_gascan_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct Prop_gascan_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_280C[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mFloat                         CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_gascan_C_LoadData) == 0x000010, "Wrong alignment on Prop_gascan_C_LoadData");
static_assert(sizeof(Prop_gascan_C_LoadData) == 0x0000E0, "Wrong size on Prop_gascan_C_LoadData");
static_assert(offsetof(Prop_gascan_C_LoadData, Data) == 0x000000, "Member 'Prop_gascan_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_LoadData, Return) == 0x0000C0, "Member 'Prop_gascan_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_gascan_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_gascan_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_gascan_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_gascan.prop_gascan_C.getData
// 0x0280 (0x0280 - 0x0000)
struct Prop_gascan_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<float>                                 K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mFloat                         CallFunc_Array_Get_Item;                           // 0x0190(0x0010)(HasGetValueTypeHash)
	struct FStruct_mFloat                         K2Node_MakeStruct_struct_mFloat;                   // 0x01A0(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mFloat>                 K2Node_MakeArray_Array_1;                          // 0x01B0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01C0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_gascan_C_GetData) == 0x000010, "Wrong alignment on Prop_gascan_C_GetData");
static_assert(sizeof(Prop_gascan_C_GetData) == 0x000280, "Wrong size on Prop_gascan_C_GetData");
static_assert(offsetof(Prop_gascan_C_GetData, Data) == 0x000000, "Member 'Prop_gascan_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Prop_gascan_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Prop_gascan_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_GetData, CallFunc_Array_Get_Item) == 0x000190, "Member 'Prop_gascan_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_GetData, K2Node_MakeStruct_struct_mFloat) == 0x0001A0, "Member 'Prop_gascan_C_GetData::K2Node_MakeStruct_struct_mFloat' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_GetData, K2Node_MakeArray_Array_1) == 0x0001B0, "Member 'Prop_gascan_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_gascan_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001C0, "Member 'Prop_gascan_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}
