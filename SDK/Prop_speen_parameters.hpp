#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_speen

#include "Basic.hpp"


namespace SDK::Params
{

// Function prop_speen.prop_speen_C.ExecuteUbergraph_prop_speen
// 0x0008 (0x0008 - 0x0000)
struct Prop_speen_C_ExecuteUbergraph_prop_speen final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_speen_C_ExecuteUbergraph_prop_speen) == 0x000004, "Wrong alignment on Prop_speen_C_ExecuteUbergraph_prop_speen");
static_assert(sizeof(Prop_speen_C_ExecuteUbergraph_prop_speen) == 0x000008, "Wrong size on Prop_speen_C_ExecuteUbergraph_prop_speen");
static_assert(offsetof(Prop_speen_C_ExecuteUbergraph_prop_speen, EntryPoint) == 0x000000, "Member 'Prop_speen_C_ExecuteUbergraph_prop_speen::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_speen_C_ExecuteUbergraph_prop_speen, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Prop_speen_C_ExecuteUbergraph_prop_speen::K2Node_Event_DeltaSeconds' has a wrong offset!");

// Function prop_speen.prop_speen_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_speen_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_speen_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_speen_C_ReceiveTick");
static_assert(sizeof(Prop_speen_C_ReceiveTick) == 0x000004, "Wrong size on Prop_speen_C_ReceiveTick");
static_assert(offsetof(Prop_speen_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_speen_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

