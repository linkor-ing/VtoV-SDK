#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_soos

#include "Basic.hpp"

#include "Prop_soos_classes.hpp"
#include "Prop_soos_parameters.hpp"


namespace SDK
{

// Function prop_soos.prop_soos_C.ExecuteUbergraph_prop_soos
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_soos_C::ExecuteUbergraph_prop_soos(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_soos_C", "ExecuteUbergraph_prop_soos");

	Params::Prop_soos_C_ExecuteUbergraph_prop_soos Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_soos.prop_soos_C.Exp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Skip                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_soos_C::Exp(bool Skip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_soos_C", "Exp");

	Params::Prop_soos_C_Exp Parms{};

	Parms.Skip = Skip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_soos.prop_soos_C.Light
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NewIntensity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_soos_C::Light(float NewIntensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_soos_C", "Light");

	Params::Prop_soos_C_Light Parms{};

	Parms.NewIntensity = NewIntensity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_soos.prop_soos_C.leaveWater
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWaterVolume_C*                   Water                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_soos_C::LeaveWater(class AWaterVolume_C* Water)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_soos_C", "leaveWater");

	Params::Prop_soos_C_LeaveWater Parms{};

	Parms.Water = Water;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_soos.prop_soos_C.microwave
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_soos_C::Microwave()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_soos_C", "microwave");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_soos.prop_soos_C.enteredTheWater
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_soos_C::EnteredTheWater()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_soos_C", "enteredTheWater");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_soos.prop_soos_C.exitTheWater
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_soos_C::ExitTheWater()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_soos_C", "exitTheWater");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_soos.prop_soos_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_soos_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_soos_C", "loadData");

	Params::Prop_soos_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function prop_soos.prop_soos_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AProp_soos_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_soos_C", "getData");

	Params::Prop_soos_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}

}
