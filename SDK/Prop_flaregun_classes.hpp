#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_flaregun

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_flaregun.prop_flaregun_C
// 0x0000 (0x0368 - 0x0368)
class AProp_flaregun_C final : public AProp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_flaregun_C">();
	}
	static class AProp_flaregun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_flaregun_C>();
	}
};
static_assert(alignof(AProp_flaregun_C) == 0x000008, "Wrong alignment on AProp_flaregun_C");
static_assert(sizeof(AProp_flaregun_C) == 0x000368, "Wrong size on AProp_flaregun_C");

}
