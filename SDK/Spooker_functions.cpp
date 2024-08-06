#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Spooker

#include "Basic.hpp"

#include "Spooker_classes.hpp"
#include "Spooker_parameters.hpp"


namespace SDK
{

// Function spooker.spooker_C.Launch
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ASpooker_C::Launch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("spooker_C", "Launch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function spooker.spooker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASpooker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("spooker_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function spooker.spooker_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpooker_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("spooker_C", "ReceiveTick");

	Params::Spooker_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function spooker.spooker_C.ExecuteUbergraph_spooker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpooker_C::ExecuteUbergraph_spooker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("spooker_C", "ExecuteUbergraph_spooker");

	Params::Spooker_C_ExecuteUbergraph_spooker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

