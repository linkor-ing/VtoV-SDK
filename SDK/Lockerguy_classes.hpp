#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lockerguy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass lockerguy.lockerguy_C
// 0x0028 (0x0248 - 0x0220)
class ALockerguy_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         A_a_6321EF9A40690BDDB6A65B9164CC837A;              // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            A__Direction_6321EF9A40690BDDB6A65B9164CC837A;     // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23D[0x3];                                      // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     A;                                                 // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_lockerguy(int32 EntryPoint);
	void ReceiveBeginPlay();
	void A__UpdateFunc();
	void A__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"lockerguy_C">();
	}
	static class ALockerguy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALockerguy_C>();
	}
};
static_assert(alignof(ALockerguy_C) == 0x000008, "Wrong alignment on ALockerguy_C");
static_assert(sizeof(ALockerguy_C) == 0x000248, "Wrong size on ALockerguy_C");
static_assert(offsetof(ALockerguy_C, UberGraphFrame) == 0x000220, "Member 'ALockerguy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALockerguy_C, StaticMesh) == 0x000228, "Member 'ALockerguy_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ALockerguy_C, DefaultSceneRoot) == 0x000230, "Member 'ALockerguy_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ALockerguy_C, A_a_6321EF9A40690BDDB6A65B9164CC837A) == 0x000238, "Member 'ALockerguy_C::A_a_6321EF9A40690BDDB6A65B9164CC837A' has a wrong offset!");
static_assert(offsetof(ALockerguy_C, A__Direction_6321EF9A40690BDDB6A65B9164CC837A) == 0x00023C, "Member 'ALockerguy_C::A__Direction_6321EF9A40690BDDB6A65B9164CC837A' has a wrong offset!");
static_assert(offsetof(ALockerguy_C, A) == 0x000240, "Member 'ALockerguy_C::A' has a wrong offset!");

}

