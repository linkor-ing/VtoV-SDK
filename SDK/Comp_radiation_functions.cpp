#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Comp_radiation

#include "Basic.hpp"

#include "Comp_radiation_classes.hpp"
#include "Comp_radiation_parameters.hpp"


namespace SDK
{

// Function comp_radiation.comp_radiation_C.ExecuteUbergraph_comp_radiation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_radiation_C::ExecuteUbergraph_comp_radiation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("comp_radiation_C", "ExecuteUbergraph_comp_radiation");

	Params::Comp_radiation_C_ExecuteUbergraph_comp_radiation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function comp_radiation.comp_radiation_C.Dest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_radiation_C::Dest(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("comp_radiation_C", "Dest");

	Params::Comp_radiation_C_Dest Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function comp_radiation.comp_radiation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_radiation_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("comp_radiation_C", "ReceiveTick");

	Params::Comp_radiation_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function comp_radiation.comp_radiation_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UComp_radiation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("comp_radiation_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function comp_radiation.comp_radiation_C.calcRadAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          PointA                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          PointB                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Rad                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_radiation_C::CalcRadAmount(const struct FVector& PointA, const struct FVector& PointB, float* Rad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("comp_radiation_C", "calcRadAmount");

	Params::Comp_radiation_C_CalcRadAmount Parms{};

	Parms.PointA = std::move(PointA);
	Parms.PointB = std::move(PointB);

	UObject::ProcessEvent(Func, &Parms);

	if (Rad != nullptr)
		*Rad = Parms.Rad;
}

}
