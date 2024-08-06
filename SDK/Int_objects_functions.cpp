#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Int_objects

#include "Basic.hpp"

#include "Int_objects_classes.hpp"
#include "Int_objects_parameters.hpp"


namespace SDK
{

// Function int_objects.int_objects_C.ImpactDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Impact                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::ImpactDamage(float Damage, const struct FHitResult& Hit, class AActor* Actor, const struct FVector& Impact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "ImpactDamage");

	Params::Int_objects_C_ImpactDamage Parms{};

	Parms.Damage = Damage;
	Parms.Hit = std::move(Hit);
	Parms.Actor = Actor;
	Parms.Impact = std::move(Impact);

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.toolboxFix
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_toolbox_C*                  Toolbox                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_objects_C::ToolboxFix(class AProp_toolbox_C* Toolbox, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "toolboxFix");

	Params::Int_objects_C_ToolboxFix Parms{};

	Parms.Toolbox = Toolbox;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function int_objects.int_objects_C.GetKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Key                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void IInt_objects_C::GetKey(class FString* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "GetKey");

	Params::Int_objects_C_GetKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);
}


// Function int_objects.int_objects_C.enterWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWaterVolume_C*                   Water                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::EnterWater(class AWaterVolume_C* Water)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "enterWater");

	Params::Int_objects_C_EnterWater Parms{};

	Parms.Water = Water;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.leaveWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWaterVolume_C*                   Water                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::LeaveWater(class AWaterVolume_C* Water)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "leaveWater");

	Params::Int_objects_C_LeaveWater Parms{};

	Parms.Water = Water;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.enterWaterOrigin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWaterVolume_C*                   Water                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::EnterWaterOrigin(class AWaterVolume_C* Water)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "enterWaterOrigin");

	Params::Int_objects_C_EnterWaterOrigin Parms{};

	Parms.Water = Water;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.leaveWaterOrigin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWaterVolume_C*                   Water                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::LeaveWaterOrigin(class AWaterVolume_C* Water)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "leaveWaterOrigin");

	Params::Int_objects_C_LeaveWaterOrigin Parms{};

	Parms.Water = Water;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.eaten
// (Public, BlueprintCallable, BlueprintEvent)

void IInt_objects_C::Eaten()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "eaten");

	UObject::ProcessEvent(Func, nullptr);
}


// Function int_objects.int_objects_C.virus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_objects_C::Virus(bool Activate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "virus");

	Params::Int_objects_C_Virus Parms{};

	Parms.Activate = Activate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.setPropProps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Static                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Frozen                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_objects_C::SetPropProps(bool Static, bool Frozen, bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "setPropProps");

	Params::Int_objects_C_SetPropProps Parms{};

	Parms.Static = Static;
	Parms.Frozen = Frozen;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.addDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          Impact                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipSetting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_objects_C::AddDamage(class AActor* Actor, float Damage, const struct FHitResult& Hit, const struct FVector& Impact, bool SkipSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "addDamage");

	Params::Int_objects_C_AddDamage Parms{};

	Parms.Actor = Actor;
	Parms.Damage = Damage;
	Parms.Hit = std::move(Hit);
	Parms.Impact = std::move(Impact);
	Parms.SkipSetting = SkipSetting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.canBeUsedHold
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_objects_C::CanBeUsedHold(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "canBeUsedHold");

	Params::Int_objects_C_CanBeUsedHold Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function int_objects.int_objects_C.setKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IInt_objects_C::SetKey(const class FString& Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "setKey");

	Params::Int_objects_C_SetKey Parms{};

	Parms.Key = std::move(Key);

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.processKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_objects_C::ProcessKeys(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "processKeys");

	Params::Int_objects_C_ProcessKeys Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function int_objects.int_objects_C.getOnlyKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Key                                                    (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void IInt_objects_C::GetOnlyKey(class FString* Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "getOnlyKey");

	Params::Int_objects_C_GetOnlyKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Key != nullptr)
		*Key = std::move(Parms.Key);
}


// Function int_objects.int_objects_C.physDestroyed
// (Public, BlueprintCallable, BlueprintEvent)

