#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_glowstick

#include "Basic.hpp"

#include "Prop_glowstick_classes.hpp"
#include "Prop_glowstick_parameters.hpp"


namespace SDK
{

// Function prop_glowstick.prop_glowstick_C.ExecuteUbergraph_prop_glowstick
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_glowstick_C::ExecuteUbergraph_prop_glowstick(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_glowstick_C", "ExecuteUbergraph_prop_glowstick");

	Params::Prop_glowstick_C_ExecuteUbergraph_prop_glowstick Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_glowstick.prop_glowstick_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_glowstick_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_glowstick_C", "ReceiveTick");

	Params::Prop_glowstick_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_glowstick.prop_glowstick_C.ray
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FHitResult                       OutHit                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

bool AProp_glowstick_C::Ray(struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_glowstick_C", "ray");

	Params::Prop_glowstick_C_Ray Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;
}


// Function prop_glowstick.prop_glowstick_C.getType
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_glowstick_C::GetType()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_glowstick_C", "getType");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_glowstick.prop_glowstick_C.stickTo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                       Param_Hit                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AProp_glowstick_C::StickTo(const struct FHitResult& Param_Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_glowstick_C", "stickTo");

	Params::Prop_glowstick_C_StickTo Parms{};

	Parms.Param_Hit = std::move(Param_Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_glowstick.prop_glowstick_C.obj
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<EObjectTypeQuery>                OutputPin                                              (ConstParm, Parm, OutParm)

void AProp_glowstick_C::Obj(const TArray<EObjectTypeQuery>* OutputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_glowstick_C", "obj");

	Params::Prop_glowstick_C_Obj Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = std::move(Parms.OutputPin);
}


// Function prop_glowstick.prop_glowstick_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_Hit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_glowstick_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_glowstick_C", "actionOptionIndex");

	Params::Prop_glowstick_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Param_Hit = std::move(Param_Hit);
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_glowstick.prop_glowstick_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_glowstick_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_glowstick_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_glowstick.prop_glowstick_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_glowstick_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_glowstick_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_glowstick.prop_glowstick_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_glowstick_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_glowstick_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_glowstick.prop_glowstick_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_glowstick_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_glowstick_C", "loadData");

	Params::Prop_glowstick_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function prop_glowstick.prop_glowstick_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AProp_glowstick_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_glowstick_C", "getData");

	Params::Prop_glowstick_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}

}

