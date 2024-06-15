#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RedSkyEvent

#include "Basic.hpp"

#include "RedSkyEvent_classes.hpp"
#include "RedSkyEvent_parameters.hpp"


namespace SDK
{

// Function redSkyEvent.redSkyEvent_C.ExecuteUbergraph_redSkyEvent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARedSkyEvent_C::ExecuteUbergraph_redSkyEvent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("redSkyEvent_C", "ExecuteUbergraph_redSkyEvent");

	Params::RedSkyEvent_C_ExecuteUbergraph_redSkyEvent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function redSkyEvent.redSkyEvent_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ARedSkyEvent_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("redSkyEvent_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function redSkyEvent.redSkyEvent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ARedSkyEvent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("redSkyEvent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function redSkyEvent.redSkyEvent_C.set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Isred                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ARedSkyEvent_C::Set(bool Param_Isred)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("redSkyEvent_C", "set");

	Params::RedSkyEvent_C_Set Parms{};

	Parms.Param_Isred = Param_Isred;

	UObject::ProcessEvent(Func, &Parms);
}

}

