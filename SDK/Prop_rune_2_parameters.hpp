#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_rune_2

#include "Basic.hpp"


namespace SDK::Params
{

// Function prop_rune_2.prop_rune_2_C.ExecuteUbergraph_prop_rune_2
// 0x0008 (0x0008 - 0x0000)
struct Prop_rune_2_C_ExecuteUbergraph_prop_rune_2 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_damage;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_rune_2_C_ExecuteUbergraph_prop_rune_2) == 0x000004, "Wrong alignment on Prop_rune_2_C_ExecuteUbergraph_prop_rune_2");
static_assert(sizeof(Prop_rune_2_C_ExecuteUbergraph_prop_rune_2) == 0x000008, "Wrong size on Prop_rune_2_C_ExecuteUbergraph_prop_rune_2");
static_assert(offsetof(Prop_rune_2_C_ExecuteUbergraph_prop_rune_2, EntryPoint) == 0x000000, "Member 'Prop_rune_2_C_ExecuteUbergraph_prop_rune_2::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_rune_2_C_ExecuteUbergraph_prop_rune_2, K2Node_Event_damage) == 0x000004, "Member 'Prop_rune_2_C_ExecuteUbergraph_prop_rune_2::K2Node_Event_damage' has a wrong offset!");

// Function prop_rune_2.prop_rune_2_C.fireDamage
// 0x0004 (0x0004 - 0x0000)
struct Prop_rune_2_C_FireDamage final
{
public:
	float                                         Damage;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_rune_2_C_FireDamage) == 0x000004, "Wrong alignment on Prop_rune_2_C_FireDamage");
static_assert(sizeof(Prop_rune_2_C_FireDamage) == 0x000004, "Wrong size on Prop_rune_2_C_FireDamage");
static_assert(offsetof(Prop_rune_2_C_FireDamage, Damage) == 0x000000, "Member 'Prop_rune_2_C_FireDamage::Damage' has a wrong offset!");

}

