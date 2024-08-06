#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Jellyfish

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass jellyfish.jellyfish_C
// 0x0068 (0x0288 - 0x0220)
class AJellyfish_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URadialForceComponent*                  RadialForce;                                       // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_radarPoint_C*                     RadarPoint;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule;                                           // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Vec;                                               // 0x0258(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_264[0x4];                                      // 0x0264(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AJellyfishPath_C*                       Spline;                                            // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                Adds;                                              // 0x0270(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RVec;                                              // 0x027C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_jellyfish(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void Ground();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"jellyfish_C">();
	}
	static class AJellyfish_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AJellyfish_C>();
	}
};
static_assert(alignof(AJellyfish_C) == 0x000008, "Wrong alignment on AJellyfish_C");
static_assert(sizeof(AJellyfish_C) == 0x000288, "Wrong size on AJellyfish_C");
static_assert(offsetof(AJellyfish_C, UberGraphFrame) == 0x000220, "Member 'AJellyfish_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AJellyfish_C, RadialForce) == 0x000228, "Member 'AJellyfish_C::RadialForce' has a wrong offset!");
static_assert(offsetof(AJellyfish_C, PointLight) == 0x000230, "Member 'AJellyfish_C::PointLight' has a wrong offset!");
static_assert(offsetof(AJellyfish_C, RadarPoint) == 0x000238, "Member 'AJellyfish_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(AJellyfish_C, SkeletalMesh) == 0x000240, "Member 'AJellyfish_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(AJellyfish_C, Arrow) == 0x000248, "Member 'AJellyfish_C::Arrow' has a wrong offset!");
static_assert(offsetof(AJellyfish_C, Capsule) == 0x000250, "Member 'AJellyfish_C::Capsule' has a wrong offset!");
static_assert(offsetof(AJellyfish_C, Vec) == 0x000258, "Member 'AJellyfish_C::Vec' has a wrong offset!");
static_assert(offsetof(AJellyfish_C, Spline) == 0x000268, "Member 'AJellyfish_C::Spline' has a wrong offset!");
static_assert(offsetof(AJellyfish_C, Adds) == 0x000270, "Member 'AJellyfish_C::Adds' has a wrong offset!");
static_assert(offsetof(AJellyfish_C, RVec) == 0x00027C, "Member 'AJellyfish_C::RVec' has a wrong offset!");

}

