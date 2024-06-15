#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheEvil

#include "Basic.hpp"

#include "TheEvil_classes.hpp"
#include "TheEvil_parameters.hpp"


namespace SDK
{

// Function theEvil.theEvil_C.ExecuteUbergraph_theEvil
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATheEvil_C::ExecuteUbergraph_theEvil(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("theEvil_C", "ExecuteUbergraph_theEvil");

	Params::TheEvil_C_ExecuteUbergraph_theEvil Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function theEvil.theEvil_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATheEvil_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("theEvil_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function theEvil.theEvil_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATheEvil_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("theEvil_C", "ReceiveTick");

	Params::TheEvil_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function theEvil.theEvil_C.checkForEvil
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Evil                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATheEvil_C::CheckForEvil(bool* Evil)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("theEvil_C", "checkForEvil");

	Params::TheEvil_C_CheckForEvil Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Evil != nullptr)
		*Evil = Parms.Evil;
}


// Function theEvil.theEvil_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATheEvil_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("theEvil_C", "loadData");

	Params::TheEvil_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function theEvil.theEvil_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void ATheEvil_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("theEvil_C", "getData");

	Params::TheEvil_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}

}
