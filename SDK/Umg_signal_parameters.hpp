#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_signal

#include "Basic.hpp"


namespace SDK::Params
{

// Function umg_signal.umg_signal_C.ExecuteUbergraph_umg_signal
// 0x0010 (0x0010 - 0x0000)
struct Umg_signal_C_ExecuteUbergraph_umg_signal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_GetDynamicMaterial_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_signal_C_ExecuteUbergraph_umg_signal) == 0x000008, "Wrong alignment on Umg_signal_C_ExecuteUbergraph_umg_signal");
static_assert(sizeof(Umg_signal_C_ExecuteUbergraph_umg_signal) == 0x000010, "Wrong size on Umg_signal_C_ExecuteUbergraph_umg_signal");
static_assert(offsetof(Umg_signal_C_ExecuteUbergraph_umg_signal, EntryPoint) == 0x000000, "Member 'Umg_signal_C_ExecuteUbergraph_umg_signal::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_signal_C_ExecuteUbergraph_umg_signal, CallFunc_RandomFloat_ReturnValue) == 0x000004, "Member 'Umg_signal_C_ExecuteUbergraph_umg_signal::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_signal_C_ExecuteUbergraph_umg_signal, CallFunc_GetDynamicMaterial_ReturnValue) == 0x000008, "Member 'Umg_signal_C_ExecuteUbergraph_umg_signal::CallFunc_GetDynamicMaterial_ReturnValue' has a wrong offset!");

}

