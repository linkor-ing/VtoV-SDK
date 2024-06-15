#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_sponge

#include "Basic.hpp"

#include "Prop_sponge_classes.hpp"
#include "Prop_sponge_parameters.hpp"


namespace SDK
{

// Function prop_sponge.prop_sponge_C.ExecuteUbergraph_prop_sponge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::ExecuteUbergraph_prop_sponge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "ExecuteUbergraph_prop_sponge");

	Params::Prop_sponge_C_ExecuteUbergraph_prop_sponge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.BndEvt__prop_sponge_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_Hit                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProp_sponge_C::BndEvt__prop_sponge_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Param_Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "BndEvt__prop_sponge_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::Prop_sponge_C_BndEvt__prop_sponge_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Param_Hit = std::move(Param_Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_sponge_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_sponge.prop_sponge_C.OnCompleted_7AB3ADC64B1C9C34BB990BA811472BD6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::OnCompleted_7AB3ADC64B1C9C34BB990BA811472BD6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "OnCompleted_7AB3ADC64B1C9C34BB990BA811472BD6");

	Params::Prop_sponge_C_OnCompleted_7AB3ADC64B1C9C34BB990BA811472BD6 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.OnBlendOut_7AB3ADC64B1C9C34BB990BA811472BD6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::OnBlendOut_7AB3ADC64B1C9C34BB990BA811472BD6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "OnBlendOut_7AB3ADC64B1C9C34BB990BA811472BD6");

	Params::Prop_sponge_C_OnBlendOut_7AB3ADC64B1C9C34BB990BA811472BD6 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.OnInterrupted_7AB3ADC64B1C9C34BB990BA811472BD6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::OnInterrupted_7AB3ADC64B1C9C34BB990BA811472BD6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "OnInterrupted_7AB3ADC64B1C9C34BB990BA811472BD6");

	Params::Prop_sponge_C_OnInterrupted_7AB3ADC64B1C9C34BB990BA811472BD6 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.OnNotifyBegin_7AB3ADC64B1C9C34BB990BA811472BD6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::OnNotifyBegin_7AB3ADC64B1C9C34BB990BA811472BD6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "OnNotifyBegin_7AB3ADC64B1C9C34BB990BA811472BD6");

	Params::Prop_sponge_C_OnNotifyBegin_7AB3ADC64B1C9C34BB990BA811472BD6 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.OnNotifyEnd_7AB3ADC64B1C9C34BB990BA811472BD6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::OnNotifyEnd_7AB3ADC64B1C9C34BB990BA811472BD6(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "OnNotifyEnd_7AB3ADC64B1C9C34BB990BA811472BD6");

	Params::Prop_sponge_C_OnNotifyEnd_7AB3ADC64B1C9C34BB990BA811472BD6 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.OnCompleted_D7F53866450AC44C2E9A9EA70ECE8CE0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::OnCompleted_D7F53866450AC44C2E9A9EA70ECE8CE0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "OnCompleted_D7F53866450AC44C2E9A9EA70ECE8CE0");

	Params::Prop_sponge_C_OnCompleted_D7F53866450AC44C2E9A9EA70ECE8CE0 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.OnBlendOut_D7F53866450AC44C2E9A9EA70ECE8CE0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::OnBlendOut_D7F53866450AC44C2E9A9EA70ECE8CE0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "OnBlendOut_D7F53866450AC44C2E9A9EA70ECE8CE0");

	Params::Prop_sponge_C_OnBlendOut_D7F53866450AC44C2E9A9EA70ECE8CE0 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.OnInterrupted_D7F53866450AC44C2E9A9EA70ECE8CE0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::OnInterrupted_D7F53866450AC44C2E9A9EA70ECE8CE0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "OnInterrupted_D7F53866450AC44C2E9A9EA70ECE8CE0");

	Params::Prop_sponge_C_OnInterrupted_D7F53866450AC44C2E9A9EA70ECE8CE0 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.OnNotifyBegin_D7F53866450AC44C2E9A9EA70ECE8CE0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::OnNotifyBegin_D7F53866450AC44C2E9A9EA70ECE8CE0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "OnNotifyBegin_D7F53866450AC44C2E9A9EA70ECE8CE0");

	Params::Prop_sponge_C_OnNotifyBegin_D7F53866450AC44C2E9A9EA70ECE8CE0 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.OnNotifyEnd_D7F53866450AC44C2E9A9EA70ECE8CE0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::OnNotifyEnd_D7F53866450AC44C2E9A9EA70ECE8CE0(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "OnNotifyEnd_D7F53866450AC44C2E9A9EA70ECE8CE0");

	Params::Prop_sponge_C_OnNotifyEnd_D7F53866450AC44C2E9A9EA70ECE8CE0 Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.wash
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Replace                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Sub                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   FloatOut                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         Param_Dynmat                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Size                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::Wash(float Replace, float Sub, float* FloatOut, class UMaterialInstanceDynamic** Param_Dynmat, float* Param_Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "wash");

	Params::Prop_sponge_C_Wash Parms{};

	Parms.Replace = Replace;
	Parms.Sub = Sub;

	UObject::ProcessEvent(Func, &Parms);

	if (FloatOut != nullptr)
		*FloatOut = Parms.FloatOut;

	if (Param_Dynmat != nullptr)
		*Param_Dynmat = Parms.Param_Dynmat;

	if (Param_Size != nullptr)
		*Param_Size = Parms.Param_Size;
}


// Function prop_sponge.prop_sponge_C.playerHandUse_LMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::PlayerHandUse_LMB(class AMainPlayer_C* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "playerHandUse_LMB");

	Params::Prop_sponge_C_PlayerHandUse_LMB Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.playerHandRelease_RMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::PlayerHandRelease_RMB(class AMainPlayer_C* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "playerHandRelease_RMB");

	Params::Prop_sponge_C_PlayerHandRelease_RMB Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.playerHandUse_RMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::PlayerHandUse_RMB(class AMainPlayer_C* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "playerHandUse_RMB");

	Params::Prop_sponge_C_PlayerHandUse_RMB Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.enterWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWaterVolume_C*                   Water                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_sponge_C::EnterWater(class AWaterVolume_C* Water)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "enterWater");

	Params::Prop_sponge_C_EnterWater Parms{};

	Parms.Water = Water;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_sponge.prop_sponge_C.enteredTheWater
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_sponge_C::EnteredTheWater()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_sponge_C", "enteredTheWater");

	UObject::ProcessEvent(Func, nullptr);
}

}

