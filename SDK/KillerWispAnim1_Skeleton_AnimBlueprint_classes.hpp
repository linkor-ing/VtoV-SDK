#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KillerWispAnim1_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass killerWispAnim1_Skeleton_AnimBlueprint.killerWispAnim1_Skeleton_AnimBlueprint_C
// 0x01F0 (0x04B0 - 0x02C0)
class UKillerWispAnim1_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_RefPose                      AnimGraphNode_LocalRefPose;                        // 0x02F8(0x0018)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0310(0x0048)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0358(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0378(0x0108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0480(0x0020)()
	struct FVector                                Loc;                                               // 0x04A0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_killerWispAnim1_Skeleton_AnimBlueprint(int32 EntryPoint);
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"killerWispAnim1_Skeleton_AnimBlueprint_C">();
	}
	static class UKillerWispAnim1_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKillerWispAnim1_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UKillerWispAnim1_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UKillerWispAnim1_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UKillerWispAnim1_Skeleton_AnimBlueprint_C) == 0x0004B0, "Wrong size on UKillerWispAnim1_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UKillerWispAnim1_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0002C0, "Member 'UKillerWispAnim1_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UKillerWispAnim1_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UKillerWispAnim1_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UKillerWispAnim1_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalRefPose) == 0x0002F8, "Member 'UKillerWispAnim1_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalRefPose' has a wrong offset!");
static_assert(offsetof(UKillerWispAnim1_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x000310, "Member 'UKillerWispAnim1_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(UKillerWispAnim1_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x000358, "Member 'UKillerWispAnim1_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UKillerWispAnim1_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone) == 0x000378, "Member 'UKillerWispAnim1_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UKillerWispAnim1_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x000480, "Member 'UKillerWispAnim1_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UKillerWispAnim1_Skeleton_AnimBlueprint_C, Loc) == 0x0004A0, "Member 'UKillerWispAnim1_Skeleton_AnimBlueprint_C::Loc' has a wrong offset!");

}

