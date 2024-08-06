#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_wispSpawner

#include "Basic.hpp"

#include "Ticker_wispSpawner_classes.hpp"
#include "Ticker_wispSpawner_parameters.hpp"


namespace SDK
{

// Function ticker_wispSpawner.ticker_wispSpawner_C.ExecuteUbergraph_ticker_wispSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATicker_wispSpawner_C::ExecuteUbergraph_ticker_wispSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ticker_wispSpawner_C", "ExecuteUbergraph_ticker_wispSpawner");

	Params::Ticker_wispSpawner_C_ExecuteUbergraph_ticker_wispSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ticker_wispSpawner.ticker_wispSpawner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATicker_wispSpawner_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ticker_wispSpawner_C", "ReceiveTick");

	Params::Ticker_wispSpawner_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

