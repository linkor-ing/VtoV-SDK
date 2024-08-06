#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_bunkbedSleepable

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_bunkbedSleepable.prop_bunkbedSleepable_C
// 0x0048 (0x03C0 - 0x0378)
class AProp_bunkbedSleepable_C final : public AProp_C
{
public:
	class UStaticMeshComponent*                   Nail8;                                             // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Nail7;                                             // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Nail6;                                             // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Nail3;                                             // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Nail5;                                             // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Nail4;                                             // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Nail2;                                             // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Nail1;                                             // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Nail;                                              // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void GatherDataFromKey(bool* Gather);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_bunkbedSleepable_C">();
	}
	static class AProp_bunkbedSleepable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_bunkbedSleepable_C>();
	}
};
static_assert(alignof(AProp_bunkbedSleepable_C) == 0x000008, "Wrong alignment on AProp_bunkbedSleepable_C");
static_assert(sizeof(AProp_bunkbedSleepable_C) == 0x0003C0, "Wrong size on AProp_bunkbedSleepable_C");
static_assert(offsetof(AProp_bunkbedSleepable_C, Nail8) == 0x000378, "Member 'AProp_bunkbedSleepable_C::Nail8' has a wrong offset!");
static_assert(offsetof(AProp_bunkbedSleepable_C, Nail7) == 0x000380, "Member 'AProp_bunkbedSleepable_C::Nail7' has a wrong offset!");
static_assert(offsetof(AProp_bunkbedSleepable_C, Nail6) == 0x000388, "Member 'AProp_bunkbedSleepable_C::Nail6' has a wrong offset!");
static_assert(offsetof(AProp_bunkbedSleepable_C, Nail3) == 0x000390, "Member 'AProp_bunkbedSleepable_C::Nail3' has a wrong offset!");
static_assert(offsetof(AProp_bunkbedSleepable_C, Nail5) == 0x000398, "Member 'AProp_bunkbedSleepable_C::Nail5' has a wrong offset!");
static_assert(offsetof(AProp_bunkbedSleepable_C, Nail4) == 0x0003A0, "Member 'AProp_bunkbedSleepable_C::Nail4' has a wrong offset!");
static_assert(offsetof(AProp_bunkbedSleepable_C, Nail2) == 0x0003A8, "Member 'AProp_bunkbedSleepable_C::Nail2' has a wrong offset!");
static_assert(offsetof(AProp_bunkbedSleepable_C, Nail1) == 0x0003B0, "Member 'AProp_bunkbedSleepable_C::Nail1' has a wrong offset!");
static_assert(offsetof(AProp_bunkbedSleepable_C, Nail) == 0x0003B8, "Member 'AProp_bunkbedSleepable_C::Nail' has a wrong offset!");

}
