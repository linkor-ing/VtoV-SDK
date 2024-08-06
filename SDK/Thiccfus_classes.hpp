#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Thiccfus

#include "Basic.hpp"

#include "Rufus_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass thiccfus.thiccfus_C
// 0x0000 (0x0530 - 0x0530)
class AThiccfus_C final : public ARufus_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"thiccfus_C">();
	}
	static class AThiccfus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AThiccfus_C>();
	}
};
static_assert(alignof(AThiccfus_C) == 0x000010, "Wrong alignment on AThiccfus_C");
static_assert(sizeof(AThiccfus_C) == 0x000530, "Wrong size on AThiccfus_C");

}
