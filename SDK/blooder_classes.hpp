#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: blooder

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass blooder.blooder_C
// 0x0018 (0x0238 - 0x0220)
class Ablooder_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Amount;                                            // 0x0230(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_blooder(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"blooder_C">();
	}
	static class Ablooder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Ablooder_C>();
	}
};
static_assert(alignof(Ablooder_C) == 0x000008, "Wrong alignment on Ablooder_C");
static_assert(sizeof(Ablooder_C) == 0x000238, "Wrong size on Ablooder_C");
static_assert(offsetof(Ablooder_C, UberGraphFrame) == 0x000220, "Member 'Ablooder_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Ablooder_C, DefaultSceneRoot) == 0x000228, "Member 'Ablooder_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(Ablooder_C, Amount) == 0x000230, "Member 'Ablooder_C::Amount' has a wrong offset!");

}
