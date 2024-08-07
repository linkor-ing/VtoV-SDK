#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dish

#include "Basic.hpp"

#include "Dish_classes.hpp"
#include "Dish_parameters.hpp"


namespace SDK
{

// Function dish.dish_C.ExecuteUbergraph_dish
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADish_C::ExecuteUbergraph_dish(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "ExecuteUbergraph_dish");

	Params::Dish_C_ExecuteUbergraph_dish Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function dish.dish_C.settingsApplied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_settings                 Settings                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADish_C::SettingsApplied(const struct FStruct_settings& Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "settingsApplied");

	Params::Dish_C_SettingsApplied Parms{};

	Parms.Settings = std::move(Settings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function dish.dish_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ADish_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void ADish_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.movePow
// (BlueprintCallable, BlueprintEvent)

void ADish_C::MovePow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "movePow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.startMove
// (BlueprintCallable, BlueprintEvent)

void ADish_C::StartMove()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "startMove");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.texturePickerApply
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUmg_texturePicker_C*             Picker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADish_C::TexturePickerApply(class UUmg_texturePicker_C* Picker, class UTexture2D* Texture, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "texturePickerApply");

	Params::Dish_C_TexturePickerApply Parms{};

	Parms.Picker = Picker;
	Parms.Texture = Texture;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function dish.dish_C.applyColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADish_C::ApplyColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "applyColor");

	Params::Dish_C_ApplyColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function dish.dish_C.propRenderer_finishProps
// (Public, BlueprintCallable, BlueprintEvent)

void ADish_C::PropRenderer_finishProps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "propRenderer_finishProps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.gamemodeMakeKeys
// (Public, BlueprintCallable, BlueprintEvent)

void ADish_C::GamemodeMakeKeys()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "gamemodeMakeKeys");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.AnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Pressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADish_C::AnyKey(const struct FKey& Key, bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "AnyKey");

	Params::Dish_C_AnyKey Parms{};

	Parms.Key = std::move(Key);
	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function dish.dish_C.gamemodePreLoad
// (Public, BlueprintCallable, BlueprintEvent)

void ADish_C::GamemodePreLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "gamemodePreLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.unfocused
// (Public, BlueprintCallable, BlueprintEvent)

void ADish_C::Unfocused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "unfocused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.unfoc
// (Public, BlueprintCallable, BlueprintEvent)

void ADish_C::Unfoc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "unfoc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.stuffUpgraded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainGamemode_C*                  GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADish_C::StuffUpgraded(class AMainGamemode_C* GameMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "stuffUpgraded");

	Params::Dish_C_StuffUpgraded Parms{};

	Parms.GameMode = GameMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function dish.dish_C.signalSaved
// (Public, BlueprintCallable, BlueprintEvent)

void ADish_C::SignalSaved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "signalSaved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.signalDeleted
// (Public, BlueprintCallable, BlueprintEvent)

void ADish_C::SignalDeleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "signalDeleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ADish_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ADish_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.turnoff__UpdateFunc
// (BlueprintEvent)

void ADish_C::Turnoff__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "turnoff__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.turnoff__FinishedFunc
// (BlueprintEvent)

void ADish_C::Turnoff__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "turnoff__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADish_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.startMovingTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Param_LookAt                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADish_C::StartMovingTo(const struct FVector& Param_LookAt)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "startMovingTo");

	Params::Dish_C_StartMovingTo Parms{};

	Parms.Param_LookAt = std::move(Param_LookAt);

	UObject::ProcessEvent(Func, &Parms);
}


// Function dish.dish_C.getCoords
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   X                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Y                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADish_C::GetCoords(float* X, float* Y)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "getCoords");

	Params::Dish_C_GetCoords Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;
}


// Function dish.dish_C.Stop
// (Public, BlueprintCallable, BlueprintEvent)

void ADish_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.buildRailing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADish_C::buildRailing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "buildRailing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.loadData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ADish_C::LoadData(const struct FStruct_save& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "loadData");

	Params::Dish_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function dish.dish_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void ADish_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "getData");

	Params::Dish_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function dish.dish_C.generteHashcode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADish_C::GenerteHashcode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "generteHashcode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.makeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ADish_C::MakeName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "makeName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function dish.dish_C.dreamInv
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_save>             Invv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ADreamBase_C*                     Base                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADish_C::DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("dish_C", "dreamInv");

	Params::Dish_C_DreamInv Parms{};

	Parms.Invv = std::move(Invv);

	UObject::ProcessEvent(Func, &Parms);

	Invv = std::move(Parms.Invv);

	if (Base != nullptr)
		*Base = Parms.Base;
}

}

