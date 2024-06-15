#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomWall

#include "Basic.hpp"

#include "CustomWall_classes.hpp"
#include "CustomWall_parameters.hpp"


namespace SDK
{

// Function customWall.customWall_C.ExecuteUbergraph_customWall
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACustomWall_C::ExecuteUbergraph_customWall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "ExecuteUbergraph_customWall");

	Params::CustomWall_C_ExecuteUbergraph_customWall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function customWall.customWall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ACustomWall_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function customWall.customWall_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ACustomWall_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function customWall.customWall_C.impactDamageCPP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Damage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Impact                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACustomWall_C::ImpactDamageCPP(float Param_Damage, const struct FHitResult& Hit, class AActor* Actor, const struct FVector& Impact)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "impactDamageCPP");

	Params::CustomWall_C_ImpactDamageCPP Parms{};

	Parms.Param_Damage = Param_Damage;
	Parms.Hit = std::move(Hit);
	Parms.Actor = Actor;
	Parms.Impact = std::move(Impact);

	UObject::ProcessEvent(Func, &Parms);
}


// Function customWall.customWall_C.impactSquishCPP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACustomWall_C::ImpactSquishCPP(class UPrimitiveComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "impactSquishCPP");

	Params::CustomWall_C_ImpactSquishCPP Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function customWall.customWall_C.exitTheWater
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACustomWall_C::ExitTheWater()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "exitTheWater");

	UObject::ProcessEvent(Func, nullptr);
}


// Function customWall.customWall_C.enteredTheWater
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACustomWall_C::EnteredTheWater()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "enteredTheWater");

	UObject::ProcessEvent(Func, nullptr);
}


// Function customWall.customWall_C.Damage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Damage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACustomWall_C::Damage(float Param_Damage, const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "Damage");

	Params::CustomWall_C_Damage Parms{};

	Parms.Param_Damage = Param_Damage;
	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function customWall.customWall_C.eff
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACustomWall_C::Eff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "eff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function customWall.customWall_C.fix
// (Public, BlueprintCallable, BlueprintEvent)

void ACustomWall_C::Fix()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "fix");

	UObject::ProcessEvent(Func, nullptr);
}


// Function customWall.customWall_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ACustomWall_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function customWall.customWall_C.setHealth
// (Public, BlueprintCallable, BlueprintEvent)

void ACustomWall_C::SetHealth()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "setHealth");

	UObject::ProcessEvent(Func, nullptr);
}


// Function customWall.customWall_C.setHealthCracks
// (Public, BlueprintCallable, BlueprintEvent)

void ACustomWall_C::SetHealthCracks()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "setHealthCracks");

	UObject::ProcessEvent(Func, nullptr);
}


// Function customWall.customWall_C.addDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Damage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          Impact                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipSetting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACustomWall_C::AddDamage(class AActor* Actor, float Param_Damage, const struct FHitResult& Hit, const struct FVector& Impact, bool SkipSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "addDamage");

	Params::CustomWall_C_AddDamage Parms{};

	Parms.Actor = Actor;
	Parms.Param_Damage = Param_Damage;
	Parms.Hit = std::move(Hit);
	Parms.Impact = std::move(Impact);
	Parms.SkipSetting = SkipSetting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function customWall.customWall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ACustomWall_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function customWall.customWall_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ACustomWall_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "loadData");

	Params::CustomWall_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function customWall.customWall_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void ACustomWall_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("customWall_C", "getData");

	Params::CustomWall_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}

}

