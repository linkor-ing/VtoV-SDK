#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_rocket

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_rocket.prop_rocket_C
// 0x0040 (0x03B8 - 0x0378)
class AProp_rocket_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_rocket_C;                      // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Eff_rocketSmoke;                                   // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        RocketFire_loop;                                   // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Lastloc;                                           // 0x0390(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39C[0x4];                                      // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_funGun_rpg_C*                     Rpg;                                               // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                Aim;                                               // 0x03A8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_rocket(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	struct FVector MakeAim();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_rocket_C">();
	}
	static class AProp_rocket_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_rocket_C>();
	}
};
static_assert(alignof(AProp_rocket_C) == 0x000008, "Wrong alignment on AProp_rocket_C");
static_assert(sizeof(AProp_rocket_C) == 0x0003B8, "Wrong size on AProp_rocket_C");
static_assert(offsetof(AProp_rocket_C, UberGraphFrame_Prop_rocket_C) == 0x000378, "Member 'AProp_rocket_C::UberGraphFrame_Prop_rocket_C' has a wrong offset!");
static_assert(offsetof(AProp_rocket_C, Eff_rocketSmoke) == 0x000380, "Member 'AProp_rocket_C::Eff_rocketSmoke' has a wrong offset!");
static_assert(offsetof(AProp_rocket_C, RocketFire_loop) == 0x000388, "Member 'AProp_rocket_C::RocketFire_loop' has a wrong offset!");
static_assert(offsetof(AProp_rocket_C, Lastloc) == 0x000390, "Member 'AProp_rocket_C::Lastloc' has a wrong offset!");
static_assert(offsetof(AProp_rocket_C, Rpg) == 0x0003A0, "Member 'AProp_rocket_C::Rpg' has a wrong offset!");
static_assert(offsetof(AProp_rocket_C, Aim) == 0x0003A8, "Member 'AProp_rocket_C::Aim' has a wrong offset!");

}
