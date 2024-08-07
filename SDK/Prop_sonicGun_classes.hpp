#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_sonicGun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_sonicGun.prop_sonicGun_C
// 0x0028 (0x0390 - 0x0368)
class AProp_sonicGun_C final : public AProp_C
{
public:
	uint8                                         Pad_37D2[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_sonicGun_C;                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                             Snd;                                               // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pch;                                               // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PlayerForce;                                       // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Radius;                                            // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Damage;                                            // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ForceMultiply;                                     // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_sonicGun(int32 EntryPoint);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_sonicGun_C">();
	}
	static class AProp_sonicGun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_sonicGun_C>();
	}
};
static_assert(alignof(AProp_sonicGun_C) == 0x000008, "Wrong alignment on AProp_sonicGun_C");
static_assert(sizeof(AProp_sonicGun_C) == 0x000390, "Wrong size on AProp_sonicGun_C");
static_assert(offsetof(AProp_sonicGun_C, UberGraphFrame_Prop_sonicGun_C) == 0x000368, "Member 'AProp_sonicGun_C::UberGraphFrame_Prop_sonicGun_C' has a wrong offset!");
static_assert(offsetof(AProp_sonicGun_C, Snd) == 0x000370, "Member 'AProp_sonicGun_C::Snd' has a wrong offset!");
static_assert(offsetof(AProp_sonicGun_C, Pch) == 0x000378, "Member 'AProp_sonicGun_C::Pch' has a wrong offset!");
static_assert(offsetof(AProp_sonicGun_C, PlayerForce) == 0x00037C, "Member 'AProp_sonicGun_C::PlayerForce' has a wrong offset!");
static_assert(offsetof(AProp_sonicGun_C, Radius) == 0x000380, "Member 'AProp_sonicGun_C::Radius' has a wrong offset!");
static_assert(offsetof(AProp_sonicGun_C, Damage) == 0x000384, "Member 'AProp_sonicGun_C::Damage' has a wrong offset!");
static_assert(offsetof(AProp_sonicGun_C, ForceMultiply) == 0x000388, "Member 'AProp_sonicGun_C::ForceMultiply' has a wrong offset!");

}

