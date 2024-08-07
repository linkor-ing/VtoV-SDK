#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: D_window

#include "Basic.hpp"

#include "D_window_classes.hpp"
#include "D_window_parameters.hpp"


namespace SDK
{

// Function d_window.d_window_C.ExecuteUbergraph_d_window
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AD_window_C::ExecuteUbergraph_d_window(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("d_window_C", "ExecuteUbergraph_d_window");

	Params::D_window_C_ExecuteUbergraph_d_window Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function d_window.d_window_C.dirtify
// (BlueprintCallable, BlueprintEvent)

void AD_window_C::Dirtify()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("d_window_C", "dirtify");

	UObject::ProcessEvent(Func, nullptr);
}


// Function d_window.d_window_C.cleanPhys
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_sponge_C*                   InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AD_window_C::CleanPhys(class AProp_sponge_C* InputPin, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("d_window_C", "cleanPhys");

	Params::D_window_C_CleanPhys Parms{};

	Parms.InputPin = InputPin;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function d_window.d_window_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AD_window_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("d_window_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function d_window.d_window_C.cleanOnHit
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_sponge_C*                   InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AD_window_C::CleanOnHit(class AProp_sponge_C* InputPin, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("d_window_C", "cleanOnHit");

	Params::D_window_C_CleanOnHit Parms{};

	Parms.InputPin = InputPin;
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function d_window.d_window_C.Canvas
// (BlueprintCallable, BlueprintEvent)

void AD_window_C::Canvas()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("d_window_C", "Canvas");

	UObject::ProcessEvent(Func, nullptr);
}


// Function d_window.d_window_C.cleanAtPoint
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_sponge_C*                   Sponge                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AD_window_C::CleanAtPoint(class AProp_sponge_C* Sponge, const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("d_window_C", "cleanAtPoint");

	Params::D_window_C_CleanAtPoint Parms{};

	Parms.Sponge = Sponge;
	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);
}


// Function d_window.d_window_C.setDraw
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AD_window_C::SetDraw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("d_window_C", "setDraw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function d_window.d_window_C.endDraw
// (Public, BlueprintCallable, BlueprintEvent)

void AD_window_C::EndDraw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("d_window_C", "endDraw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function d_window.d_window_C.getCode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<uint8>                           ByteArray                                              (Parm, OutParm)

void AD_window_C::GetCode(TArray<uint8>* ByteArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("d_window_C", "getCode");

	Params::D_window_C_GetCode Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ByteArray != nullptr)
		*ByteArray = std::move(Parms.ByteArray);
}


// Function d_window.d_window_C.setCode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<uint8>                           ByteArray                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AD_window_C::SetCode(const TArray<uint8>& ByteArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("d_window_C", "setCode");

	Params::D_window_C_SetCode Parms{};

	Parms.ByteArray = std::move(ByteArray);

	UObject::ProcessEvent(Func, &Parms);
}


// Function d_window.d_window_C.dirty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AD_window_C::Dirty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("d_window_C", "dirty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function d_window.d_window_C.prepareRT
// (Public, BlueprintCallable, BlueprintEvent)

void AD_window_C::PrepareRT()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("d_window_C", "prepareRT");

	UObject::ProcessEvent(Func, nullptr);
}

}

