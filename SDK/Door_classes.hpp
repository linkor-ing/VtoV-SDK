#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Door

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TriggerBase_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass door.door_C
// 0x0110 (0x0398 - 0x0288)
class ADoor_C final : public ATriggerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Door_C;                             // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   Navmod;                                            // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Coll;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Doorstop1;                                         // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        DoorSlide1;                                        // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Sensor;                                            // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door_L;                                            // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door_R;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Frame;                                             // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Resize;                                            // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         OpenJammed_a_33504C814931C8ACCF06789CFA66D580;     // 0x02D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            OpenJammed__Direction_33504C814931C8ACCF06789CFA66D580; // 0x02DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3004[0x3];                                     // 0x02DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     OpenJammed;                                        // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Move_a_88C181824A7CA370E6BB3DAAE7420F44;           // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Move__Direction_88C181824A7CA370E6BB3DAAE7420F44;  // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3005[0x3];                                     // 0x02ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Move;                                              // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsOpened;                                          // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsMoving;                                          // 0x02F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Active;                                            // 0x02FA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Autoclose;                                         // 0x02FB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3006[0x4];                                     // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATriggerBase_C*                         Trigger_opened;                                    // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Trigger_opened_key;                                // 0x0308(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class ATriggerBase_C*                         Trigger_closed;                                    // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Trigger_closed_key;                                // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          SuperClosed;                                       // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3007[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ANavModifierBox_C*                      Nav;                                               // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreNPC;                                         // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3008[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class APasswordLock_C*>                Passlocks;                                         // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class FString>                         Passlocks_keys;                                    // 0x0358(0x0010)(Edit, BlueprintVisible)
	bool                                          Jammed;                                            // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Alienated;                                         // 0x0369(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3009[0x6];                                     // 0x036A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Keycard;                                           // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IgnoreBlackout;                                    // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_300A[0x7];                                     // 0x0381(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             DoorOpened;                                        // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void DoorOpened__DelegateSignature();
	void ExecuteUbergraph_door(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, int32 Param_Index, Enum_interactionActions Action);
	void Del();
	void JamCancel(float Duration);
	void ReceiveBeginPlay();
	void Settime(bool Opened);
	void RunTrigger(class AActor* Param_Owner, int32 Param_Index);
	void DoorOpen(bool bypassCheck);
	void DoorClose(bool bypassCheck);
	void CheckSensor();
	void UpdateStrAgl();
	void DamageByPlayer(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void Thrown(class AMainPlayer_C* Player);
	void broken_fire();
	void broken();
	void SendName(class FName Param_Name);
	void Kicked(bool Kick);
	void Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void DriveDetached();
	void OpenJammed__jam1__EventFunc();
	void OpenJammed__jam2__EventFunc();
	void OpenJammed__UpdateFunc();
	void OpenJammed__FinishedFunc();
	void Move__UpdateFunc();
	void Move__FinishedFunc();
	void Snd();
	void GamemodeBeginPlay();
	void UserConstructionScript();
	void Upd();
	void GetTriggerData(struct FStruct_triggerSave* Data);
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);
	void ProcessKeys(bool* Return);
	void Hack(const struct FVector& Source);
	void Jam(bool AutoCancel);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);
	void IsButtonUsed(bool* Failed);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace);
	void NoRespawn(bool Param_NoRespawn, bool* Return);
	void CanPickup(bool* Return);
	void AsProp(class AProp_C** Return);
	void CanBePutInContainer(bool* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"door_C">();
	}
	static class ADoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADoor_C>();
	}
};
static_assert(alignof(ADoor_C) == 0x000008, "Wrong alignment on ADoor_C");
static_assert(sizeof(ADoor_C) == 0x000398, "Wrong size on ADoor_C");
static_assert(offsetof(ADoor_C, UberGraphFrame_Door_C) == 0x000288, "Member 'ADoor_C::UberGraphFrame_Door_C' has a wrong offset!");
static_assert(offsetof(ADoor_C, Navmod) == 0x000290, "Member 'ADoor_C::Navmod' has a wrong offset!");
static_assert(offsetof(ADoor_C, Coll) == 0x000298, "Member 'ADoor_C::Coll' has a wrong offset!");
static_assert(offsetof(ADoor_C, Doorstop1) == 0x0002A0, "Member 'ADoor_C::Doorstop1' has a wrong offset!");
static_assert(offsetof(ADoor_C, DoorSlide1) == 0x0002A8, "Member 'ADoor_C::DoorSlide1' has a wrong offset!");
static_assert(offsetof(ADoor_C, Sensor) == 0x0002B0, "Member 'ADoor_C::Sensor' has a wrong offset!");
static_assert(offsetof(ADoor_C, Door_L) == 0x0002B8, "Member 'ADoor_C::Door_L' has a wrong offset!");
static_assert(offsetof(ADoor_C, Door_R) == 0x0002C0, "Member 'ADoor_C::Door_R' has a wrong offset!");
static_assert(offsetof(ADoor_C, Frame) == 0x0002C8, "Member 'ADoor_C::Frame' has a wrong offset!");
static_assert(offsetof(ADoor_C, Resize) == 0x0002D0, "Member 'ADoor_C::Resize' has a wrong offset!");
static_assert(offsetof(ADoor_C, OpenJammed_a_33504C814931C8ACCF06789CFA66D580) == 0x0002D8, "Member 'ADoor_C::OpenJammed_a_33504C814931C8ACCF06789CFA66D580' has a wrong offset!");
static_assert(offsetof(ADoor_C, OpenJammed__Direction_33504C814931C8ACCF06789CFA66D580) == 0x0002DC, "Member 'ADoor_C::OpenJammed__Direction_33504C814931C8ACCF06789CFA66D580' has a wrong offset!");
static_assert(offsetof(ADoor_C, OpenJammed) == 0x0002E0, "Member 'ADoor_C::OpenJammed' has a wrong offset!");
static_assert(offsetof(ADoor_C, Move_a_88C181824A7CA370E6BB3DAAE7420F44) == 0x0002E8, "Member 'ADoor_C::Move_a_88C181824A7CA370E6BB3DAAE7420F44' has a wrong offset!");
static_assert(offsetof(ADoor_C, Move__Direction_88C181824A7CA370E6BB3DAAE7420F44) == 0x0002EC, "Member 'ADoor_C::Move__Direction_88C181824A7CA370E6BB3DAAE7420F44' has a wrong offset!");
static_assert(offsetof(ADoor_C, Move) == 0x0002F0, "Member 'ADoor_C::Move' has a wrong offset!");
static_assert(offsetof(ADoor_C, IsOpened) == 0x0002F8, "Member 'ADoor_C::IsOpened' has a wrong offset!");
static_assert(offsetof(ADoor_C, IsMoving) == 0x0002F9, "Member 'ADoor_C::IsMoving' has a wrong offset!");
static_assert(offsetof(ADoor_C, Active) == 0x0002FA, "Member 'ADoor_C::Active' has a wrong offset!");
static_assert(offsetof(ADoor_C, Autoclose) == 0x0002FB, "Member 'ADoor_C::Autoclose' has a wrong offset!");
static_assert(offsetof(ADoor_C, Trigger_opened) == 0x000300, "Member 'ADoor_C::Trigger_opened' has a wrong offset!");
static_assert(offsetof(ADoor_C, Trigger_opened_key) == 0x000308, "Member 'ADoor_C::Trigger_opened_key' has a wrong offset!");
static_assert(offsetof(ADoor_C, Trigger_closed) == 0x000318, "Member 'ADoor_C::Trigger_closed' has a wrong offset!");
static_assert(offsetof(ADoor_C, Trigger_closed_key) == 0x000320, "Member 'ADoor_C::Trigger_closed_key' has a wrong offset!");
static_assert(offsetof(ADoor_C, SuperClosed) == 0x000330, "Member 'ADoor_C::SuperClosed' has a wrong offset!");
static_assert(offsetof(ADoor_C, Nav) == 0x000338, "Member 'ADoor_C::Nav' has a wrong offset!");
static_assert(offsetof(ADoor_C, IgnoreNPC) == 0x000340, "Member 'ADoor_C::IgnoreNPC' has a wrong offset!");
static_assert(offsetof(ADoor_C, Passlocks) == 0x000348, "Member 'ADoor_C::Passlocks' has a wrong offset!");
static_assert(offsetof(ADoor_C, Passlocks_keys) == 0x000358, "Member 'ADoor_C::Passlocks_keys' has a wrong offset!");
static_assert(offsetof(ADoor_C, Jammed) == 0x000368, "Member 'ADoor_C::Jammed' has a wrong offset!");
static_assert(offsetof(ADoor_C, Alienated) == 0x000369, "Member 'ADoor_C::Alienated' has a wrong offset!");
static_assert(offsetof(ADoor_C, Keycard) == 0x000370, "Member 'ADoor_C::Keycard' has a wrong offset!");
static_assert(offsetof(ADoor_C, IgnoreBlackout) == 0x000380, "Member 'ADoor_C::IgnoreBlackout' has a wrong offset!");
static_assert(offsetof(ADoor_C, DoorOpened) == 0x000388, "Member 'ADoor_C::DoorOpened' has a wrong offset!");

}

