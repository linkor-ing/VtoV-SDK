#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErieDrag

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass erieDrag.erieDrag_C
// 0x0030 (0x0250 - 0x0220)
class AErieDrag_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   ErieLiveHold;                                      // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          FollowVelocity;                                    // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_22E2[0x3];                                     // 0x0239(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Lastloc;                                           // 0x023C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rep;                                               // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_erieDrag(int32 EntryPoint);
	void BndEvt__erieDrag_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void SetIgnoreSave(bool Ignore);
	void ReceiveBeginPlay();
	void boing(const struct FVector& A);
	void SkipPreDelete(bool* Skip);
	void IgnoreSave(bool* Param_IgnoreSave);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"erieDrag_C">();
	}
	static class AErieDrag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AErieDrag_C>();
	}
};
static_assert(alignof(AErieDrag_C) == 0x000008, "Wrong alignment on AErieDrag_C");
static_assert(sizeof(AErieDrag_C) == 0x000250, "Wrong size on AErieDrag_C");
static_assert(offsetof(AErieDrag_C, UberGraphFrame) == 0x000220, "Member 'AErieDrag_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AErieDrag_C, Sphere) == 0x000228, "Member 'AErieDrag_C::Sphere' has a wrong offset!");
static_assert(offsetof(AErieDrag_C, ErieLiveHold) == 0x000230, "Member 'AErieDrag_C::ErieLiveHold' has a wrong offset!");
static_assert(offsetof(AErieDrag_C, FollowVelocity) == 0x000238, "Member 'AErieDrag_C::FollowVelocity' has a wrong offset!");
static_assert(offsetof(AErieDrag_C, Lastloc) == 0x00023C, "Member 'AErieDrag_C::Lastloc' has a wrong offset!");
static_assert(offsetof(AErieDrag_C, Rep) == 0x000248, "Member 'AErieDrag_C::Rep' has a wrong offset!");

}
