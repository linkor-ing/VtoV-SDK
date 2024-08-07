#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_sitChair3

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_sitChair3.prop_sitChair3_C
// 0x0008 (0x0380 - 0x0378)
class AProp_sitChair3_C final : public AProp_C
{
public:
	class UChildActorComponent*                   ChildActor;                                        // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_sitChair3_C">();
	}
	static class AProp_sitChair3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_sitChair3_C>();
	}
};
static_assert(alignof(AProp_sitChair3_C) == 0x000008, "Wrong alignment on AProp_sitChair3_C");
static_assert(sizeof(AProp_sitChair3_C) == 0x000380, "Wrong size on AProp_sitChair3_C");
static_assert(offsetof(AProp_sitChair3_C, ChildActor) == 0x000378, "Member 'AProp_sitChair3_C::ChildActor' has a wrong offset!");

}

