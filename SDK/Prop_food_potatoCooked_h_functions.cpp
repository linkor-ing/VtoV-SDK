#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_potatoCooked_h

#include "Basic.hpp"

#include "Prop_food_potatoCooked_h_classes.hpp"
#include "Prop_food_potatoCooked_h_parameters.hpp"


namespace SDK
{

// Function prop_food_potatoCooked_h.prop_food_potatoCooked_h_C.ExecuteUbergraph_prop_food_potatoCooked_h
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_food_potatoCooked_h_C::ExecuteUbergraph_prop_food_potatoCooked_h(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_potatoCooked_h_C", "ExecuteUbergraph_prop_food_potatoCooked_h");

	Params::Prop_food_potatoCooked_h_C_ExecuteUbergraph_prop_food_potatoCooked_h Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_food_potatoCooked_h.prop_food_potatoCooked_h_C.slice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Clean                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_food_potatoCooked_h_C::Slice(bool Clean)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_potatoCooked_h_C", "slice");

	Params::Prop_food_potatoCooked_h_C_Slice Parms{};

	Parms.Clean = Clean;

	UObject::ProcessEvent(Func, &Parms);
}

}