void IInt_objects_C::PhysDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "physDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function int_objects.int_objects_C.physPreDestroyed
// (Public, BlueprintCallable, BlueprintEvent)

void IInt_objects_C::PhysPreDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "physPreDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function int_objects.int_objects_C.digUp
// (Public, BlueprintCallable, BlueprintEvent)

void IInt_objects_C::DigUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "digUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function int_objects.int_objects_C.unhook
// (Public, BlueprintCallable, BlueprintEvent)

void IInt_objects_C::Unhook()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "unhook");

	UObject::ProcessEvent(Func, nullptr);
}


// Function int_objects.int_objects_C.setPath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  Path                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_objects_C::SetPath(const TArray<struct FVector>& Path, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "setPath");

	Params::Int_objects_C_SetPath Parms{};

	Parms.Path = std::move(Path);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function int_objects.int_objects_C.steppedOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void IInt_objects_C::SteppedOn(class AMainPlayer_C* Player, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "steppedOn");

	Params::Int_objects_C_SteppedOn Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.fireDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::FireDamage(float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "fireDamage");

	Params::Int_objects_C_FireDamage Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.ignite
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Fuel                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::Ignite(float Fuel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "ignite");

	Params::Int_objects_C_Ignite Parms{};

	Parms.Fuel = Fuel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.microwave
// (Public, BlueprintCallable, BlueprintEvent)

void IInt_objects_C::Microwave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "microwave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function int_objects.int_objects_C.receivedPhyiscsDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void IInt_objects_C::ReceivedPhyiscsDamage(float Damage, const struct FHitResult& Hot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "receivedPhyiscsDamage");

	Params::Int_objects_C_ReceivedPhyiscsDamage Parms{};

	Parms.Damage = Damage;
	Parms.Hot = std::move(Hot);

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.getActionOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   Options                                                (Parm, OutParm)
// TArray<Enum_interactionActions>         Options_enum                                           (Parm, OutParm)
// TArray<class FText>                     OptionsNamesOverlay                                    (Parm, OutParm)
// uint8                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "getActionOptions");

	Params::Int_objects_C_GetActionOptions Parms{};

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


// Function int_objects.int_objects_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "actionOptionIndex");

	Params::Int_objects_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.playerHandUse_RMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::PlayerHandUse_RMB(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "playerHandUse_RMB");

	Params::Int_objects_C_PlayerHandUse_RMB Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.playerHandUse_LMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::PlayerHandUse_LMB(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "playerHandUse_LMB");

	Params::Int_objects_C_PlayerHandUse_LMB Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.exploded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::Exploded(float Damage, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "exploded");

	Params::Int_objects_C_Exploded Parms{};

	Parms.Damage = Damage;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.extinguishFire
// (Public, BlueprintCallable, BlueprintEvent)

void IInt_objects_C::ExtinguishFire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "extinguishFire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function int_objects.int_objects_C.playerHandRelease_RMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::PlayerHandRelease_RMB(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "playerHandRelease_RMB");

	Params::Int_objects_C_PlayerHandRelease_RMB Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.playerHandRelease_LMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::PlayerHandRelease_LMB(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "playerHandRelease_LMB");

	Params::Int_objects_C_PlayerHandRelease_LMB Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.playerHandMouseWheel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   WheelDelta                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::PlayerHandMouseWheel(class AMainPlayer_C* Player, float WheelDelta)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "playerHandMouseWheel");

	Params::Int_objects_C_PlayerHandMouseWheel Parms{};

	Parms.Player = Player;
	Parms.WheelDelta = WheelDelta;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.playerHandMouse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Mouse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::PlayerHandMouse(class AMainPlayer_C* Player, const struct FVector2D& Mouse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "playerHandMouse");

	Params::Int_objects_C_PlayerHandMouse Parms{};

	Parms.Player = Player;
	Parms.Mouse = std::move(Mouse);

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.playerHandAnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Pressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_objects_C::PlayerHandAnyKey(class AMainPlayer_C* Player, const struct FKey& Key, bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "playerHandAnyKey");

	Params::Int_objects_C_PlayerHandAnyKey Parms{};

	Parms.Player = Player;
	Parms.Key = std::move(Key);
	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.microwaveElec
