#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_sitCouchL

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_sitCouchL.prop_sitCouchL_C
// 0x0018 (0x0380 - 0x0368)
class AProp_sitCouchL_C final : public AProp_C
{
public:
	uint8                                         Pad_2FA5[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UChildActorComponent*                   ChildActor2;                                       // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor1;                                       // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor;                                        // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_sitCouchL_C">();
	}
	static class AProp_sitCouchL_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_sitCouchL_C>();
	}
};
static_assert(alignof(AProp_sitCouchL_C) == 0x000008, "Wrong alignment on AProp_sitCouchL_C");
static_assert(sizeof(AProp_sitCouchL_C) == 0x000380, "Wrong size on AProp_sitCouchL_C");
static_assert(offsetof(AProp_sitCouchL_C, ChildActor2) == 0x000368, "Member 'AProp_sitCouchL_C::ChildActor2' has a wrong offset!");
static_assert(offsetof(AProp_sitCouchL_C, ChildActor1) == 0x000370, "Member 'AProp_sitCouchL_C::ChildActor1' has a wrong offset!");
static_assert(offsetof(AProp_sitCouchL_C, ChildActor) == 0x000378, "Member 'AProp_sitCouchL_C::ChildActor' has a wrong offset!");

}

