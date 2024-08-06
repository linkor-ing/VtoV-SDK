#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lakeglow

#include "Basic.hpp"

#include "Lakeglow_classes.hpp"
#include "Lakeglow_parameters.hpp"


namespace SDK
{

// Function lakeglow.lakeglow_C.ExecuteUbergraph_lakeglow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALakeglow_C::ExecuteUbergraph_lakeglow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("lakeglow_C", "ExecuteUbergraph_lakeglow");

	Params::Lakeglow_C_ExecuteUbergraph_lakeglow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function lakeglow.lakeglow_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALakeglow_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("lakeglow_C", "ReceiveTick");

	Params::Lakeglow_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function lakeglow.lakeglow_C.BndEvt__lakeglow_pulling_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALakeglow_C::BndEvt__lakeglow_pulling_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("lakeglow_C", "BndEvt__lakeglow_pulling_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::Lakeglow_C_BndEvt__lakeglow_pulling_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function lakeglow.lakeglow_C.BndEvt__lakeglow_pulling_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ALakeglow_C::BndEvt__lakeglow_pulling_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("lakeglow_C", "BndEvt__lakeglow_pulling_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::Lakeglow_C_BndEvt__lakeglow_pulling_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function lakeglow.lakeglow_C.pullDown
// (BlueprintCallable, BlueprintEvent)

void ALakeglow_C::PullDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("lakeglow_C", "pullDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function lakeglow.lakeglow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALakeglow_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("lakeglow_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function lakeglow.lakeglow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALakeglow_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("lakeglow_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function lakeglow.lakeglow_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ALakeglow_C::SetActive(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("lakeglow_C", "SetActive");

	Params::Lakeglow_C_SetActive Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);
}

}
