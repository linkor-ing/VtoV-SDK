#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_mirror1

#include "Basic.hpp"


namespace SDK::Params
{

// Function prop_mirror1.prop_mirror1_C.ExecuteUbergraph_prop_mirror1
// 0x0018 (0x0018 - 0x0000)
struct Prop_mirror1_C_ExecuteUbergraph_prop_mirror1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMirror_C*                              K2Node_DynamicCast_AsMirror;                       // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_mirror1_C_ExecuteUbergraph_prop_mirror1) == 0x000008, "Wrong alignment on Prop_mirror1_C_ExecuteUbergraph_prop_mirror1");
static_assert(sizeof(Prop_mirror1_C_ExecuteUbergraph_prop_mirror1) == 0x000018, "Wrong size on Prop_mirror1_C_ExecuteUbergraph_prop_mirror1");
static_assert(offsetof(Prop_mirror1_C_ExecuteUbergraph_prop_mirror1, EntryPoint) == 0x000000, "Member 'Prop_mirror1_C_ExecuteUbergraph_prop_mirror1::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_mirror1_C_ExecuteUbergraph_prop_mirror1, K2Node_DynamicCast_AsMirror) == 0x000008, "Member 'Prop_mirror1_C_ExecuteUbergraph_prop_mirror1::K2Node_DynamicCast_AsMirror' has a wrong offset!");
static_assert(offsetof(Prop_mirror1_C_ExecuteUbergraph_prop_mirror1, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'Prop_mirror1_C_ExecuteUbergraph_prop_mirror1::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

