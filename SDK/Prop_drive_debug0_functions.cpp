#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_drive_debug0

#include "Basic.hpp"

#include "Prop_drive_debug0_classes.hpp"
#include "Prop_drive_debug0_parameters.hpp"


namespace SDK
{

// Function prop_drive_debug0.prop_drive_debug0_C.ExecuteUbergraph_prop_drive_debug0
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_drive_debug0_C::ExecuteUbergraph_prop_drive_debug0(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_drive_debug0_C", "ExecuteUbergraph_prop_drive_debug0");

	Params::Prop_drive_debug0_C_ExecuteUbergraph_prop_drive_debug0 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_drive_debug0.prop_drive_debug0_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_drive_debug0_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_drive_debug0_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

