#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_radCrystal

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_radCrystal.prop_radCrystal_C
// 0x0020 (0x0398 - 0x0378)
class AProp_radCrystal_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_radCrystal_C;                  // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UComp_radiation_C*                      RadComp;                                           // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Hits;                                              // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Crystals;                                          // 0x0394(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_radCrystal(int32 EntryPoint);
	void ReceiveBeginPlay();
	void DamageByPlayer(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, float Damage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_radCrystal_C">();
	}
	static class AProp_radCrystal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_radCrystal_C>();
	}
};
static_assert(alignof(AProp_radCrystal_C) == 0x000008, "Wrong alignment on AProp_radCrystal_C");
static_assert(sizeof(AProp_radCrystal_C) == 0x000398, "Wrong size on AProp_radCrystal_C");
static_assert(offsetof(AProp_radCrystal_C, UberGraphFrame_Prop_radCrystal_C) == 0x000378, "Member 'AProp_radCrystal_C::UberGraphFrame_Prop_radCrystal_C' has a wrong offset!");
static_assert(offsetof(AProp_radCrystal_C, RadComp) == 0x000380, "Member 'AProp_radCrystal_C::RadComp' has a wrong offset!");
static_assert(offsetof(AProp_radCrystal_C, PointLight) == 0x000388, "Member 'AProp_radCrystal_C::PointLight' has a wrong offset!");
static_assert(offsetof(AProp_radCrystal_C, Hits) == 0x000390, "Member 'AProp_radCrystal_C::Hits' has a wrong offset!");
static_assert(offsetof(AProp_radCrystal_C, Crystals) == 0x000394, "Member 'AProp_radCrystal_C::Crystals' has a wrong offset!");

}

