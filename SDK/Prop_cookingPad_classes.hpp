#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_cookingPad

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_cookingPad.prop_cookingPad_C
// 0x0078 (0x03E0 - 0x0368)
class AProp_cookingPad_C final : public AProp_C
{
public:
	uint8                                         Pad_2007[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_cookingPad_C;                  // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Rot;                                               // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Light;                                             // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Toggle;                                            // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Cord;                                              // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CookingLoop;                                       // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         A_a_578E621D468C77CACBD4B1A9C5C0497F;              // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            A__Direction_578E621D468C77CACBD4B1A9C5C0497F;     // 0x03A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2008[0x3];                                     // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     A;                                                 // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AProp_cookingFood_C*>            Cooks;                                             // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          Powered;                                           // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2009[0x7];                                     // 0x03C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACord_C*                                ObjCord;                                           // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Power;                                             // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x03D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_200A[0x3];                                     // 0x03D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         V;                                                 // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_cookingPad(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);
	void CordUnplugged(class ACord_C* Param_Cord, class ACordSocket_C* Socket);
	void CordPlugged(class ACord_C* Param_Cord, class ACordSocket_C* Socket);
	void ReceiveBeginPlay();
	void PlaySound(bool Condition);
	void BndEvt__prop_cookingPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__prop_cookingPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void SetActiveTrigger(class AActor* SentFrom, bool Param_Active);
	void Set_ignoreSave_trigger(bool NewParam);
	void RunTrigger(class AActor* Param_Owner, int32 Param_Index);
	void A__UpdateFunc();
	void A__FinishedFunc();
	void Upd();
	float Powr();
	void SetVol();
	void IgnoreSave_trigger(bool* Ignore);
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);
	void GetTriggerData(struct FStruct_triggerSave* Data);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_cookingPad_C">();
	}
	static class AProp_cookingPad_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_cookingPad_C>();
	}
};
static_assert(alignof(AProp_cookingPad_C) == 0x000008, "Wrong alignment on AProp_cookingPad_C");
static_assert(sizeof(AProp_cookingPad_C) == 0x0003E0, "Wrong size on AProp_cookingPad_C");
static_assert(offsetof(AProp_cookingPad_C, UberGraphFrame_Prop_cookingPad_C) == 0x000368, "Member 'AProp_cookingPad_C::UberGraphFrame_Prop_cookingPad_C' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, Rot) == 0x000370, "Member 'AProp_cookingPad_C::Rot' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, Light) == 0x000378, "Member 'AProp_cookingPad_C::Light' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, Toggle) == 0x000380, "Member 'AProp_cookingPad_C::Toggle' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, Cord) == 0x000388, "Member 'AProp_cookingPad_C::Cord' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, CookingLoop) == 0x000390, "Member 'AProp_cookingPad_C::CookingLoop' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, Box) == 0x000398, "Member 'AProp_cookingPad_C::Box' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, A_a_578E621D468C77CACBD4B1A9C5C0497F) == 0x0003A0, "Member 'AProp_cookingPad_C::A_a_578E621D468C77CACBD4B1A9C5C0497F' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, A__Direction_578E621D468C77CACBD4B1A9C5C0497F) == 0x0003A4, "Member 'AProp_cookingPad_C::A__Direction_578E621D468C77CACBD4B1A9C5C0497F' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, A) == 0x0003A8, "Member 'AProp_cookingPad_C::A' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, Cooks) == 0x0003B0, "Member 'AProp_cookingPad_C::Cooks' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, Powered) == 0x0003C0, "Member 'AProp_cookingPad_C::Powered' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, ObjCord) == 0x0003C8, "Member 'AProp_cookingPad_C::ObjCord' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, Power) == 0x0003D0, "Member 'AProp_cookingPad_C::Power' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, Active) == 0x0003D4, "Member 'AProp_cookingPad_C::Active' has a wrong offset!");
static_assert(offsetof(AProp_cookingPad_C, V) == 0x0003D8, "Member 'AProp_cookingPad_C::V' has a wrong offset!");

}

