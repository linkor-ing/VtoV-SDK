#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_eventer

#include "Basic.hpp"

#include "Trigger_eventer_classes.hpp"
#include "Trigger_eventer_parameters.hpp"


namespace SDK
{

// Function trigger_eventer.trigger_eventer_C.ExecuteUbergraph_trigger_eventer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrigger_eventer_C::ExecuteUbergraph_trigger_eventer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_eventer_C", "ExecuteUbergraph_trigger_eventer");

	Params::Trigger_eventer_C_ExecuteUbergraph_trigger_eventer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function trigger_eventer.trigger_eventer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATrigger_eventer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_eventer_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function trigger_eventer.trigger_eventer_C.runEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Event                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Special                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrigger_eventer_C::RunEvent(class FName Event, class FName Special)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_eventer_C", "runEvent");

	Params::Trigger_eventer_C_RunEvent Parms{};

	Parms.Event = Event;
	Parms.Special = Special;

	UObject::ProcessEvent(Func, &Parms);
}


// Function trigger_eventer.trigger_eventer_C.summonArirPrank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrigger_eventer_C::SummonArirPrank()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_eventer_C", "summonArirPrank");

	UObject::ProcessEvent(Func, nullptr);
}


// Function trigger_eventer.trigger_eventer_C.runSpecialEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName1                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrigger_eventer_C::RunSpecialEvent(class FName EventName1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_eventer_C", "runSpecialEvent");

	Params::Trigger_eventer_C_RunSpecialEvent Parms{};

	Parms.EventName1 = EventName1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function trigger_eventer.trigger_eventer_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void ATrigger_eventer_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_eventer_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function trigger_eventer.trigger_eventer_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ATrigger_eventer_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_eventer_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function trigger_eventer.trigger_eventer_C.loadTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrigger_eventer_C::LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_eventer_C", "loadTriggerData");

	Params::Trigger_eventer_C_LoadTriggerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function trigger_eventer.trigger_eventer_C.processKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrigger_eventer_C::ProcessKeys(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_eventer_C", "processKeys");

	Params::Trigger_eventer_C_ProcessKeys Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}

}
