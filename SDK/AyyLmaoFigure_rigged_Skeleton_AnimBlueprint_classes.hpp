#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AyyLmaoFigure_rigged_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass ayyLmaoFigure_rigged_Skeleton_AnimBlueprint.ayyLmaoFigure_rigged_Skeleton_AnimBlueprint_C
// 0x0420 (0x06E0 - 0x02C0)
class UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2698[0x8];                                     // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_LinkedInputPose              AnimGraphNode_LinkedInputPose;                     // 0x02F8(0x0118)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x0410(0x0020)()
	struct FAnimNode_LookAt                       AnimGraphNode_LookAt;                              // 0x0430(0x01B0)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x05E0(0x0020)()
	struct FAnimNode_TwoWayBlend                  AnimGraphNode_TwoWayBlend;                         // 0x0600(0x00C8)()
	struct FVector                                LookAt;                                            // 0x06C8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LookAtBlend;                                       // 0x06D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ayyLmaoFigure_rigged_Skeleton_AnimBlueprint(int32 EntryPoint);
	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ayyLmaoFigure_rigged_Skeleton_AnimBlueprint_C">();
	}
	static class UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C) == 0x0006E0, "Wrong size on UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0002C0, "Member 'UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C, AnimGraphNode_LinkedInputPose) == 0x0002F8, "Member 'UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C::AnimGraphNode_LinkedInputPose' has a wrong offset!");
static_assert(offsetof(UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x000410, "Member 'UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C, AnimGraphNode_LookAt) == 0x000430, "Member 'UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C::AnimGraphNode_LookAt' has a wrong offset!");
static_assert(offsetof(UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x0005E0, "Member 'UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C, AnimGraphNode_TwoWayBlend) == 0x000600, "Member 'UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C::AnimGraphNode_TwoWayBlend' has a wrong offset!");
static_assert(offsetof(UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C, LookAt) == 0x0006C8, "Member 'UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C::LookAt' has a wrong offset!");
static_assert(offsetof(UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C, LookAtBlend) == 0x0006D4, "Member 'UAyyLmaoFigure_rigged_Skeleton_AnimBlueprint_C::LookAtBlend' has a wrong offset!");

}

