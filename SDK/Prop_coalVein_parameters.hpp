#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_coalVein

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_coalVein.prop_coalVein_C.ExecuteUbergraph_prop_coalVein
// 0x0240 (0x0240 - 0x0000)
struct Prop_coalVein_C_ExecuteUbergraph_prop_coalVein final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_AddActorLocalRotation_SweepHitResult;  // 0x001C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x00B0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         K2Node_Event_damage;                               // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x013D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_13E[0x2];                                      // 0x013E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0140(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0144(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0148(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0154(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0160(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0198(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BC[0x4];                                      // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x01C0(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F4[0x4];                                      // 0x01F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_coal_s_C*                         CallFunc_FinishSpawningActor_ReturnValue;          // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_209[0x3];                                      // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorScale3D_ReturnValue;              // 0x0210(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Ease_ReturnValue;                         // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x022C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein) == 0x000010, "Wrong alignment on Prop_coalVein_C_ExecuteUbergraph_prop_coalVein");
static_assert(sizeof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein) == 0x000240, "Wrong size on Prop_coalVein_C_ExecuteUbergraph_prop_coalVein");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, EntryPoint) == 0x000000, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_RandomFloatInRange_ReturnValue) == 0x000004, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, Temp_int_Variable) == 0x000008, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_MakeRotator_ReturnValue) == 0x00000C, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_K2_AddActorLocalRotation_SweepHitResult) == 0x00001C, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_K2_AddActorLocalRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, K2Node_Event_player) == 0x0000A8, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, K2Node_Event_hit) == 0x0000B0, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, K2Node_Event_damage) == 0x000138, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::K2Node_Event_damage' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_bBlockingHit) == 0x00013C, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_bInitialOverlap) == 0x00013D, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_Time) == 0x000140, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_Distance) == 0x000144, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_Location) == 0x000148, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_ImpactPoint) == 0x000154, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_Normal) == 0x000160, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_ImpactNormal) == 0x00016C, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_PhysMat) == 0x000178, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_HitActor) == 0x000180, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_HitComponent) == 0x000188, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_HitBoneName) == 0x000190, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_HitItem) == 0x000198, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_ElementIndex) == 0x00019C, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_FaceIndex) == 0x0001A0, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_TraceStart) == 0x0001A4, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BreakHitResult_TraceEnd) == 0x0001B0, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_MakeTransform_ReturnValue) == 0x0001C0, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_Subtract_IntInt_ReturnValue) == 0x0001F0, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001F8, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_FinishSpawningActor_ReturnValue) == 0x000200, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000208, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x00020C, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_GetActorScale3D_ReturnValue) == 0x000210, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_GetActorScale3D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_RandomFloat_ReturnValue) == 0x00021C, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_VSize_ReturnValue) == 0x000220, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_Ease_ReturnValue) == 0x000224, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000228, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_Conv_FloatToVector_ReturnValue) == 0x00022C, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000238, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_ExecuteUbergraph_prop_coalVein, CallFunc_FTrunc_ReturnValue) == 0x00023C, "Member 'Prop_coalVein_C_ExecuteUbergraph_prop_coalVein::CallFunc_FTrunc_ReturnValue' has a wrong offset!");

// Function prop_coalVein.prop_coalVein_C.damageByPlayer
// 0x0098 (0x0098 - 0x0000)
struct Prop_coalVein_C_DamageByPlayer final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         Damage;                                            // 0x0090(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_coalVein_C_DamageByPlayer) == 0x000008, "Wrong alignment on Prop_coalVein_C_DamageByPlayer");
static_assert(sizeof(Prop_coalVein_C_DamageByPlayer) == 0x000098, "Wrong size on Prop_coalVein_C_DamageByPlayer");
static_assert(offsetof(Prop_coalVein_C_DamageByPlayer, Player) == 0x000000, "Member 'Prop_coalVein_C_DamageByPlayer::Player' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_DamageByPlayer, Param_Hit) == 0x000008, "Member 'Prop_coalVein_C_DamageByPlayer::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_DamageByPlayer, Damage) == 0x000090, "Member 'Prop_coalVein_C_DamageByPlayer::Damage' has a wrong offset!");

// Function prop_coalVein.prop_coalVein_C.UserConstructionScript
// 0x0098 (0x0098 - 0x0000)
struct Prop_coalVein_C_UserConstructionScript final
{
public:
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_AddActorLocalRotation_SweepHitResult;  // 0x0010(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_coalVein_C_UserConstructionScript) == 0x000004, "Wrong alignment on Prop_coalVein_C_UserConstructionScript");
static_assert(sizeof(Prop_coalVein_C_UserConstructionScript) == 0x000098, "Wrong size on Prop_coalVein_C_UserConstructionScript");
static_assert(offsetof(Prop_coalVein_C_UserConstructionScript, CallFunc_RandomFloatInRange_ReturnValue) == 0x000000, "Member 'Prop_coalVein_C_UserConstructionScript::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_UserConstructionScript, CallFunc_MakeRotator_ReturnValue) == 0x000004, "Member 'Prop_coalVein_C_UserConstructionScript::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_coalVein_C_UserConstructionScript, CallFunc_K2_AddActorLocalRotation_SweepHitResult) == 0x000010, "Member 'Prop_coalVein_C_UserConstructionScript::CallFunc_K2_AddActorLocalRotation_SweepHitResult' has a wrong offset!");

}
