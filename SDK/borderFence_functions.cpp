#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: borderFence

#include "Basic.hpp"

#include "borderFence_classes.hpp"
#include "borderFence_parameters.hpp"


namespace SDK
{

// Function borderFence.borderFence_C.Build
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AborderFence_C::Build()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("borderFence_C", "Build");

	UObject::ProcessEvent(Func, nullptr);
}


// Function borderFence.borderFence_C.prepare
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AborderFence_C::Prepare()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("borderFence_C", "prepare");

	UObject::ProcessEvent(Func, nullptr);
}


// Function borderFence.borderFence_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AborderFence_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("borderFence_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function borderFence.borderFence_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AborderFence_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("borderFence_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function borderFence.borderFence_C.ExecuteUbergraph_borderFence
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AborderFence_C::ExecuteUbergraph_borderFence(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("borderFence_C", "ExecuteUbergraph_borderFence");

	Params::borderFence_C_ExecuteUbergraph_borderFence Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

