#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: IndoorAmbienceMaster

#include "Basic.hpp"

#include "IndoorAmbienceMaster_classes.hpp"
#include "IndoorAmbienceMaster_parameters.hpp"


namespace SDK
{

// Function indoorAmbienceMaster.indoorAmbienceMaster_C.ExecuteUbergraph_indoorAmbienceMaster
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIndoorAmbienceMaster_C::ExecuteUbergraph_indoorAmbienceMaster(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("indoorAmbienceMaster_C", "ExecuteUbergraph_indoorAmbienceMaster");

	Params::IndoorAmbienceMaster_C_ExecuteUbergraph_indoorAmbienceMaster Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function indoorAmbienceMaster.indoorAmbienceMaster_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AIndoorAmbienceMaster_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("indoorAmbienceMaster_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function indoorAmbienceMaster.indoorAmbienceMaster_C.Activate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Activate                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AIndoorAmbienceMaster_C::Activate(bool Param_Activate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("indoorAmbienceMaster_C", "Activate");

	Params::IndoorAmbienceMaster_C_Activate Parms{};

	Parms.Param_Activate = Param_Activate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function indoorAmbienceMaster.indoorAmbienceMaster_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AIndoorAmbienceMaster_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("indoorAmbienceMaster_C", "ReceiveTick");

	Params::IndoorAmbienceMaster_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function indoorAmbienceMaster.indoorAmbienceMaster_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AIndoorAmbienceMaster_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("indoorAmbienceMaster_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function indoorAmbienceMaster.indoorAmbienceMaster_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AIndoorAmbienceMaster_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("indoorAmbienceMaster_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function indoorAmbienceMaster.indoorAmbienceMaster_C.calc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AIndoorAmbienceMaster_C::Calc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("indoorAmbienceMaster_C", "calc");

	UObject::ProcessEvent(Func, nullptr);
}

}

