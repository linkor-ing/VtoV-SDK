#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_dynamite

#include "Basic.hpp"

#include "Prop_wireComponent_dynamite_classes.hpp"
#include "Prop_wireComponent_dynamite_parameters.hpp"


namespace SDK
{

// Function prop_wireComponent_dynamite.prop_wireComponent_dynamite_C.ExecuteUbergraph_prop_wireComponent_dynamite
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_dynamite_C::ExecuteUbergraph_prop_wireComponent_dynamite(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_dynamite_C", "ExecuteUbergraph_prop_wireComponent_dynamite");

	Params::Prop_wireComponent_dynamite_C_ExecuteUbergraph_prop_wireComponent_dynamite Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_dynamite.prop_wireComponent_dynamite_C.wirePass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_dynamite_C::WirePass(class AWire_C* Wire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_dynamite_C", "wirePass");

	Params::Prop_wireComponent_dynamite_C_WirePass Parms{};

	Parms.Wire = Wire;

	UObject::ProcessEvent(Func, &Parms);
}

}
