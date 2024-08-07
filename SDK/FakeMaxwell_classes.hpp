#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FakeMaxwell

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass fakeMaxwell.fakeMaxwell_C
// 0x0018 (0x0238 - 0x0220)
class AFakeMaxwell_C final : public AActor
{
public:
	class USvtarget_C*                            Svtarget;                                          // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"fakeMaxwell_C">();
	}
	static class AFakeMaxwell_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFakeMaxwell_C>();
	}
};
static_assert(alignof(AFakeMaxwell_C) == 0x000008, "Wrong alignment on AFakeMaxwell_C");
static_assert(sizeof(AFakeMaxwell_C) == 0x000238, "Wrong size on AFakeMaxwell_C");
static_assert(offsetof(AFakeMaxwell_C, Svtarget) == 0x000220, "Member 'AFakeMaxwell_C::Svtarget' has a wrong offset!");
static_assert(offsetof(AFakeMaxwell_C, StaticMesh) == 0x000228, "Member 'AFakeMaxwell_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AFakeMaxwell_C, DefaultSceneRoot) == 0x000230, "Member 'AFakeMaxwell_C::DefaultSceneRoot' has a wrong offset!");

}

