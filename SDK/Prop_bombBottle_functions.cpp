#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_bombBottle

#include "Basic.hpp"

#include "Prop_bombBottle_classes.hpp"
#include "Prop_bombBottle_parameters.hpp"


namespace SDK
{

// Function prop_bombBottle.prop_bombBottle_C.ExecuteUbergraph_prop_bombBottle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_bombBottle_C::ExecuteUbergraph_prop_bombBottle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_bombBottle_C", "ExecuteUbergraph_prop_bombBottle");

	Params::Prop_bombBottle_C_ExecuteUbergraph_prop_bombBottle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_bombBottle.prop_bombBottle_C.broken
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_bombBottle_C::broken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_bombBottle_C", "broken");

	UObject::ProcessEvent(Func, nullptr);
}

}

