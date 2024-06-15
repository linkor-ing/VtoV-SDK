#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wallbuilder

#include "Basic.hpp"

#include "Prop_wallbuilder_classes.hpp"
#include "Prop_wallbuilder_parameters.hpp"


namespace SDK
{

// Function prop_wallbuilder.prop_wallbuilder_C.ExecuteUbergraph_prop_wallbuilder
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wallbuilder_C::ExecuteUbergraph_prop_wallbuilder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "ExecuteUbergraph_prop_wallbuilder");

	Params::Prop_wallbuilder_C_ExecuteUbergraph_prop_wallbuilder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wallbuilder.prop_wallbuilder_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wallbuilder_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "ReceiveTick");

	Params::Prop_wallbuilder_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wallbuilder.prop_wallbuilder_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProp_wallbuilder_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_wallbuilder.prop_wallbuilder_C.OnCompleted_8882420E4F2CF57684C98A8A5539FB1C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wallbuilder_C::OnCompleted_8882420E4F2CF57684C98A8A5539FB1C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "OnCompleted_8882420E4F2CF57684C98A8A5539FB1C");

	Params::Prop_wallbuilder_C_OnCompleted_8882420E4F2CF57684C98A8A5539FB1C Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wallbuilder.prop_wallbuilder_C.OnBlendOut_8882420E4F2CF57684C98A8A5539FB1C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wallbuilder_C::OnBlendOut_8882420E4F2CF57684C98A8A5539FB1C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "OnBlendOut_8882420E4F2CF57684C98A8A5539FB1C");

	Params::Prop_wallbuilder_C_OnBlendOut_8882420E4F2CF57684C98A8A5539FB1C Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wallbuilder.prop_wallbuilder_C.OnInterrupted_8882420E4F2CF57684C98A8A5539FB1C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wallbuilder_C::OnInterrupted_8882420E4F2CF57684C98A8A5539FB1C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "OnInterrupted_8882420E4F2CF57684C98A8A5539FB1C");

	Params::Prop_wallbuilder_C_OnInterrupted_8882420E4F2CF57684C98A8A5539FB1C Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wallbuilder.prop_wallbuilder_C.OnNotifyBegin_8882420E4F2CF57684C98A8A5539FB1C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wallbuilder_C::OnNotifyBegin_8882420E4F2CF57684C98A8A5539FB1C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "OnNotifyBegin_8882420E4F2CF57684C98A8A5539FB1C");

	Params::Prop_wallbuilder_C_OnNotifyBegin_8882420E4F2CF57684C98A8A5539FB1C Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wallbuilder.prop_wallbuilder_C.OnNotifyEnd_8882420E4F2CF57684C98A8A5539FB1C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wallbuilder_C::OnNotifyEnd_8882420E4F2CF57684C98A8A5539FB1C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "OnNotifyEnd_8882420E4F2CF57684C98A8A5539FB1C");

	Params::Prop_wallbuilder_C_OnNotifyEnd_8882420E4F2CF57684C98A8A5539FB1C Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wallbuilder.prop_wallbuilder_C.addWall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_wallbuilder_C::AddWall()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "addWall");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_wallbuilder.prop_wallbuilder_C.setPivotLoc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_wallbuilder_C::SetPivotLoc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "setPivotLoc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_wallbuilder.prop_wallbuilder_C.editShape
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AProp_wallbuilder_C::EditShape()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "editShape");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_wallbuilder.prop_wallbuilder_C.setRot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Vector                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wallbuilder_C::SetRot(const struct FVector& Vector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "setRot");

	Params::Prop_wallbuilder_C_SetRot Parms{};

	Parms.Vector = std::move(Vector);

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wallbuilder.prop_wallbuilder_C.editMat
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_wallbuilder_C::EditMat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "editMat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function prop_wallbuilder.prop_wallbuilder_C.playerHandRelease_LMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wallbuilder_C::PlayerHandRelease_LMB(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "playerHandRelease_LMB");

	Params::Prop_wallbuilder_C_PlayerHandRelease_LMB Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wallbuilder.prop_wallbuilder_C.playerHandUse_RMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wallbuilder_C::PlayerHandUse_RMB(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "playerHandUse_RMB");

	Params::Prop_wallbuilder_C_PlayerHandUse_RMB Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wallbuilder.prop_wallbuilder_C.playerHandUse_LMB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMainPlayer_C*                    Player                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AProp_wallbuilder_C::PlayerHandUse_LMB(class AMainPlayer_C* Player)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "playerHandUse_LMB");

	Params::Prop_wallbuilder_C_PlayerHandUse_LMB Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);
}


// Function prop_wallbuilder.prop_wallbuilder_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void AProp_wallbuilder_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("prop_wallbuilder_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}

}
