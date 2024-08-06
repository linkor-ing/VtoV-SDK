#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_rdrone

#include "Basic.hpp"

#include "Prop_rdrone_classes.hpp"
#include "Prop_rdrone_parameters.hpp"


namespace SDK
{

// Function prop_rdrone.prop_rdrone_C.ExecuteUbergraph_prop_rdrone
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rdrone_C::ExecuteUbergraph_prop_rdrone(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "ExecuteUbergraph_prop_rdrone");

	Params::Prop_rdrone_C_ExecuteUbergraph_prop_rdrone Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rdrone.prop_rdrone_C.cordUnplugged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACord_C*                          Cord                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACordSocket_C*                    Socket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rdrone_C::CordUnplugged(class ACord_C* Cord, class ACordSocket_C* Socket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "cordUnplugged");

	Params::Prop_rdrone_C_CordUnplugged Parms{};

	Parms.Cord = Cord;
	Parms.Socket = Socket;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rdrone.prop_rdrone_C.cordPlugged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACord_C*                          Cord                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACordSocket_C*                    Socket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rdrone_C::CordPlugged(class ACord_C* Cord, class ACordSocket_C* Socket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "cordPlugged");

	Params::Prop_rdrone_C_CordPlugged Parms{};

	Parms.Cord = Cord;
	Parms.Socket = Socket;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rdrone.prop_rdrone_C.runTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Owner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rdrone_C::RunTrigger(class AActor* Param_Owner, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "runTrigger");

	Params::Prop_rdrone_C_RunTrigger Parms{};

	Parms.Param_Owner = Param_Owner;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rdrone.prop_rdrone_C.set_ignoreSave_trigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_rdrone_C::Set_ignoreSave_trigger(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "set_ignoreSave_trigger");

	Params::Prop_rdrone_C_Set_ignoreSave_trigger Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rdrone.prop_rdrone_C.setActiveTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SentFrom                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Active                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_rdrone_C::SetActiveTrigger(class AActor* SentFrom, bool Param_Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "setActiveTrigger");

	Params::Prop_rdrone_C_SetActiveTrigger Parms{};

	Parms.SentFrom = SentFrom;
	Parms.Param_Active = Param_Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rdrone.prop_rdrone_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rdrone_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "ReceiveTick");

	Params::Prop_rdrone_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rdrone.prop_rdrone_C.BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_Hit                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProp_rdrone_C::BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Param_Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::Prop_rdrone_C_BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Param_Hit = std::move(Param_Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rdrone.prop_rdrone_C.capture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUmg_laptop_C*                    Lap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rdrone_C::Capture(class UUmg_laptop_C* Lap)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "capture");

	Params::Prop_rdrone_C_Capture Parms{};

	Parms.Lap = Lap;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rdrone.prop_rdrone_C.move
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Forward                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Rot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Up                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rdrone_C::Move(float Forward, float Rot, float Up)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "move");

	Params::Prop_rdrone_C_Move Parms{};

	Parms.Forward = Forward;
	Parms.Rot = Rot;
	Parms.Up = Up;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rdrone.prop_rdrone_C.ALight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_LightActive                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_rdrone_C::ALight(bool Param_LightActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "ALight");

	Params::Prop_rdrone_C_ALight Parms{};

	Parms.Param_LightActive = Param_LightActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rdrone.prop_rdrone_C.upd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_rdrone_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_rdrone.prop_rdrone_C.ignoreSave_trigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ignore                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_rdrone_C::IgnoreSave_trigger(bool* Ignore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "ignoreSave_trigger");

	Params::Prop_rdrone_C_IgnoreSave_trigger Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ignore != nullptr)
		*Ignore = Parms.Ignore;
}


// Function prop_rdrone.prop_rdrone_C.loadTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_rdrone_C::LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "loadTriggerData");

	Params::Prop_rdrone_C_LoadTriggerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function prop_rdrone.prop_rdrone_C.getTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AProp_rdrone_C::GetTriggerData(struct FStruct_triggerSave* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "getTriggerData");

	Params::Prop_rdrone_C_GetTriggerData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function prop_rdrone.prop_rdrone_C.gatherDataFromKeyT
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Gather                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_rdrone_C::GatherDataFromKeyT(bool* Gather)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "gatherDataFromKeyT");

	Params::Prop_rdrone_C_GatherDataFromKeyT Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Gather != nullptr)
		*Gather = Parms.Gather;
}


// Function prop_rdrone.prop_rdrone_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_Hit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rdrone_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "actionOptionIndex");

	Params::Prop_rdrone_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Param_Hit = std::move(Param_Hit);
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_rdrone.prop_rdrone_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AProp_rdrone_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_rdrone.prop_rdrone_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_rdrone_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_rdrone.prop_rdrone_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_rdrone_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "loadData");

	Params::Prop_rdrone_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function prop_rdrone.prop_rdrone_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AProp_rdrone_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "getData");

	Params::Prop_rdrone_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function prop_rdrone.prop_rdrone_C.getActionOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   Options                                                (Parm, OutParm)
// TArray<Enum_interactionActions>         Options_enum                                           (Parm, OutParm)
// TArray<class FText>                     OptionsNamesOverlay                                    (Parm, OutParm)
// uint8                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_rdrone_C::GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_rdrone_C", "getActionOptions");

	Params::Prop_rdrone_C_GetActionOptions Parms{};

	Parms.Player = Player;
	Parms.Component = Component;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Options != nullptr)
		*Options = std::move(Parms.Options);

	if (Options_enum != nullptr)
		*Options_enum = std::move(Parms.Options_enum);

	if (OptionsNamesOverlay != nullptr)
		*OptionsNamesOverlay = std::move(Parms.OptionsNamesOverlay);

	if (Number != nullptr)
		*Number = Parms.Number;
}

}

