#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KerfurOmega_erie

#include "Basic.hpp"

#include "KerfurOmega_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass kerfurOmega_erie.kerfurOmega_erie_C
// 0x0000 (0x0800 - 0x0800)
class AKerfurOmega_erie_C final : public AKerfurOmega_C
{
public:
	void MakeFace();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"kerfurOmega_erie_C">();
	}
	static class AKerfurOmega_erie_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKerfurOmega_erie_C>();
	}
};
static_assert(alignof(AKerfurOmega_erie_C) == 0x000010, "Wrong alignment on AKerfurOmega_erie_C");
static_assert(sizeof(AKerfurOmega_erie_C) == 0x000800, "Wrong size on AKerfurOmega_erie_C");

}

