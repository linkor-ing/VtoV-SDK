#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HillRollerSpawner

#include "Basic.hpp"

#include "HillRollerSpawner_classes.hpp"
#include "HillRollerSpawner_parameters.hpp"


namespace SDK
{

// Function hillRollerSpawner.hillRollerSpawner_C.ExecuteUbergraph_hillRollerSpawner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHillRollerSpawner_C::ExecuteUbergraph_hillRollerSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hillRollerSpawner_C", "ExecuteUbergraph_hillRollerSpawner");

	Params::HillRollerSpawner_C_ExecuteUbergraph_hillRollerSpawner Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function hillRollerSpawner.hillRollerSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHillRollerSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hillRollerSpawner_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function hillRollerSpawner.hillRollerSpawner_C.BndEvt__hillRollerSpawner_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AHillRollerSpawner_C::BndEvt__hillRollerSpawner_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hillRollerSpawner_C", "BndEvt__hillRollerSpawner_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::HillRollerSpawner_C_BndEvt__hillRollerSpawner_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function hillRollerSpawner.hillRollerSpawner_C.BndEvt__hillRollerSpawner_Audio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature
// (BlueprintEvent)

void AHillRollerSpawner_C::BndEvt__hillRollerSpawner_Audio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hillRollerSpawner_C", "BndEvt__hillRollerSpawner_Audio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function hillRollerSpawner.hillRollerSpawner_C.Spawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHillRollerSpawner_C::Spawn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hillRollerSpawner_C", "Spawn");

	UObject::ProcessEvent(Func, nullptr);
}

}
