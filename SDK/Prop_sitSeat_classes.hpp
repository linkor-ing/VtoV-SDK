#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_sitSeat

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_sitSeat.prop_sitSeat_C
// 0x0008 (0x0370 - 0x0368)
class AProp_sitSeat_C final : public AProp_C
{
public:
	uint8                                         Pad_37DC[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UChildActorComponent*                   ChildActor;                                        // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_sitSeat_C">();
	}
	static class AProp_sitSeat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_sitSeat_C>();
	}
};
static_assert(alignof(AProp_sitSeat_C) == 0x000008, "Wrong alignment on AProp_sitSeat_C");
static_assert(sizeof(AProp_sitSeat_C) == 0x000370, "Wrong size on AProp_sitSeat_C");
static_assert(offsetof(AProp_sitSeat_C, ChildActor) == 0x000368, "Member 'AProp_sitSeat_C::ChildActor' has a wrong offset!");

}

