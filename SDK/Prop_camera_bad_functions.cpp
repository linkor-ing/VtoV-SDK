#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_camera_bad

#include "Basic.hpp"

#include "Prop_camera_bad_classes.hpp"
#include "Prop_camera_bad_parameters.hpp"


namespace SDK
{

// Function prop_camera_bad.prop_camera_bad_C.ExecuteUbergraph_prop_camera_bad
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_camera_bad_C::ExecuteUbergraph_prop_camera_bad(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "ExecuteUbergraph_prop_camera_bad");

	Params::Prop_camera_bad_C_ExecuteUbergraph_prop_camera_bad Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_camera_bad.prop_camera_bad_C.actionOptionIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_Hit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// Enum_interactionActions                 Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_camera_bad_C::ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "actionOptionIndex");

	Params::Prop_camera_bad_C_ActionOptionIndex Parms{};

	Parms.Player = Player;
	Parms.Param_Hit = std::move(Param_Hit);
	Parms.Param_Index = Param_Index;
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_camera_bad.prop_camera_bad_C.move
// (BlueprintCallable, BlueprintEvent)

void AProp_camera_bad_C::Move()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "move");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_camera_bad.prop_camera_bad_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_camera_bad_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_camera_bad.prop_camera_bad_C.setRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_camera_bad_C::SetRot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "setRot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_camera_bad.prop_camera_bad_C.saveInit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_camera_bad_C::SaveInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "saveInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_camera_bad.prop_camera_bad_C.setAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Rot_X                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Rot_Y                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Zoom                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_camera_bad_C::SetAngle(float Param_Rot_X, float Param_Rot_Y, float Param_Zoom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "setAngle");

	Params::Prop_camera_bad_C_SetAngle Parms{};

	Parms.Param_Rot_X = Param_Rot_X;
	Parms.Param_Rot_Y = Param_Rot_Y;
	Parms.Param_Zoom = Param_Zoom;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_camera_bad.prop_camera_bad_C.capture
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_camera_bad_C::Capture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "capture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_camera_bad.prop_camera_bad_C.upd
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_camera_bad_C::Upd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "upd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_camera_bad.prop_camera_bad_C.getInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                        Param_Res                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_UpdRate                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Rot_X                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Rot_Y                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_Zoom                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_camera_bad_C::GetInfo(struct FIntPoint* Param_Res, float* Param_UpdRate, float* Param_Rot_X, float* Param_Rot_Y, float* Param_Zoom)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "getInfo");

	Params::Prop_camera_bad_C_GetInfo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Res != nullptr)
		*Param_Res = std::move(Parms.Param_Res);

	if (Param_UpdRate != nullptr)
		*Param_UpdRate = Parms.Param_UpdRate;

	if (Param_Rot_X != nullptr)
		*Param_Rot_X = Parms.Param_Rot_X;

	if (Param_Rot_Y != nullptr)
		*Param_Rot_Y = Parms.Param_Rot_Y;

	if (Param_Zoom != nullptr)
		*Param_Zoom = Parms.Param_Zoom;
}


// Function prop_camera_bad.prop_camera_bad_C.capture_light
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_camera_bad_C::Capture_light()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "capture_light");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_camera_bad.prop_camera_bad_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProp_camera_bad_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_camera_bad.prop_camera_bad_C.lookAt
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Param_Hit                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Text                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              boundObjectReplace                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_camera_bad_C::LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "lookAt");

	Params::Prop_camera_bad_C_LookAt Parms{};

	Parms.Player = Player;
	Parms.Param_Hit = std::move(Param_Hit);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	if (boundObjectReplace != nullptr)
		*boundObjectReplace = Parms.boundObjectReplace;
}


// Function prop_camera_bad.prop_camera_bad_C.loadData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                                    Return                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AProp_camera_bad_C::LoadData(const struct FStruct_save& Data, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "loadData");

	Params::Prop_camera_bad_C_LoadData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;
}


// Function prop_camera_bad.prop_camera_bad_C.getData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_save                     Data                                                   (Parm, OutParm, HasGetValueTypeHash)

void AProp_camera_bad_C::GetData(struct FStruct_save* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "getData");

	Params::Prop_camera_bad_C_GetData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function prop_camera_bad.prop_camera_bad_C.getActionOptions
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   Options                                                (Parm, OutParm)
// TArray<Enum_interactionActions>         Options_enum                                           (Parm, OutParm)
// TArray<class FText>                     OptionsNamesOverlay                                    (Parm, OutParm)

void AProp_camera_bad_C::GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_camera_bad_C", "getActionOptions");

	Params::Prop_camera_bad_C_GetActionOptions Parms{};

	Parms.Player = Player;
	Parms.Component = Component;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

	if (Options != nullptr)
		*Options = std::move(Parms.Options);

	if (Options_enum != nullptr)
		*Options_enum = std::move(Parms.Options_enum);

	if (OptionsNamesOverlay != nullptr)
		*OptionsNamesOverlay = std::move(Parms.OptionsNamesOverlay);
}

}
