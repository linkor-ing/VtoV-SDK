#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TentacleBall

#include "Basic.hpp"

#include "TentacleBall_classes.hpp"
#include "TentacleBall_parameters.hpp"


namespace SDK
{

// Function tentacleBall.tentacleBall_C.ExecuteUbergraph_tentacleBall
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATentacleBall_C::ExecuteUbergraph_tentacleBall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "ExecuteUbergraph_tentacleBall");

	Params::TentacleBall_C_ExecuteUbergraph_tentacleBall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.lightTalk
// (BlueprintCallable, BlueprintEvent)

void ATentacleBall_C::LightTalk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "lightTalk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function tentacleBall.tentacleBall_C.repeat
// (BlueprintCallable, BlueprintEvent)

void ATentacleBall_C::Repeat()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "repeat");

	UObject::ProcessEvent(Func, nullptr);
}


// Function tentacleBall.tentacleBall_C.goTalk
// (BlueprintCallable, BlueprintEvent)

void ATentacleBall_C::GoTalk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "goTalk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function tentacleBall.tentacleBall_C.BndEvt__tentacleBall_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ATentacleBall_C::BndEvt__tentacleBall_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "BndEvt__tentacleBall_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::TentacleBall_C_BndEvt__tentacleBall_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.chargeSound
// (BlueprintCallable, BlueprintEvent)

void ATentacleBall_C::ChargeSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "chargeSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function tentacleBall.tentacleBall_C.lookAt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Forward                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATentacleBall_C::LookAt(bool Forward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "lookAt");

	Params::TentacleBall_C_LookAt Parms{};

	Parms.Forward = Forward;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.move
// (BlueprintCallable, BlueprintEvent)

void ATentacleBall_C::Move()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "move");

	UObject::ProcessEvent(Func, nullptr);
}


// Function tentacleBall.tentacleBall_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATentacleBall_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "ReceiveTick");

	Params::TentacleBall_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ATentacleBall_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function tentacleBall.tentacleBall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATentacleBall_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function tentacleBall.tentacleBall_C.OnCompleted_115D36164FA4B85E4BD8FE90B855628C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATentacleBall_C::OnCompleted_115D36164FA4B85E4BD8FE90B855628C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "OnCompleted_115D36164FA4B85E4BD8FE90B855628C");

	Params::TentacleBall_C_OnCompleted_115D36164FA4B85E4BD8FE90B855628C Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.OnBlendOut_115D36164FA4B85E4BD8FE90B855628C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATentacleBall_C::OnBlendOut_115D36164FA4B85E4BD8FE90B855628C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "OnBlendOut_115D36164FA4B85E4BD8FE90B855628C");

	Params::TentacleBall_C_OnBlendOut_115D36164FA4B85E4BD8FE90B855628C Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.OnInterrupted_115D36164FA4B85E4BD8FE90B855628C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATentacleBall_C::OnInterrupted_115D36164FA4B85E4BD8FE90B855628C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "OnInterrupted_115D36164FA4B85E4BD8FE90B855628C");

	Params::TentacleBall_C_OnInterrupted_115D36164FA4B85E4BD8FE90B855628C Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.OnNotifyBegin_115D36164FA4B85E4BD8FE90B855628C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATentacleBall_C::OnNotifyBegin_115D36164FA4B85E4BD8FE90B855628C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "OnNotifyBegin_115D36164FA4B85E4BD8FE90B855628C");

	Params::TentacleBall_C_OnNotifyBegin_115D36164FA4B85E4BD8FE90B855628C Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.OnNotifyEnd_115D36164FA4B85E4BD8FE90B855628C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATentacleBall_C::OnNotifyEnd_115D36164FA4B85E4BD8FE90B855628C(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "OnNotifyEnd_115D36164FA4B85E4BD8FE90B855628C");

	Params::TentacleBall_C_OnNotifyEnd_115D36164FA4B85E4BD8FE90B855628C Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.OnSuccess_D541AF89420637D9FCDCE080F2CB30FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATentacleBall_C::OnSuccess_D541AF89420637D9FCDCE080F2CB30FD(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "OnSuccess_D541AF89420637D9FCDCE080F2CB30FD");

	Params::TentacleBall_C_OnSuccess_D541AF89420637D9FCDCE080F2CB30FD Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.OnFail_D541AF89420637D9FCDCE080F2CB30FD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATentacleBall_C::OnFail_D541AF89420637D9FCDCE080F2CB30FD(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "OnFail_D541AF89420637D9FCDCE080F2CB30FD");

	Params::TentacleBall_C_OnFail_D541AF89420637D9FCDCE080F2CB30FD Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.OnSuccess_9784EC7B418509789CF5309C539A20EB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATentacleBall_C::OnSuccess_9784EC7B418509789CF5309C539A20EB(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "OnSuccess_9784EC7B418509789CF5309C539A20EB");

	Params::TentacleBall_C_OnSuccess_9784EC7B418509789CF5309C539A20EB Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.OnFail_9784EC7B418509789CF5309C539A20EB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATentacleBall_C::OnFail_9784EC7B418509789CF5309C539A20EB(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "OnFail_9784EC7B418509789CF5309C539A20EB");

	Params::TentacleBall_C_OnFail_9784EC7B418509789CF5309C539A20EB Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.OnSuccess_35AFE7064B8EDBCC44410888DB27517C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATentacleBall_C::OnSuccess_35AFE7064B8EDBCC44410888DB27517C(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "OnSuccess_35AFE7064B8EDBCC44410888DB27517C");

	Params::TentacleBall_C_OnSuccess_35AFE7064B8EDBCC44410888DB27517C Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.OnFail_35AFE7064B8EDBCC44410888DB27517C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATentacleBall_C::OnFail_35AFE7064B8EDBCC44410888DB27517C(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "OnFail_35AFE7064B8EDBCC44410888DB27517C");

	Params::TentacleBall_C_OnFail_35AFE7064B8EDBCC44410888DB27517C Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.talkLight__UpdateFunc
