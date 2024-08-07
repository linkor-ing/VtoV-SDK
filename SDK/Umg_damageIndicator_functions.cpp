#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_damageIndicator

#include "Basic.hpp"

#include "Umg_damageIndicator_classes.hpp"
#include "Umg_damageIndicator_parameters.hpp"


namespace SDK
{

// Function umg_damageIndicator.umg_damageIndicator_C.ExecuteUbergraph_umg_damageIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_damageIndicator_C::ExecuteUbergraph_umg_damageIndicator(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_damageIndicator_C", "ExecuteUbergraph_umg_damageIndicator");

	Params::Umg_damageIndicator_C_ExecuteUbergraph_umg_damageIndicator Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_damageIndicator.umg_damageIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_damageIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_damageIndicator_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_damageIndicator.umg_damageIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_damageIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_damageIndicator_C", "Tick");

	Params::Umg_damageIndicator_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}
