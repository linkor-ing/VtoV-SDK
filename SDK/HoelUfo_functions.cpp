#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HoelUfo

#include "Basic.hpp"

#include "HoelUfo_classes.hpp"
#include "HoelUfo_parameters.hpp"


namespace SDK
{

// Function HoelUfo.HoelUfo_C.ExecuteUbergraph_HoelUfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHoelUfo_C::ExecuteUbergraph_HoelUfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HoelUfo_C", "ExecuteUbergraph_HoelUfo");

	Params::HoelUfo_C_ExecuteUbergraph_HoelUfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HoelUfo.HoelUfo_C.changeSpeed
// (BlueprintCallable, BlueprintEvent)

void AHoelUfo_C::ChangeSpeed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HoelUfo_C", "changeSpeed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HoelUfo.HoelUfo_C.attack
// (BlueprintCallable, BlueprintEvent)

void AHoelUfo_C::Attack()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HoelUfo_C", "attack");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HoelUfo.HoelUfo_C.changeSpringDir
// (BlueprintCallable, BlueprintEvent)

void AHoelUfo_C::ChangeSpringDir()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HoelUfo_C", "changeSpringDir");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HoelUfo.HoelUfo_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHoelUfo_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HoelUfo_C", "ReceiveTick");

	Params::HoelUfo_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HoelUfo.HoelUfo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHoelUfo_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HoelUfo_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HoelUfo.HoelUfo_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AHoelUfo_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HoelUfo_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HoelUfo.HoelUfo_C.gen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHoelUfo_C::Gen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HoelUfo_C", "gen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HoelUfo.HoelUfo_C.attackBeam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHoelUfo_C::AttackBeam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HoelUfo_C", "attackBeam");

	UObject::ProcessEvent(Func, nullptr);
}

}

