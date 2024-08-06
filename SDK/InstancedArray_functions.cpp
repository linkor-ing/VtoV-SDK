#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InstancedArray

#include "Basic.hpp"

#include "InstancedArray_classes.hpp"
#include "InstancedArray_parameters.hpp"


namespace SDK
{

// Function instancedArray.instancedArray_C.Build
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AInstancedArray_C::Build()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("instancedArray_C", "Build");

	UObject::ProcessEvent(Func, nullptr);
}


// Function instancedArray.instancedArray_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AInstancedArray_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("instancedArray_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function instancedArray.instancedArray_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AInstancedArray_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("instancedArray_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function instancedArray.instancedArray_C.ExecuteUbergraph_instancedArray
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AInstancedArray_C::ExecuteUbergraph_instancedArray(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("instancedArray_C", "ExecuteUbergraph_instancedArray");

	Params::InstancedArray_C_ExecuteUbergraph_instancedArray Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}
