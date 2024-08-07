#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_rifle

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_rifle.prop_rifle_C.ExecuteUbergraph_prop_rifle
// 0x0080 (0x0080 - 0x0000)
struct Prop_rifle_C_ExecuteUbergraph_prop_rifle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CD1[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExplosion_C*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_objects_C>        CallFunc_impactDamage_self_CastInput;              // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_rifle_C_ExecuteUbergraph_prop_rifle) == 0x000010, "Wrong alignment on Prop_rifle_C_ExecuteUbergraph_prop_rifle");
static_assert(sizeof(Prop_rifle_C_ExecuteUbergraph_prop_rifle) == 0x000080, "Wrong size on Prop_rifle_C_ExecuteUbergraph_prop_rifle");
static_assert(offsetof(Prop_rifle_C_ExecuteUbergraph_prop_rifle, EntryPoint) == 0x000000, "Member 'Prop_rifle_C_ExecuteUbergraph_prop_rifle::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_rifle_C_ExecuteUbergraph_prop_rifle, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'Prop_rifle_C_ExecuteUbergraph_prop_rifle::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rifle_C_ExecuteUbergraph_prop_rifle, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000040, "Member 'Prop_rifle_C_ExecuteUbergraph_prop_rifle::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rifle_C_ExecuteUbergraph_prop_rifle, CallFunc_FinishSpawningActor_ReturnValue) == 0x000048, "Member 'Prop_rifle_C_ExecuteUbergraph_prop_rifle::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rifle_C_ExecuteUbergraph_prop_rifle, K2Node_Event_player) == 0x000050, "Member 'Prop_rifle_C_ExecuteUbergraph_prop_rifle::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_rifle_C_ExecuteUbergraph_prop_rifle, CallFunc_impactDamage_self_CastInput) == 0x000058, "Member 'Prop_rifle_C_ExecuteUbergraph_prop_rifle::CallFunc_impactDamage_self_CastInput' has a wrong offset!");
static_assert(offsetof(Prop_rifle_C_ExecuteUbergraph_prop_rifle, CallFunc_GetForwardVector_ReturnValue) == 0x000068, "Member 'Prop_rifle_C_ExecuteUbergraph_prop_rifle::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rifle_C_ExecuteUbergraph_prop_rifle, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000074, "Member 'Prop_rifle_C_ExecuteUbergraph_prop_rifle::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");

// Function prop_rifle.prop_rifle_C.playerHandUse_LMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_rifle_C_PlayerHandUse_LMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_rifle_C_PlayerHandUse_LMB) == 0x000008, "Wrong alignment on Prop_rifle_C_PlayerHandUse_LMB");
static_assert(sizeof(Prop_rifle_C_PlayerHandUse_LMB) == 0x000008, "Wrong size on Prop_rifle_C_PlayerHandUse_LMB");
static_assert(offsetof(Prop_rifle_C_PlayerHandUse_LMB, Player) == 0x000000, "Member 'Prop_rifle_C_PlayerHandUse_LMB::Player' has a wrong offset!");

}

