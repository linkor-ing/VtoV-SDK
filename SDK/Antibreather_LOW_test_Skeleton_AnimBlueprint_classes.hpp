#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Antibreather_LOW_test_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass antibreather_LOW_test_Skeleton_AnimBlueprint.antibreather_LOW_test_Skeleton_AnimBlueprint_C
// 0x0190 (0x0450 - 0x02C0)
class UAntibreather_LOW_test_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_BlendSpacePlayer             AnimGraphNode_BlendSpacePlayer;                    // 0x02C8(0x00E8)()
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x03B0(0x0030)()
	float                                         A;                                                 // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rate;                                              // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAntibreather_C*                        bre;                                               // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         H_arm_R;                                           // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         H_arm_L;                                           // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         H_leg_R;                                           // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         H_leg_L;                                           // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Acor;                                              // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_408[0x8];                                      // 0x0408(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Ranform;                                           // 0x0410(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                Loc;                                               // 0x0440(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         H_mid;                                             // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_antibreather_LOW_test_Skeleton_AnimBlueprint(int32 EntryPoint);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_antibreather_LOW_test_Skeleton_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_549EEF90442934198A936093EE58EB01();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintBeginPlay();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"antibreather_LOW_test_Skeleton_AnimBlueprint_C">();
	}
	static class UAntibreather_LOW_test_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAntibreather_LOW_test_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UAntibreather_LOW_test_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C) == 0x000450, "Wrong size on UAntibreather_LOW_test_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0002C0, "Member 'UAntibreather_LOW_test_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C, AnimGraphNode_BlendSpacePlayer) == 0x0002C8, "Member 'UAntibreather_LOW_test_Skeleton_AnimBlueprint_C::AnimGraphNode_BlendSpacePlayer' has a wrong offset!");
static_assert(offsetof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0003B0, "Member 'UAntibreather_LOW_test_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C, A) == 0x0003E0, "Member 'UAntibreather_LOW_test_Skeleton_AnimBlueprint_C::A' has a wrong offset!");
static_assert(offsetof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C, Rate) == 0x0003E4, "Member 'UAntibreather_LOW_test_Skeleton_AnimBlueprint_C::Rate' has a wrong offset!");
static_assert(offsetof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C, bre) == 0x0003E8, "Member 'UAntibreather_LOW_test_Skeleton_AnimBlueprint_C::bre' has a wrong offset!");
static_assert(offsetof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C, H_arm_R) == 0x0003F0, "Member 'UAntibreather_LOW_test_Skeleton_AnimBlueprint_C::H_arm_R' has a wrong offset!");
static_assert(offsetof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C, H_arm_L) == 0x0003F4, "Member 'UAntibreather_LOW_test_Skeleton_AnimBlueprint_C::H_arm_L' has a wrong offset!");
static_assert(offsetof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C, H_leg_R) == 0x0003F8, "Member 'UAntibreather_LOW_test_Skeleton_AnimBlueprint_C::H_leg_R' has a wrong offset!");
static_assert(offsetof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C, H_leg_L) == 0x0003FC, "Member 'UAntibreather_LOW_test_Skeleton_AnimBlueprint_C::H_leg_L' has a wrong offset!");
static_assert(offsetof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C, Acor) == 0x000400, "Member 'UAntibreather_LOW_test_Skeleton_AnimBlueprint_C::Acor' has a wrong offset!");
static_assert(offsetof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C, Ranform) == 0x000410, "Member 'UAntibreather_LOW_test_Skeleton_AnimBlueprint_C::Ranform' has a wrong offset!");
static_assert(offsetof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C, Loc) == 0x000440, "Member 'UAntibreather_LOW_test_Skeleton_AnimBlueprint_C::Loc' has a wrong offset!");
static_assert(offsetof(UAntibreather_LOW_test_Skeleton_AnimBlueprint_C, H_mid) == 0x00044C, "Member 'UAntibreather_LOW_test_Skeleton_AnimBlueprint_C::H_mid' has a wrong offset!");

}

