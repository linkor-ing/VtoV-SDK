#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_funGun_auto

#include "Basic.hpp"

#include "Prop_funGun_auto_classes.hpp"
#include "Prop_funGun_auto_parameters.hpp"


namespace SDK
{

// Function prop_funGun_auto.prop_funGun_auto_C.fireBulletSecondary
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_funGun_auto_C::FireBulletSecondary()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_auto_C", "fireBulletSecondary");

	UObject::ProcessEvent(Func, nullptr);
}

}
