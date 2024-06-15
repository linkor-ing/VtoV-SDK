#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_mirror2

#include "Basic.hpp"

#include "Prop_mirror2_classes.hpp"
#include "Prop_mirror2_parameters.hpp"


namespace SDK
{

// Function prop_mirror2.prop_mirror2_C.ExecuteUbergraph_prop_mirror2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_mirror2_C::ExecuteUbergraph_prop_mirror2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_mirror2_C", "ExecuteUbergraph_prop_mirror2");

	Params::Prop_mirror2_C_ExecuteUbergraph_prop_mirror2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_mirror2.prop_mirror2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_mirror2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_mirror2_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

