#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_sitChair1

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_sitChair1.prop_sitChair1_C
// 0x0008 (0x0370 - 0x0368)
class AProp_sitChair1_C final : public AProp_C
{
public:
	uint8                                         Pad_37DE[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UChildActorComponent*                   ChildActor;                                        // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_sitChair1_C">();
	}
	static class AProp_sitChair1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_sitChair1_C>();
	}
};
static_assert(alignof(AProp_sitChair1_C) == 0x000008, "Wrong alignment on AProp_sitChair1_C");
static_assert(sizeof(AProp_sitChair1_C) == 0x000370, "Wrong size on AProp_sitChair1_C");
static_assert(offsetof(AProp_sitChair1_C, ChildActor) == 0x000368, "Member 'AProp_sitChair1_C::ChildActor' has a wrong offset!");

}
