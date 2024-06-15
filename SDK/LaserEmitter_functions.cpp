#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LaserEmitter

#include "Basic.hpp"

#include "LaserEmitter_classes.hpp"
#include "LaserEmitter_parameters.hpp"


namespace SDK
{

// Function laserEmitter.laserEmitter_C.ExecuteUbergraph_laserEmitter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALaserEmitter_C::ExecuteUbergraph_laserEmitter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("laserEmitter_C", "ExecuteUbergraph_laserEmitter");

	Params::LaserEmitter_C_ExecuteUbergraph_laserEmitter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function laserEmitter.laserEmitter_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ALaserEmitter_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("laserEmitter_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function laserEmitter.laserEmitter_C.damaging
// (BlueprintCallable, BlueprintEvent)

void ALaserEmitter_C::Damaging()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("laserEmitter_C", "damaging");

	UObject::ProcessEvent(Func, nullptr);
}


// Function laserEmitter.laserEmitter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALaserEmitter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("laserEmitter_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function laserEmitter.laserEmitter_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALaserEmitter_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("laserEmitter_C", "ReceiveTick");

	Params::LaserEmitter_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function laserEmitter.laserEmitter_C.damageActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Param_DaamgedActor                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALaserEmitter_C::DamageActor(class AActor* Param_DaamgedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("laserEmitter_C", "damageActor");

	Params::LaserEmitter_C_DamageActor Parms{};

	Parms.Param_DaamgedActor = Param_DaamgedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function laserEmitter.laserEmitter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALaserEmitter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("laserEmitter_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function laserEmitter.laserEmitter_C.fireLaser
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALaserEmitter_C::FireLaser()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("laserEmitter_C", "fireLaser");

	UObject::ProcessEvent(Func, nullptr);
}


// Function laserEmitter.laserEmitter_C.generateEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  Hits                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ALaserEmitter_C::GenerateEffect(TArray<struct FVector>& Hits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("laserEmitter_C", "generateEffect");

	Params::LaserEmitter_C_GenerateEffect Parms{};

	Parms.Hits = std::move(Hits);

	UObject::ProcessEvent(Func, &Parms);

	Hits = std::move(Parms.Hits);
}


// Function laserEmitter.laserEmitter_C.updateLightElement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPointLightComponent*             InputPin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InputPin2                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InputPin3                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALaserEmitter_C::UpdateLightElement(class UPointLightComponent* InputPin, const struct FVector& InputPin2, const struct FVector& InputPin3)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("laserEmitter_C", "updateLightElement");

	Params::LaserEmitter_C_UpdateLightElement Parms{};

	Parms.InputPin = InputPin;
	Parms.InputPin2 = std::move(InputPin2);
	Parms.InputPin3 = std::move(InputPin3);

	UObject::ProcessEvent(Func, &Parms);
}


// Function laserEmitter.laserEmitter_C.finishLaser
// (Public, BlueprintCallable, BlueprintEvent)

void ALaserEmitter_C::FinishLaser()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("laserEmitter_C", "finishLaser");

	UObject::ProcessEvent(Func, nullptr);
}


// Function laserEmitter.laserEmitter_C.resetIgnores
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ALaserEmitter_C::ResetIgnores()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("laserEmitter_C", "resetIgnores");

	UObject::ProcessEvent(Func, nullptr);
}


// Function laserEmitter.laserEmitter_C.slerp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Normal                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Alpha                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Res                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALaserEmitter_C::Slerp(const struct FVector& Direction, const struct FVector& Normal, float Alpha, struct FVector* Res)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("laserEmitter_C", "slerp");

	Params::LaserEmitter_C_Slerp Parms{};

	Parms.Direction = std::move(Direction);
	Parms.Normal = std::move(Normal);
	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = std::move(Parms.Res);
}

}
