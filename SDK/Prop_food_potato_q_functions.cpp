#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_potato_q

#include "Basic.hpp"

#include "Prop_food_potato_q_classes.hpp"
#include "Prop_food_potato_q_parameters.hpp"


namespace SDK
{

// Function prop_food_potato_q.prop_food_potato_q_C.cooked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_food_potato_q_C::Cooked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_potato_q_C", "cooked");

	UObject::ProcessEvent(Func, nullptr);
}

}

