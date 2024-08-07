#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_h

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_h.prop_h_C
// 0x0008 (0x0380 - 0x0378)
class AProp_h_C final : public AProp_C
{
public:
	class UPnormal_C*                             Pnormal;                                           // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_h_C">();
	}
	static class AProp_h_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_h_C>();
	}
};
static_assert(alignof(AProp_h_C) == 0x000008, "Wrong alignment on AProp_h_C");
static_assert(sizeof(AProp_h_C) == 0x000380, "Wrong size on AProp_h_C");
static_assert(offsetof(AProp_h_C, Pnormal) == 0x000378, "Member 'AProp_h_C::Pnormal' has a wrong offset!");

}

