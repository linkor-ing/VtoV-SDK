#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Portal_phys_log

#include "Basic.hpp"

#include "Portal_phys_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass portal_phys_log.portal_phys_log_C
// 0x0000 (0x0328 - 0x0328)
class APortal_phys_log_C final : public APortal_phys_C
{
public:
	void IgnoreSave_trigger(bool* Ignore);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"portal_phys_log_C">();
	}
	static class APortal_phys_log_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APortal_phys_log_C>();
	}
};
static_assert(alignof(APortal_phys_log_C) == 0x000008, "Wrong alignment on APortal_phys_log_C");
static_assert(sizeof(APortal_phys_log_C) == 0x000328, "Wrong size on APortal_phys_log_C");

}

