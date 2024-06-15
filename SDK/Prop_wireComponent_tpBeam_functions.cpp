#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_tpBeam

#include "Basic.hpp"

#include "Prop_wireComponent_tpBeam_classes.hpp"
#include "Prop_wireComponent_tpBeam_parameters.hpp"


namespace SDK
{

// Function prop_wireComponent_tpBeam.prop_wireComponent_tpBeam_C.ExecuteUbergraph_prop_wireComponent_tpBeam
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_tpBeam_C::ExecuteUbergraph_prop_wireComponent_tpBeam(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_tpBeam_C", "ExecuteUbergraph_prop_wireComponent_tpBeam");

	Params::Prop_wireComponent_tpBeam_C_ExecuteUbergraph_prop_wireComponent_tpBeam Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_tpBeam.prop_wireComponent_tpBeam_C.telported
// (BlueprintCallable, BlueprintEvent)

void AProp_wireComponent_tpBeam_C::Telported()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_tpBeam_C", "telported");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_wireComponent_tpBeam.prop_wireComponent_tpBeam_C.wirePass
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWire_C*                          Wire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wireComponent_tpBeam_C::WirePass(class AWire_C* Wire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_tpBeam_C", "wirePass");

	Params::Prop_wireComponent_tpBeam_C_WirePass Parms{};

	Parms.Wire = Wire;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wireComponent_tpBeam.prop_wireComponent_tpBeam_C.tpAnim__UpdateFunc
// (BlueprintEvent)

void AProp_wireComponent_tpBeam_C::TpAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_tpBeam_C", "tpAnim__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_wireComponent_tpBeam.prop_wireComponent_tpBeam_C.tpAnim__FinishedFunc
// (BlueprintEvent)

void AProp_wireComponent_tpBeam_C::TpAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_tpBeam_C", "tpAnim__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_wireComponent_tpBeam.prop_wireComponent_tpBeam_C.tp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_wireComponent_tpBeam_C::Tp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wireComponent_tpBeam_C", "tp");

	UObject::ProcessEvent(Func, nullptr);
}

}

