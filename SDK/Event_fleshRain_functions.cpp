#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Event_fleshRain

#include "Basic.hpp"

#include "Event_fleshRain_classes.hpp"
#include "Event_fleshRain_parameters.hpp"


namespace SDK
{

// Function event_fleshRain.event_fleshRain_C.ExecuteUbergraph_event_fleshRain
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEvent_fleshRain_C::ExecuteUbergraph_event_fleshRain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("event_fleshRain_C", "ExecuteUbergraph_event_fleshRain");

	Params::Event_fleshRain_C_ExecuteUbergraph_event_fleshRain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function event_fleshRain.event_fleshRain_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEvent_fleshRain_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("event_fleshRain_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

