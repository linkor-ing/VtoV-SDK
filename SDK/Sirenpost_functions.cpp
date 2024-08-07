#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sirenpost

#include "Basic.hpp"

#include "Sirenpost_classes.hpp"
#include "Sirenpost_parameters.hpp"


namespace SDK
{

// Function sirenpost.sirenpost_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASirenpost_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sirenpost_C", "ReceiveTick");

	Params::Sirenpost_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function sirenpost.sirenpost_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASirenpost_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sirenpost_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sirenpost.sirenpost_C.ExecuteUbergraph_sirenpost
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASirenpost_C::ExecuteUbergraph_sirenpost(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sirenpost_C", "ExecuteUbergraph_sirenpost");

	Params::Sirenpost_C_ExecuteUbergraph_sirenpost Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

