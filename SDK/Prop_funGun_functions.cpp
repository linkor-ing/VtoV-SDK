#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_funGun

#include "Basic.hpp"

#include "Prop_funGun_classes.hpp"
#include "Prop_funGun_parameters.hpp"


namespace SDK
{

// Function prop_funGun.prop_funGun_C.ExecuteUbergraph_prop_funGun
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_funGun_C::ExecuteUbergraph_prop_funGun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_C", "ExecuteUbergraph_prop_funGun");

	Params::Prop_funGun_C_ExecuteUbergraph_prop_funGun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_funGun.prop_funGun_C.fireSecondary
// (BlueprintCallable, BlueprintEvent)

void AProp_funGun_C::FireSecondary()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_C", "fireSecondary");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_funGun.prop_funGun_C.dropCase
// (BlueprintCallable, BlueprintEvent)

void AProp_funGun_C::DropCase()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_C", "dropCase");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_funGun.prop_funGun_C.firePrimary
// (BlueprintCallable, BlueprintEvent)

void AProp_funGun_C::FirePrimary()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_C", "firePrimary");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_funGun.prop_funGun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_funGun_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_C", "ReceiveTick");

	Params::Prop_funGun_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_funGun.prop_funGun_C.updateMag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_funGun_C::UpdateMag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_C", "updateMag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_funGun.prop_funGun_C.fireBulletPrimary
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_funGun_C::FireBulletPrimary()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_C", "fireBulletPrimary");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_funGun.prop_funGun_C.fireBulletSecondary
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_funGun_C::FireBulletSecondary()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_C", "fireBulletSecondary");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_funGun.prop_funGun_C.checkActorTick
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_funGun_C::CheckActorTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_C", "checkActorTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_funGun.prop_funGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_funGun_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_funGun.prop_funGun_C.playerHandUse_RMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_funGun_C::PlayerHandUse_RMB(class AMainPlayer_C* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_C", "playerHandUse_RMB");

	Params::Prop_funGun_C_PlayerHandUse_RMB Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_funGun.prop_funGun_C.playerHandRelease_LMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_funGun_C::PlayerHandRelease_LMB(class AMainPlayer_C* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_C", "playerHandRelease_LMB");

	Params::Prop_funGun_C_PlayerHandRelease_LMB Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_funGun.prop_funGun_C.playerHandUse_LMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_funGun_C::PlayerHandUse_LMB(class AMainPlayer_C* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_C", "playerHandUse_LMB");

	Params::Prop_funGun_C_PlayerHandUse_LMB Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_funGun.prop_funGun_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_funGun_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_funGun_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

