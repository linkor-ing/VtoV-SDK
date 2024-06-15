#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_coffeeCup

#include "Basic.hpp"

#include "Prop_food_coffeeCup_classes.hpp"
#include "Prop_food_coffeeCup_parameters.hpp"


namespace SDK
{

// Function prop_food_coffeeCup.prop_food_coffeeCup_C.ExecuteUbergraph_prop_food_coffeeCup
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_food_coffeeCup_C::ExecuteUbergraph_prop_food_coffeeCup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_coffeeCup_C", "ExecuteUbergraph_prop_food_coffeeCup");

	Params::Prop_food_coffeeCup_C_ExecuteUbergraph_prop_food_coffeeCup Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_food_coffeeCup.prop_food_coffeeCup_C.used
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_food_coffeeCup_C::Used()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_coffeeCup_C", "used");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_food_coffeeCup.prop_food_coffeeCup_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_food_coffeeCup_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_coffeeCup_C", "ReceiveTick");

	Params::Prop_food_coffeeCup_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_food_coffeeCup.prop_food_coffeeCup_C.eaten
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_food_coffeeCup_C::Eaten()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_coffeeCup_C", "eaten");

	UObject::ProcessEvent(Func, nullptr);
}

}

