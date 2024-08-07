#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_meatball

#include "Basic.hpp"

#include "Prop_food_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_meatball.prop_meatball_C
// 0x0008 (0x03C8 - 0x03C0)
class AProp_meatball_C final : public AProp_food_C
{
public:
	uint8                                         Pad_3F53[0x4];                                     // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 Flag;                                              // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_meatball_C">();
	}
	static class AProp_meatball_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_meatball_C>();
	}
};
static_assert(alignof(AProp_meatball_C) == 0x000008, "Wrong alignment on AProp_meatball_C");
static_assert(sizeof(AProp_meatball_C) == 0x0003C8, "Wrong size on AProp_meatball_C");
static_assert(offsetof(AProp_meatball_C, Flag) == 0x0003C0, "Member 'AProp_meatball_C::Flag' has a wrong offset!");

}

