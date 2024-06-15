#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraFlash

#include "Basic.hpp"

#include "CameraFlash_classes.hpp"
#include "CameraFlash_parameters.hpp"


namespace SDK
{

// Function cameraFlash.cameraFlash_C.ExecuteUbergraph_cameraFlash
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACameraFlash_C::ExecuteUbergraph_cameraFlash(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("cameraFlash_C", "ExecuteUbergraph_cameraFlash");

	Params::CameraFlash_C_ExecuteUbergraph_cameraFlash Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function cameraFlash.cameraFlash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACameraFlash_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("cameraFlash_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

