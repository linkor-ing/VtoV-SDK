#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_FloatieRing_sit2

#include "Basic.hpp"

#include "Prop_FloatieRing_sit_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_FloatieRing_sit2.prop_FloatieRing_sit2_C
// 0x0008 (0x0378 - 0x0370)
class AProp_FloatieRing_sit2_C final : public AProp_FloatieRing_sit_C
{
public:
	class UChildActorComponent*                   ChildActor_0;                                      // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_FloatieRing_sit2_C">();
	}
	static class AProp_FloatieRing_sit2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_FloatieRing_sit2_C>();
	}
};
static_assert(alignof(AProp_FloatieRing_sit2_C) == 0x000008, "Wrong alignment on AProp_FloatieRing_sit2_C");
static_assert(sizeof(AProp_FloatieRing_sit2_C) == 0x000378, "Wrong size on AProp_FloatieRing_sit2_C");
static_assert(offsetof(AProp_FloatieRing_sit2_C, ChildActor_0) == 0x000370, "Member 'AProp_FloatieRing_sit2_C::ChildActor_0' has a wrong offset!");

}

