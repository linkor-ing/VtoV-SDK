#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_winch

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_winch.prop_winch_C
// 0x0000 (0x0378 - 0x0378)
class AProp_winch_C final : public AProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_winch_C">();
	}
	static class AProp_winch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_winch_C>();
	}
};
static_assert(alignof(AProp_winch_C) == 0x000008, "Wrong alignment on AProp_winch_C");
static_assert(sizeof(AProp_winch_C) == 0x000378, "Wrong size on AProp_winch_C");

}

