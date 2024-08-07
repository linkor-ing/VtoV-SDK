#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_gst

#include "Basic.hpp"

#include "Prop_gst_classes.hpp"
#include "Prop_gst_parameters.hpp"


namespace SDK
{

// Function prop_gst.prop_gst_C.ExecuteUbergraph_prop_gst
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_gst_C::ExecuteUbergraph_prop_gst(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_gst_C", "ExecuteUbergraph_prop_gst");

	Params::Prop_gst_C_ExecuteUbergraph_prop_gst Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_gst.prop_gst_C.BndEvt__prop_gst_prop_to_B_K2Node_ComponentBoundEvent_1_ConstraintBrokenSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ConstraintIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_gst_C::BndEvt__prop_gst_prop_to_B_K2Node_ComponentBoundEvent_1_ConstraintBrokenSignature__DelegateSignature(int32 ConstraintIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_gst_C", "BndEvt__prop_gst_prop_to_B_K2Node_ComponentBoundEvent_1_ConstraintBrokenSignature__DelegateSignature");

	Params::Prop_gst_C_BndEvt__prop_gst_prop_to_B_K2Node_ComponentBoundEvent_1_ConstraintBrokenSignature__DelegateSignature Parms{};

	Parms.ConstraintIndex = ConstraintIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_gst.prop_gst_C.BndEvt__prop_gst_A_to_prop_K2Node_ComponentBoundEvent_0_ConstraintBrokenSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ConstraintIndex                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_gst_C::BndEvt__prop_gst_A_to_prop_K2Node_ComponentBoundEvent_0_ConstraintBrokenSignature__DelegateSignature(int32 ConstraintIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_gst_C", "BndEvt__prop_gst_A_to_prop_K2Node_ComponentBoundEvent_0_ConstraintBrokenSignature__DelegateSignature");

	Params::Prop_gst_C_BndEvt__prop_gst_A_to_prop_K2Node_ComponentBoundEvent_0_ConstraintBrokenSignature__DelegateSignature Parms{};

	Parms.ConstraintIndex = ConstraintIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_gst.prop_gst_C.attach
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_gst_C::Attach()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_gst_C", "attach");

	UObject::ProcessEvent(Func, nullptr);
}

}

