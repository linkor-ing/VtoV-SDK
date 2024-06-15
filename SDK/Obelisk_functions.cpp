#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Obelisk

#include "Basic.hpp"

#include "Obelisk_classes.hpp"
#include "Obelisk_parameters.hpp"


namespace SDK
{

// Function obelisk.obelisk_C.ExecuteUbergraph_obelisk
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AObelisk_C::ExecuteUbergraph_obelisk(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obelisk_C", "ExecuteUbergraph_obelisk");

	Params::Obelisk_C_ExecuteUbergraph_obelisk Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function obelisk.obelisk_C.BndEvt__obelisk_walk_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AObelisk_C::BndEvt__obelisk_walk_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obelisk_C", "BndEvt__obelisk_walk_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Obelisk_C_BndEvt__obelisk_walk_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function obelisk.obelisk_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AObelisk_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obelisk_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function obelisk.obelisk_C.a__en__EventFunc
// (BlueprintEvent)

void AObelisk_C::A__en__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obelisk_C", "a__en__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function obelisk.obelisk_C.a__preland__EventFunc
// (BlueprintEvent)

void AObelisk_C::A__preland__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obelisk_C", "a__preland__EventFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function obelisk.obelisk_C.a__UpdateFunc
// (BlueprintEvent)

void AObelisk_C::A__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obelisk_C", "a__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function obelisk.obelisk_C.a__FinishedFunc
// (BlueprintEvent)

void AObelisk_C::A__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obelisk_C", "a__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function obelisk.obelisk_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AObelisk_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obelisk_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function obelisk.obelisk_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AObelisk_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obelisk_C", "loadData");

	Params::Obelisk_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function obelisk.obelisk_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AObelisk_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("obelisk_C", "getData");

	Params::Obelisk_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}

}

