#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_carmap

#include "Basic.hpp"

#include "Umg_carmap_classes.hpp"
#include "Umg_carmap_parameters.hpp"


namespace SDK
{

// Function umg_carmap.umg_carmap_C.ExecuteUbergraph_umg_carmap
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_carmap_C::ExecuteUbergraph_umg_carmap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "ExecuteUbergraph_umg_carmap");

	Params::Umg_carmap_C_ExecuteUbergraph_umg_carmap Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_carmap.umg_carmap_C.settingsApplied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_settings                 Settings                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_carmap_C::SettingsApplied(const struct FStruct_settings& Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "settingsApplied");

	Params::Umg_carmap_C_SettingsApplied Parms{};

	Parms.Settings = std::move(Settings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_carmap.umg_carmap_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_carmap_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "Tick");

	Params::Umg_carmap_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_carmap.umg_carmap_C.applyColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_carmap_C::ApplyColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "applyColor");

	Params::Umg_carmap_C_ApplyColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_carmap.umg_carmap_C.propRenderer_finishProps
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_carmap_C::PropRenderer_finishProps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "propRenderer_finishProps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_carmap.umg_carmap_C.gamemodeMakeKeys
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_carmap_C::GamemodeMakeKeys()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "gamemodeMakeKeys");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_carmap.umg_carmap_C.AnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Pressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUmg_carmap_C::AnyKey(const struct FKey& Key, bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "AnyKey");

	Params::Umg_carmap_C_AnyKey Parms{};

	Parms.Key = std::move(Key);
	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_carmap.umg_carmap_C.gamemodePreLoad
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_carmap_C::GamemodePreLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "gamemodePreLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_carmap.umg_carmap_C.unfocused
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_carmap_C::Unfocused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "unfocused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_carmap.umg_carmap_C.unfoc
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_carmap_C::Unfoc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "unfoc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_carmap.umg_carmap_C.stuffUpgraded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainGamemode_C*                  GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_carmap_C::StuffUpgraded(class AMainGamemode_C* GameMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "stuffUpgraded");

	Params::Umg_carmap_C_StuffUpgraded Parms{};

	Parms.GameMode = GameMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_carmap.umg_carmap_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_carmap_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_carmap.umg_carmap_C.signalSaved
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_carmap_C::SignalSaved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "signalSaved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_carmap.umg_carmap_C.signalDeleted
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_carmap_C::SignalDeleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "signalDeleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_carmap.umg_carmap_C.gen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AProp_beacon_C*>           Param_beacons                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUmg_carmap_C::Gen(TArray<class AProp_beacon_C*>& Param_beacons)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "gen");

	Params::Umg_carmap_C_Gen Parms{};

	Parms.Param_beacons = std::move(Param_beacons);

	UObject::ProcessEvent(Func, &Parms);

	Param_beacons = std::move(Parms.Param_beacons);
}


// Function umg_carmap.umg_carmap_C.dreamInv
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_save>             Invv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ADreamBase_C*                     Base                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_carmap_C::DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_carmap_C", "dreamInv");

	Params::Umg_carmap_C_DreamInv Parms{};

	Parms.Invv = std::move(Invv);

	UObject::ProcessEvent(Func, &Parms);

	Invv = std::move(Parms.Invv);

	if (Base != nullptr)
		*Base = Parms.Base;
}

}
