#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_gascan_funny

#include "Basic.hpp"

#include "Prop_gascan_funny_classes.hpp"
#include "Prop_gascan_funny_parameters.hpp"


namespace SDK
{

// Function prop_gascan_funny.prop_gascan_funny_C.ExecuteUbergraph_prop_gascan_funny
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_gascan_funny_C::ExecuteUbergraph_prop_gascan_funny(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_gascan_funny_C", "ExecuteUbergraph_prop_gascan_funny");

	Params::Prop_gascan_funny_C_ExecuteUbergraph_prop_gascan_funny Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_gascan_funny.prop_gascan_funny_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_gascan_funny_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_gascan_funny_C", "ReceiveTick");

	Params::Prop_gascan_funny_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

