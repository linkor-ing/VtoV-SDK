#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SittingComponent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass sittingComponent.sittingComponent_C
// 0x0010 (0x00C0 - 0x00B0)
class USittingComponent_C final : public UActorComponent
{
public:
	struct FVector                                Location;                                          // 0x00B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"sittingComponent_C">();
	}
	static class USittingComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USittingComponent_C>();
	}
};
static_assert(alignof(USittingComponent_C) == 0x000008, "Wrong alignment on USittingComponent_C");
static_assert(sizeof(USittingComponent_C) == 0x0000C0, "Wrong size on USittingComponent_C");
static_assert(offsetof(USittingComponent_C, Location) == 0x0000B0, "Member 'USittingComponent_C::Location' has a wrong offset!");

}

