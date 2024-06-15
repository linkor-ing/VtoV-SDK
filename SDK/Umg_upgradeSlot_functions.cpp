#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_upgradeSlot

#include "Basic.hpp"

#include "Umg_upgradeSlot_classes.hpp"
#include "Umg_upgradeSlot_parameters.hpp"


namespace SDK
{

// Function umg_upgradeSlot.umg_upgradeSlot_C.ExecuteUbergraph_umg_upgradeSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_upgradeSlot_C::ExecuteUbergraph_umg_upgradeSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_upgradeSlot_C", "ExecuteUbergraph_umg_upgradeSlot");

	Params::Umg_upgradeSlot_C_ExecuteUbergraph_umg_upgradeSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_upgradeSlot.umg_upgradeSlot_C.BndEvt__button_upgDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_upgradeSlot_C::BndEvt__button_upgDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_upgradeSlot_C", "BndEvt__button_upgDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_upgradeSlot.umg_upgradeSlot_C.BndEvt__button_upgDownloadSpd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_upgradeSlot_C::BndEvt__button_upgDownloadSpd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_upgradeSlot_C", "BndEvt__button_upgDownloadSpd_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_upgradeSlot.umg_upgradeSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_upgradeSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_upgradeSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_upgradeSlot.umg_upgradeSlot_C.upd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUmg_upgradeSlot_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_upgradeSlot_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}

}
