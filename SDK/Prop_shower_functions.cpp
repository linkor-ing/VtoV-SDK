#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_shower

#include "Basic.hpp"

#include "Prop_shower_classes.hpp"
#include "Prop_shower_parameters.hpp"


namespace SDK
{

// Function prop_shower.prop_shower_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AProp_shower_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_shower_C", "getData");

	Params::Prop_shower_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function prop_shower.prop_shower_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_shower_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_shower_C", "loadData");

	Params::Prop_shower_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function prop_shower.prop_shower_C.gatherDataFromKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Gather                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_shower_C::GatherDataFromKey(bool* Gather)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_shower_C", "gatherDataFromKey");

	Params::Prop_shower_C_GatherDataFromKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Gather != nullptr)
		*Gather = Parms.Gather;
}


// Function prop_shower.prop_shower_C.upd
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_shower_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_shower_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_shower.prop_shower_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_shower_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_shower_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_shower.prop_shower_C.cleanSponge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Clean                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_shower_C::CleanSponge(float Param_Clean, class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_shower_C", "cleanSponge");

	Params::Prop_shower_C_CleanSponge Parms{};

	Parms.Param_Clean = Param_Clean;
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_shower.prop_shower_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_shower_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_shower_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_shower.prop_shower_C.ExecuteUbergraph_prop_shower
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_shower_C::ExecuteUbergraph_prop_shower(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_shower_C", "ExecuteUbergraph_prop_shower");

	Params::Prop_shower_C_ExecuteUbergraph_prop_shower Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

