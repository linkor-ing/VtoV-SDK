#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_greenfireStone

#include "Basic.hpp"

#include "Prop_greenfireStone_classes.hpp"
#include "Prop_greenfireStone_parameters.hpp"


namespace SDK
{

// Function prop_greenfireStone.prop_greenfireStone_C.ExecuteUbergraph_prop_greenfireStone
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_greenfireStone_C::ExecuteUbergraph_prop_greenfireStone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_greenfireStone_C", "ExecuteUbergraph_prop_greenfireStone");

	Params::Prop_greenfireStone_C_ExecuteUbergraph_prop_greenfireStone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_greenfireStone.prop_greenfireStone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_greenfireStone_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_greenfireStone_C", "ReceiveTick");

	Params::Prop_greenfireStone_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

