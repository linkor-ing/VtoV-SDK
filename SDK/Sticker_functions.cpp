#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sticker

#include "Basic.hpp"

#include "Sticker_classes.hpp"
#include "Sticker_parameters.hpp"


namespace SDK
{

// Function sticker.sticker_C.ExecuteUbergraph_sticker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASticker_C::ExecuteUbergraph_sticker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "ExecuteUbergraph_sticker");

	Params::Sticker_C_ExecuteUbergraph_sticker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function sticker.sticker_C.D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASticker_C::D(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "D");

	Params::Sticker_C_D Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function sticker.sticker_C.assignDest
// (BlueprintCallable, BlueprintEvent)

void ASticker_C::AssignDest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "assignDest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ASticker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void ASticker_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.updateStrAgl
// (Public, BlueprintCallable, BlueprintEvent)

void ASticker_C::UpdateStrAgl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "updateStrAgl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.damageByPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASticker_C::DamageByPlayer(class AMainPlayer_C* Player, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "damageByPlayer");

	Params::Sticker_C_DamageByPlayer Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function sticker.sticker_C.thrown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASticker_C::Thrown(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "thrown");

	Params::Sticker_C_Thrown Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function sticker.sticker_C.broken_fire
// (Public, BlueprintCallable, BlueprintEvent)

void ASticker_C::broken_fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "broken_fire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.broken
// (Public, BlueprintCallable, BlueprintEvent)

void ASticker_C::broken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "broken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.sendName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASticker_C::SendName(class FName Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "sendName");

	Params::Sticker_C_SendName Parms{};

	Parms.Param_Name = Param_Name;

	UObject::ProcessEvent(Func, &Parms);
}


// Function sticker.sticker_C.kicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Kick                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASticker_C::Kicked(bool Kick)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "kicked");

	Params::Sticker_C_Kicked Parms{};

	Parms.Kick = Kick;

	UObject::ProcessEvent(Func, &Parms);
}


// Function sticker.sticker_C.player_use
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ASticker_C::Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "player_use");

	Params::Sticker_C_Player_use Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function sticker.sticker_C.driveDetached
// (Public, BlueprintCallable, BlueprintEvent)

void ASticker_C::DriveDetached()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "driveDetached");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.applyColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASticker_C::ApplyColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "applyColor");

	Params::Sticker_C_ApplyColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function sticker.sticker_C.propRenderer_finishProps
// (Public, BlueprintCallable, BlueprintEvent)

void ASticker_C::PropRenderer_finishProps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "propRenderer_finishProps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.gamemodeMakeKeys
// (Public, BlueprintCallable, BlueprintEvent)

void ASticker_C::GamemodeMakeKeys()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "gamemodeMakeKeys");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.AnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Param_Key                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Pressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASticker_C::AnyKey(const struct FKey& Param_Key, bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "AnyKey");

	Params::Sticker_C_AnyKey Parms{};

	Parms.Param_Key = std::move(Param_Key);
	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function sticker.sticker_C.gamemodePreLoad
// (Public, BlueprintCallable, BlueprintEvent)

void ASticker_C::GamemodePreLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "gamemodePreLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.unfocused
// (Public, BlueprintCallable, BlueprintEvent)

void ASticker_C::Unfocused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "unfocused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.settingsApplied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_settings                 Settings                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASticker_C::SettingsApplied(const struct FStruct_settings& Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "settingsApplied");

	Params::Sticker_C_SettingsApplied Parms{};

	Parms.Settings = std::move(Settings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function sticker.sticker_C.unfoc
// (Public, BlueprintCallable, BlueprintEvent)

void ASticker_C::Unfoc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "unfoc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.stuffUpgraded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainGamemode_C*                  GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASticker_C::StuffUpgraded(class AMainGamemode_C* GameMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "stuffUpgraded");

	Params::Sticker_C_StuffUpgraded Parms{};

	Parms.GameMode = GameMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function sticker.sticker_C.signalSaved
// (Public, BlueprintCallable, BlueprintEvent)

void ASticker_C::SignalSaved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "signalSaved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.signalDeleted
// (Public, BlueprintCallable, BlueprintEvent)

void ASticker_C::SignalDeleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "signalDeleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.setPoster
// (Public, BlueprintCallable, BlueprintEvent)

void ASticker_C::SetPoster()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "setPoster");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.canBePutInContainer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASticker_C::CanBePutInContainer(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "canBePutInContainer");

	Params::Sticker_C_CanBePutInContainer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function sticker.sticker_C.asProp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_C*                          Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASticker_C::AsProp(class AProp_C** Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "asProp");

	Params::Sticker_C_AsProp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function sticker.sticker_C.canPickup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASticker_C::CanPickup(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "canPickup");

	Params::Sticker_C_CanPickup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function sticker.sticker_C.noRespawn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_NoRespawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASticker_C::NoRespawn(bool Param_NoRespawn, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "noRespawn");

	Params::Sticker_C_NoRespawn Parms{};

	Parms.Param_NoRespawn = Param_NoRespawn;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function sticker.sticker_C.lookAt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Text                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              boundObjectReplace                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASticker_C::LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "lookAt");

	Params::Sticker_C_LookAt Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (boundObjectReplace != nullptr)
		*boundObjectReplace = Parms.boundObjectReplace;
}


// Function sticker.sticker_C.isButtonUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Failed                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASticker_C::IsButtonUsed(bool* Failed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "isButtonUsed");

	Params::Sticker_C_IsButtonUsed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Failed != nullptr)
		*Failed = Parms.Failed;
}


// Function sticker.sticker_C.dreamInv
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_save>             Invv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ADreamBase_C*                     Base                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASticker_C::DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "dreamInv");

	Params::Sticker_C_DreamInv Parms{};

	Parms.Invv = std::move(Invv);

	UObject::ProcessEvent(Func, &Parms);

	Invv = std::move(Parms.Invv);

	if (Base != nullptr)
		*Base = Parms.Base;
}


// Function sticker.sticker_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASticker_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, int32 Param_Index, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "actionOptionIndex");

	Params::Sticker_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);
	Parms.Param_Index = Param_Index;
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function sticker.sticker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASticker_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function sticker.sticker_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASticker_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "loadData");

	Params::Sticker_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function sticker.sticker_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void ASticker_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "getData");

	Params::Sticker_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function sticker.sticker_C.processKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ASticker_C::ProcessKeys(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "processKeys");

	Params::Sticker_C_ProcessKeys Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function sticker.sticker_C.getActionOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_Actor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   Options                                                (Parm, OutParm)
// TArray<Enum_interactionActions>         Options_enum                                           (Parm, OutParm)
// TArray<class FText>                     OptionsNamesOverlay                                    (Parm, OutParm)

void ASticker_C::GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Param_Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("sticker_C", "getActionOptions");

	Params::Sticker_C_GetActionOptions Parms{};

	Parms.Player = Player;
	Parms.Component = Component;
	Parms.Param_Actor = Param_Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Options != nullptr)
		*Options = std::move(Parms.Options);

	if (Options_enum != nullptr)
		*Options_enum = std::move(Parms.Options_enum);

	if (OptionsNamesOverlay != nullptr)
		*OptionsNamesOverlay = std::move(Parms.OptionsNamesOverlay);
}

}

