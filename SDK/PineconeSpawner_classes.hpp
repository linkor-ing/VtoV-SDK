#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PineconeSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass pineconeSpawner.pineconeSpawner_C
// 0x0018 (0x0238 - 0x0220)
class APineconeSpawner_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_pineconeSpawner(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"pineconeSpawner_C">();
	}
	static class APineconeSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APineconeSpawner_C>();
	}
};
static_assert(alignof(APineconeSpawner_C) == 0x000008, "Wrong alignment on APineconeSpawner_C");
static_assert(sizeof(APineconeSpawner_C) == 0x000238, "Wrong size on APineconeSpawner_C");
static_assert(offsetof(APineconeSpawner_C, UberGraphFrame) == 0x000220, "Member 'APineconeSpawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APineconeSpawner_C, DefaultSceneRoot) == 0x000228, "Member 'APineconeSpawner_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APineconeSpawner_C, Time) == 0x000230, "Member 'APineconeSpawner_C::Time' has a wrong offset!");

}
