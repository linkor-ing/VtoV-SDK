#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: P_kerfus

#include "Basic.hpp"

#include "P_kerfus_classes.hpp"
#include "P_kerfus_parameters.hpp"


namespace SDK
{

// Function p_kerfus.p_kerfus_C.ExecuteUbergraph_p_kerfus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::ExecuteUbergraph_p_kerfus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "ExecuteUbergraph_p_kerfus");

	Params::P_kerfus_C_ExecuteUbergraph_p_kerfus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.possessTimer
// (BlueprintCallable, BlueprintEvent)

void AP_kerfus_C::PossessTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "possessTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function p_kerfus.p_kerfus_C.cordUnplugged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACord_C*                          Cord                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACordSocket_C*                    Socket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::CordUnplugged(class ACord_C* Cord, class ACordSocket_C* Socket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "cordUnplugged");

	Params::P_kerfus_C_CordUnplugged Parms{};

	Parms.Cord = Cord;
	Parms.Socket = Socket;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.settingsApplied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_settings                 Settings                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::SettingsApplied(const struct FStruct_settings& Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "settingsApplied");

	Params::P_kerfus_C_SettingsApplied Parms{};

	Parms.Settings = std::move(Settings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.ActionName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_Hit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AP_kerfus_C::ActionName(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "ActionName");

	Params::P_kerfus_C_ActionName Parms{};

	Parms.Player = Player;
	Parms.Param_Hit = std::move(Param_Hit);
	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.cordPlugged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACord_C*                          Cord                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACordSocket_C*                    Socket                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::CordPlugged(class ACord_C* Cord, class ACordSocket_C* Socket)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "cordPlugged");

	Params::P_kerfus_C_CordPlugged Parms{};

	Parms.Cord = Cord;
	Parms.Socket = Socket;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.meowAnim
// (BlueprintCallable, BlueprintEvent)

void AP_kerfus_C::MeowAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "meowAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function p_kerfus.p_kerfus_C.runTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_Owner                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::RunTrigger(class AActor* Param_Owner, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "runTrigger");

	Params::P_kerfus_C_RunTrigger Parms{};

	Parms.Param_Owner = Param_Owner;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_Hit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "actionOptionIndex");

	Params::P_kerfus_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Param_Hit = std::move(Param_Hit);
	Parms.Param_Index = Param_Index;
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AP_kerfus_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function p_kerfus.p_kerfus_C.set_ignoreSave_trigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_kerfus_C::Set_ignoreSave_trigger(bool NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "set_ignoreSave_trigger");

	Params::P_kerfus_C_Set_ignoreSave_trigger Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.setActiveTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SentFrom                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Active                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_kerfus_C::SetActiveTrigger(class AActor* SentFrom, bool Param_Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "setActiveTrigger");

	Params::P_kerfus_C_SetActiveTrigger Parms{};

	Parms.SentFrom = SentFrom;
	Parms.Param_Active = Param_Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "ReceiveTick");

	Params::P_kerfus_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void AP_kerfus_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function p_kerfus.p_kerfus_C.Task
// (BlueprintCallable, BlueprintEvent)

void AP_kerfus_C::Task()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "Task");

	UObject::ProcessEvent(Func, nullptr);
}


// Function p_kerfus.p_kerfus_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AP_kerfus_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function p_kerfus.p_kerfus_C.OnCompleted_B4D86F6844FB2B9300F777A94A2F493A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::OnCompleted_B4D86F6844FB2B9300F777A94A2F493A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "OnCompleted_B4D86F6844FB2B9300F777A94A2F493A");

	Params::P_kerfus_C_OnCompleted_B4D86F6844FB2B9300F777A94A2F493A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.OnBlendOut_B4D86F6844FB2B9300F777A94A2F493A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::OnBlendOut_B4D86F6844FB2B9300F777A94A2F493A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "OnBlendOut_B4D86F6844FB2B9300F777A94A2F493A");

	Params::P_kerfus_C_OnBlendOut_B4D86F6844FB2B9300F777A94A2F493A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.OnInterrupted_B4D86F6844FB2B9300F777A94A2F493A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::OnInterrupted_B4D86F6844FB2B9300F777A94A2F493A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "OnInterrupted_B4D86F6844FB2B9300F777A94A2F493A");

	Params::P_kerfus_C_OnInterrupted_B4D86F6844FB2B9300F777A94A2F493A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.OnNotifyBegin_B4D86F6844FB2B9300F777A94A2F493A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::OnNotifyBegin_B4D86F6844FB2B9300F777A94A2F493A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "OnNotifyBegin_B4D86F6844FB2B9300F777A94A2F493A");

	Params::P_kerfus_C_OnNotifyBegin_B4D86F6844FB2B9300F777A94A2F493A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.OnNotifyEnd_B4D86F6844FB2B9300F777A94A2F493A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::OnNotifyEnd_B4D86F6844FB2B9300F777A94A2F493A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "OnNotifyEnd_B4D86F6844FB2B9300F777A94A2F493A");

	Params::P_kerfus_C_OnNotifyEnd_B4D86F6844FB2B9300F777A94A2F493A Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.OnSuccess_5969D59A41F71A16D1989893F49E8CE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::OnSuccess_5969D59A41F71A16D1989893F49E8CE4(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "OnSuccess_5969D59A41F71A16D1989893F49E8CE4");

	Params::P_kerfus_C_OnSuccess_5969D59A41F71A16D1989893F49E8CE4 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.OnFail_5969D59A41F71A16D1989893F49E8CE4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::OnFail_5969D59A41F71A16D1989893F49E8CE4(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "OnFail_5969D59A41F71A16D1989893F49E8CE4");

	Params::P_kerfus_C_OnFail_5969D59A41F71A16D1989893F49E8CE4 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.TargetActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Param_PossessLoc                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* AP_kerfus_C::TargetActor(struct FVector* Param_PossessLoc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "TargetActor");

	Params::P_kerfus_C_TargetActor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_PossessLoc != nullptr)
		*Param_PossessLoc = std::move(Parms.Param_PossessLoc);

	return Parms.ReturnValue;
}


