#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wire

#include "Basic.hpp"

#include "Wire_classes.hpp"
#include "Wire_parameters.hpp"


namespace SDK
{

// Function wire.wire_C.ExecuteUbergraph_wire
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::ExecuteUbergraph_wire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "ExecuteUbergraph_wire");

	Params::Wire_C_ExecuteUbergraph_wire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AWire_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function wire.wire_C.resetPass
// (BlueprintCallable, BlueprintEvent)

void AWire_C::ResetPass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "resetPass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function wire.wire_C.destB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::DestB(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "destB");

	Params::Wire_C_DestB Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.destA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::DestA(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "destA");

	Params::Wire_C_DestA Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.destPass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::DestPass(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "destPass");

	Params::Wire_C_DestPass Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.Init
// (BlueprintCallable, BlueprintEvent)

void AWire_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function wire.wire_C.pass
// (BlueprintCallable, BlueprintEvent)

void AWire_C::Pass()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "pass");

	UObject::ProcessEvent(Func, nullptr);
}


// Function wire.wire_C.playerR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::PlayerR(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "playerR");

	Params::Wire_C_PlayerR Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.playerHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::PlayerHold(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "playerHold");

	Params::Wire_C_PlayerHold Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.playerUnequip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::PlayerUnequip(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "playerUnequip");

	Params::Wire_C_PlayerUnequip Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.updateStrAgl
// (Public, BlueprintCallable, BlueprintEvent)

void AWire_C::UpdateStrAgl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "updateStrAgl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function wire.wire_C.damageByPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::DamageByPlayer(class AMainPlayer_C* Player, const struct FHitResult& Hit, float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "damageByPlayer");

	Params::Wire_C_DamageByPlayer Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);
	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.thrown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::Thrown(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "thrown");

	Params::Wire_C_Thrown Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.broken_fire
// (Public, BlueprintCallable, BlueprintEvent)

void AWire_C::broken_fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "broken_fire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function wire.wire_C.broken
// (Public, BlueprintCallable, BlueprintEvent)

void AWire_C::broken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "broken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function wire.wire_C.sendName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::SendName(class FName Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "sendName");

	Params::Wire_C_SendName Parms{};

	Parms.Param_Name = Param_Name;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.kicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Kick                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWire_C::Kicked(bool Kick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "kicked");

	Params::Wire_C_Kicked Parms{};

	Parms.Kick = Kick;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.player_use
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AWire_C::Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "player_use");

	Params::Wire_C_Player_use Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.driveDetached
// (Public, BlueprintCallable, BlueprintEvent)

void AWire_C::DriveDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "driveDetached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function wire.wire_C.attach_a
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::Attach_a(const struct FHitResult& Hit, class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "attach_a");

	Params::Wire_C_Attach_a Parms{};

	Parms.Hit = std::move(Hit);
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.attach_b
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::Attach_b(const struct FHitResult& Hit, class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "attach_b");

	Params::Wire_C_Attach_b Parms{};

	Parms.Hit = std::move(Hit);
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.canBePutInContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWire_C::CanBePutInContainer(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "canBePutInContainer");

	Params::Wire_C_CanBePutInContainer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function wire.wire_C.asProp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_C*                          Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::AsProp(class AProp_C** Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "asProp");

	Params::Wire_C_AsProp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function wire.wire_C.canPickup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWire_C::CanPickup(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "canPickup");

	Params::Wire_C_CanPickup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function wire.wire_C.noRespawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_NoRespawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWire_C::NoRespawn(bool Param_NoRespawn, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "noRespawn");

	Params::Wire_C_NoRespawn Parms{};

	Parms.Param_NoRespawn = Param_NoRespawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function wire.wire_C.lookAt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Text                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              boundObjectReplace                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "lookAt");

	Params::Wire_C_LookAt Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (boundObjectReplace != nullptr)
		*boundObjectReplace = Parms.boundObjectReplace;

	if (Number != nullptr)
		*Number = Parms.Number;
}


// Function wire.wire_C.isButtonUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Failed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWire_C::IsButtonUsed(bool* Failed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "isButtonUsed");

	Params::Wire_C_IsButtonUsed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Failed != nullptr)
		*Failed = Parms.Failed;
}


// Function wire.wire_C.landedOn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnoreFallDamage                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWire_C::LandedOn(class AMainPlayer_C* Player, bool* IgnoreFallDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "landedOn");

	Params::Wire_C_LandedOn Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (IgnoreFallDamage != nullptr)
		*IgnoreFallDamage = Parms.IgnoreFallDamage;
}


// Function wire.wire_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "actionOptionIndex");

	Params::Wire_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function wire.wire_C.ignoreSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IgnoreSave                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWire_C::IgnoreSave(bool* Param_IgnoreSave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "ignoreSave");

	Params::Wire_C_IgnoreSave Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IgnoreSave != nullptr)
		*Param_IgnoreSave = Parms.Param_IgnoreSave;
}


// Function wire.wire_C.skipPreDelete
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Skip                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWire_C::SkipPreDelete(bool* Skip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "skipPreDelete");

	Params::Wire_C_SkipPreDelete Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Skip != nullptr)
		*Skip = Parms.Skip;
}


// Function wire.wire_C.gascanFuel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_gascan_C*                   Gascan                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Fueled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWire_C::GascanFuel(class AProp_gascan_C* Gascan, bool* Fueled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "gascanFuel");

	Params::Wire_C_GascanFuel Parms{};

	Parms.Gascan = Gascan;

	UObject::ProcessEvent(Func, &Parms);

	if (Fueled != nullptr)
		*Fueled = Parms.Fueled;
}


// Function wire.wire_C.getActionOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   Options                                                (Parm, OutParm)
// TArray<Enum_interactionActions>         Options_enum                                           (Parm, OutParm)
// TArray<class FText>                     OptionsNamesOverlay                                    (Parm, OutParm)
// uint8                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWire_C::GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "getActionOptions");

	Params::Wire_C_GetActionOptions Parms{};

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


// Function wire.wire_C.setPath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  Path                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWire_C::SetPath(const TArray<struct FVector>& Path, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "setPath");

	Params::Wire_C_SetPath Parms{};

	Parms.Path = std::move(Path);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function wire.wire_C.getOnlyKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Key                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void AWire_C::GetOnlyKey(class FString* Param_Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "getOnlyKey");

	Params::Wire_C_GetOnlyKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Key != nullptr)
		*Param_Key = std::move(Parms.Param_Key);
}


// Function wire.wire_C.processKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWire_C::ProcessKeys(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "processKeys");

	Params::Wire_C_ProcessKeys Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function wire.wire_C.canBeUsedHold
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWire_C::CanBeUsedHold(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "canBeUsedHold");

	Params::Wire_C_CanBeUsedHold Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function wire.wire_C.GetKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Key                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void AWire_C::GetKey(class FString* Param_Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "GetKey");

	Params::Wire_C_GetKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Key != nullptr)
		*Param_Key = std::move(Parms.Param_Key);
}


// Function wire.wire_C.toolboxFix
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_toolbox_C*                  Toolbox                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWire_C::ToolboxFix(class AProp_toolbox_C* Toolbox, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wire_C", "toolboxFix");

	Params::Wire_C_ToolboxFix Parms{};

	Parms.Toolbox = Toolbox;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}

}

