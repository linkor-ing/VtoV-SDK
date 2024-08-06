#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wendussy

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass wendussy.wendussy_C
// 0x00C8 (0x02E8 - 0x0220)
class AWendussy_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UComp_radarPoint_C*                     RadarPoint;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPnormal_C*                             Pnormal;                                           // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Vis_a_74148DAC464373695AC69988B6E0F135;            // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Vis__Direction_74148DAC464373695AC69988B6E0F135;   // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25D[0x3];                                      // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Vis;                                               // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWendussy_Skeleton_AnimBlueprint_C*     Anim;                                              // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timer;                                             // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HaveRifle;                                         // 0x027C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_27D[0x3];                                      // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Ray_height;                                        // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                Radius;                                            // 0x0284(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         DCheck_height;                                     // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Delay;                                             // 0x0294(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Chance;                                            // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_29C[0x4];                                      // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPhysicalMaterial*>              Mats_spawn;                                        // 0x02A0(0x0010)(Edit, BlueprintVisible)
	float                                         MaxTimer;                                          // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Rendered;                                          // 0x02B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B5[0x3];                                      // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPhysicalMaterial*>              Mats_look;                                         // 0x02B8(0x0010)(Edit, BlueprintVisible)
	bool                                          OneTime;                                           // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2C9[0x7];                                      // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPhysicalMaterial*>              TotemSurfaces;                                     // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          NoNeedRifle;                                       // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_wendussy(int32 EntryPoint);
	void ReceiveDestroyed();
	void Sens_b();
	void Sens();
	void Appear();
	void Disappear();
	void Move();
	void ReceiveBeginPlay();
	void Vis__UpdateFunc();
	void Vis__FinishedFunc();
	void SpawnTotem();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"wendussy_C">();
	}
	static class AWendussy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWendussy_C>();
	}
};
static_assert(alignof(AWendussy_C) == 0x000008, "Wrong alignment on AWendussy_C");
static_assert(sizeof(AWendussy_C) == 0x0002E8, "Wrong size on AWendussy_C");
static_assert(offsetof(AWendussy_C, UberGraphFrame) == 0x000220, "Member 'AWendussy_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWendussy_C, RadarPoint) == 0x000228, "Member 'AWendussy_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Sphere) == 0x000230, "Member 'AWendussy_C::Sphere' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Pnormal) == 0x000238, "Member 'AWendussy_C::Pnormal' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Audio) == 0x000240, "Member 'AWendussy_C::Audio' has a wrong offset!");
static_assert(offsetof(AWendussy_C, PointLight) == 0x000248, "Member 'AWendussy_C::PointLight' has a wrong offset!");
static_assert(offsetof(AWendussy_C, SkeletalMesh) == 0x000250, "Member 'AWendussy_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Vis_a_74148DAC464373695AC69988B6E0F135) == 0x000258, "Member 'AWendussy_C::Vis_a_74148DAC464373695AC69988B6E0F135' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Vis__Direction_74148DAC464373695AC69988B6E0F135) == 0x00025C, "Member 'AWendussy_C::Vis__Direction_74148DAC464373695AC69988B6E0F135' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Vis) == 0x000260, "Member 'AWendussy_C::Vis' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Anim) == 0x000268, "Member 'AWendussy_C::Anim' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Dynmat) == 0x000270, "Member 'AWendussy_C::Dynmat' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Timer) == 0x000278, "Member 'AWendussy_C::Timer' has a wrong offset!");
static_assert(offsetof(AWendussy_C, HaveRifle) == 0x00027C, "Member 'AWendussy_C::HaveRifle' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Ray_height) == 0x000280, "Member 'AWendussy_C::Ray_height' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Radius) == 0x000284, "Member 'AWendussy_C::Radius' has a wrong offset!");
static_assert(offsetof(AWendussy_C, DCheck_height) == 0x000290, "Member 'AWendussy_C::DCheck_height' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Delay) == 0x000294, "Member 'AWendussy_C::Delay' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Chance) == 0x000298, "Member 'AWendussy_C::Chance' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Mats_spawn) == 0x0002A0, "Member 'AWendussy_C::Mats_spawn' has a wrong offset!");
static_assert(offsetof(AWendussy_C, MaxTimer) == 0x0002B0, "Member 'AWendussy_C::MaxTimer' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Rendered) == 0x0002B4, "Member 'AWendussy_C::Rendered' has a wrong offset!");
static_assert(offsetof(AWendussy_C, Mats_look) == 0x0002B8, "Member 'AWendussy_C::Mats_look' has a wrong offset!");
static_assert(offsetof(AWendussy_C, OneTime) == 0x0002C8, "Member 'AWendussy_C::OneTime' has a wrong offset!");
static_assert(offsetof(AWendussy_C, TotemSurfaces) == 0x0002D0, "Member 'AWendussy_C::TotemSurfaces' has a wrong offset!");
static_assert(offsetof(AWendussy_C, NoNeedRifle) == 0x0002E0, "Member 'AWendussy_C::NoNeedRifle' has a wrong offset!");

}

