#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_dirtball

#include "Basic.hpp"

#include "Prop_garbageClump_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_dirtball.prop_dirtball_C
// 0x0000 (0x02F0 - 0x02F0)
class AProp_dirtball_C final : public AProp_garbageClump_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_dirtball_C">();
	}
	static class AProp_dirtball_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_dirtball_C>();
	}
};
static_assert(alignof(AProp_dirtball_C) == 0x000008, "Wrong alignment on AProp_dirtball_C");
static_assert(sizeof(AProp_dirtball_C) == 0x0002F0, "Wrong size on AProp_dirtball_C");

}

