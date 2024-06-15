#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_gateOr

#include "Basic.hpp"

#include "Prop_wireComponent_gateOr_classes.hpp"
#include "Prop_wireComponent_gateOr_parameters.hpp"


namespace SDK
{

// Function prop_wireComponent_gateOr.prop_wireComponent_gateOr_C.ExecuteUbergraph_prop_wireComponent_gateOr
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_gateOr_C::ExecuteUbergraph_prop_wireComponent_gateOr(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_gateOr_C", "ExecuteUbergraph_prop_wireComponent_gateOr");

	Params::Prop_wireComponent_gateOr_C_ExecuteUbergraph_prop_wireComponent_gateOr Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_gateOr.prop_wireComponent_gateOr_C.wirePass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_gateOr_C::WirePass(class AWire_C* Wire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_gateOr_C", "wirePass");

	Params::Prop_wireComponent_gateOr_C_WirePass Parms{};

	Parms.Wire = Wire;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_gateOr.prop_wireComponent_gateOr_C.wireDisconnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Side                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_wireComponent_gateOr_C::WireDisconnected(class AWire_C* Wire, bool Side)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_gateOr_C", "wireDisconnected");

	Params::Prop_wireComponent_gateOr_C_WireDisconnected Parms{};

	Parms.Wire = Wire;
	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_gateOr.prop_wireComponent_gateOr_C.wireConnected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Side                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_wireComponent_gateOr_C::WireConnected(class AWire_C* Wire, bool Side)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_gateOr_C", "wireConnected");

	Params::Prop_wireComponent_gateOr_C_WireConnected Parms{};

	Parms.Wire = Wire;
	Parms.Side = Side;

	UObject::ProcessEvent(Func, &Parms);
}

}
