#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_rifleComet

#include "Basic.hpp"

#include "Prop_rifleComet_classes.hpp"
#include "Prop_rifleComet_parameters.hpp"


namespace SDK
{

// Function prop_rifleComet.prop_rifleComet_C.ExecuteUbergraph_prop_rifleComet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rifleComet_C::ExecuteUbergraph_prop_rifleComet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rifleComet_C", "ExecuteUbergraph_prop_rifleComet");

	Params::Prop_rifleComet_C_ExecuteUbergraph_prop_rifleComet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rifleComet.prop_rifleComet_C.playerHandUse_LMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rifleComet_C::PlayerHandUse_LMB(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rifleComet_C", "playerHandUse_LMB");

	Params::Prop_rifleComet_C_PlayerHandUse_LMB Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}

}

