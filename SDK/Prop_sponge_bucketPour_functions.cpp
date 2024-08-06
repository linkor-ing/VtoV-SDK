#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_sponge_bucketPour

#include "Basic.hpp"

#include "Prop_sponge_bucketPour_classes.hpp"
#include "Prop_sponge_bucketPour_parameters.hpp"


namespace SDK
{

// Function prop_sponge_bucketPour.prop_sponge_bucketPour_C.ExecuteUbergraph_prop_sponge_bucketPour
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_bucketPour_C::ExecuteUbergraph_prop_sponge_bucketPour(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_bucketPour_C", "ExecuteUbergraph_prop_sponge_bucketPour");

	Params::Prop_sponge_bucketPour_C_ExecuteUbergraph_prop_sponge_bucketPour Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge_bucketPour.prop_sponge_bucketPour_C.collided
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Hitcomp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Otherac                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InputPin4                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       InputPin5                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProp_sponge_bucketPour_C::Collided(class UPrimitiveComponent* Hitcomp, class AActor* Otherac, class UPrimitiveComponent* OtherComp, const struct FVector& InputPin4, const struct FHitResult& InputPin5)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_bucketPour_C", "collided");

	Params::Prop_sponge_bucketPour_C_Collided Parms{};

	Parms.Hitcomp = Hitcomp;
	Parms.Otherac = Otherac;
	Parms.OtherComp = OtherComp;
	Parms.InputPin4 = std::move(InputPin4);
	Parms.InputPin5 = std::move(InputPin5);

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge_bucketPour.prop_sponge_bucketPour_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_sponge_bucketPour_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_bucketPour_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

