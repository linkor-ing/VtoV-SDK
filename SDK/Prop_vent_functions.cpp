#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_vent

#include "Basic.hpp"

#include "Prop_vent_classes.hpp"
#include "Prop_vent_parameters.hpp"


namespace SDK
{

// Function prop_vent.prop_vent_C.gatherDataFromKeyT
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Gather                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_vent_C::GatherDataFromKeyT(bool* Gather)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_vent_C", "gatherDataFromKeyT");

	Params::Prop_vent_C_GatherDataFromKeyT Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Gather != nullptr)
		*Gather = Parms.Gather;
}


// Function prop_vent.prop_vent_C.ignoreSave_trigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ignore                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_vent_C::IgnoreSave_trigger(bool* Ignore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_vent_C", "ignoreSave_trigger");

	Params::Prop_vent_C_IgnoreSave_trigger Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ignore != nullptr)
		*Ignore = Parms.Ignore;
}


// Function prop_vent.prop_vent_C.loadTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_vent_C::LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_vent_C", "loadTriggerData");

	Params::Prop_vent_C_LoadTriggerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function prop_vent.prop_vent_C.getTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AProp_vent_C::GetTriggerData(struct FStruct_triggerSave* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_vent_C", "getTriggerData");

	Params::Prop_vent_C_GetTriggerData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function prop_vent.prop_vent_C.set_ignoreSave_trigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_vent_C::Set_ignoreSave_trigger(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_vent_C", "set_ignoreSave_trigger");

	Params::Prop_vent_C_Set_ignoreSave_trigger Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_vent.prop_vent_C.cordPlugged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACord_C*                          Cord                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACordSocket_C*                    Socket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_vent_C::CordPlugged(class ACord_C* Cord, class ACordSocket_C* Socket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_vent_C", "cordPlugged");

	Params::Prop_vent_C_CordPlugged Parms{};

	Parms.Cord = Cord;
	Parms.Socket = Socket;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_vent.prop_vent_C.cordUnplugged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACord_C*                          Cord                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACordSocket_C*                    Socket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_vent_C::CordUnplugged(class ACord_C* Cord, class ACordSocket_C* Socket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_vent_C", "cordUnplugged");

	Params::Prop_vent_C_CordUnplugged Parms{};

	Parms.Cord = Cord;
	Parms.Socket = Socket;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_vent.prop_vent_C.setActiveTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SentFrom                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_vent_C::SetActiveTrigger(class AActor* SentFrom, bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_vent_C", "setActiveTrigger");

	Params::Prop_vent_C_SetActiveTrigger Parms{};

	Parms.SentFrom = SentFrom;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_vent.prop_vent_C.runTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Owner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_vent_C::RunTrigger(class AActor* Param_Owner, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_vent_C", "runTrigger");

	Params::Prop_vent_C_RunTrigger Parms{};

	Parms.Param_Owner = Param_Owner;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_vent.prop_vent_C.ExecuteUbergraph_prop_vent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_vent_C::ExecuteUbergraph_prop_vent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_vent_C", "ExecuteUbergraph_prop_vent");

	Params::Prop_vent_C_ExecuteUbergraph_prop_vent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

