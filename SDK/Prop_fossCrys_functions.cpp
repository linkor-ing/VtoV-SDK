#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_fossCrys

#include "Basic.hpp"

#include "Prop_fossCrys_classes.hpp"
#include "Prop_fossCrys_parameters.hpp"


namespace SDK
{

// Function prop_fossCrys.prop_fossCrys_C.ExecuteUbergraph_prop_fossCrys
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_fossCrys_C::ExecuteUbergraph_prop_fossCrys(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fossCrys_C", "ExecuteUbergraph_prop_fossCrys");

	Params::Prop_fossCrys_C_ExecuteUbergraph_prop_fossCrys Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_fossCrys.prop_fossCrys_C.playerHandUse_RMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_fossCrys_C::PlayerHandUse_RMB(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fossCrys_C", "playerHandUse_RMB");

	Params::Prop_fossCrys_C_PlayerHandUse_RMB Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}

}
