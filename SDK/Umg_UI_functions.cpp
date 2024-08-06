#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_UI

#include "Basic.hpp"

#include "Umg_UI_classes.hpp"
#include "Umg_UI_parameters.hpp"


namespace SDK
{

// Function umg_UI.umg_UI_C.ExecuteUbergraph_umg_UI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_UI_C::ExecuteUbergraph_umg_UI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "ExecuteUbergraph_umg_UI");

	Params::Umg_UI_C_ExecuteUbergraph_umg_UI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_UI.umg_UI_C.unfocused
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_UI_C::Unfocused()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "unfocused");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_UI.umg_UI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUmg_UI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_UI.umg_UI_C.gamemodePreLoad
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_UI_C::GamemodePreLoad()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "gamemodePreLoad");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_UI.umg_UI_C.AnyKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Pressed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUmg_UI_C::AnyKey(const struct FKey& Key, bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "AnyKey");

	Params::Umg_UI_C_AnyKey Parms{};

	Parms.Key = std::move(Key);
	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_UI.umg_UI_C.gamemodeMakeKeys
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_UI_C::GamemodeMakeKeys()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "gamemodeMakeKeys");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_UI.umg_UI_C.propRenderer_finishProps
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_UI_C::PropRenderer_finishProps()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "propRenderer_finishProps");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_UI.umg_UI_C.applyColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_UI_C::ApplyColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "applyColor");

	Params::Umg_UI_C_ApplyColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_UI.umg_UI_C.texturePickerApply
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUmg_texturePicker_C*             Picker                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                       Texture                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_UI_C::TexturePickerApply(class UUmg_texturePicker_C* Picker, class UTexture2D* Texture, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "texturePickerApply");

	Params::Umg_UI_C_TexturePickerApply Parms{};

	Parms.Picker = Picker;
	Parms.Texture = Texture;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_UI.umg_UI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_UI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "Tick");

	Params::Umg_UI_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_UI.umg_UI_C.unfoc
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_UI_C::Unfoc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "unfoc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_UI.umg_UI_C.signalDeleted
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_UI_C::SignalDeleted()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "signalDeleted");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_UI.umg_UI_C.signalSaved
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_UI_C::SignalSaved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "signalSaved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_UI.umg_UI_C.selectedHotbar
// (BlueprintCallable, BlueprintEvent)

void UUmg_UI_C::SelectedHotbar()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "selectedHotbar");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_UI.umg_UI_C.gamemodeBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_UI_C::GamemodeBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "gamemodeBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_UI.umg_UI_C.stuffUpgraded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainGamemode_C*                  GameMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_UI_C::StuffUpgraded(class AMainGamemode_C* GameMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "stuffUpgraded");

	Params::Umg_UI_C_StuffUpgraded Parms{};

	Parms.GameMode = GameMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_UI.umg_UI_C.settingsApplied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_settings                 Settings                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUmg_UI_C::SettingsApplied(const struct FStruct_settings& Settings)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "settingsApplied");

	Params::Umg_UI_C_SettingsApplied Parms{};

	Parms.Settings = std::move(Settings);

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_UI.umg_UI_C.openHovertext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              Param_HovertextLoc                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SettActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Hide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUmg_UI_C::OpenHovertext(class UPrimitiveComponent* Param_HovertextLoc, bool SettActive, const class FText& InText, bool IsActor, bool Hide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "openHovertext");

	Params::Umg_UI_C_OpenHovertext Parms{};

	Parms.Param_HovertextLoc = Param_HovertextLoc;
	Parms.SettActive = SettActive;
	Parms.InText = std::move(InText);
	Parms.IsActor = IsActor;
	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_UI.umg_UI_C.addHint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UUmg_UI_C::AddHint(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "addHint");

	Params::Umg_UI_C_AddHint Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_UI.umg_UI_C.compassAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUmg_UI_C::CompassAngle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "compassAngle");

	Params::Umg_UI_C_CompassAngle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function umg_UI.umg_UI_C.calcSize
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        Size                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Min                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Max                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Origin                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_UI_C::CalcSize(struct FVector2D* Size, struct FVector2D* Min, struct FVector2D* Max, struct FVector2D* Origin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "calcSize");

	Params::Umg_UI_C_CalcSize Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);

	if (Min != nullptr)
		*Min = std::move(Parms.Min);

	if (Max != nullptr)
		*Max = std::move(Parms.Max);

	if (Origin != nullptr)
		*Origin = std::move(Parms.Origin);
}


