#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_settingsSlot

#include "Basic.hpp"

#include "Umg_settingsSlot_classes.hpp"
#include "Umg_settingsSlot_parameters.hpp"


namespace SDK
{

// Function umg_settingsSlot.umg_settingsSlot_C.ExecuteUbergraph_umg_settingsSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_settingsSlot_C::ExecuteUbergraph_umg_settingsSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_settingsSlot_C", "ExecuteUbergraph_umg_settingsSlot");

	Params::Umg_settingsSlot_C_ExecuteUbergraph_umg_settingsSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_settingsSlot.umg_settingsSlot_C.BndEvt__slider_v_flo_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_settingsSlot_C::BndEvt__slider_v_flo_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_settingsSlot_C", "BndEvt__slider_v_flo_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	Params::Umg_settingsSlot_C_BndEvt__slider_v_flo_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_settingsSlot.umg_settingsSlot_C.BndEvt__CheckBox_vres_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUmg_settingsSlot_C::BndEvt__CheckBox_vres_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_settingsSlot_C", "BndEvt__CheckBox_vres_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::Umg_settingsSlot_C_BndEvt__CheckBox_vres_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_settingsSlot.umg_settingsSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_settingsSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_settingsSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_settingsSlot.umg_settingsSlot_C.BndEvt__slider_v_res_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_settingsSlot_C::BndEvt__slider_v_res_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_settingsSlot_C", "BndEvt__slider_v_res_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");

	Params::Umg_settingsSlot_C_BndEvt__slider_v_res_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_settingsSlot.umg_settingsSlot_C.upd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUmg_settingsSlot_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_settingsSlot_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_settingsSlot.umg_settingsSlot_C.set
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_settingsSlot_C::Set()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_settingsSlot_C", "set");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_settingsSlot.umg_settingsSlot_C.begin
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUmg_settings_C*                  Param_Parent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_settingsSlot_C::begin(class UUmg_settings_C* Param_Parent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_settingsSlot_C", "begin");

	Params::Umg_settingsSlot_C_begin Parms{};

	Parms.Param_Parent = Param_Parent;

	UObject::ProcessEvent(Func, &Parms);
}

}

