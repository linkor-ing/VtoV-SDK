#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_radCrystal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_radCrystal.prop_radCrystal_C.ExecuteUbergraph_prop_radCrystal
// 0x0180 (0x0180 - 0x0000)
struct Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_RandomIntegerInRange_ReturnValue;         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3804[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3805[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0020(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3806[0x2];                                     // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3807[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0114(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3808[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0130(0x0030)(IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3809[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_radCrystal_shard_C*               CallFunc_FinishSpawningActor_ReturnValue;          // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_380A[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal) == 0x000010, "Wrong alignment on Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal");
static_assert(sizeof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal) == 0x000180, "Wrong size on Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, EntryPoint) == 0x000000, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_RandomIntegerInRange_ReturnValue) == 0x000004, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_RandomIntegerInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, Temp_int_Variable) == 0x000008, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, Temp_int_Variable_1) == 0x000010, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000014, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, K2Node_Event_player) == 0x000018, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, K2Node_Event_hit) == 0x000020, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_bBlockingHit) == 0x0000A8, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_bInitialOverlap) == 0x0000A9, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_Time) == 0x0000AC, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_Distance) == 0x0000B0, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_Location) == 0x0000B4, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_ImpactPoint) == 0x0000C0, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_Normal) == 0x0000CC, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_ImpactNormal) == 0x0000D8, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_PhysMat) == 0x0000E8, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_HitActor) == 0x0000F0, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_HitComponent) == 0x0000F8, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_HitBoneName) == 0x000100, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_HitItem) == 0x000108, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_ElementIndex) == 0x00010C, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_FaceIndex) == 0x000110, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_TraceStart) == 0x000114, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BreakHitResult_TraceEnd) == 0x000120, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_MakeTransform_ReturnValue) == 0x000130, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_Add_IntInt_ReturnValue) == 0x000160, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000168, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_FinishSpawningActor_ReturnValue) == 0x000170, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000178, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal, CallFunc_Subtract_IntInt_ReturnValue) == 0x00017C, "Member 'Prop_radCrystal_C_ExecuteUbergraph_prop_radCrystal::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");

// Function prop_radCrystal.prop_radCrystal_C.damageByPlayer
// 0x0090 (0x0090 - 0x0000)
struct Prop_radCrystal_C_DamageByPlayer final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_radCrystal_C_DamageByPlayer) == 0x000008, "Wrong alignment on Prop_radCrystal_C_DamageByPlayer");
static_assert(sizeof(Prop_radCrystal_C_DamageByPlayer) == 0x000090, "Wrong size on Prop_radCrystal_C_DamageByPlayer");
static_assert(offsetof(Prop_radCrystal_C_DamageByPlayer, Player) == 0x000000, "Member 'Prop_radCrystal_C_DamageByPlayer::Player' has a wrong offset!");
static_assert(offsetof(Prop_radCrystal_C_DamageByPlayer, Param_Hit) == 0x000008, "Member 'Prop_radCrystal_C_DamageByPlayer::Param_Hit' has a wrong offset!");

}

