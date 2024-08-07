#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint

#include "Basic.hpp"

#include "NewBlueprint_classes.hpp"
#include "NewBlueprint_parameters.hpp"


namespace SDK
{

// Function NewBlueprint.NewBlueprint_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void NewBlueprint::ANewBlueprint_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint.NewBlueprint_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void NewBlueprint::ANewBlueprint_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint.NewBlueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void NewBlueprint::ANewBlueprint_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NewBlueprint.NewBlueprint_C.ExecuteUbergraph_NewBlueprint
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void NewBlueprint::ANewBlueprint_C::ExecuteUbergraph_NewBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NewBlueprint_C", "ExecuteUbergraph_NewBlueprint");

	Params::NewBlueprint_C_ExecuteUbergraph_NewBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

