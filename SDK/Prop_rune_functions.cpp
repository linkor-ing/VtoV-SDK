#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_rune

#include "Basic.hpp"

#include "Prop_rune_classes.hpp"
#include "Prop_rune_parameters.hpp"


namespace SDK
{

// Function prop_rune.prop_rune_C.grabbed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void AProp_rune_C::Grabbed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rune_C", "grabbed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_rune.prop_rune_C.ExecuteUbergraph_prop_rune
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rune_C::ExecuteUbergraph_prop_rune(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rune_C", "ExecuteUbergraph_prop_rune");

	Params::Prop_rune_C_ExecuteUbergraph_prop_rune Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rune.prop_rune_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_Hit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rune_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rune_C", "actionOptionIndex");

	Params::Prop_rune_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Param_Hit = std::move(Param_Hit);
	Parms.Param_Index = Param_Index;
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rune.prop_rune_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Active                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_rune_C::SetActive(bool Param_Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rune_C", "SetActive");

	Params::Prop_rune_C_SetActive Parms{};

	Parms.Param_Active = Param_Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rune.prop_rune_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_rune_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rune_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

