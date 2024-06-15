#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_piezo

#include "Basic.hpp"

#include "Prop_wireComponent_piezo_classes.hpp"
#include "Prop_wireComponent_piezo_parameters.hpp"


namespace SDK
{

// Function prop_wireComponent_piezo.prop_wireComponent_piezo_C.ExecuteUbergraph_prop_wireComponent_piezo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_piezo_C::ExecuteUbergraph_prop_wireComponent_piezo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_piezo_C", "ExecuteUbergraph_prop_wireComponent_piezo");

	Params::Prop_wireComponent_piezo_C_ExecuteUbergraph_prop_wireComponent_piezo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_piezo.prop_wireComponent_piezo_C.wirePass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_piezo_C::WirePass(class AWire_C* Wire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_piezo_C", "wirePass");

	Params::Prop_wireComponent_piezo_C_WirePass Parms{};

	Parms.Wire = Wire;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_piezo.prop_wireComponent_piezo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_wireComponent_piezo_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_piezo_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}

