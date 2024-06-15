#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_argy

#include "Basic.hpp"

#include "Prop_argy_classes.hpp"
#include "Prop_argy_parameters.hpp"


namespace SDK
{

// Function prop_argy.prop_argy_C.ExecuteUbergraph_prop_argy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_argy_C::ExecuteUbergraph_prop_argy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_argy_C", "ExecuteUbergraph_prop_argy");

	Params::Prop_argy_C_ExecuteUbergraph_prop_argy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_argy.prop_argy_C.set
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_argy_C::Set()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_argy_C", "set");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_argy.prop_argy_C.setmats
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_argy_C::Setmats()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_argy_C", "setmats");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_argy.prop_argy_C.propRenderer_finishProps
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_argy_C::PropRenderer_finishProps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_argy_C", "propRenderer_finishProps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_argy.prop_argy_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_argy_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_argy_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_argy.prop_argy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_argy_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_argy_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_argy.prop_argy_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_argy_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_argy_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}

}

