#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_shrimp

#include "Basic.hpp"

#include "Prop_food_shrimp_classes.hpp"
#include "Prop_food_shrimp_parameters.hpp"


namespace SDK
{

// Function prop_food_shrimp.prop_food_shrimp_C.ExecuteUbergraph_prop_food_shrimp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_food_shrimp_C::ExecuteUbergraph_prop_food_shrimp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_shrimp_C", "ExecuteUbergraph_prop_food_shrimp");

	Params::Prop_food_shrimp_C_ExecuteUbergraph_prop_food_shrimp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_food_shrimp.prop_food_shrimp_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AProp_food_shrimp_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_shrimp_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_food_shrimp.prop_food_shrimp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_food_shrimp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_shrimp_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_food_shrimp.prop_food_shrimp_C.eaten
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_food_shrimp_C::Eaten()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_food_shrimp_C", "eaten");

	UObject::ProcessEvent(Func, nullptr);
}

}
