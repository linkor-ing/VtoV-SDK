#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FishingRodString

#include "Basic.hpp"

#include "FishingRodString_classes.hpp"
#include "FishingRodString_parameters.hpp"


namespace SDK
{

// Function fishingRodString.fishingRodString_C.ExecuteUbergraph_fishingRodString
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFishingRodString_C::ExecuteUbergraph_fishingRodString(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("fishingRodString_C", "ExecuteUbergraph_fishingRodString");

	Params::FishingRodString_C_ExecuteUbergraph_fishingRodString Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function fishingRodString.fishingRodString_C.Dest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFishingRodString_C::Dest(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("fishingRodString_C", "Dest");

	Params::FishingRodString_C_Dest Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function fishingRodString.fishingRodString_C.restoreString
// (BlueprintCallable, BlueprintEvent)

void AFishingRodString_C::RestoreString()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("fishingRodString_C", "restoreString");

	UObject::ProcessEvent(Func, nullptr);
}


// Function fishingRodString.fishingRodString_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AFishingRodString_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("fishingRodString_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function fishingRodString.fishingRodString_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFishingRodString_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("fishingRodString_C", "ReceiveTick");

	Params::FishingRodString_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function fishingRodString.fishingRodString_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AFishingRodString_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("fishingRodString_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function fishingRodString.fishingRodString_C.setLength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Len                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFishingRodString_C::SetLength(float Len)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("fishingRodString_C", "setLength");

	Params::FishingRodString_C_SetLength Parms{};

	Parms.Len = Len;

	UObject::ProcessEvent(Func, &Parms);
}


// Function fishingRodString.fishingRodString_C.setHookLoc
// (Public, BlueprintCallable, BlueprintEvent)

void AFishingRodString_C::SetHookLoc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("fishingRodString_C", "setHookLoc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function fishingRodString.fishingRodString_C.debugRandom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LastIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Exponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFishingRodString_C::DebugRandom(int32 LastIndex, float Exponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("fishingRodString_C", "debugRandom");

	Params::FishingRodString_C_DebugRandom Parms{};

	Parms.LastIndex = LastIndex;
	Parms.Exponent = Exponent;

	UObject::ProcessEvent(Func, &Parms);
}

}
