#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_funGun_doohickey

#include "Basic.hpp"

#include "Prop_funGun_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_funGun_doohickey.prop_funGun_doohickey_C
// 0x0000 (0x0448 - 0x0448)
class AProp_funGun_doohickey_C final : public AProp_funGun_C
{
public:
	void FireBulletPrimary();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_funGun_doohickey_C">();
	}
	static class AProp_funGun_doohickey_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_funGun_doohickey_C>();
	}
};
static_assert(alignof(AProp_funGun_doohickey_C) == 0x000008, "Wrong alignment on AProp_funGun_doohickey_C");
static_assert(sizeof(AProp_funGun_doohickey_C) == 0x000448, "Wrong size on AProp_funGun_doohickey_C");

}

