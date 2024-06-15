#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: burningDebris

#include "Basic.hpp"

#include "burningDebris_classes.hpp"
#include "burningDebris_parameters.hpp"


namespace SDK
{

// Function burningDebris.burningDebris_C.ExecuteUbergraph_burningDebris
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AburningDebris_C::ExecuteUbergraph_burningDebris(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("burningDebris_C", "ExecuteUbergraph_burningDebris");

	Params::burningDebris_C_ExecuteUbergraph_burningDebris Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function burningDebris.burningDebris_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AburningDebris_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("burningDebris_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

