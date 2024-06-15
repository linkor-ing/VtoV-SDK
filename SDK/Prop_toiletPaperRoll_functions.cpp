#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_toiletPaperRoll

#include "Basic.hpp"

#include "Prop_toiletPaperRoll_classes.hpp"
#include "Prop_toiletPaperRoll_parameters.hpp"


namespace SDK
{

// Function prop_toiletPaperRoll.prop_toiletPaperRoll_C.ExecuteUbergraph_prop_toiletPaperRoll
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_toiletPaperRoll_C::ExecuteUbergraph_prop_toiletPaperRoll(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_toiletPaperRoll_C", "ExecuteUbergraph_prop_toiletPaperRoll");

	Params::Prop_toiletPaperRoll_C_ExecuteUbergraph_prop_toiletPaperRoll Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_toiletPaperRoll.prop_toiletPaperRoll_C.player_use
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_Hit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProp_toiletPaperRoll_C::Player_use(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_toiletPaperRoll_C", "player_use");

	Params::Prop_toiletPaperRoll_C_Player_use Parms{};

	Parms.Player = Player;
	Parms.Param_Hit = std::move(Param_Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_toiletPaperRoll.prop_toiletPaperRoll_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_toiletPaperRoll_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_toiletPaperRoll_C", "loadData");

	Params::Prop_toiletPaperRoll_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function prop_toiletPaperRoll.prop_toiletPaperRoll_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AProp_toiletPaperRoll_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_toiletPaperRoll_C", "getData");

	Params::Prop_toiletPaperRoll_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}

}
