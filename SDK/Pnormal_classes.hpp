#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pnormal

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass pnormal.pnormal_C
// 0x0000 (0x00B0 - 0x00B0)
class UPnormal_C final : public UActorComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"pnormal_C">();
	}
	static class UPnormal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPnormal_C>();
	}
};
static_assert(alignof(UPnormal_C) == 0x000008, "Wrong alignment on UPnormal_C");
static_assert(sizeof(UPnormal_C) == 0x0000B0, "Wrong size on UPnormal_C");

}

