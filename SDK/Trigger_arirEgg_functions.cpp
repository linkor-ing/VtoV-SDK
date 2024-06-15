#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_arirEgg

#include "Basic.hpp"

#include "Trigger_arirEgg_classes.hpp"
#include "Trigger_arirEgg_parameters.hpp"


namespace SDK
{

// Function trigger_arirEgg.trigger_arirEgg_C.runTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Owner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrigger_arirEgg_C::RunTrigger(class AActor* Param_Owner, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_arirEgg_C", "runTrigger");

	Params::Trigger_arirEgg_C_RunTrigger Parms{};

	Parms.Param_Owner = Param_Owner;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function trigger_arirEgg.trigger_arirEgg_C.ExecuteUbergraph_trigger_arirEgg
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrigger_arirEgg_C::ExecuteUbergraph_trigger_arirEgg(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_arirEgg_C", "ExecuteUbergraph_trigger_arirEgg");

	Params::Trigger_arirEgg_C_ExecuteUbergraph_trigger_arirEgg Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
