#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fire

#include "Basic.hpp"

#include "Fire_classes.hpp"
#include "Fire_parameters.hpp"


namespace SDK
{

// Function fire.fire_C.ExecuteUbergraph_fire
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFire_C::ExecuteUbergraph_fire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("fire_C", "ExecuteUbergraph_fire");

	Params::Fire_C_ExecuteUbergraph_fire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function fire.fire_C.extinguished
// (BlueprintCallable, BlueprintEvent)

void AFire_C::Extinguished()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("fire_C", "extinguished");

	UObject::ProcessEvent(Func, nullptr);
}


// Function fire.fire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFire_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("fire_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

