#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_poison

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_food_poison.prop_food_poison_C.ExecuteUbergraph_prop_food_poison
// 0x0060 (0x0060 - 0x0000)
struct Prop_food_poison_C_ExecuteUbergraph_prop_food_poison final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3F61[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEffect_foodPoison_C*                   CallFunc_FinishSpawningActor_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_food_poison_C_ExecuteUbergraph_prop_food_poison) == 0x000010, "Wrong alignment on Prop_food_poison_C_ExecuteUbergraph_prop_food_poison");
static_assert(sizeof(Prop_food_poison_C_ExecuteUbergraph_prop_food_poison) == 0x000060, "Wrong size on Prop_food_poison_C_ExecuteUbergraph_prop_food_poison");
static_assert(offsetof(Prop_food_poison_C_ExecuteUbergraph_prop_food_poison, EntryPoint) == 0x000000, "Member 'Prop_food_poison_C_ExecuteUbergraph_prop_food_poison::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_food_poison_C_ExecuteUbergraph_prop_food_poison, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'Prop_food_poison_C_ExecuteUbergraph_prop_food_poison::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_poison_C_ExecuteUbergraph_prop_food_poison, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000040, "Member 'Prop_food_poison_C_ExecuteUbergraph_prop_food_poison::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_poison_C_ExecuteUbergraph_prop_food_poison, CallFunc_FinishSpawningActor_ReturnValue) == 0x000048, "Member 'Prop_food_poison_C_ExecuteUbergraph_prop_food_poison::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_food_poison_C_ExecuteUbergraph_prop_food_poison, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x000050, "Member 'Prop_food_poison_C_ExecuteUbergraph_prop_food_poison::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");

}

