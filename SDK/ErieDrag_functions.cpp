#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErieDrag

#include "Basic.hpp"

#include "ErieDrag_classes.hpp"
#include "ErieDrag_parameters.hpp"


namespace SDK
{

// Function erieDrag.erieDrag_C.ExecuteUbergraph_erieDrag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AErieDrag_C::ExecuteUbergraph_erieDrag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("erieDrag_C", "ExecuteUbergraph_erieDrag");

	Params::ErieDrag_C_ExecuteUbergraph_erieDrag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function erieDrag.erieDrag_C.BndEvt__erieDrag_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AErieDrag_C::BndEvt__erieDrag_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("erieDrag_C", "BndEvt__erieDrag_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::ErieDrag_C_BndEvt__erieDrag_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function erieDrag.erieDrag_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AErieDrag_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("erieDrag_C", "ReceiveTick");

	Params::ErieDrag_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function erieDrag.erieDrag_C.setIgnoreSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ignore                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AErieDrag_C::SetIgnoreSave(bool Ignore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("erieDrag_C", "setIgnoreSave");

	Params::ErieDrag_C_SetIgnoreSave Parms{};

	Parms.Ignore = Ignore;

	UObject::ProcessEvent(Func, &Parms);
}


// Function erieDrag.erieDrag_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AErieDrag_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("erieDrag_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function erieDrag.erieDrag_C.boing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          A                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AErieDrag_C::boing(const struct FVector& A)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("erieDrag_C", "boing");

	Params::ErieDrag_C_boing Parms{};

	Parms.A = std::move(A);

	UObject::ProcessEvent(Func, &Parms);
}


// Function erieDrag.erieDrag_C.skipPreDelete
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Skip                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AErieDrag_C::SkipPreDelete(bool* Skip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("erieDrag_C", "skipPreDelete");

	Params::ErieDrag_C_SkipPreDelete Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Skip != nullptr)
		*Skip = Parms.Skip;
}


// Function erieDrag.erieDrag_C.ignoreSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IgnoreSave                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AErieDrag_C::IgnoreSave(bool* Param_IgnoreSave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("erieDrag_C", "ignoreSave");

	Params::ErieDrag_C_IgnoreSave Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IgnoreSave != nullptr)
		*Param_IgnoreSave = Parms.Param_IgnoreSave;
}


// Function erieDrag.erieDrag_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AErieDrag_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("erieDrag_C", "loadData");

	Params::ErieDrag_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function erieDrag.erieDrag_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AErieDrag_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("erieDrag_C", "getData");

	Params::ErieDrag_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}

}

