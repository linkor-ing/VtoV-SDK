#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_craftTest

#include "Basic.hpp"

#include "Prop_craftTest_classes.hpp"
#include "Prop_craftTest_parameters.hpp"


namespace SDK
{

// Function prop_craftTest.prop_craftTest_C.ExecuteUbergraph_prop_craftTest
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_craftTest_C::ExecuteUbergraph_prop_craftTest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_craftTest_C", "ExecuteUbergraph_prop_craftTest");

	Params::Prop_craftTest_C_ExecuteUbergraph_prop_craftTest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_craftTest.prop_craftTest_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_craftTest_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_craftTest_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

