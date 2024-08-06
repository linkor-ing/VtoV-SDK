#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_piston

#include "Basic.hpp"

#include "Prop_wireComponent_piston_classes.hpp"
#include "Prop_wireComponent_piston_parameters.hpp"


namespace SDK
{

// Function prop_wireComponent_piston.prop_wireComponent_piston_C.ExecuteUbergraph_prop_wireComponent_piston
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_piston_C::ExecuteUbergraph_prop_wireComponent_piston(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_piston_C", "ExecuteUbergraph_prop_wireComponent_piston");

	Params::Prop_wireComponent_piston_C_ExecuteUbergraph_prop_wireComponent_piston Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_piston.prop_wireComponent_piston_C.Tick
// (BlueprintCallable, BlueprintEvent)

void AProp_wireComponent_piston_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_piston_C", "Tick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_wireComponent_piston.prop_wireComponent_piston_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_piston_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_piston_C", "ReceiveTick");

	Params::Prop_wireComponent_piston_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_piston.prop_wireComponent_piston_C.wirePass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_piston_C::WirePass(class AWire_C* Wire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_piston_C", "wirePass");

	Params::Prop_wireComponent_piston_C_WirePass Parms{};

	Parms.Wire = Wire;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_piston.prop_wireComponent_piston_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_wireComponent_piston_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_piston_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

