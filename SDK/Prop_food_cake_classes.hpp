#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_cake

#include "Basic.hpp"

#include "Prop_food_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_food_cake.prop_food_cake_C
// 0x0000 (0x03D0 - 0x03D0)
class AProp_food_cake_C final : public AProp_food_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_food_cake_C">();
	}
	static class AProp_food_cake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_food_cake_C>();
	}
};
static_assert(alignof(AProp_food_cake_C) == 0x000008, "Wrong alignment on AProp_food_cake_C");
static_assert(sizeof(AProp_food_cake_C) == 0x0003D0, "Wrong size on AProp_food_cake_C");

}

