#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_settingsSlot_regenerateSav

#include "Basic.hpp"

#include "Umg_settingsSlot_regenerateSav_classes.hpp"
#include "Umg_settingsSlot_regenerateSav_parameters.hpp"


namespace SDK
{

// Function umg_settingsSlot_regenerateSav.umg_settingsSlot_regenerateSav_C.ExecuteUbergraph_umg_settingsSlot_regenerateSav
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_settingsSlot_regenerateSav_C::ExecuteUbergraph_umg_settingsSlot_regenerateSav(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_settingsSlot_regenerateSav_C", "ExecuteUbergraph_umg_settingsSlot_regenerateSav");

	Params::Umg_settingsSlot_regenerateSav_C_ExecuteUbergraph_umg_settingsSlot_regenerateSav Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_settingsSlot_regenerateSav.umg_settingsSlot_regenerateSav_C.BndEvt__Button_24_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_settingsSlot_regenerateSav_C::BndEvt__Button_24_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_settingsSlot_regenerateSav_C", "BndEvt__Button_24_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}
