#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_funGun_propgun

#include "Basic.hpp"

#include "Prop_funGun_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_funGun_propgun.prop_funGun_propgun_C
// 0x0008 (0x0450 - 0x0448)
class AProp_funGun_propgun_C final : public AProp_funGun_C
{
public:
	class FName                                   Prop;                                              // 0x0444(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void FireBulletPrimary();
	void FireBulletSecondary();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_funGun_propgun_C">();
	}
	static class AProp_funGun_propgun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_funGun_propgun_C>();
	}
};
static_assert(alignof(AProp_funGun_propgun_C) == 0x000008, "Wrong alignment on AProp_funGun_propgun_C");
static_assert(sizeof(AProp_funGun_propgun_C) == 0x000450, "Wrong size on AProp_funGun_propgun_C");
static_assert(offsetof(AProp_funGun_propgun_C, Prop) == 0x000444, "Member 'AProp_funGun_propgun_C::Prop' has a wrong offset!");

}

