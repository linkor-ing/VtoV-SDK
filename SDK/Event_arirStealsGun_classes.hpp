#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Event_arirStealsGun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass event_arirStealsGun.event_arirStealsGun_C
// 0x0010 (0x0230 - 0x0220)
class AEvent_arirStealsGun_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_event_arirStealsGun(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"event_arirStealsGun_C">();
	}
	static class AEvent_arirStealsGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEvent_arirStealsGun_C>();
	}
};
static_assert(alignof(AEvent_arirStealsGun_C) == 0x000008, "Wrong alignment on AEvent_arirStealsGun_C");
static_assert(sizeof(AEvent_arirStealsGun_C) == 0x000230, "Wrong size on AEvent_arirStealsGun_C");
static_assert(offsetof(AEvent_arirStealsGun_C, UberGraphFrame) == 0x000220, "Member 'AEvent_arirStealsGun_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEvent_arirStealsGun_C, DefaultSceneRoot) == 0x000228, "Member 'AEvent_arirStealsGun_C::DefaultSceneRoot' has a wrong offset!");

}

