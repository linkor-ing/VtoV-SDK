#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_mothguy

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_mothguy.prop_mothguy_C
// 0x0000 (0x0368 - 0x0368)
class AProp_mothguy_C final : public AProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_mothguy_C">();
	}
	static class AProp_mothguy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_mothguy_C>();
	}
};
static_assert(alignof(AProp_mothguy_C) == 0x000008, "Wrong alignment on AProp_mothguy_C");
static_assert(sizeof(AProp_mothguy_C) == 0x000368, "Wrong size on AProp_mothguy_C");

}
