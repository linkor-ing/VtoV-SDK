#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_potato_q

#include "Basic.hpp"

#include "Prop_cookingFood_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_food_potato_q.prop_food_potato_q_C
// 0x0000 (0x03F8 - 0x03F8)
class AProp_food_potato_q_C final : public AProp_cookingFood_C
{
public:
	void Cooked();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_food_potato_q_C">();
	}
	static class AProp_food_potato_q_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_food_potato_q_C>();
	}
};
static_assert(alignof(AProp_food_potato_q_C) == 0x000008, "Wrong alignment on AProp_food_potato_q_C");
static_assert(sizeof(AProp_food_potato_q_C) == 0x0003F8, "Wrong size on AProp_food_potato_q_C");

}

