#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_trampoline

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_trampoline.prop_trampoline_C
// 0x0018 (0x0390 - 0x0378)
class AProp_trampoline_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_trampoline_C;                  // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   bounceCollision;                                   // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        bounce;                                            // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_trampoline(int32 EntryPoint);
	void BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Param_Hit);
	struct FVector Jump(const struct FVector& InVec, float B);
	void ReceiveBeginPlay();
	void LandedOn(class AMainPlayer_C* Player, bool* IgnoreFallDamage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_trampoline_C">();
	}
	static class AProp_trampoline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_trampoline_C>();
	}
};
static_assert(alignof(AProp_trampoline_C) == 0x000008, "Wrong alignment on AProp_trampoline_C");
static_assert(sizeof(AProp_trampoline_C) == 0x000390, "Wrong size on AProp_trampoline_C");
static_assert(offsetof(AProp_trampoline_C, UberGraphFrame_Prop_trampoline_C) == 0x000378, "Member 'AProp_trampoline_C::UberGraphFrame_Prop_trampoline_C' has a wrong offset!");
static_assert(offsetof(AProp_trampoline_C, bounceCollision) == 0x000380, "Member 'AProp_trampoline_C::bounceCollision' has a wrong offset!");
static_assert(offsetof(AProp_trampoline_C, bounce) == 0x000388, "Member 'AProp_trampoline_C::bounce' has a wrong offset!");

}
