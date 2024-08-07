#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_corkboard

#include "Basic.hpp"

#include "Prop_corkboard_classes.hpp"
#include "Prop_corkboard_parameters.hpp"


namespace SDK
{

// Function prop_corkboard.prop_corkboard_C.ExecuteUbergraph_prop_corkboard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_corkboard_C::ExecuteUbergraph_prop_corkboard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_corkboard_C", "ExecuteUbergraph_prop_corkboard");

	Params::Prop_corkboard_C_ExecuteUbergraph_prop_corkboard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_corkboard.prop_corkboard_C.forceStick
// (BlueprintCallable, BlueprintEvent)

void AProp_corkboard_C::ForceStick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_corkboard_C", "forceStick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_corkboard.prop_corkboard_C.sticking
// (BlueprintCallable, BlueprintEvent)

void AProp_corkboard_C::Sticking()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_corkboard_C", "sticking");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_corkboard.prop_corkboard_C.a__UpdateFunc
// (BlueprintEvent)

void AProp_corkboard_C::A__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_corkboard_C", "a__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_corkboard.prop_corkboard_C.a__FinishedFunc
// (BlueprintEvent)

void AProp_corkboard_C::A__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_corkboard_C", "a__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_corkboard.prop_corkboard_C.tryStick
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       OutHit                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProp_corkboard_C::TryStick(struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_corkboard_C", "tryStick");

	Params::Prop_corkboard_C_TryStick Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);
}


// Function prop_corkboard.prop_corkboard_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_Hit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_corkboard_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_corkboard_C", "actionOptionIndex");

	Params::Prop_corkboard_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Param_Hit = std::move(Param_Hit);
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_corkboard.prop_corkboard_C.setPropProps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Static                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Param_Frozen                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_corkboard_C::SetPropProps(bool Param_Static, bool Param_Frozen, bool Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_corkboard_C", "setPropProps");

	Params::Prop_corkboard_C_SetPropProps Parms{};

	Parms.Param_Static = Param_Static;
	Parms.Param_Frozen = Param_Frozen;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_corkboard.prop_corkboard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_corkboard_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_corkboard_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_corkboard.prop_corkboard_C.lookAt
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_Hit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Text                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              boundObjectReplace                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_corkboard_C::LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_corkboard_C", "lookAt");

	Params::Prop_corkboard_C_LookAt Parms{};

	Parms.Player = Player;
	Parms.Param_Hit = std::move(Param_Hit);

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


// Function prop_corkboard.prop_corkboard_C.getActionOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   Options                                                (Parm, OutParm)
// TArray<Enum_interactionActions>         Options_enum                                           (Parm, OutParm)
// TArray<class FText>                     OptionsNamesOverlay                                    (Parm, OutParm)
// uint8                                   Number                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_corkboard_C::GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_corkboard_C", "getActionOptions");

	Params::Prop_corkboard_C_GetActionOptions Parms{};

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

