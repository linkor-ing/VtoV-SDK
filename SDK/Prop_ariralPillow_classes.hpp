#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_ariralPillow

#include "Basic.hpp"

#include "bed_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_ariralPillow.prop_ariralPillow_C
// 0x0008 (0x0380 - 0x0378)
class AProp_ariralPillow_C : public Abed_C
{
public:
	class USlapperSummoner_C*                     SlapperSummoner;                                   // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_ariralPillow_C">();
	}
	static class AProp_ariralPillow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_ariralPillow_C>();
	}
};
static_assert(alignof(AProp_ariralPillow_C) == 0x000008, "Wrong alignment on AProp_ariralPillow_C");
static_assert(sizeof(AProp_ariralPillow_C) == 0x000380, "Wrong size on AProp_ariralPillow_C");
static_assert(offsetof(AProp_ariralPillow_C, SlapperSummoner) == 0x000378, "Member 'AProp_ariralPillow_C::SlapperSummoner' has a wrong offset!");

}

