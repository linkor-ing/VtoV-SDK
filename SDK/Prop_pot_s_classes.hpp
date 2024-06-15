#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_pot_s

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_pot_s.prop_pot_s_C
// 0x0008 (0x0370 - 0x0368)
class AProp_pot_s_C : public AProp_C
{
public:
	uint8                                         Pad_6[0x7];                                        // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   Plant;                                             // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_pot_s_C">();
	}
	static class AProp_pot_s_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_pot_s_C>();
	}
};
static_assert(alignof(AProp_pot_s_C) == 0x000008, "Wrong alignment on AProp_pot_s_C");
static_assert(sizeof(AProp_pot_s_C) == 0x000370, "Wrong size on AProp_pot_s_C");
static_assert(offsetof(AProp_pot_s_C, Plant) == 0x000368, "Member 'AProp_pot_s_C::Plant' has a wrong offset!");

}

