#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeneratorFuckuper

#include "Basic.hpp"

#include "GeneratorFuckuper_classes.hpp"
#include "GeneratorFuckuper_parameters.hpp"


namespace SDK
{

// Function generatorFuckuper.generatorFuckuper_C.ExecuteUbergraph_generatorFuckuper
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeneratorFuckuper_C::ExecuteUbergraph_generatorFuckuper(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("generatorFuckuper_C", "ExecuteUbergraph_generatorFuckuper");

	Params::GeneratorFuckuper_C_ExecuteUbergraph_generatorFuckuper Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function generatorFuckuper.generatorFuckuper_C.sendElec
// (BlueprintCallable, BlueprintEvent)

void AGeneratorFuckuper_C::SendElec()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("generatorFuckuper_C", "sendElec");

	UObject::ProcessEvent(Func, nullptr);
}


// Function generatorFuckuper.generatorFuckuper_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AGeneratorFuckuper_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("generatorFuckuper_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function generatorFuckuper.generatorFuckuper_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AGeneratorFuckuper_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("generatorFuckuper_C", "ReceiveTick");

	Params::GeneratorFuckuper_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function generatorFuckuper.generatorFuckuper_C.upd
// (Public, BlueprintCallable, BlueprintEvent)

void AGeneratorFuckuper_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("generatorFuckuper_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function generatorFuckuper.generatorFuckuper_C.setId
// (Public, BlueprintCallable, BlueprintEvent)

void AGeneratorFuckuper_C::SetId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("generatorFuckuper_C", "setId");

	UObject::ProcessEvent(Func, nullptr);
}

}
