#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_equipmentSlot

#include "Basic.hpp"

#include "Umg_equipmentSlot_classes.hpp"
#include "Umg_equipmentSlot_parameters.hpp"


namespace SDK
{

// Function umg_equipmentSlot.umg_equipmentSlot_C.ExecuteUbergraph_umg_equipmentSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_equipmentSlot_C::ExecuteUbergraph_umg_equipmentSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_equipmentSlot_C", "ExecuteUbergraph_umg_equipmentSlot");

	Params::Umg_equipmentSlot_C_ExecuteUbergraph_umg_equipmentSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_equipmentSlot.umg_equipmentSlot_C.BndEvt__Button_100_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_equipmentSlot_C::BndEvt__Button_100_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_equipmentSlot_C", "BndEvt__Button_100_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_equipmentSlot.umg_equipmentSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_equipmentSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_equipmentSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_equipmentSlot.umg_equipmentSlot_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_equipmentSlot_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_equipmentSlot_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_equipmentSlot.umg_equipmentSlot_C.upd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUmg_equipmentSlot_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_equipmentSlot_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}

}

