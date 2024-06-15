#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_bulb

#include "Basic.hpp"

#include "Prop_wireComponent_bulb_classes.hpp"
#include "Prop_wireComponent_bulb_parameters.hpp"


namespace SDK
{

// Function prop_wireComponent_bulb.prop_wireComponent_bulb_C.ExecuteUbergraph_prop_wireComponent_bulb
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_bulb_C::ExecuteUbergraph_prop_wireComponent_bulb(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_bulb_C", "ExecuteUbergraph_prop_wireComponent_bulb");

	Params::Prop_wireComponent_bulb_C_ExecuteUbergraph_prop_wireComponent_bulb Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_bulb.prop_wireComponent_bulb_C.wirePass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_bulb_C::WirePass(class AWire_C* Wire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_bulb_C", "wirePass");

	Params::Prop_wireComponent_bulb_C_WirePass Parms{};

	Parms.Wire = Wire;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_bulb.prop_wireComponent_bulb_C.col
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_wireComponent_bulb_C::Col()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_bulb_C", "col");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_wireComponent_bulb.prop_wireComponent_bulb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_wireComponent_bulb_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_bulb_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

