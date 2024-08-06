#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_radialText

#include "Basic.hpp"

#include "Umg_radialText_classes.hpp"
#include "Umg_radialText_parameters.hpp"


namespace SDK
{

// Function umg_radialText.umg_radialText_C.ExecuteUbergraph_umg_radialText
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_radialText_C::ExecuteUbergraph_umg_radialText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_radialText_C", "ExecuteUbergraph_umg_radialText");

	Params::Umg_radialText_C_ExecuteUbergraph_umg_radialText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_radialText.umg_radialText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_radialText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_radialText_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}

