#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Flammable

#include "Basic.hpp"

#include "Flammable_classes.hpp"
#include "Flammable_parameters.hpp"


namespace SDK
{

// Function flammable.flammable_C.ExecuteUbergraph_flammable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlammable_C::ExecuteUbergraph_flammable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "ExecuteUbergraph_flammable");

	Params::Flammable_C_ExecuteUbergraph_flammable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function flammable.flammable_C.des
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlammable_C::Des(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "des");

	Params::Flammable_C_Des Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function flammable.flammable_C.extinguish
// (BlueprintCallable, BlueprintEvent)

void UFlammable_C::Extinguish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "extinguish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function flammable.flammable_C.ignite_s
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Fuel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlammable_C::Ignite_s(float Param_Fuel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "ignite_s");

	Params::Flammable_C_Ignite_s Parms{};

	Parms.Param_Fuel = Param_Fuel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function flammable.flammable_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UFlammable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function flammable.flammable_C.bound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USceneComponent*                  Param_Component                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Origin                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          BoxExtent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlammable_C::bound(const class USceneComponent* Param_Component, struct FVector* Origin, struct FVector* BoxExtent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("flammable_C", "bound");

	Params::Flammable_C_bound Parms{};

	Parms.Param_Component = Param_Component;

	UObject::ProcessEvent(Func, &Parms);

	if (Origin != nullptr)
		*Origin = std::move(Parms.Origin);

	if (BoxExtent != nullptr)
		*BoxExtent = std::move(Parms.BoxExtent);
}

}

