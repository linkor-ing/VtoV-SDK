#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UndergroundGarbageSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass undergroundGarbageSpawner.undergroundGarbageSpawner_C
// 0x0138 (0x0358 - 0x0220)
class AUndergroundGarbageSpawner_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, float>                      Loot;                                              // 0x0230(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           Items;                                             // 0x0280(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 Weights;                                           // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ALandscape*                             Landscape;                                         // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SpawnRadius;                                       // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Duration;                                          // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkipLandscape;                                     // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          AroundPlayer;                                      // 0x02B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Run;                                               // 0x02B6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B7[0x1];                                      // 0x02B7(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, float>                      DebugPercents;                                     // 0x02B8(0x0050)(Edit, BlueprintVisible)
	TMap<class FName, int32>                      DebugChance;                                       // 0x0308(0x0050)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_undergroundGarbageSpawner(int32 EntryPoint);
	void Timer();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void PrepareItems(const struct FVector& Loc);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"undergroundGarbageSpawner_C">();
	}
	static class AUndergroundGarbageSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUndergroundGarbageSpawner_C>();
	}
};
static_assert(alignof(AUndergroundGarbageSpawner_C) == 0x000008, "Wrong alignment on AUndergroundGarbageSpawner_C");
static_assert(sizeof(AUndergroundGarbageSpawner_C) == 0x000358, "Wrong size on AUndergroundGarbageSpawner_C");
static_assert(offsetof(AUndergroundGarbageSpawner_C, UberGraphFrame) == 0x000220, "Member 'AUndergroundGarbageSpawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AUndergroundGarbageSpawner_C, DefaultSceneRoot) == 0x000228, "Member 'AUndergroundGarbageSpawner_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AUndergroundGarbageSpawner_C, Loot) == 0x000230, "Member 'AUndergroundGarbageSpawner_C::Loot' has a wrong offset!");
static_assert(offsetof(AUndergroundGarbageSpawner_C, Items) == 0x000280, "Member 'AUndergroundGarbageSpawner_C::Items' has a wrong offset!");
static_assert(offsetof(AUndergroundGarbageSpawner_C, Weights) == 0x000290, "Member 'AUndergroundGarbageSpawner_C::Weights' has a wrong offset!");
static_assert(offsetof(AUndergroundGarbageSpawner_C, Landscape) == 0x0002A0, "Member 'AUndergroundGarbageSpawner_C::Landscape' has a wrong offset!");
static_assert(offsetof(AUndergroundGarbageSpawner_C, SpawnRadius) == 0x0002A8, "Member 'AUndergroundGarbageSpawner_C::SpawnRadius' has a wrong offset!");
static_assert(offsetof(AUndergroundGarbageSpawner_C, Duration) == 0x0002B0, "Member 'AUndergroundGarbageSpawner_C::Duration' has a wrong offset!");
static_assert(offsetof(AUndergroundGarbageSpawner_C, SkipLandscape) == 0x0002B4, "Member 'AUndergroundGarbageSpawner_C::SkipLandscape' has a wrong offset!");
static_assert(offsetof(AUndergroundGarbageSpawner_C, AroundPlayer) == 0x0002B5, "Member 'AUndergroundGarbageSpawner_C::AroundPlayer' has a wrong offset!");
static_assert(offsetof(AUndergroundGarbageSpawner_C, Run) == 0x0002B6, "Member 'AUndergroundGarbageSpawner_C::Run' has a wrong offset!");
static_assert(offsetof(AUndergroundGarbageSpawner_C, DebugPercents) == 0x0002B8, "Member 'AUndergroundGarbageSpawner_C::DebugPercents' has a wrong offset!");
static_assert(offsetof(AUndergroundGarbageSpawner_C, DebugChance) == 0x000308, "Member 'AUndergroundGarbageSpawner_C::DebugChance' has a wrong offset!");

}

