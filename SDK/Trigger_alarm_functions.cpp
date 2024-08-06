#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_alarm

#include "Basic.hpp"

#include "Trigger_alarm_classes.hpp"
#include "Trigger_alarm_parameters.hpp"


namespace SDK
{

// Function trigger_alarm.trigger_alarm_C.ExecuteUbergraph_trigger_alarm
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrigger_alarm_C::ExecuteUbergraph_trigger_alarm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_alarm_C", "ExecuteUbergraph_trigger_alarm");

	Params::Trigger_alarm_C_ExecuteUbergraph_trigger_alarm Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function trigger_alarm.trigger_alarm_C.runTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Owner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrigger_alarm_C::RunTrigger(class AActor* Param_Owner, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_alarm_C", "runTrigger");

	Params::Trigger_alarm_C_RunTrigger Parms{};

	Parms.Param_Owner = Param_Owner;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function trigger_alarm.trigger_alarm_C.processKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrigger_alarm_C::ProcessKeys(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_alarm_C", "processKeys");

	Params::Trigger_alarm_C_ProcessKeys Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}

}
