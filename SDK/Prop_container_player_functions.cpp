#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_container_player

#include "Basic.hpp"

#include "Prop_container_player_classes.hpp"
#include "Prop_container_player_parameters.hpp"


namespace SDK
{

// Function prop_container_player.prop_container_player_C.extract
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_container_player_C::Extract(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_container_player_C", "extract");

	Params::Prop_container_player_C_Extract Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_container_player.prop_container_player_C.ignoreSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IgnoreSave                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_container_player_C::IgnoreSave(bool* Param_IgnoreSave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_container_player_C", "ignoreSave");

	Params::Prop_container_player_C_IgnoreSave Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IgnoreSave != nullptr)
		*Param_IgnoreSave = Parms.Param_IgnoreSave;
}


// Function prop_container_player.prop_container_player_C.loadData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_container_player_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_container_player_C", "loadData");

	Params::Prop_container_player_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}

}

