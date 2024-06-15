#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_langs

#include "Basic.hpp"

#include "Umg_langs_classes.hpp"
#include "Umg_langs_parameters.hpp"


namespace SDK
{

// Function umg_langs.umg_langs_C.ExecuteUbergraph_umg_langs
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_langs_C::ExecuteUbergraph_umg_langs(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_langs_C", "ExecuteUbergraph_umg_langs");

	Params::Umg_langs_C_ExecuteUbergraph_umg_langs Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_langs.umg_langs_C.resume
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_langs_C::Resume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_langs_C", "resume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_langs.umg_langs_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_langs_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_langs_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_langs.umg_langs_C.BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_langs_C::BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_langs_C", "BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_langs.umg_langs_C.setIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_langs_C::SetIndex(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_langs_C", "setIndex");

	Params::Umg_langs_C_SetIndex Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}

}

