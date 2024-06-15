#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ui_arcade_invaders

#include "Basic.hpp"

#include "Ui_arcade_invaders_classes.hpp"
#include "Ui_arcade_invaders_parameters.hpp"


namespace SDK
{

// Function ui_arcade_invaders.ui_arcade_invaders_C.ExecuteUbergraph_ui_arcade_invaders
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUi_arcade_invaders_C::ExecuteUbergraph_ui_arcade_invaders(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ui_arcade_invaders_C", "ExecuteUbergraph_ui_arcade_invaders");

	Params::Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ui_arcade_invaders.ui_arcade_invaders_C.unfocused
// (Public, BlueprintCallable, BlueprintEvent)

void UUi_arcade_invaders_C::Unfocused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ui_arcade_invaders_C", "unfocused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ui_arcade_invaders.ui_arcade_invaders_C.applyColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUi_arcade_invaders_C::ApplyColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ui_arcade_invaders_C", "applyColor");

	Params::Ui_arcade_invaders_C_ApplyColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ui_arcade_invaders.ui_arcade_invaders_C.propRenderer_finishProps
// (Public, BlueprintCallable, BlueprintEvent)

void UUi_arcade_invaders_C::PropRenderer_finishProps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ui_arcade_invaders_C", "propRenderer_finishProps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ui_arcade_invaders.ui_arcade_invaders_C.gamemodeMakeKeys
// (Public, BlueprintCallable, BlueprintEvent)

void UUi_arcade_invaders_C::GamemodeMakeKeys()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ui_arcade_invaders_C", "gamemodeMakeKeys");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ui_arcade_invaders.ui_arcade_invaders_C.AnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Pressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUi_arcade_invaders_C::AnyKey(const struct FKey& Key, bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ui_arcade_invaders_C", "AnyKey");

	Params::Ui_arcade_invaders_C_AnyKey Parms{};

	Parms.Key = std::move(Key);
	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ui_arcade_invaders.ui_arcade_invaders_C.gamemodePreLoad
// (Public, BlueprintCallable, BlueprintEvent)

void UUi_arcade_invaders_C::GamemodePreLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ui_arcade_invaders_C", "gamemodePreLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ui_arcade_invaders.ui_arcade_invaders_C.settingsApplied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_settings                 Settings                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUi_arcade_invaders_C::SettingsApplied(const struct FStruct_settings& Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ui_arcade_invaders_C", "settingsApplied");

	Params::Ui_arcade_invaders_C_SettingsApplied Parms{};

	Parms.Settings = std::move(Settings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ui_arcade_invaders.ui_arcade_invaders_C.unfoc
// (Public, BlueprintCallable, BlueprintEvent)

void UUi_arcade_invaders_C::Unfoc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ui_arcade_invaders_C", "unfoc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ui_arcade_invaders.ui_arcade_invaders_C.stuffUpgraded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainGamemode_C*                  GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUi_arcade_invaders_C::StuffUpgraded(class AMainGamemode_C* GameMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ui_arcade_invaders_C", "stuffUpgraded");

	Params::Ui_arcade_invaders_C_StuffUpgraded Parms{};

	Parms.GameMode = GameMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ui_arcade_invaders.ui_arcade_invaders_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void UUi_arcade_invaders_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ui_arcade_invaders_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ui_arcade_invaders.ui_arcade_invaders_C.signalSaved
// (Public, BlueprintCallable, BlueprintEvent)

void UUi_arcade_invaders_C::SignalSaved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ui_arcade_invaders_C", "signalSaved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ui_arcade_invaders.ui_arcade_invaders_C.signalDeleted
// (Public, BlueprintCallable, BlueprintEvent)

void UUi_arcade_invaders_C::SignalDeleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ui_arcade_invaders_C", "signalDeleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ui_arcade_invaders.ui_arcade_invaders_C.dreamInv
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_save>             Invv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ADreamBase_C*                     Base                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUi_arcade_invaders_C::DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ui_arcade_invaders_C", "dreamInv");

	Params::Ui_arcade_invaders_C_DreamInv Parms{};

	Parms.Invv = std::move(Invv);

	UObject::ProcessEvent(Func, &Parms);

	Invv = std::move(Parms.Invv);

	if (Base != nullptr)
		*Base = Parms.Base;
}

}

