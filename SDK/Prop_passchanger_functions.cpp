#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_passchanger

#include "Basic.hpp"

#include "Prop_passchanger_classes.hpp"
#include "Prop_passchanger_parameters.hpp"


namespace SDK
{

// Function prop_passchanger.prop_passchanger_C.ExecuteUbergraph_prop_passchanger
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_passchanger_C::ExecuteUbergraph_prop_passchanger(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_passchanger_C", "ExecuteUbergraph_prop_passchanger");

	Params::Prop_passchanger_C_ExecuteUbergraph_prop_passchanger Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_passchanger.prop_passchanger_C.playerHandUse_LMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_passchanger_C::PlayerHandUse_LMB(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_passchanger_C", "playerHandUse_LMB");

	Params::Prop_passchanger_C_PlayerHandUse_LMB Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}

}

