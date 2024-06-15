#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RedSkyEvent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass redSkyEvent.redSkyEvent_C
// 0x0018 (0x0238 - 0x0220)
class ARedSkyEvent_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Isred;                                             // 0x0230(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_redSkyEvent(int32 EntryPoint);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void Set(bool Param_Isred);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"redSkyEvent_C">();
	}
	static class ARedSkyEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARedSkyEvent_C>();
	}
};
static_assert(alignof(ARedSkyEvent_C) == 0x000008, "Wrong alignment on ARedSkyEvent_C");
static_assert(sizeof(ARedSkyEvent_C) == 0x000238, "Wrong size on ARedSkyEvent_C");
static_assert(offsetof(ARedSkyEvent_C, UberGraphFrame) == 0x000220, "Member 'ARedSkyEvent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARedSkyEvent_C, DefaultSceneRoot) == 0x000228, "Member 'ARedSkyEvent_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ARedSkyEvent_C, Isred) == 0x000230, "Member 'ARedSkyEvent_C::Isred' has a wrong offset!");

}

