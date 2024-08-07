#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SaveSlot

#include "Basic.hpp"

#include "SaveSlot_classes.hpp"
#include "SaveSlot_parameters.hpp"


namespace SDK
{

// Function saveSlot.saveSlot_C.save
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USaveSlot_C::Save()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "save");

	UObject::ProcessEvent(Func, nullptr);
}


// Function saveSlot.saveSlot_C.settime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntVector                       NewTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntVector                       Output_Get                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    New_min                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    New_hour                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    New_day                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USaveSlot_C::Settime(const struct FIntVector& NewTime, struct FIntVector* Output_Get, bool* New_min, bool* New_hour, bool* New_day)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "settime");

	Params::SaveSlot_C_Settime Parms{};

	Parms.NewTime = std::move(NewTime);

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = std::move(Parms.Output_Get);

	if (New_min != nullptr)
		*New_min = Parms.New_min;

	if (New_hour != nullptr)
		*New_hour = Parms.New_hour;

	if (New_day != nullptr)
		*New_day = Parms.New_day;
}


// Function saveSlot.saveSlot_C.setGamemode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainGamemode_C*                  Param_GameMode                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USaveSlot_C::SetGamemode(class AMainGamemode_C* Param_GameMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "setGamemode");

	Params::SaveSlot_C_SetGamemode Parms{};

	Parms.Param_GameMode = Param_GameMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function saveSlot.saveSlot_C.conv
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FIntVector                       IntVector                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 USaveSlot_C::Conv(const struct FIntVector& IntVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "conv");

	Params::SaveSlot_C_Conv Parms{};

	Parms.IntVector = std::move(IntVector);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function saveSlot.saveSlot_C.prAdvanc
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InputPin                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Finished                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             Param_Name                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USaveSlot_C::PrAdvanc(const class FName& InputPin, bool* Finished, class FName* Param_Name)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "prAdvanc");

	Params::SaveSlot_C_PrAdvanc Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

	if (Finished != nullptr)
		*Finished = Parms.Finished;

	if (Param_Name != nullptr)
		*Param_Name = Parms.Param_Name;
}


// Function saveSlot.saveSlot_C.reset_days
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Day                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USaveSlot_C::Reset_days(int32 Param_Day)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "reset_days");

	Params::SaveSlot_C_Reset_days Parms{};

	Parms.Param_Day = Param_Day;

	UObject::ProcessEvent(Func, &Parms);
}


// Function saveSlot.saveSlot_C.reset_objects
// (Public, BlueprintCallable, BlueprintEvent)

void USaveSlot_C::Reset_objects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "reset_objects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function saveSlot.saveSlot_C.reset_points
// (Public, BlueprintCallable, BlueprintEvent)

void USaveSlot_C::Reset_points()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "reset_points");

	UObject::ProcessEvent(Func, nullptr);
}


// Function saveSlot.saveSlot_C.reset_levels
// (Public, BlueprintCallable, BlueprintEvent)

void USaveSlot_C::Reset_levels()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "reset_levels");

	UObject::ProcessEvent(Func, nullptr);
}


// Function saveSlot.saveSlot_C.reset_player
// (Public, BlueprintCallable, BlueprintEvent)

void USaveSlot_C::Reset_player()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "reset_player");

	UObject::ProcessEvent(Func, nullptr);
}


// Function saveSlot.saveSlot_C.reset_car
// (Public, BlueprintCallable, BlueprintEvent)

void USaveSlot_C::Reset_car()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "reset_car");

	UObject::ProcessEvent(Func, nullptr);
}


// Function saveSlot.saveSlot_C.getSigObj
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// Enum_objectType                         Key                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USaveSlot_C::GetSigObj(const Enum_objectType& Key, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "getSigObj");

	Params::SaveSlot_C_GetSigObj Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function saveSlot.saveSlot_C.reset_garb
// (Public, BlueprintCallable, BlueprintEvent)

void USaveSlot_C::Reset_garb()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "reset_garb");

	UObject::ProcessEvent(Func, nullptr);
}


// Function saveSlot.saveSlot_C.reset_grime
// (Public, BlueprintCallable, BlueprintEvent)

void USaveSlot_C::Reset_grime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "reset_grime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function saveSlot.saveSlot_C.maxDay
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   OutputPin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USaveSlot_C::MaxDay(int32* OutputPin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "maxDay");

	Params::SaveSlot_C_MaxDay Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;
}


// Function saveSlot.saveSlot_C.saveToSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USaveSlot_C::SaveToSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "saveToSlot");

	Params::SaveSlot_C_SaveToSlot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function saveSlot.saveSlot_C.reset_printerObjects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USaveSlot_C::Reset_printerObjects()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "reset_printerObjects");

	UObject::ProcessEvent(Func, nullptr);
}


// Function saveSlot.saveSlot_C.cleanGrime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USaveSlot_C::CleanGrime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("saveSlot_C", "cleanGrime");

	UObject::ProcessEvent(Func, nullptr);
}

}

