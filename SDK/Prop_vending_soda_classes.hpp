#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_vending_soda

#include "Basic.hpp"

#include "Prop_vending_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_vending_soda.prop_vending_soda_C
// 0x0000 (0x04B8 - 0x04B8)
class AProp_vending_soda_C final : public AProp_vending_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_vending_soda_C">();
	}
	static class AProp_vending_soda_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_vending_soda_C>();
	}
};
static_assert(alignof(AProp_vending_soda_C) == 0x000008, "Wrong alignment on AProp_vending_soda_C");
static_assert(sizeof(AProp_vending_soda_C) == 0x0004B8, "Wrong size on AProp_vending_soda_C");

}

