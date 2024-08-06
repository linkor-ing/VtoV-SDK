#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WMannequinSpawn

#include "Basic.hpp"

#include "WMannequinSpawn_classes.hpp"
#include "WMannequinSpawn_parameters.hpp"


namespace SDK
{

// Function wMannequinSpawn.wMannequinSpawn_C.Spawn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AWMannequinSpawn_C::Spawn(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("wMannequinSpawn_C", "Spawn");

	Params::WMannequinSpawn_C_Spawn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}

}
