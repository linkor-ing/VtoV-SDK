#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_banana

#include "Basic.hpp"

#include "Prop_food_banana_classes.hpp"
#include "Prop_food_banana_parameters.hpp"


namespace SDK
{

// Function prop_food_banana.prop_food_banana_C.ExecuteUbergraph_prop_food_banana
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_food_banana_C::ExecuteUbergraph_prop_food_banana(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_banana_C", "ExecuteUbergraph_prop_food_banana");

	Params::Prop_food_banana_C_ExecuteUbergraph_prop_food_banana Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_food_banana.prop_food_banana_C.eaten
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_food_banana_C::Eaten()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_banana_C", "eaten");

	UObject::ProcessEvent(Func, nullptr);
}

}

