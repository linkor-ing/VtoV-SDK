#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_egSpawner

#include "Basic.hpp"

#include "Ticker_egSpawner_classes.hpp"
#include "Ticker_egSpawner_parameters.hpp"


namespace SDK
{

// Function ticker_egSpawner.ticker_egSpawner_C.ExecuteUbergraph_ticker_egSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATicker_egSpawner_C::ExecuteUbergraph_ticker_egSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ticker_egSpawner_C", "ExecuteUbergraph_ticker_egSpawner");

	Params::Ticker_egSpawner_C_ExecuteUbergraph_ticker_egSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ticker_egSpawner.ticker_egSpawner_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATicker_egSpawner_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ticker_egSpawner_C", "ReceiveTick");

	Params::Ticker_egSpawner_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

