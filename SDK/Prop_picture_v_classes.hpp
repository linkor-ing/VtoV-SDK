#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_picture_v

#include "Basic.hpp"

#include "Prop_picture_h_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_picture_v.prop_picture_v_C
// 0x0000 (0x0420 - 0x0420)
class AProp_picture_v_C final : public AProp_picture_h_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_picture_v_C">();
	}
	static class AProp_picture_v_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_picture_v_C>();
	}
};
static_assert(alignof(AProp_picture_v_C) == 0x000010, "Wrong alignment on AProp_picture_v_C");
static_assert(sizeof(AProp_picture_v_C) == 0x000420, "Wrong size on AProp_picture_v_C");

}

