#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_rocket

#include "Basic.hpp"

#include "Prop_rocket_classes.hpp"
#include "Prop_rocket_parameters.hpp"


namespace SDK
{

// Function prop_rocket.prop_rocket_C.ExecuteUbergraph_prop_rocket
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rocket_C::ExecuteUbergraph_prop_rocket(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rocket_C", "ExecuteUbergraph_prop_rocket");

	Params::Prop_rocket_C_ExecuteUbergraph_prop_rocket Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rocket.prop_rocket_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rocket_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rocket_C", "ReceiveTick");

	Params::Prop_rocket_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rocket.prop_rocket_C.makeAim
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AProp_rocket_C::MakeAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rocket_C", "makeAim");

	Params::Prop_rocket_C_MakeAim Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function prop_rocket.prop_rocket_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_rocket_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rocket_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