// Function p_kerfus.p_kerfus_C.findBrokenServer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AP_kerfus_C::FindBrokenServer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "findBrokenServer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function p_kerfus.p_kerfus_C.upd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    SkipFace                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_kerfus_C::Upd(bool SkipFace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "upd");

	Params::P_kerfus_C_Upd Parms{};

	Parms.SkipFace = SkipFace;

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.canBePutInContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_kerfus_C::CanBePutInContainer(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "canBePutInContainer");

	Params::P_kerfus_C_CanBePutInContainer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function p_kerfus.p_kerfus_C.asProp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_C*                          Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::AsProp(class AProp_C** Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "asProp");

	Params::P_kerfus_C_AsProp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function p_kerfus.p_kerfus_C.canPickup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_kerfus_C::CanPickup(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "canPickup");

	Params::P_kerfus_C_CanPickup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function p_kerfus.p_kerfus_C.noRespawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_NoRespawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_kerfus_C::NoRespawn(bool Param_NoRespawn, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "noRespawn");

	Params::P_kerfus_C_NoRespawn Parms{};

	Parms.Param_NoRespawn = Param_NoRespawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function p_kerfus.p_kerfus_C.lookAt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_Hit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Text                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              boundObjectReplace                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "lookAt");

	Params::P_kerfus_C_LookAt Parms{};

	Parms.Player = Player;
	Parms.Param_Hit = std::move(Param_Hit);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (boundObjectReplace != nullptr)
		*boundObjectReplace = Parms.boundObjectReplace;
}


// Function p_kerfus.p_kerfus_C.isButtonUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Failed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_kerfus_C::IsButtonUsed(bool* Failed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "isButtonUsed");

	Params::P_kerfus_C_IsButtonUsed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Failed != nullptr)
		*Failed = Parms.Failed;
}


// Function p_kerfus.p_kerfus_C.canBeUsedHold
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_kerfus_C::CanBeUsedHold(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "canBeUsedHold");

	Params::P_kerfus_C_CanBeUsedHold Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function p_kerfus.p_kerfus_C.GetKey
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Key                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void AP_kerfus_C::GetKey(class FString* Param_Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "GetKey");

	Params::P_kerfus_C_GetKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Key != nullptr)
		*Param_Key = std::move(Parms.Param_Key);
}


// Function p_kerfus.p_kerfus_C.toolboxFix
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_toolbox_C*                  Toolbox                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_kerfus_C::ToolboxFix(class AProp_toolbox_C* Toolbox, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "toolboxFix");

	Params::P_kerfus_C_ToolboxFix Parms{};

	Parms.Toolbox = Toolbox;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function p_kerfus.p_kerfus_C.ignoreSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IgnoreSave                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_kerfus_C::IgnoreSave(bool* Param_IgnoreSave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "ignoreSave");

	Params::P_kerfus_C_IgnoreSave Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IgnoreSave != nullptr)
		*Param_IgnoreSave = Parms.Param_IgnoreSave;
}


// Function p_kerfus.p_kerfus_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_kerfus_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "loadData");

	Params::P_kerfus_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function p_kerfus.p_kerfus_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AP_kerfus_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "getData");

	Params::P_kerfus_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function p_kerfus.p_kerfus_C.dreamInv
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_save>             Invv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ADreamBase_C*                     Base                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "dreamInv");

	Params::P_kerfus_C_DreamInv Parms{};

	Parms.Invv = std::move(Invv);

	UObject::ProcessEvent(Func, &Parms);

	Invv = std::move(Parms.Invv);

	if (Base != nullptr)
		*Base = Parms.Base;
}


// Function p_kerfus.p_kerfus_C.Possess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Param_PossessLoc                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AP_kerfus_C::Possess(const struct FVector& Param_PossessLoc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "Possess");

	Params::P_kerfus_C_Possess Parms{};

	Parms.Param_PossessLoc = std::move(Param_PossessLoc);

	UObject::ProcessEvent(Func, &Parms);
}


// Function p_kerfus.p_kerfus_C.loccccccc
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector AP_kerfus_C::Loccccccc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "loccccccc");

	Params::P_kerfus_C_Loccccccc Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function p_kerfus.p_kerfus_C.getActionOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   Options                                                (Parm, OutParm)
// TArray<Enum_interactionActions>         Options_enum                                           (Parm, OutParm)
// TArray<class FText>                     OptionsNamesOverlay                                    (Parm, OutParm)

void AP_kerfus_C::GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "getActionOptions");

	Params::P_kerfus_C_GetActionOptions Parms{};

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
}


// Function p_kerfus.p_kerfus_C.ignoreSave_trigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ignore                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_kerfus_C::IgnoreSave_trigger(bool* Ignore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "ignoreSave_trigger");

	Params::P_kerfus_C_IgnoreSave_trigger Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ignore != nullptr)
		*Ignore = Parms.Ignore;
}


// Function p_kerfus.p_kerfus_C.loadTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AP_kerfus_C::LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "loadTriggerData");

	Params::P_kerfus_C_LoadTriggerData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function p_kerfus.p_kerfus_C.getTriggerData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_triggerSave              Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AP_kerfus_C::GetTriggerData(struct FStruct_triggerSave* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("p_kerfus_C", "getTriggerData");

	Params::P_kerfus_C_GetTriggerData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}

}

