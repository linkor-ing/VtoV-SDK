#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_cookingFood_french

#include "Basic.hpp"

#include "Prop_cookingFood_french_classes.hpp"
#include "Prop_cookingFood_french_parameters.hpp"


namespace SDK
{

// Function prop_cookingFood_french.prop_cookingFood_french_C.ExecuteUbergraph_prop_cookingFood_french
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_cookingFood_french_C::ExecuteUbergraph_prop_cookingFood_french(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_cookingFood_french_C", "ExecuteUbergraph_prop_cookingFood_french");

	Params::Prop_cookingFood_french_C_ExecuteUbergraph_prop_cookingFood_french Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_cookingFood_french.prop_cookingFood_french_C.eaten
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_cookingFood_french_C::Eaten()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_cookingFood_french_C", "eaten");

	UObject::ProcessEvent(Func, nullptr);
}

}
