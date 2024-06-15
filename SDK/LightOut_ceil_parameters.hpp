#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LightOut_ceil

#include "Basic.hpp"


namespace SDK::Params
{

// Function lightOut_ceil.lightOut_ceil_C.setVis
// 0x0020 (0x0020 - 0x0000)
struct LightOut_ceil_C_SetVis final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_439B[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     K2Node_Select_Default;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LightOut_ceil_C_SetVis) == 0x000008, "Wrong alignment on LightOut_ceil_C_SetVis");
static_assert(sizeof(LightOut_ceil_C_SetVis) == 0x000020, "Wrong size on LightOut_ceil_C_SetVis");
static_assert(offsetof(LightOut_ceil_C_SetVis, Temp_bool_Variable) == 0x000000, "Member 'LightOut_ceil_C_SetVis::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(LightOut_ceil_C_SetVis, Temp_object_Variable) == 0x000008, "Member 'LightOut_ceil_C_SetVis::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(LightOut_ceil_C_SetVis, Temp_object_Variable_1) == 0x000010, "Member 'LightOut_ceil_C_SetVis::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(LightOut_ceil_C_SetVis, K2Node_Select_Default) == 0x000018, "Member 'LightOut_ceil_C_SetVis::K2Node_Select_Default' has a wrong offset!");

}
