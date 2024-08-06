#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AntibreatherSPawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass antibreatherSPawner.antibreatherSPawner_C
// 0x0060 (0x0280 - 0x0220)
class AAntibreatherSPawner_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       CaveEntryCheck;                                    // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       MusicTrigger;                                      // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    AmbCenter;                                         // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   blockRock1;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   blockRock;                                         // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   RenderCheck_spawn;                                 // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 brether;                                           // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATrigger_box_AB_C*                      Box;                                               // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanPlay;                                           // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ReceiveBeginPlay();
	void bLock();
	void BndEvt__antibreatherSPawner_Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Cencipede();
	void ExecuteUbergraph_antibreatherSPawner(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"antibreatherSPawner_C">();
	}
	static class AAntibreatherSPawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAntibreatherSPawner_C>();
	}
};
static_assert(alignof(AAntibreatherSPawner_C) == 0x000008, "Wrong alignment on AAntibreatherSPawner_C");
static_assert(sizeof(AAntibreatherSPawner_C) == 0x000280, "Wrong size on AAntibreatherSPawner_C");
static_assert(offsetof(AAntibreatherSPawner_C, UberGraphFrame) == 0x000220, "Member 'AAntibreatherSPawner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAntibreatherSPawner_C, CaveEntryCheck) == 0x000228, "Member 'AAntibreatherSPawner_C::CaveEntryCheck' has a wrong offset!");
static_assert(offsetof(AAntibreatherSPawner_C, MusicTrigger) == 0x000230, "Member 'AAntibreatherSPawner_C::MusicTrigger' has a wrong offset!");
static_assert(offsetof(AAntibreatherSPawner_C, AmbCenter) == 0x000238, "Member 'AAntibreatherSPawner_C::AmbCenter' has a wrong offset!");
static_assert(offsetof(AAntibreatherSPawner_C, Sphere) == 0x000240, "Member 'AAntibreatherSPawner_C::Sphere' has a wrong offset!");
static_assert(offsetof(AAntibreatherSPawner_C, blockRock1) == 0x000248, "Member 'AAntibreatherSPawner_C::blockRock1' has a wrong offset!");
static_assert(offsetof(AAntibreatherSPawner_C, blockRock) == 0x000250, "Member 'AAntibreatherSPawner_C::blockRock' has a wrong offset!");
static_assert(offsetof(AAntibreatherSPawner_C, RenderCheck_spawn) == 0x000258, "Member 'AAntibreatherSPawner_C::RenderCheck_spawn' has a wrong offset!");
static_assert(offsetof(AAntibreatherSPawner_C, DefaultSceneRoot) == 0x000260, "Member 'AAntibreatherSPawner_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AAntibreatherSPawner_C, brether) == 0x000268, "Member 'AAntibreatherSPawner_C::brether' has a wrong offset!");
static_assert(offsetof(AAntibreatherSPawner_C, Box) == 0x000270, "Member 'AAntibreatherSPawner_C::Box' has a wrong offset!");
static_assert(offsetof(AAntibreatherSPawner_C, CanPlay) == 0x000278, "Member 'AAntibreatherSPawner_C::CanPlay' has a wrong offset!");

}
