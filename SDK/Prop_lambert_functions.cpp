#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_lambert

#include "Basic.hpp"

#include "Prop_lambert_classes.hpp"
#include "Prop_lambert_parameters.hpp"


namespace SDK
{

// Function prop_lambert.prop_lambert_C.ExecuteUbergraph_prop_lambert
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_lambert_C::ExecuteUbergraph_prop_lambert(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_lambert_C", "ExecuteUbergraph_prop_lambert");

	Params::Prop_lambert_C_ExecuteUbergraph_prop_lambert Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_lambert.prop_lambert_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AProp_lambert_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_lambert_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_lambert.prop_lambert_C.healing
// (BlueprintCallable, BlueprintEvent)

void AProp_lambert_C::Healing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_lambert_C", "healing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_lambert.prop_lambert_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_lambert_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_lambert_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_lambert.prop_lambert_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_lambert_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_lambert_C", "ReceiveTick");

	Params::Prop_lambert_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

