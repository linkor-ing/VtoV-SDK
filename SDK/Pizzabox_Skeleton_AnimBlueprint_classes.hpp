#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Pizzabox_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass pizzabox_Skeleton_AnimBlueprint.pizzabox_Skeleton_AnimBlueprint_C
// 0x01A0 (0x0460 - 0x02C0)
class UPizzabox_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_26FE[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x02F8(0x0118)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x0410(0x0048)()

public:
	void ExecuteUbergraph_pizzabox_Skeleton_AnimBlueprint(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"pizzabox_Skeleton_AnimBlueprint_C">();
	}
	static class UPizzabox_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPizzabox_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UPizzabox_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UPizzabox_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UPizzabox_Skeleton_AnimBlueprint_C) == 0x000460, "Wrong size on UPizzabox_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UPizzabox_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0002C0, "Member 'UPizzabox_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPizzabox_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UPizzabox_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UPizzabox_Skeleton_AnimBlueprint_C, AnimGraphNode_LinkedInputPose) == 0x0002F8, "Member 'UPizzabox_Skeleton_AnimBlueprint_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UPizzabox_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x000410, "Member 'UPizzabox_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");

}

