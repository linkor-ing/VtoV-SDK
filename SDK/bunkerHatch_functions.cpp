#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bunkerHatch

#include "Basic.hpp"

#include "bunkerHatch_classes.hpp"
#include "bunkerHatch_parameters.hpp"


namespace SDK
{

// Function bunkerHatch.bunkerHatch_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AbunkerHatch_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bunkerHatch_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function bunkerHatch.bunkerHatch_C.ExecuteUbergraph_bunkerHatch
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AbunkerHatch_C::ExecuteUbergraph_bunkerHatch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("bunkerHatch_C", "ExecuteUbergraph_bunkerHatch");

	Params::bunkerHatch_C_ExecuteUbergraph_bunkerHatch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
