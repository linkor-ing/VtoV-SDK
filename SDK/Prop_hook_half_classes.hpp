#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_hook_half

#include "Basic.hpp"

#include "Prop_hook_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_hook_half.prop_hook_half_C
// 0x0000 (0x0388 - 0x0388)
class AProp_hook_half_C final : public AProp_hook_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_hook_half_C">();
	}
	static class AProp_hook_half_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_hook_half_C>();
	}
};
static_assert(alignof(AProp_hook_half_C) == 0x000008, "Wrong alignment on AProp_hook_half_C");
static_assert(sizeof(AProp_hook_half_C) == 0x000388, "Wrong size on AProp_hook_half_C");

}

