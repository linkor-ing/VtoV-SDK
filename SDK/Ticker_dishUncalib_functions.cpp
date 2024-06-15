#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_dishUncalib

#include "Basic.hpp"

#include "Ticker_dishUncalib_classes.hpp"
#include "Ticker_dishUncalib_parameters.hpp"


namespace SDK
{

// Function ticker_dishUncalib.ticker_dishUncalib_C.ExecuteUbergraph_ticker_dishUncalib
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATicker_dishUncalib_C::ExecuteUbergraph_ticker_dishUncalib(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ticker_dishUncalib_C", "ExecuteUbergraph_ticker_dishUncalib");

	Params::Ticker_dishUncalib_C_ExecuteUbergraph_ticker_dishUncalib Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ticker_dishUncalib.ticker_dishUncalib_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATicker_dishUncalib_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ticker_dishUncalib_C", "ReceiveTick");

	Params::Ticker_dishUncalib_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}
