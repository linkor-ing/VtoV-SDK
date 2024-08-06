#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_arirContainer_in

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_arirContainer_in.prop_arirContainer_in_C
// 0x0010 (0x0388 - 0x0378)
class AProp_arirContainer_in_C final : public AProp_C
{
public:
	class USlapperSummoner_C*                     SlapperSummoner;                                   // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Cap;                                               // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_arirContainer_in_C">();
	}
	static class AProp_arirContainer_in_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_arirContainer_in_C>();
	}
};
static_assert(alignof(AProp_arirContainer_in_C) == 0x000008, "Wrong alignment on AProp_arirContainer_in_C");
static_assert(sizeof(AProp_arirContainer_in_C) == 0x000388, "Wrong size on AProp_arirContainer_in_C");
static_assert(offsetof(AProp_arirContainer_in_C, SlapperSummoner) == 0x000378, "Member 'AProp_arirContainer_in_C::SlapperSummoner' has a wrong offset!");
static_assert(offsetof(AProp_arirContainer_in_C, Cap) == 0x000380, "Member 'AProp_arirContainer_in_C::Cap' has a wrong offset!");

}

