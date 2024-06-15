#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OilStainSpawn

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass oilStainSpawn.oilStainSpawn_C
// 0x0018 (0x0238 - 0x0220)
class AOilStainSpawn_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sphere;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_oilStainSpawn(int32 EntryPoint);
	void Spawn();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"oilStainSpawn_C">();
	}
	static class AOilStainSpawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AOilStainSpawn_C>();
	}
};
static_assert(alignof(AOilStainSpawn_C) == 0x000008, "Wrong alignment on AOilStainSpawn_C");
static_assert(sizeof(AOilStainSpawn_C) == 0x000238, "Wrong size on AOilStainSpawn_C");
static_assert(offsetof(AOilStainSpawn_C, UberGraphFrame) == 0x000220, "Member 'AOilStainSpawn_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AOilStainSpawn_C, Sphere) == 0x000228, "Member 'AOilStainSpawn_C::Sphere' has a wrong offset!");
static_assert(offsetof(AOilStainSpawn_C, DefaultSceneRoot) == 0x000230, "Member 'AOilStainSpawn_C::DefaultSceneRoot' has a wrong offset!");

}
