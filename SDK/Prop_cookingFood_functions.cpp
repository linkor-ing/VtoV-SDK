#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_cookingFood

#include "Basic.hpp"

#include "Prop_cookingFood_classes.hpp"


namespace SDK
{

// Function prop_cookingFood.prop_cookingFood_C.cooked
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_cookingFood_C::Cooked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_cookingFood_C", "cooked");

	UObject::ProcessEvent(Func, nullptr);
}

}

