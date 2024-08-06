#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SuperFog

#include "Basic.hpp"

#include "SuperFog_classes.hpp"
#include "SuperFog_parameters.hpp"


namespace SDK
{

// Function superFog.superFog_C.ExecuteUbergraph_superFog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASuperFog_C::ExecuteUbergraph_superFog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("superFog_C", "ExecuteUbergraph_superFog");

	Params::SuperFog_C_ExecuteUbergraph_superFog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function superFog.superFog_C.spawnUfo
// (BlueprintCallable, BlueprintEvent)

void ASuperFog_C::SpawnUfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("superFog_C", "spawnUfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function superFog.superFog_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ASuperFog_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("superFog_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function superFog.superFog_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASuperFog_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("superFog_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function superFog.superFog_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASuperFog_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("superFog_C", "ReceiveTick");

	Params::SuperFog_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function superFog.superFog_C.Point
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          OutputPin                                              (ConstParm, Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASuperFog_C::Point(const struct FVector* OutputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("superFog_C", "Point");

	Params::SuperFog_C_Point Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = std::move(Parms.OutputPin);
}

}
