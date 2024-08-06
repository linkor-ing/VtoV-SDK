#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WendigoDreamer

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass wendigoDreamer.wendigoDreamer_C
// 0x0010 (0x0230 - 0x0220)
class AWendigoDreamer_C final : public AActor
{
public:
	class UStaticMeshComponent*                   Sphere;                                            // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"wendigoDreamer_C">();
	}
	static class AWendigoDreamer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWendigoDreamer_C>();
	}
};
static_assert(alignof(AWendigoDreamer_C) == 0x000008, "Wrong alignment on AWendigoDreamer_C");
static_assert(sizeof(AWendigoDreamer_C) == 0x000230, "Wrong size on AWendigoDreamer_C");
static_assert(offsetof(AWendigoDreamer_C, Sphere) == 0x000220, "Member 'AWendigoDreamer_C::Sphere' has a wrong offset!");
static_assert(offsetof(AWendigoDreamer_C, DefaultSceneRoot) == 0x000228, "Member 'AWendigoDreamer_C::DefaultSceneRoot' has a wrong offset!");

}

