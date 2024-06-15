#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Portal_phys_log

#include "Basic.hpp"

#include "Portal_phys_log_classes.hpp"
#include "Portal_phys_log_parameters.hpp"


namespace SDK
{

// Function portal_phys_log.portal_phys_log_C.ignoreSave_trigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ignore                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APortal_phys_log_C::IgnoreSave_trigger(bool* Ignore)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("portal_phys_log_C", "ignoreSave_trigger");

	Params::Portal_phys_log_C_IgnoreSave_trigger Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ignore != nullptr)
		*Ignore = Parms.Ignore;
}

}

