#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_advancementSlot

#include "Basic.hpp"

#include "Umg_advancementSlot_classes.hpp"
#include "Umg_advancementSlot_parameters.hpp"


namespace SDK
{

// Function umg_advancementSlot.umg_advancementSlot_C.ExecuteUbergraph_umg_advancementSlot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_advancementSlot_C::ExecuteUbergraph_umg_advancementSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_advancementSlot_C", "ExecuteUbergraph_umg_advancementSlot");

	Params::Umg_advancementSlot_C_ExecuteUbergraph_umg_advancementSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_advancementSlot.umg_advancementSlot_C.BndEvt__bttn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_advancementSlot_C::BndEvt__bttn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_advancementSlot_C", "BndEvt__bttn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_advancementSlot.umg_advancementSlot_C.upd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_achievement              Param_Data                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUmg_advancementSlot_C::Upd(const struct FStruct_achievement& Param_Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_advancementSlot_C", "upd");

	Params::Umg_advancementSlot_C_Upd Parms{};

	Parms.Param_Data = std::move(Param_Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_advancementSlot.umg_advancementSlot_C.check
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUmg_advancementSlot_C*           Ac                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_advancementSlot_C::Check(class UUmg_advancementSlot_C* Ac)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_advancementSlot_C", "check");

	Params::Umg_advancementSlot_C_Check Parms{};

	Parms.Ac = Ac;

	UObject::ProcessEvent(Func, &Parms);
}

}

