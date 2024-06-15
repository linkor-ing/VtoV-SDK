#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NavModifierBox

#include "Basic.hpp"

#include "NavModifierBox_classes.hpp"
#include "NavModifierBox_parameters.hpp"


namespace SDK
{

// Function navModifierBox.navModifierBox_C.ExecuteUbergraph_navModifierBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ANavModifierBox_C::ExecuteUbergraph_navModifierBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("navModifierBox_C", "ExecuteUbergraph_navModifierBox");

	Params::NavModifierBox_C_ExecuteUbergraph_navModifierBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function navModifierBox.navModifierBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ANavModifierBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("navModifierBox_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function navModifierBox.navModifierBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANavModifierBox_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("navModifierBox_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
