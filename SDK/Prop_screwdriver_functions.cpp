#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_screwdriver

#include "Basic.hpp"

#include "Prop_screwdriver_classes.hpp"
#include "Prop_screwdriver_parameters.hpp"


namespace SDK
{

// Function prop_screwdriver.prop_screwdriver_C.ExecuteUbergraph_prop_screwdriver
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_screwdriver_C::ExecuteUbergraph_prop_screwdriver(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_screwdriver_C", "ExecuteUbergraph_prop_screwdriver");

	Params::Prop_screwdriver_C_ExecuteUbergraph_prop_screwdriver Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_screwdriver.prop_screwdriver_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_screwdriver_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_screwdriver_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

