#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: baseWindow

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass baseWindow.baseWindow_C
// 0x0018 (0x0238 - 0x0220)
class AbaseWindow_C final : public AActor
{
public:
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Inside;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"baseWindow_C">();
	}
	static class AbaseWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AbaseWindow_C>();
	}
};
static_assert(alignof(AbaseWindow_C) == 0x000008, "Wrong alignment on AbaseWindow_C");
static_assert(sizeof(AbaseWindow_C) == 0x000238, "Wrong size on AbaseWindow_C");
static_assert(offsetof(AbaseWindow_C, StaticMesh1) == 0x000220, "Member 'AbaseWindow_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(AbaseWindow_C, Inside) == 0x000228, "Member 'AbaseWindow_C::Inside' has a wrong offset!");
static_assert(offsetof(AbaseWindow_C, DefaultSceneRoot) == 0x000230, "Member 'AbaseWindow_C::DefaultSceneRoot' has a wrong offset!");

}

