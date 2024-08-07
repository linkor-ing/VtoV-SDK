#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_paper_drawable

#include "Basic.hpp"

#include "Prop_paper_drawable_classes.hpp"
#include "Prop_paper_drawable_parameters.hpp"


namespace SDK
{

// Function prop_paper_drawable.prop_paper_drawable_C.ExecuteUbergraph_prop_paper_drawable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_paper_drawable_C::ExecuteUbergraph_prop_paper_drawable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_paper_drawable_C", "ExecuteUbergraph_prop_paper_drawable");

	Params::Prop_paper_drawable_C_ExecuteUbergraph_prop_paper_drawable Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_paper_drawable.prop_paper_drawable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_paper_drawable_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_paper_drawable_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_paper_drawable.prop_paper_drawable_C.setRT
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_paper_drawable_C::SetRT()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_paper_drawable_C", "setRT");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_paper_drawable.prop_paper_drawable_C.initDraw
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_paper_drawable_C::InitDraw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_paper_drawable_C", "initDraw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_paper_drawable.prop_paper_drawable_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_paper_drawable_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_paper_drawable_C", "loadData");

	Params::Prop_paper_drawable_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function prop_paper_drawable.prop_paper_drawable_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AProp_paper_drawable_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_paper_drawable_C", "getData");

	Params::Prop_paper_drawable_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}

}

