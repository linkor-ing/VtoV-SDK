#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Darkrock

#include "Basic.hpp"

#include "Darkrock_classes.hpp"
#include "Darkrock_parameters.hpp"


namespace SDK
{

// Function darkrock.darkrock_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADarkrock_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("darkrock_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function darkrock.darkrock_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADarkrock_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("darkrock_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function darkrock.darkrock_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADarkrock_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("darkrock_C", "ReceiveTick");

	Params::Darkrock_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function darkrock.darkrock_C.ExecuteUbergraph_darkrock
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADarkrock_C::ExecuteUbergraph_darkrock(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("darkrock_C", "ExecuteUbergraph_darkrock");

	Params::Darkrock_C_ExecuteUbergraph_darkrock Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

