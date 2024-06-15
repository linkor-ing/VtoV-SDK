#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: begoExplosion

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass begoExplosion.begoExplosion_C
// 0x0018 (0x0238 - 0x0220)
class AbegoExplosion_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Rend;                                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_begoExplosion(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"begoExplosion_C">();
	}
	static class AbegoExplosion_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AbegoExplosion_C>();
	}
};
static_assert(alignof(AbegoExplosion_C) == 0x000008, "Wrong alignment on AbegoExplosion_C");
static_assert(sizeof(AbegoExplosion_C) == 0x000238, "Wrong size on AbegoExplosion_C");
static_assert(offsetof(AbegoExplosion_C, UberGraphFrame) == 0x000220, "Member 'AbegoExplosion_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AbegoExplosion_C, Rend) == 0x000228, "Member 'AbegoExplosion_C::Rend' has a wrong offset!");
static_assert(offsetof(AbegoExplosion_C, DefaultSceneRoot) == 0x000230, "Member 'AbegoExplosion_C::DefaultSceneRoot' has a wrong offset!");

}

