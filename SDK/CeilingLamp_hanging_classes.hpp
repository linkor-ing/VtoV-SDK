#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CeilingLamp_hanging

#include "Basic.hpp"

#include "CeilingLamp_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ceilingLamp_hanging.ceilingLamp_hanging_C
// 0x0000 (0x02B8 - 0x02B8)
class ACeilingLamp_hanging_C final : public ACeilingLamp_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ceilingLamp_hanging_C">();
	}
	static class ACeilingLamp_hanging_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACeilingLamp_hanging_C>();
	}
};
static_assert(alignof(ACeilingLamp_hanging_C) == 0x000008, "Wrong alignment on ACeilingLamp_hanging_C");
static_assert(sizeof(ACeilingLamp_hanging_C) == 0x0002B8, "Wrong size on ACeilingLamp_hanging_C");

}

