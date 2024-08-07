#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_umbrella

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_umbrella.prop_umbrella_C
// 0x0018 (0x0380 - 0x0368)
class AProp_umbrella_C final : public AProp_C
{
public:
	uint8                                         Pad_2485[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_umbrella_C;                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Anim;                                              // 0x0379(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_umbrella(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void OnCompleted_8FD53D694FAA874324AF05B1C3990EB3(class FName NotifyName);
	void OnBlendOut_8FD53D694FAA874324AF05B1C3990EB3(class FName NotifyName);
	void OnInterrupted_8FD53D694FAA874324AF05B1C3990EB3(class FName NotifyName);
	void OnNotifyBegin_8FD53D694FAA874324AF05B1C3990EB3(class FName NotifyName);
	void OnNotifyEnd_8FD53D694FAA874324AF05B1C3990EB3(class FName NotifyName);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_umbrella_C">();
	}
	static class AProp_umbrella_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_umbrella_C>();
	}
};
static_assert(alignof(AProp_umbrella_C) == 0x000008, "Wrong alignment on AProp_umbrella_C");
static_assert(sizeof(AProp_umbrella_C) == 0x000380, "Wrong size on AProp_umbrella_C");
static_assert(offsetof(AProp_umbrella_C, UberGraphFrame_Prop_umbrella_C) == 0x000368, "Member 'AProp_umbrella_C::UberGraphFrame_Prop_umbrella_C' has a wrong offset!");
static_assert(offsetof(AProp_umbrella_C, SkeletalMesh) == 0x000370, "Member 'AProp_umbrella_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(AProp_umbrella_C, Active) == 0x000378, "Member 'AProp_umbrella_C::Active' has a wrong offset!");
static_assert(offsetof(AProp_umbrella_C, Anim) == 0x000379, "Member 'AProp_umbrella_C::Anim' has a wrong offset!");

}

