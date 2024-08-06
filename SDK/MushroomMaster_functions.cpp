#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MushroomMaster

#include "Basic.hpp"

#include "MushroomMaster_classes.hpp"
#include "MushroomMaster_parameters.hpp"


namespace SDK
{

// Function mushroomMaster.mushroomMaster_C.form
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AMushroomMaster_C::Form()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mushroomMaster_C", "form");

	UObject::ProcessEvent(Func, nullptr);
}


// Function mushroomMaster.mushroomMaster_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMushroomMaster_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mushroomMaster_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function mushroomMaster.mushroomMaster_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMushroomMaster_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mushroomMaster_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function mushroomMaster.mushroomMaster_C.Spawn
// (BlueprintCallable, BlueprintEvent)

void AMushroomMaster_C::Spawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mushroomMaster_C", "Spawn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function mushroomMaster.mushroomMaster_C.ExecuteUbergraph_mushroomMaster
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMushroomMaster_C::ExecuteUbergraph_mushroomMaster(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("mushroomMaster_C", "ExecuteUbergraph_mushroomMaster");

	Params::MushroomMaster_C_ExecuteUbergraph_mushroomMaster Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

