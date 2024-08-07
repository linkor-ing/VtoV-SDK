#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_madnessCombat

#include "Basic.hpp"

#include "Umg_madnessCombat_classes.hpp"
#include "Umg_madnessCombat_parameters.hpp"


namespace SDK
{

// Function umg_madnessCombat.umg_madnessCombat_C.ExecuteUbergraph_umg_madnessCombat
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_madnessCombat_C::ExecuteUbergraph_umg_madnessCombat(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_madnessCombat_C", "ExecuteUbergraph_umg_madnessCombat");

	Params::Umg_madnessCombat_C_ExecuteUbergraph_umg_madnessCombat Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_madnessCombat.umg_madnessCombat_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_madnessCombat_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_madnessCombat_C", "Tick");

	Params::Umg_madnessCombat_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_madnessCombat.umg_madnessCombat_C.addCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUmg_madnessCombat_C::AddCount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_madnessCombat_C", "addCount");

	UObject::ProcessEvent(Func, nullptr);
}

}