// (BlueprintEvent)

void ATentacleBall_C::TalkLight__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "talkLight__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function tentacleBall.tentacleBall_C.talkLight__FinishedFunc
// (BlueprintEvent)

void ATentacleBall_C::TalkLight__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "talkLight__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function tentacleBall.tentacleBall_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ATentacleBall_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function tentacleBall.tentacleBall_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ATentacleBall_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function tentacleBall.tentacleBall_C.lookAtPlayer__UpdateFunc
// (BlueprintEvent)

void ATentacleBall_C::LookAtPlayer__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "lookAtPlayer__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function tentacleBall.tentacleBall_C.lookAtPlayer__FinishedFunc
// (BlueprintEvent)

void ATentacleBall_C::LookAtPlayer__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "lookAtPlayer__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function tentacleBall.tentacleBall_C.step
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_Step                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATentacleBall_C::Step(const struct FVector& Location, bool Param_Step)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "step");

	Params::TentacleBall_C_Step Parms{};

	Parms.Location = std::move(Location);
	Parms.Param_Step = Param_Step;

	UObject::ProcessEvent(Func, &Parms);
}


// Function tentacleBall.tentacleBall_C.unhostile
// (Public, BlueprintCallable, BlueprintEvent)

void ATentacleBall_C::Unhostile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "unhostile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function tentacleBall.tentacleBall_C.setBuddies
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ATentacleBall_C*>          Param_buddies                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ATentacleBall_C::SetBuddies(TArray<class ATentacleBall_C*>& Param_buddies)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "setBuddies");

	Params::TentacleBall_C_SetBuddies Parms{};

	Parms.Param_buddies = std::move(Param_buddies);

	UObject::ProcessEvent(Func, &Parms);

	Param_buddies = std::move(Parms.Param_buddies);
}


// Function tentacleBall.tentacleBall_C.talk
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ITalk                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATentacleBall_C::Talk(int32 Param_ITalk)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("tentacleBall_C", "talk");

	Params::TentacleBall_C_Talk Parms{};

	Parms.Param_ITalk = Param_ITalk;

	UObject::ProcessEvent(Func, &Parms);
}

}

