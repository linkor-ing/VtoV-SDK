#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MurderKerfuroDig

#include "Basic.hpp"

#include "MurderKerfuroDig_classes.hpp"
#include "MurderKerfuroDig_parameters.hpp"


namespace SDK
{

// Function murderKerfuroDig.murderKerfuroDig_C.ExecuteUbergraph_murderKerfuroDig
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMurderKerfuroDig_C::ExecuteUbergraph_murderKerfuroDig(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "ExecuteUbergraph_murderKerfuroDig");

	Params::MurderKerfuroDig_C_ExecuteUbergraph_murderKerfuroDig Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function murderKerfuroDig.murderKerfuroDig_C.attemptDigout
// (BlueprintCallable, BlueprintEvent)

void AMurderKerfuroDig_C::AttemptDigout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "attemptDigout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function murderKerfuroDig.murderKerfuroDig_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMurderKerfuroDig_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function murderKerfuroDig.murderKerfuroDig_C.driveDetached
// (Public, BlueprintCallable, BlueprintEvent)

void AMurderKerfuroDig_C::DriveDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "driveDetached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function murderKerfuroDig.murderKerfuroDig_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMurderKerfuroDig_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "actionOptionIndex");

	Params::MurderKerfuroDig_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function murderKerfuroDig.murderKerfuroDig_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMurderKerfuroDig_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "ReceiveTick");

	Params::MurderKerfuroDig_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function murderKerfuroDig.murderKerfuroDig_C.playerR
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMurderKerfuroDig_C::PlayerR(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "playerR");

	Params::MurderKerfuroDig_C_PlayerR Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function murderKerfuroDig.murderKerfuroDig_C.playerHold
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMurderKerfuroDig_C::PlayerHold(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "playerHold");

	Params::MurderKerfuroDig_C_PlayerHold Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function murderKerfuroDig.murderKerfuroDig_C.playerUnequip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMurderKerfuroDig_C::PlayerUnequip(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "playerUnequip");

	Params::MurderKerfuroDig_C_PlayerUnequip Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function murderKerfuroDig.murderKerfuroDig_C.updateStrAgl
// (Public, BlueprintCallable, BlueprintEvent)

void AMurderKerfuroDig_C::UpdateStrAgl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "updateStrAgl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function murderKerfuroDig.murderKerfuroDig_C.damageByPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMurderKerfuroDig_C::DamageByPlayer(class AMainPlayer_C* Player, const struct FHitResult& Hit, float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "damageByPlayer");

	Params::MurderKerfuroDig_C_DamageByPlayer Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);
	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function murderKerfuroDig.murderKerfuroDig_C.thrown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMurderKerfuroDig_C::Thrown(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "thrown");

	Params::MurderKerfuroDig_C_Thrown Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function murderKerfuroDig.murderKerfuroDig_C.broken_fire
// (Public, BlueprintCallable, BlueprintEvent)

void AMurderKerfuroDig_C::broken_fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "broken_fire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function murderKerfuroDig.murderKerfuroDig_C.broken
// (Public, BlueprintCallable, BlueprintEvent)

void AMurderKerfuroDig_C::broken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "broken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function murderKerfuroDig.murderKerfuroDig_C.sendName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMurderKerfuroDig_C::SendName(class FName Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "sendName");

	Params::MurderKerfuroDig_C_SendName Parms{};

	Parms.Param_Name = Param_Name;

	UObject::ProcessEvent(Func, &Parms);
}


// Function murderKerfuroDig.murderKerfuroDig_C.kicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Kick                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMurderKerfuroDig_C::Kicked(bool Kick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "kicked");

	Params::MurderKerfuroDig_C_Kicked Parms{};

	Parms.Kick = Kick;

	UObject::ProcessEvent(Func, &Parms);
}


// Function murderKerfuroDig.murderKerfuroDig_C.player_use
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AMurderKerfuroDig_C::Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "player_use");

	Params::MurderKerfuroDig_C_Player_use Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function murderKerfuroDig.murderKerfuroDig_C.getNextPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Output                                                 (Parm, OutParm, IsPlainOldData, NoDestructor)

void AMurderKerfuroDig_C::GetNextPoint(struct FTransform* Output)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "getNextPoint");

	Params::MurderKerfuroDig_C_GetNextPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);
}


// Function murderKerfuroDig.murderKerfuroDig_C.digOut
// (Public, BlueprintCallable, BlueprintEvent)

void AMurderKerfuroDig_C::DigOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "digOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function murderKerfuroDig.murderKerfuroDig_C.canBePutInContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMurderKerfuroDig_C::CanBePutInContainer(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "canBePutInContainer");

	Params::MurderKerfuroDig_C_CanBePutInContainer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function murderKerfuroDig.murderKerfuroDig_C.asProp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_C*                          Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMurderKerfuroDig_C::AsProp(class AProp_C** Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "asProp");

	Params::MurderKerfuroDig_C_AsProp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function murderKerfuroDig.murderKerfuroDig_C.canPickup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMurderKerfuroDig_C::CanPickup(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "canPickup");

	Params::MurderKerfuroDig_C_CanPickup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function murderKerfuroDig.murderKerfuroDig_C.noRespawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_NoRespawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMurderKerfuroDig_C::NoRespawn(bool Param_NoRespawn, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "noRespawn");

	Params::MurderKerfuroDig_C_NoRespawn Parms{};

	Parms.Param_NoRespawn = Param_NoRespawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function murderKerfuroDig.murderKerfuroDig_C.lookAt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Text                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              boundObjectReplace                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMurderKerfuroDig_C::LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "lookAt");

	Params::MurderKerfuroDig_C_LookAt Parms{};

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


// Function murderKerfuroDig.murderKerfuroDig_C.isButtonUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Failed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMurderKerfuroDig_C::IsButtonUsed(bool* Failed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "isButtonUsed");

	Params::MurderKerfuroDig_C_IsButtonUsed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Failed != nullptr)
		*Failed = Parms.Failed;
}


// Function murderKerfuroDig.murderKerfuroDig_C.landedOn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IgnoreFallDamage                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMurderKerfuroDig_C::LandedOn(class AMainPlayer_C* Player, bool* IgnoreFallDamage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "landedOn");

	Params::MurderKerfuroDig_C_LandedOn Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

	if (IgnoreFallDamage != nullptr)
		*IgnoreFallDamage = Parms.IgnoreFallDamage;
}


// Function murderKerfuroDig.murderKerfuroDig_C.getActionOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   Options                                                (Parm, OutParm)
// TArray<Enum_interactionActions>         Options_enum                                           (Parm, OutParm)
// TArray<class FText>                     OptionsNamesOverlay                                    (Parm, OutParm)
// uint8                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMurderKerfuroDig_C::GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("murderKerfuroDig_C", "getActionOptions");

	Params::MurderKerfuroDig_C_GetActionOptions Parms{};

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

