#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OrderPlace

#include "Basic.hpp"

#include "OrderPlace_classes.hpp"
#include "OrderPlace_parameters.hpp"


namespace SDK
{

// Function orderPlace.orderPlace_C.spawnOrder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_storeOrder1              Order                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AOrderPlace_C::SpawnOrder(const struct FStruct_storeOrder1& Order)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("orderPlace_C", "spawnOrder");

	Params::OrderPlace_C_SpawnOrder Parms{};

	Parms.Order = std::move(Order);

	UObject::ProcessEvent(Func, &Parms);
}

}

