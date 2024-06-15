#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RozitBorg

#include "Basic.hpp"

#include "RozitBorg_classes.hpp"
#include "RozitBorg_parameters.hpp"


namespace SDK
{

// Function rozitBorg.rozitBorg_C.ExecuteUbergraph_rozitBorg
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARozitBorg_C::ExecuteUbergraph_rozitBorg(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("rozitBorg_C", "ExecuteUbergraph_rozitBorg");

	Params::RozitBorg_C_ExecuteUbergraph_rozitBorg Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function rozitBorg.rozitBorg_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARozitBorg_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("rozitBorg_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function rozitBorg.rozitBorg_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARozitBorg_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("rozitBorg_C", "ReceiveTick");

	Params::RozitBorg_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

