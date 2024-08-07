#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ShroomCircle

#include "Basic.hpp"

#include "ShroomCircle_classes.hpp"
#include "ShroomCircle_parameters.hpp"


namespace SDK
{

// Function shroomCircle.shroomCircle_C.setLoc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShroomCircle_C::SetLoc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("shroomCircle_C", "setLoc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function shroomCircle.shroomCircle_C.Spawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShroomCircle_C::Spawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("shroomCircle_C", "Spawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function shroomCircle.shroomCircle_C.prepareDots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AShroomCircle_C::PrepareDots()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("shroomCircle_C", "prepareDots");

	UObject::ProcessEvent(Func, nullptr);
}


// Function shroomCircle.shroomCircle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AShroomCircle_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("shroomCircle_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function shroomCircle.shroomCircle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AShroomCircle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("shroomCircle_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function shroomCircle.shroomCircle_C.spawnAttempt
// (BlueprintCallable, BlueprintEvent)

void AShroomCircle_C::SpawnAttempt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("shroomCircle_C", "spawnAttempt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function shroomCircle.shroomCircle_C.ExecuteUbergraph_shroomCircle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AShroomCircle_C::ExecuteUbergraph_shroomCircle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("shroomCircle_C", "ExecuteUbergraph_shroomCircle");

	Params::ShroomCircle_C_ExecuteUbergraph_shroomCircle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

