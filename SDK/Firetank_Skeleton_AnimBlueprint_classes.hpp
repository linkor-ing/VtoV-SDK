#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Firetank_Skeleton_AnimBlueprint

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AnimGraphRuntime_structs.hpp"


namespace SDK
{

// AnimBlueprintGeneratedClass firetank_Skeleton_AnimBlueprint.firetank_Skeleton_AnimBlueprint_C
// 0x06F0 (0x09B0 - 0x02C0)
class UFiretank_Skeleton_AnimBlueprint_C final : public UAnimInstance
{
public:
	uint8                                         Pad_2B8[0x8];                                      // 0x02B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                         AnimGraphNode_Root;                                // 0x02C8(0x0030)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x02F8(0x0020)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x0318(0x0020)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_4;                        // 0x0338(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_3;                        // 0x0440(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_2;                        // 0x0548(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone_1;                        // 0x0650(0x0108)()
	struct FAnimNode_ModifyBone                   AnimGraphNode_ModifyBone;                          // 0x0758(0x0108)()
	struct FAnimNode_SequencePlayer               AnimGraphNode_SequencePlayer;                      // 0x0860(0x0080)()
	struct FRotator                               Rot_Z;                                             // 0x08E0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Rot_arm;                                           // 0x08EC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Rot_neck;                                          // 0x08F8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Rot_head;                                          // 0x0904(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Rot_gun;                                           // 0x0910(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Height;                                            // 0x091C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Point;                                             // 0x0920(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_92C[0x4];                                      // 0x092C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  Pawn;                                              // 0x0930(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Component;                                         // 0x0938(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Rot_Z_final;                                       // 0x0940(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                               Rot_gun_final;                                     // 0x094C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         GunPitch;                                          // 0x0958(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95C[0x4];                                      // 0x095C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  TargetPawn;                                        // 0x0960(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GunPitch_prev;                                     // 0x0968(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Arm;                                               // 0x096C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Arm_prev;                                          // 0x0970(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zrot_prev;                                         // 0x0974(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Arm_d;                                             // 0x0978(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zrot_d;                                            // 0x097C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         GunPitch_d;                                        // 0x0980(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Hold_arm;                                          // 0x0984(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_985[0x3];                                      // 0x0985(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ArmSpeed;                                          // 0x0988(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                DefPoint;                                          // 0x098C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FollowPointSpeed;                                  // 0x0998(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ZrotSpeedMult;                                     // 0x099C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Zrot_maxSpeed;                                     // 0x09A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Gun_maxSpeed;                                      // 0x09A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_firetank_Skeleton_AnimBlueprint(int32 EntryPoint);
	void BlueprintBeginPlay();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_firetank_Skeleton_AnimBlueprint_AnimGraphNode_ModifyBone_BCCC0EF34B8CA6CCB94793A64591E3AF();
	void SetTargetPoint();
	void AnimGraph(struct FPoseLink* Param_AnimGraph);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"firetank_Skeleton_AnimBlueprint_C">();
	}
	static class UFiretank_Skeleton_AnimBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFiretank_Skeleton_AnimBlueprint_C>();
	}
};
static_assert(alignof(UFiretank_Skeleton_AnimBlueprint_C) == 0x000010, "Wrong alignment on UFiretank_Skeleton_AnimBlueprint_C");
static_assert(sizeof(UFiretank_Skeleton_AnimBlueprint_C) == 0x0009B0, "Wrong size on UFiretank_Skeleton_AnimBlueprint_C");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, UberGraphFrame) == 0x0002C0, "Member 'UFiretank_Skeleton_AnimBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, AnimGraphNode_Root) == 0x0002C8, "Member 'UFiretank_Skeleton_AnimBlueprint_C::AnimGraphNode_Root' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, AnimGraphNode_LocalToComponentSpace) == 0x0002F8, "Member 'UFiretank_Skeleton_AnimBlueprint_C::AnimGraphNode_LocalToComponentSpace' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, AnimGraphNode_ComponentToLocalSpace) == 0x000318, "Member 'UFiretank_Skeleton_AnimBlueprint_C::AnimGraphNode_ComponentToLocalSpace' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_4) == 0x000338, "Member 'UFiretank_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_4' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_3) == 0x000440, "Member 'UFiretank_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_3' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_2) == 0x000548, "Member 'UFiretank_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_2' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone_1) == 0x000650, "Member 'UFiretank_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone_1' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, AnimGraphNode_ModifyBone) == 0x000758, "Member 'UFiretank_Skeleton_AnimBlueprint_C::AnimGraphNode_ModifyBone' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, AnimGraphNode_SequencePlayer) == 0x000860, "Member 'UFiretank_Skeleton_AnimBlueprint_C::AnimGraphNode_SequencePlayer' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Rot_Z) == 0x0008E0, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Rot_Z' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Rot_arm) == 0x0008EC, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Rot_arm' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Rot_neck) == 0x0008F8, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Rot_neck' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Rot_head) == 0x000904, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Rot_head' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Rot_gun) == 0x000910, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Rot_gun' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Height) == 0x00091C, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Height' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Point) == 0x000920, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Point' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Pawn) == 0x000930, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Pawn' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Component) == 0x000938, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Component' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Rot_Z_final) == 0x000940, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Rot_Z_final' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Rot_gun_final) == 0x00094C, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Rot_gun_final' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, GunPitch) == 0x000958, "Member 'UFiretank_Skeleton_AnimBlueprint_C::GunPitch' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, TargetPawn) == 0x000960, "Member 'UFiretank_Skeleton_AnimBlueprint_C::TargetPawn' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, GunPitch_prev) == 0x000968, "Member 'UFiretank_Skeleton_AnimBlueprint_C::GunPitch_prev' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Arm) == 0x00096C, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Arm' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Arm_prev) == 0x000970, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Arm_prev' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Zrot_prev) == 0x000974, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Zrot_prev' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Arm_d) == 0x000978, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Arm_d' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Zrot_d) == 0x00097C, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Zrot_d' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, GunPitch_d) == 0x000980, "Member 'UFiretank_Skeleton_AnimBlueprint_C::GunPitch_d' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Hold_arm) == 0x000984, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Hold_arm' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, ArmSpeed) == 0x000988, "Member 'UFiretank_Skeleton_AnimBlueprint_C::ArmSpeed' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, DefPoint) == 0x00098C, "Member 'UFiretank_Skeleton_AnimBlueprint_C::DefPoint' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, FollowPointSpeed) == 0x000998, "Member 'UFiretank_Skeleton_AnimBlueprint_C::FollowPointSpeed' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, ZrotSpeedMult) == 0x00099C, "Member 'UFiretank_Skeleton_AnimBlueprint_C::ZrotSpeedMult' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Zrot_maxSpeed) == 0x0009A0, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Zrot_maxSpeed' has a wrong offset!");
static_assert(offsetof(UFiretank_Skeleton_AnimBlueprint_C, Gun_maxSpeed) == 0x0009A4, "Member 'UFiretank_Skeleton_AnimBlueprint_C::Gun_maxSpeed' has a wrong offset!");

}
