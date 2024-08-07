#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KerfurOmega_2

#include "Basic.hpp"

#include "KerfurOmega_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass kerfurOmega_2.kerfurOmega_2_C
// 0x0000 (0x0800 - 0x0800)
class AKerfurOmega_2_C final : public AKerfurOmega_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"kerfurOmega_2_C">();
	}
	static class AKerfurOmega_2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKerfurOmega_2_C>();
	}
};
static_assert(alignof(AKerfurOmega_2_C) == 0x000010, "Wrong alignment on AKerfurOmega_2_C");
static_assert(sizeof(AKerfurOmega_2_C) == 0x000800, "Wrong size on AKerfurOmega_2_C");

}

