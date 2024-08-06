#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Hexpillar

#include "Basic.hpp"

#include "Hexpillar_classes.hpp"
#include "Hexpillar_parameters.hpp"


namespace SDK
{

// Function hexpillar.hexpillar_C.dreamInv
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_save>             Invv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ADreamBase_C*                     Base                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHexpillar_C::DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "dreamInv");

	Params::Hexpillar_C_DreamInv Parms{};

	Parms.Invv = std::move(Invv);

	UObject::ProcessEvent(Func, &Parms);

	Invv = std::move(Parms.Invv);

	if (Base != nullptr)
		*Base = Parms.Base;
}


// Function hexpillar.hexpillar_C.setPath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>                  Path                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHexpillar_C::SetPath(const TArray<struct FVector>& Path, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "setPath");

	Params::Hexpillar_C_SetPath Parms{};

	Parms.Path = std::move(Path);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function hexpillar.hexpillar_C.toolboxFix
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AProp_toolbox_C*                  Toolbox                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHexpillar_C::ToolboxFix(class AProp_toolbox_C* Toolbox, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "toolboxFix");

	Params::Hexpillar_C_ToolboxFix Parms{};

	Parms.Toolbox = Toolbox;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function hexpillar.hexpillar_C.GetKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Key                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void AHexpillar_C::GetKey(class FString* Param_Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "GetKey");

	Params::Hexpillar_C_GetKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Key != nullptr)
		*Param_Key = std::move(Parms.Param_Key);
}


// Function hexpillar.hexpillar_C.canBeUsedHold
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHexpillar_C::CanBeUsedHold(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "canBeUsedHold");

	Params::Hexpillar_C_CanBeUsedHold Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function hexpillar.hexpillar_C.processKeys
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHexpillar_C::ProcessKeys(bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "processKeys");

	Params::Hexpillar_C_ProcessKeys Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function hexpillar.hexpillar_C.getOnlyKey
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Key                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void AHexpillar_C::GetOnlyKey(class FString* Param_Key)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "getOnlyKey");

	Params::Hexpillar_C_GetOnlyKey Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Key != nullptr)
		*Param_Key = std::move(Parms.Param_Key);
}


// Function hexpillar.hexpillar_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AHexpillar_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "getData");

	Params::Hexpillar_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function hexpillar.hexpillar_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHexpillar_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "loadData");

	Params::Hexpillar_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function hexpillar.hexpillar_C.upd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AHexpillar_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function hexpillar.hexpillar_C.signalDeleted
// (Public, BlueprintCallable, BlueprintEvent)

void AHexpillar_C::SignalDeleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "signalDeleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function hexpillar.hexpillar_C.signalSaved
// (Public, BlueprintCallable, BlueprintEvent)

void AHexpillar_C::SignalSaved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "signalSaved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function hexpillar.hexpillar_C.stuffUpgraded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainGamemode_C*                  GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHexpillar_C::StuffUpgraded(class AMainGamemode_C* GameMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "stuffUpgraded");

	Params::Hexpillar_C_StuffUpgraded Parms{};

	Parms.GameMode = GameMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function hexpillar.hexpillar_C.unfoc
// (Public, BlueprintCallable, BlueprintEvent)

void AHexpillar_C::Unfoc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "unfoc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function hexpillar.hexpillar_C.settingsApplied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_settings                 Settings                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void AHexpillar_C::SettingsApplied(const struct FStruct_settings& Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "settingsApplied");

	Params::Hexpillar_C_SettingsApplied Parms{};

	Parms.Settings = std::move(Settings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function hexpillar.hexpillar_C.unfocused
// (Public, BlueprintCallable, BlueprintEvent)

void AHexpillar_C::Unfocused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "unfocused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function hexpillar.hexpillar_C.gamemodePreLoad
// (Public, BlueprintCallable, BlueprintEvent)

void AHexpillar_C::GamemodePreLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "gamemodePreLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function hexpillar.hexpillar_C.AnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Param_Key                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Pressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHexpillar_C::AnyKey(const struct FKey& Param_Key, bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "AnyKey");

	Params::Hexpillar_C_AnyKey Parms{};

	Parms.Param_Key = std::move(Param_Key);
	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function hexpillar.hexpillar_C.gamemodeMakeKeys
// (Public, BlueprintCallable, BlueprintEvent)

void AHexpillar_C::GamemodeMakeKeys()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "gamemodeMakeKeys");

	UObject::ProcessEvent(Func, nullptr);
}


// Function hexpillar.hexpillar_C.propRenderer_finishProps
// (Public, BlueprintCallable, BlueprintEvent)

void AHexpillar_C::PropRenderer_finishProps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "propRenderer_finishProps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function hexpillar.hexpillar_C.applyColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHexpillar_C::ApplyColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "applyColor");

	Params::Hexpillar_C_ApplyColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function hexpillar.hexpillar_C.texturePickerApply
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUmg_texturePicker_C*             Picker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHexpillar_C::TexturePickerApply(class UUmg_texturePicker_C* Picker, class UTexture2D* Texture, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "texturePickerApply");

	Params::Hexpillar_C_TexturePickerApply Parms{};

	Parms.Picker = Picker;
	Parms.Texture = Texture;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function hexpillar.hexpillar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AHexpillar_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function hexpillar.hexpillar_C.addDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                          Impact                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipSetting                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AHexpillar_C::AddDamage(class AActor* Actor, float Damage, const struct FHitResult& Hit, const struct FVector& Impact, bool SkipSetting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "addDamage");

	Params::Hexpillar_C_AddDamage Parms{};

	Parms.Actor = Actor;
	Parms.Damage = Damage;
	Parms.Hit = std::move(Hit);
	Parms.Impact = std::move(Impact);
	Parms.SkipSetting = SkipSetting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function hexpillar.hexpillar_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void AHexpillar_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function hexpillar.hexpillar_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHexpillar_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "ReceiveTick");

	Params::Hexpillar_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function hexpillar.hexpillar_C.ExecuteUbergraph_hexpillar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AHexpillar_C::ExecuteUbergraph_hexpillar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("hexpillar_C", "ExecuteUbergraph_hexpillar");

	Params::Hexpillar_C_ExecuteUbergraph_hexpillar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

