#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArirBusterSpawner

#include "Basic.hpp"

#include "ArirBusterSpawner_classes.hpp"
#include "ArirBusterSpawner_parameters.hpp"


namespace SDK
{

// Function arirBusterSpawner.arirBusterSpawner_C.ExecuteUbergraph_arirBusterSpawner
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AArirBusterSpawner_C::ExecuteUbergraph_arirBusterSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("arirBusterSpawner_C", "ExecuteUbergraph_arirBusterSpawner");

	Params::ArirBusterSpawner_C_ExecuteUbergraph_arirBusterSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function arirBusterSpawner.arirBusterSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AArirBusterSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("arirBusterSpawner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}
