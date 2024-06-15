#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_lightRoot

#include "Basic.hpp"

#include "Trigger_lightRoot_classes.hpp"
#include "Trigger_lightRoot_parameters.hpp"


namespace SDK
{

// Function trigger_lightRoot.trigger_lightRoot_C.ExecuteUbergraph_trigger_lightRoot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrigger_lightRoot_C::ExecuteUbergraph_trigger_lightRoot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_lightRoot_C", "ExecuteUbergraph_trigger_lightRoot");

	Params::Trigger_lightRoot_C_ExecuteUbergraph_trigger_lightRoot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function trigger_lightRoot.trigger_lightRoot_C.flick
// (BlueprintCallable, BlueprintEvent)

void ATrigger_lightRoot_C::Flick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_lightRoot_C", "flick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function trigger_lightRoot.trigger_lightRoot_C.loadAft
// (BlueprintCallable, BlueprintEvent)

void ATrigger_lightRoot_C::LoadAft()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_lightRoot_C", "loadAft");

	UObject::ProcessEvent(Func, nullptr);
}


// Function trigger_lightRoot.trigger_lightRoot_C.runTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Owner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrigger_lightRoot_C::RunTrigger(class AActor* Param_Owner, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_lightRoot_C", "runTrigger");

	Params::Trigger_lightRoot_C_RunTrigger Parms{};

	Parms.Param_Owner = Param_Owner;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function trigger_lightRoot.trigger_lightRoot_C.updLig
// (Public, BlueprintCallable, BlueprintEvent)

void ATrigger_lightRoot_C::UpdLig()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_lightRoot_C", "updLig");

	UObject::ProcessEvent(Func, nullptr);
}


// Function trigger_lightRoot.trigger_lightRoot_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Active                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrigger_lightRoot_C::SetActive(bool Param_Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_lightRoot_C", "SetActive");

	Params::Trigger_lightRoot_C_SetActive Parms{};

	Parms.Param_Active = Param_Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function trigger_lightRoot.trigger_lightRoot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATrigger_lightRoot_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_lightRoot_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function trigger_lightRoot.trigger_lightRoot_C.loadTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrigger_lightRoot_C::LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_lightRoot_C", "loadTriggerData");

	Params::Trigger_lightRoot_C_LoadTriggerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function trigger_lightRoot.trigger_lightRoot_C.getTriggerData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void ATrigger_lightRoot_C::GetTriggerData(struct FStruct_triggerSave* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_lightRoot_C", "getTriggerData");

	Params::Trigger_lightRoot_C_GetTriggerData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function trigger_lightRoot.trigger_lightRoot_C.processKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrigger_lightRoot_C::ProcessKeys(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("trigger_lightRoot_C", "processKeys");

	Params::Trigger_lightRoot_C_ProcessKeys Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}

}

