#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint5

#include "Basic.hpp"

#include "NewBlueprint5_classes.hpp"
#include "NewBlueprint5_parameters.hpp"


namespace SDK
{

// Function NewBlueprint5.NewBlueprint5_C.ExecuteUbergraph_NewBlueprint5
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void NewBlueprint5::ANewBlueprint5_C::ExecuteUbergraph_NewBlueprint5(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint5_C", "ExecuteUbergraph_NewBlueprint5");

	Params::NewBlueprint5_C_ExecuteUbergraph_NewBlueprint5 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewBlueprint5.NewBlueprint5_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void NewBlueprint5::ANewBlueprint5_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint5_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint5.NewBlueprint5_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void NewBlueprint5::ANewBlueprint5_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint5_C", "ReceiveTick");

	Params::NewBlueprint5_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewBlueprint5.NewBlueprint5_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void NewBlueprint5::ANewBlueprint5_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint5_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

