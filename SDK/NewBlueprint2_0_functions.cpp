#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint2_0

#include "Basic.hpp"

#include "NewBlueprint2_0_classes.hpp"
#include "NewBlueprint2_0_parameters.hpp"


namespace SDK
{

// Function NewBlueprint2.NewBlueprint2_C.push
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void NewBlueprint2_0::ANewBlueprint2_C::Push()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint2_C", "push");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint2.NewBlueprint2_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void NewBlueprint2_0::ANewBlueprint2_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint2_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint2.NewBlueprint2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void NewBlueprint2_0::ANewBlueprint2_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint2_C", "ReceiveTick");

	Params::NewBlueprint2_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NewBlueprint2.NewBlueprint2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void NewBlueprint2_0::ANewBlueprint2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint2_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint2.NewBlueprint2_C.ExecuteUbergraph_NewBlueprint2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void NewBlueprint2_0::ANewBlueprint2_C::ExecuteUbergraph_NewBlueprint2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint2_C", "ExecuteUbergraph_NewBlueprint2");

	Params::NewBlueprint2_C_ExecuteUbergraph_NewBlueprint2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

