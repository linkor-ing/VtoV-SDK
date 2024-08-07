#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_bucket

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_bucket.prop_bucket_C
// 0x0070 (0x03D8 - 0x0368)
class AProp_bucket_C : public AProp_C
{
public:
	uint8                                         Pad_3C58[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_bucket_C;                      // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPhysicsConstraintComponent*            PhysicsConstraint;                                 // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wobble;                                            // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow1;                                            // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Pouring;                                           // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Pour;                                              // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        WobbleArrow;                                       // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Height;                                            // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                bottomPoint;                                       // 0x03B4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TopPoint;                                          // 0x03C0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Empty;                                             // 0x03CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C59[0x3];                                     // 0x03CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Height_interp;                                     // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHeight;                                         // 0x03D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_bucket(int32 EntryPoint);
	void ReceiveBeginPlay();
	void BndEvt__prop_bucket_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__prop_bucket_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void Upd();
	void InterpFlow();
	void Dipped(bool* IsDipped);
	void UserConstructionScript();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_bucket_C">();
	}
	static class AProp_bucket_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_bucket_C>();
	}
};
static_assert(alignof(AProp_bucket_C) == 0x000008, "Wrong alignment on AProp_bucket_C");
static_assert(sizeof(AProp_bucket_C) == 0x0003D8, "Wrong size on AProp_bucket_C");
static_assert(offsetof(AProp_bucket_C, UberGraphFrame_Prop_bucket_C) == 0x000368, "Member 'AProp_bucket_C::UberGraphFrame_Prop_bucket_C' has a wrong offset!");
static_assert(offsetof(AProp_bucket_C, PhysicsConstraint) == 0x000370, "Member 'AProp_bucket_C::PhysicsConstraint' has a wrong offset!");
static_assert(offsetof(AProp_bucket_C, Wobble) == 0x000378, "Member 'AProp_bucket_C::Wobble' has a wrong offset!");
static_assert(offsetof(AProp_bucket_C, Arrow1) == 0x000380, "Member 'AProp_bucket_C::Arrow1' has a wrong offset!");
static_assert(offsetof(AProp_bucket_C, Sphere) == 0x000388, "Member 'AProp_bucket_C::Sphere' has a wrong offset!");
static_assert(offsetof(AProp_bucket_C, Pouring) == 0x000390, "Member 'AProp_bucket_C::Pouring' has a wrong offset!");
static_assert(offsetof(AProp_bucket_C, Pour) == 0x000398, "Member 'AProp_bucket_C::Pour' has a wrong offset!");
static_assert(offsetof(AProp_bucket_C, WobbleArrow) == 0x0003A0, "Member 'AProp_bucket_C::WobbleArrow' has a wrong offset!");
static_assert(offsetof(AProp_bucket_C, Dynmat) == 0x0003A8, "Member 'AProp_bucket_C::Dynmat' has a wrong offset!");
static_assert(offsetof(AProp_bucket_C, Height) == 0x0003B0, "Member 'AProp_bucket_C::Height' has a wrong offset!");
static_assert(offsetof(AProp_bucket_C, bottomPoint) == 0x0003B4, "Member 'AProp_bucket_C::bottomPoint' has a wrong offset!");
static_assert(offsetof(AProp_bucket_C, TopPoint) == 0x0003C0, "Member 'AProp_bucket_C::TopPoint' has a wrong offset!");
static_assert(offsetof(AProp_bucket_C, Empty) == 0x0003CC, "Member 'AProp_bucket_C::Empty' has a wrong offset!");
static_assert(offsetof(AProp_bucket_C, Height_interp) == 0x0003D0, "Member 'AProp_bucket_C::Height_interp' has a wrong offset!");
static_assert(offsetof(AProp_bucket_C, MaxHeight) == 0x0003D4, "Member 'AProp_bucket_C::MaxHeight' has a wrong offset!");

}

