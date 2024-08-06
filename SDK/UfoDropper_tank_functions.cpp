#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UfoDropper_tank

#include "Basic.hpp"

#include "UfoDropper_tank_classes.hpp"
#include "UfoDropper_tank_parameters.hpp"


namespace SDK
{

// Function ufoDropper_tank.ufoDropper_tank_C.ExecuteUbergraph_ufoDropper_tank
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUfoDropper_tank_C::ExecuteUbergraph_ufoDropper_tank(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufoDropper_tank_C", "ExecuteUbergraph_ufoDropper_tank");

	Params::UfoDropper_tank_C_ExecuteUbergraph_ufoDropper_tank Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ufoDropper_tank.ufoDropper_tank_C.activated
// (Public, BlueprintCallable, BlueprintEvent)

void AUfoDropper_tank_C::Activated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufoDropper_tank_C", "activated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ufoDropper_tank.ufoDropper_tank_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AUfoDropper_tank_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ufoDropper_tank_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

