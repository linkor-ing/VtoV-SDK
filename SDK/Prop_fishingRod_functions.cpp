#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_fishingRod

#include "Basic.hpp"

#include "Prop_fishingRod_classes.hpp"
#include "Prop_fishingRod_parameters.hpp"


namespace SDK
{

// Function prop_fishingRod.prop_fishingRod_C.ExecuteUbergraph_prop_fishingRod
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_fishingRod_C::ExecuteUbergraph_prop_fishingRod(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "ExecuteUbergraph_prop_fishingRod");

	Params::Prop_fishingRod_C_ExecuteUbergraph_prop_fishingRod Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_fishingRod.prop_fishingRod_C.unbind
// (BlueprintCallable, BlueprintEvent)

void AProp_fishingRod_C::Unbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "unbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_fishingRod.prop_fishingRod_C.bind
// (BlueprintCallable, BlueprintEvent)

void AProp_fishingRod_C::bind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "bind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_fishingRod.prop_fishingRod_C.Up
// (BlueprintCallable, BlueprintEvent)

void AProp_fishingRod_C::Up()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "Up");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_fishingRod.prop_fishingRod_C.Down
// (BlueprintCallable, BlueprintEvent)

void AProp_fishingRod_C::Down()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "Down");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_fishingRod.prop_fishingRod_C.scrollDown
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_fishingRod_C::ScrollDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "scrollDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_fishingRod.prop_fishingRod_C.scrollUp
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_fishingRod_C::ScrollUp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "scrollUp");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_fishingRod.prop_fishingRod_C.test__UpdateFunc
// (BlueprintEvent)

void AProp_fishingRod_C::Test__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "test__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_fishingRod.prop_fishingRod_C.test__FinishedFunc
// (BlueprintEvent)

void AProp_fishingRod_C::Test__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "test__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_fishingRod.prop_fishingRod_C.upd
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_fishingRod_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_fishingRod.prop_fishingRod_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void AProp_fishingRod_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_fishingRod.prop_fishingRod_C.playerHandUse_LMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_fishingRod_C::PlayerHandUse_LMB(class AMainPlayer_C* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "playerHandUse_LMB");

	Params::Prop_fishingRod_C_PlayerHandUse_LMB Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_fishingRod.prop_fishingRod_C.playerHandUse_RMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Param_Player                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_fishingRod_C::PlayerHandUse_RMB(class AMainPlayer_C* Param_Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "playerHandUse_RMB");

	Params::Prop_fishingRod_C_PlayerHandUse_RMB Parms{};

	Parms.Param_Player = Param_Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_fishingRod.prop_fishingRod_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_fishingRod_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "loadData");

	Params::Prop_fishingRod_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function prop_fishingRod.prop_fishingRod_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AProp_fishingRod_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_fishingRod_C", "getData");

	Params::Prop_fishingRod_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}

}

