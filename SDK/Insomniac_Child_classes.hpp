#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Insomniac_Child

#include "Basic.hpp"

#include "Insomniac_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass insomniac_Child.insomniac_Child_C
// 0x0000 (0x0530 - 0x0530)
class AInsomniac_Child_C final : public AInsomniac_C
{
public:
	void MakeMats();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"insomniac_Child_C">();
	}
	static class AInsomniac_Child_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInsomniac_Child_C>();
	}
};
static_assert(alignof(AInsomniac_Child_C) == 0x000010, "Wrong alignment on AInsomniac_Child_C");
static_assert(sizeof(AInsomniac_Child_C) == 0x000530, "Wrong size on AInsomniac_Child_C");

}

