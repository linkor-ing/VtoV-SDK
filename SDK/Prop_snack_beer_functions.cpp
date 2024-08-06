#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_snack_beer

#include "Basic.hpp"

#include "Prop_snack_beer_classes.hpp"
#include "Prop_snack_beer_parameters.hpp"


namespace SDK
{

// Function prop_snack_beer.prop_snack_beer_C.ExecuteUbergraph_prop_snack_beer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_snack_beer_C::ExecuteUbergraph_prop_snack_beer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_snack_beer_C", "ExecuteUbergraph_prop_snack_beer");

	Params::Prop_snack_beer_C_ExecuteUbergraph_prop_snack_beer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_snack_beer.prop_snack_beer_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_snack_beer_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_snack_beer_C", "ReceiveTick");

	Params::Prop_snack_beer_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_snack_beer.prop_snack_beer_C.eat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    P                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bypassNoHunger                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_snack_beer_C::Eat(class AMainPlayer_C* P, bool bypassNoHunger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_snack_beer_C", "eat");

	Params::Prop_snack_beer_C_Eat Parms{};

	Parms.P = P;
	Parms.bypassNoHunger = bypassNoHunger;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_snack_beer.prop_snack_beer_C.openBottle
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_snack_beer_C::OpenBottle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_snack_beer_C", "openBottle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_snack_beer.prop_snack_beer_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_Hit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_snack_beer_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_snack_beer_C", "actionOptionIndex");

	Params::Prop_snack_beer_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Param_Hit = std::move(Param_Hit);
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_snack_beer.prop_snack_beer_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_snack_beer_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_snack_beer_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_snack_beer.prop_snack_beer_C.playerHandUse_RMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_snack_beer_C::PlayerHandUse_RMB(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_snack_beer_C", "playerHandUse_RMB");

	Params::Prop_snack_beer_C_PlayerHandUse_RMB Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_snack_beer.prop_snack_beer_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_snack_beer_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_snack_beer_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_snack_beer.prop_snack_beer_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_snack_beer_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_snack_beer_C", "loadData");

	Params::Prop_snack_beer_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function prop_snack_beer.prop_snack_beer_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AProp_snack_beer_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_snack_beer_C", "getData");

	Params::Prop_snack_beer_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}

}
