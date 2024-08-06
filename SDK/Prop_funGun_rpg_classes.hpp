#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_funGun_rpg

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_funGun_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_funGun_rpg.prop_funGun_rpg_C
// 0x0018 (0x0460 - 0x0448)
class AProp_funGun_rpg_C : public AProp_funGun_C
{
public:
	uint8                                         Pad_444[0x4];                                      // 0x0444(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_funGun_rpg_C;                  // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Eff_aimLight;                                      // 0x0450(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAim;                                             // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_funGun_rpg(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void FireBulletPrimary();
	bool Look(struct FHitResult* OutHit);
	void PlayerHandUse_RMB(class AMainPlayer_C* Param_Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_funGun_rpg_C">();
	}
	static class AProp_funGun_rpg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_funGun_rpg_C>();
	}
};
static_assert(alignof(AProp_funGun_rpg_C) == 0x000008, "Wrong alignment on AProp_funGun_rpg_C");
static_assert(sizeof(AProp_funGun_rpg_C) == 0x000460, "Wrong size on AProp_funGun_rpg_C");
static_assert(offsetof(AProp_funGun_rpg_C, UberGraphFrame_Prop_funGun_rpg_C) == 0x000448, "Member 'AProp_funGun_rpg_C::UberGraphFrame_Prop_funGun_rpg_C' has a wrong offset!");
static_assert(offsetof(AProp_funGun_rpg_C, Eff_aimLight) == 0x000450, "Member 'AProp_funGun_rpg_C::Eff_aimLight' has a wrong offset!");
static_assert(offsetof(AProp_funGun_rpg_C, IsAim) == 0x000458, "Member 'AProp_funGun_rpg_C::IsAim' has a wrong offset!");

}
