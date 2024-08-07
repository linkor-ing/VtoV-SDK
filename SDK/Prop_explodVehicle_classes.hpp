#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_explodVehicle

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_explodVehicle.prop_explodVehicle_C
// 0x0010 (0x0388 - 0x0378)
class AProp_explodVehicle_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_explodVehicle_C;               // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Canexplode;                                        // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_prop_explodVehicle(int32 EntryPoint);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Param_Hit);
	void ImpactDamageCPP(float Damage, const struct FHitResult& Param_Hit, class AActor* Actor, const struct FVector& Impact);
	void SetPropProps(bool Param_Static, bool Param_Frozen, bool Active);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_explodVehicle_C">();
	}
	static class AProp_explodVehicle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_explodVehicle_C>();
	}
};
static_assert(alignof(AProp_explodVehicle_C) == 0x000008, "Wrong alignment on AProp_explodVehicle_C");
static_assert(sizeof(AProp_explodVehicle_C) == 0x000388, "Wrong size on AProp_explodVehicle_C");
static_assert(offsetof(AProp_explodVehicle_C, UberGraphFrame_Prop_explodVehicle_C) == 0x000378, "Member 'AProp_explodVehicle_C::UberGraphFrame_Prop_explodVehicle_C' has a wrong offset!");
static_assert(offsetof(AProp_explodVehicle_C, Canexplode) == 0x000380, "Member 'AProp_explodVehicle_C::Canexplode' has a wrong offset!");

}

