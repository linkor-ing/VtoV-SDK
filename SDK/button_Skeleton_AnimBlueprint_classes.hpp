#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: button_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass button_Skeleton_AnimBlueprint.button_Skeleton_AnimBlueprint_C
// 0x0100 (0x03C0 - 0x02C0)
class Ubutton_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_3D6B[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_Slot                         AnimGraphNode_Slot;                                // 0x02F8(0x0048)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0340(0x0080)()

public:
	void AnimGraph(struct FPoseLink* Param_AnimGraph);
	void ExecuteUbergraph_button_Skeleton_AnimBlueprint(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"button_Skeleton_AnimBlueprint_C">();
	}
	static class Ubutton_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Ubutton_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(Ubutton_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on Ubutton_Skeleton_AnimBlueprint_C");
static_assert(sizeof(Ubutton_Skeleton_AnimBlueprint_C) == 0x0003C0, "Wrong size on Ubutton_Skeleton_AnimBlueprint_C");
static_assert(offsetof(Ubutton_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0002C0, "Member 'Ubutton_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(Ubutton_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0002C8, "Member 'Ubutton_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(Ubutton_Skeleton_AnimBlueprint_C, AnimGraphNode_Slot) == 0x0002F8, "Member 'Ubutton_Skeleton_AnimBlueprint_C::AnimGraphNode_Slot' has a wrong offset!");
static_assert(offsetof(Ubutton_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x000340, "Member 'Ubutton_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer' has a wrong offset!");

}

