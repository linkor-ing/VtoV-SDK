#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_lightIntWall2

#include "Basic.hpp"

#include "Prop_lightIntWall1_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_lightIntWall2.prop_lightIntWall2_C
// 0x0000 (0x0410 - 0x0410)
class AProp_lightIntWall2_C final : public AProp_lightIntWall1_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_lightIntWall2_C">();
	}
	static class AProp_lightIntWall2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_lightIntWall2_C>();
	}
};
static_assert(alignof(AProp_lightIntWall2_C) == 0x000010, "Wrong alignment on AProp_lightIntWall2_C");
static_assert(sizeof(AProp_lightIntWall2_C) == 0x000410, "Wrong size on AProp_lightIntWall2_C");

}