// (Public, BlueprintCallable, BlueprintEvent)

void IInt_objects_C::MicrowaveElec()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "microwaveElec");

	UObject::ProcessEvent(Func, nullptr);
}


// Function int_objects.int_objects_C.addTemperature
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Temperature                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::AddTemperature(float Temperature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "addTemperature");

	Params::Int_objects_C_AddTemperature Parms{};

	Parms.Temperature = Temperature;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.accumulateTemperature
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Temperature                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Speed                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::AccumulateTemperature(float Temperature, float Speed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "accumulateTemperature");

	Params::Int_objects_C_AccumulateTemperature Parms{};

	Parms.Temperature = Temperature;
	Parms.Speed = Speed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.ActionName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void IInt_objects_C::ActionName(class AMainPlayer_C* Player, const struct FHitResult& Hit, const class FString& Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "ActionName");

	Params::Int_objects_C_ActionName Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);
	Parms.Param_Name = std::move(Param_Name);

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.stepped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Volume                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::Stepped(float Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "stepped");

	Params::Int_objects_C_Stepped Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.playerLookAway
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::PlayerLookAway(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "playerLookAway");

	Params::Int_objects_C_PlayerLookAway Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.reachedByExplosion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::ReachedByExplosion(const struct FVector& Location, float Damage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "reachedByExplosion");

	Params::Int_objects_C_ReachedByExplosion Parms{};

	Parms.Location = std::move(Location);
	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.bitten
// (Public, BlueprintCallable, BlueprintEvent)

void IInt_objects_C::bitten()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "bitten");

	UObject::ProcessEvent(Func, nullptr);
}


// Function int_objects.int_objects_C.slice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Clean                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_objects_C::Slice(bool Clean)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "slice");

	Params::Int_objects_C_Slice Parms{};

	Parms.Clean = Clean;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.gascanFuel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_gascan_C*                   Gascan                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Fueled                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_objects_C::GascanFuel(class AProp_gascan_C* Gascan, bool* Fueled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "gascanFuel");

	Params::Int_objects_C_GascanFuel Parms{};

	Parms.Gascan = Gascan;

	UObject::ProcessEvent(Func, &Parms);

	if (Fueled != nullptr)
		*Fueled = Parms.Fueled;
}


// Function int_objects.int_objects_C.playerUsedOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void IInt_objects_C::PlayerUsedOn(class AMainPlayer_C* Player, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "playerUsedOn");

	Params::Int_objects_C_PlayerUsedOn Parms{};

	Parms.Player = Player;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.attemptIgnite
// (Public, BlueprintCallable, BlueprintEvent)

void IInt_objects_C::AttemptIgnite()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "attemptIgnite");

	UObject::ProcessEvent(Func, nullptr);
}


// Function int_objects.int_objects_C.hooked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHook_C*                          Hook                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::Hooked(class AHook_C* Hook)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "hooked");

	Params::Int_objects_C_Hooked Parms{};

	Parms.Hook = Hook;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.skipRadial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Skip                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IInt_objects_C::SkipRadial(bool* Skip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "skipRadial");

	Params::Int_objects_C_SkipRadial Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Skip != nullptr)
		*Skip = Parms.Skip;
}


// Function int_objects.int_objects_C.crafted
// (Public, BlueprintCallable, BlueprintEvent)

void IInt_objects_C::Crafted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "crafted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function int_objects.int_objects_C.cleanSponge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Clean                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::CleanSponge(float Clean, class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "cleanSponge");

	Params::Int_objects_C_CleanSponge Parms{};

	Parms.Clean = Clean;
	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.hookTension
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHook_C*                          Hook                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::HookTension(class AHook_C* Hook)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "hookTension");

	Params::Int_objects_C_HookTension Parms{};

	Parms.Hook = Hook;

	UObject::ProcessEvent(Func, &Parms);
}


// Function int_objects.int_objects_C.getPriceMultiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   PriceMult                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IInt_objects_C::GetPriceMultiplier(float* PriceMult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("int_objects_C", "getPriceMultiplier");

	Params::Int_objects_C_GetPriceMultiplier Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PriceMult != nullptr)
		*PriceMult = Parms.PriceMult;
}

}

