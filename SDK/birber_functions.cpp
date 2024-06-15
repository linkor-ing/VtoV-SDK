#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: birber

#include "Basic.hpp"

#include "birber_classes.hpp"
#include "birber_parameters.hpp"


namespace SDK
{

// Function birber.birber_C.ExecuteUbergraph_birber
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abirber_C::ExecuteUbergraph_birber(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("birber_C", "ExecuteUbergraph_birber");

	Params::birber_C_ExecuteUbergraph_birber Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function birber.birber_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void Abirber_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("birber_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function birber.birber_C.playBirb
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnoreDay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Abirber_C::PlayBirb(class USoundBase* Sound, bool IgnoreDay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("birber_C", "playBirb");

	Params::birber_C_PlayBirb Parms{};

	Parms.Sound = Sound;
	Parms.IgnoreDay = IgnoreDay;

	UObject::ProcessEvent(Func, &Parms);
}

}

