#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_usb_super

#include "Basic.hpp"

#include "Prop_usb_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_usb_super.prop_usb_super_C
// 0x0000 (0x0378 - 0x0378)
class AProp_usb_super_C final : public AProp_usb_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_usb_super_C">();
	}
	static class AProp_usb_super_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_usb_super_C>();
	}
};
static_assert(alignof(AProp_usb_super_C) == 0x000008, "Wrong alignment on AProp_usb_super_C");
static_assert(sizeof(AProp_usb_super_C) == 0x000378, "Wrong size on AProp_usb_super_C");

}

