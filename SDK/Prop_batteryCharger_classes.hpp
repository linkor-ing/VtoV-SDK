#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_batteryCharger

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_batteryCharger.prop_batteryCharger_C
// 0x0098 (0x0400 - 0x0368)
class AProp_batteryCharger_C final : public AProp_C
{
public:
	uint8                                         Pad_3B63[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_batteryCharger_C;              // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   Cord;                                              // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          C4;                                                // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          C3;                                                // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          C2;                                                // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          C1;                                                // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   batt4;                                             // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   batt3;                                             // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   batt2;                                             // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   batt1;                                             // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         b1;                                                // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         b2;                                                // 0x03BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         b3;                                                // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         b4;                                                // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LookingAt;                                         // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B64[0x4];                                     // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           battArray;                                         // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>            battCArrayy;                                       // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ACord_C*                                ObjCord;                                           // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Powered;                                           // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B65[0x3];                                     // 0x03F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Plugged;                                           // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_batteryCharger(int32 EntryPoint);
	void CordUnplugged(class ACord_C* Param_Cord, class ACordSocket_C* Socket);
	void CordPlugged(class ACord_C* Param_Cord, class ACordSocket_C* Socket);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetActiveTrigger(class AActor* SentFrom, bool Active);
	void Set_ignoreSave_trigger(bool NewParam);
	void RunTrigger(class AActor* Param_Owner, int32 Param_Index);
	void Upd();
	void PutIn(class AMainPlayer_C* InputPin);
	void IgnoreSave_trigger(bool* Ignore);
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);
	void GetTriggerData(struct FStruct_triggerSave* Data);
	void PlayerUsedOn(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);
	void UserConstructionScript();
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_batteryCharger_C">();
	}
	static class AProp_batteryCharger_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_batteryCharger_C>();
	}
};
static_assert(alignof(AProp_batteryCharger_C) == 0x000008, "Wrong alignment on AProp_batteryCharger_C");
static_assert(sizeof(AProp_batteryCharger_C) == 0x000400, "Wrong size on AProp_batteryCharger_C");
static_assert(offsetof(AProp_batteryCharger_C, UberGraphFrame_Prop_batteryCharger_C) == 0x000368, "Member 'AProp_batteryCharger_C::UberGraphFrame_Prop_batteryCharger_C' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, Cord) == 0x000370, "Member 'AProp_batteryCharger_C::Cord' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, C4) == 0x000378, "Member 'AProp_batteryCharger_C::C4' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, C3) == 0x000380, "Member 'AProp_batteryCharger_C::C3' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, C2) == 0x000388, "Member 'AProp_batteryCharger_C::C2' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, C1) == 0x000390, "Member 'AProp_batteryCharger_C::C1' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, batt4) == 0x000398, "Member 'AProp_batteryCharger_C::batt4' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, batt3) == 0x0003A0, "Member 'AProp_batteryCharger_C::batt3' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, batt2) == 0x0003A8, "Member 'AProp_batteryCharger_C::batt2' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, batt1) == 0x0003B0, "Member 'AProp_batteryCharger_C::batt1' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, b1) == 0x0003B8, "Member 'AProp_batteryCharger_C::b1' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, b2) == 0x0003BC, "Member 'AProp_batteryCharger_C::b2' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, b3) == 0x0003C0, "Member 'AProp_batteryCharger_C::b3' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, b4) == 0x0003C4, "Member 'AProp_batteryCharger_C::b4' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, LookingAt) == 0x0003C8, "Member 'AProp_batteryCharger_C::LookingAt' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, battArray) == 0x0003D0, "Member 'AProp_batteryCharger_C::battArray' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, battCArrayy) == 0x0003E0, "Member 'AProp_batteryCharger_C::battCArrayy' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, ObjCord) == 0x0003F0, "Member 'AProp_batteryCharger_C::ObjCord' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, Powered) == 0x0003F8, "Member 'AProp_batteryCharger_C::Powered' has a wrong offset!");
static_assert(offsetof(AProp_batteryCharger_C, Plugged) == 0x0003FC, "Member 'AProp_batteryCharger_C::Plugged' has a wrong offset!");

}