// Function umg_UI.umg_UI_C.projectClamped
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          WorldLocation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Vec                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_UI_C::ProjectClamped(const struct FVector& WorldLocation, struct FVector2D* Vec)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "projectClamped");

	Params::Umg_UI_C_ProjectClamped Parms{};

	Parms.WorldLocation = std::move(WorldLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (Vec != nullptr)
		*Vec = std::move(Parms.Vec);
}


// Function umg_UI.umg_UI_C.bbox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue_Origin                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ReturnValue_BoxExtent                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_UI_C::bbox(class UObject* Object, struct FVector* ReturnValue_Origin, struct FVector* ReturnValue_BoxExtent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "bbox");

	Params::Umg_UI_C_bbox Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue_Origin != nullptr)
		*ReturnValue_Origin = std::move(Parms.ReturnValue_Origin);

	if (ReturnValue_BoxExtent != nullptr)
		*ReturnValue_BoxExtent = std::move(Parms.ReturnValue_BoxExtent);
}


// Function umg_UI.umg_UI_C.updSelect
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_UI_C::UpdSelect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "updSelect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_UI.umg_UI_C.buildActions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<Enum_interactionActions>         Actions_enums                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FString>                   Actions_names                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FText>                     Actions_overlays                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUmg_UI_C::buildActions(TArray<Enum_interactionActions>& Actions_enums, TArray<class FString>& Actions_names, TArray<class FText>& Actions_overlays)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "buildActions");

	Params::Umg_UI_C_buildActions Parms{};

	Parms.Actions_enums = std::move(Actions_enums);
	Parms.Actions_names = std::move(Actions_names);
	Parms.Actions_overlays = std::move(Actions_overlays);

	UObject::ProcessEvent(Func, &Parms);

	Actions_enums = std::move(Parms.Actions_enums);
	Actions_names = std::move(Parms.Actions_names);
	Actions_overlays = std::move(Parms.Actions_overlays);
}


// Function umg_UI.umg_UI_C.clearActions
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_UI_C::ClearActions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "clearActions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_UI.umg_UI_C.updHovertext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UUmg_UI_C::UpdHovertext(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "updHovertext");

	Params::Umg_UI_C_UpdHovertext Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_UI.umg_UI_C.updateSlotInv
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUmg_UI_C::UpdateSlotInv()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "updateSlotInv");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_UI.umg_UI_C.cusSelectHotbarSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Ind                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_UI_C::CusSelectHotbarSlot(int32 Param_Ind)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "cusSelectHotbarSlot");

	Params::Umg_UI_C_CusSelectHotbarSlot Parms{};

	Parms.Param_Ind = Param_Ind;

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_UI.umg_UI_C.angleWheel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        Mouse                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_UI_C::AngleWheel(const struct FVector2D& Mouse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "angleWheel");

	Params::Umg_UI_C_AngleWheel Parms{};

	Parms.Mouse = std::move(Mouse);

	UObject::ProcessEvent(Func, &Parms);
}


// Function umg_UI.umg_UI_C.updRadialText
// (Public, BlueprintCallable, BlueprintEvent)

void UUmg_UI_C::UpdRadialText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "updRadialText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function umg_UI.umg_UI_C.C
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UUmg_UI_C::C(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "C");

	Params::Umg_UI_C_C Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function umg_UI.umg_UI_C.processInt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<uint8>                           Dasasdasd                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUmg_UI_C::ProcessInt(TArray<uint8>& Dasasdasd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "processInt");

	Params::Umg_UI_C_ProcessInt Parms{};

	Parms.Dasasdasd = std::move(Dasasdasd);

	UObject::ProcessEvent(Func, &Parms);

	Dasasdasd = std::move(Parms.Dasasdasd);

	return Parms.ReturnValue;
}


// Function umg_UI.umg_UI_C.dreamInv
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_save>             Invv                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ADreamBase_C*                     Base                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUmg_UI_C::DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("umg_UI_C", "dreamInv");

	Params::Umg_UI_C_DreamInv Parms{};

	Parms.Invv = std::move(Invv);

	UObject::ProcessEvent(Func, &Parms);

	Invv = std::move(Parms.Invv);

	if (Base != nullptr)
		*Base = Parms.Base;
}

}

