#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LampPost

#include "Basic.hpp"

#include "LampPost_classes.hpp"
#include "LampPost_parameters.hpp"


namespace SDK
{

// Function lampPost.lampPost_C.ExecuteUbergraph_lampPost
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALampPost_C::ExecuteUbergraph_lampPost(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("lampPost_C", "ExecuteUbergraph_lampPost");

	Params::LampPost_C_ExecuteUbergraph_lampPost Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function lampPost.lampPost_C.blink
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Weight                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALampPost_C::blink(float Weight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("lampPost_C", "blink");

	Params::LampPost_C_blink Parms{};

	Parms.Weight = Weight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function lampPost.lampPost_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ALampPost_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("lampPost_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function lampPost.lampPost_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALampPost_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("lampPost_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function lampPost.lampPost_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALampPost_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("lampPost_C", "ReceiveTick");

	Params::LampPost_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function lampPost.lampPost_C.upd
// (Public, BlueprintCallable, BlueprintEvent)

void ALampPost_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("lampPost_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}

}
