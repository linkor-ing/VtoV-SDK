#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_choco

#include "Basic.hpp"

#include "Prop_food_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_food_choco.prop_food_choco_C
// 0x0000 (0x03C0 - 0x03C0)
class AProp_food_choco_C final : public AProp_food_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_food_choco_C">();
	}
	static class AProp_food_choco_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_food_choco_C>();
	}
};
static_assert(alignof(AProp_food_choco_C) == 0x000008, "Wrong alignment on AProp_food_choco_C");
static_assert(sizeof(AProp_food_choco_C) == 0x0003C0, "Wrong size on AProp_food_choco_C");

}

