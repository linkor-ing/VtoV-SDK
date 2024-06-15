#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Gearer

#include "Basic.hpp"

#include "Gearer_classes.hpp"
#include "Gearer_parameters.hpp"


namespace SDK
{

// Function gearer.gearer_C.ExecuteUbergraph_gearer
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGearer_C::ExecuteUbergraph_gearer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("gearer_C", "ExecuteUbergraph_gearer");

	Params::Gearer_C_ExecuteUbergraph_gearer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function gearer.gearer_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGearer_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("gearer_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function gearer.gearer_C.runTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Owner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGearer_C::RunTrigger(class AActor* Param_Owner, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("gearer_C", "runTrigger");

	Params::Gearer_C_RunTrigger Parms{};

	Parms.Param_Owner = Param_Owner;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function gearer.gearer_C.gen_gear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AGearer_C::Gen_gear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("gearer_C", "gen_gear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function gearer.gearer_C.checkDist
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          V2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Overlap                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGearer_C::CheckDist(const struct FVector& V2, bool* Overlap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("gearer_C", "checkDist");

	Params::Gearer_C_CheckDist Parms{};

	Parms.V2 = std::move(V2);

	UObject::ProcessEvent(Func, &Parms);

	if (Overlap != nullptr)
		*Overlap = Parms.Overlap;
}


// Function gearer.gearer_C.ignoreSave_trigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ignore                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AGearer_C::IgnoreSave_trigger(bool* Ignore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("gearer_C", "ignoreSave_trigger");

	Params::Gearer_C_IgnoreSave_trigger Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ignore != nullptr)
		*Ignore = Parms.Ignore;
}

}
