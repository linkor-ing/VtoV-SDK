#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_shopSubcategoryButton

#include "Basic.hpp"

#include "Umg_shopSubcategoryButton_classes.hpp"
#include "Umg_shopSubcategoryButton_parameters.hpp"


namespace SDK
{

// Function umg_shopSubcategoryButton.umg_shopSubcategoryButton_C.ExecuteUbergraph_umg_shopSubcategoryButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_shopSubcategoryButton_C::ExecuteUbergraph_umg_shopSubcategoryButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_shopSubcategoryButton_C", "ExecuteUbergraph_umg_shopSubcategoryButton");

	Params::Umg_shopSubcategoryButton_C_ExecuteUbergraph_umg_shopSubcategoryButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_shopSubcategoryButton.umg_shopSubcategoryButton_C.BndEvt__umg_shopSubcategoryButton_button_shopCat_tools_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUmg_shopSubcategoryButton_C::BndEvt__umg_shopSubcategoryButton_button_shopCat_tools_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_shopSubcategoryButton_C", "BndEvt__umg_shopSubcategoryButton_button_shopCat_tools_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_shopSubcategoryButton.umg_shopSubcategoryButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_shopSubcategoryButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_shopSubcategoryButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_shopSubcategoryButton.umg_shopSubcategoryButton_C.upd
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_shopSubcategoryButton_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_shopSubcategoryButton_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}

}

