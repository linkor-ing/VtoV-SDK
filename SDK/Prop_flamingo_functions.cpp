#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_flamingo

#include "Basic.hpp"

#include "Prop_flamingo_classes.hpp"
#include "Prop_flamingo_parameters.hpp"


namespace SDK
{

// Function prop_flamingo.prop_flamingo_C.ExecuteUbergraph_prop_flamingo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_flamingo_C::ExecuteUbergraph_prop_flamingo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_flamingo_C", "ExecuteUbergraph_prop_flamingo");

	Params::Prop_flamingo_C_ExecuteUbergraph_prop_flamingo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_flamingo.prop_flamingo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_flamingo_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_flamingo_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

