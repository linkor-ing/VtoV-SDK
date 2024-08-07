#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_bbq

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_bbq.prop_bbq_C
// 0x0058 (0x03D0 - 0x0378)
class AProp_bbq_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_bbq_C;                         // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        burning;                                           // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_fire;                                          // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CookingLoop;                                       // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_a_38F8E1FC4A76C0ED5DDC3984D1AC6018;     // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_38F8E1FC4A76C0ED5DDC3984D1AC6018; // 0x03A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A5[0x3];                                      // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         V;                                                 // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x03B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B5[0x3];                                      // 0x03B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AProp_cookingFood_C*>            Cooks;                                             // 0x03B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         Coals;                                             // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         A;                                                 // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_bbq(int32 EntryPoint);
	void PlaySound(bool Condition);
	void BndEvt__prop_cookingPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__prop_cookingPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void SetVol();
	void Upd();
	void AddCoal(bool* Added);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, Enum_interactionActions Action);
	void AttemptIgnite();
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_bbq_C">();
	}
	static class AProp_bbq_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_bbq_C>();
	}
};
static_assert(alignof(AProp_bbq_C) == 0x000008, "Wrong alignment on AProp_bbq_C");
static_assert(sizeof(AProp_bbq_C) == 0x0003D0, "Wrong size on AProp_bbq_C");
static_assert(offsetof(AProp_bbq_C, UberGraphFrame_Prop_bbq_C) == 0x000378, "Member 'AProp_bbq_C::UberGraphFrame_Prop_bbq_C' has a wrong offset!");
static_assert(offsetof(AProp_bbq_C, burning) == 0x000380, "Member 'AProp_bbq_C::burning' has a wrong offset!");
static_assert(offsetof(AProp_bbq_C, Eff_fire) == 0x000388, "Member 'AProp_bbq_C::Eff_fire' has a wrong offset!");
static_assert(offsetof(AProp_bbq_C, Box) == 0x000390, "Member 'AProp_bbq_C::Box' has a wrong offset!");
static_assert(offsetof(AProp_bbq_C, CookingLoop) == 0x000398, "Member 'AProp_bbq_C::CookingLoop' has a wrong offset!");
static_assert(offsetof(AProp_bbq_C, Timeline_0_a_38F8E1FC4A76C0ED5DDC3984D1AC6018) == 0x0003A0, "Member 'AProp_bbq_C::Timeline_0_a_38F8E1FC4A76C0ED5DDC3984D1AC6018' has a wrong offset!");
static_assert(offsetof(AProp_bbq_C, Timeline_0__Direction_38F8E1FC4A76C0ED5DDC3984D1AC6018) == 0x0003A4, "Member 'AProp_bbq_C::Timeline_0__Direction_38F8E1FC4A76C0ED5DDC3984D1AC6018' has a wrong offset!");
static_assert(offsetof(AProp_bbq_C, Timeline_0) == 0x0003A8, "Member 'AProp_bbq_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(AProp_bbq_C, V) == 0x0003B0, "Member 'AProp_bbq_C::V' has a wrong offset!");
static_assert(offsetof(AProp_bbq_C, Active) == 0x0003B4, "Member 'AProp_bbq_C::Active' has a wrong offset!");
static_assert(offsetof(AProp_bbq_C, Cooks) == 0x0003B8, "Member 'AProp_bbq_C::Cooks' has a wrong offset!");
static_assert(offsetof(AProp_bbq_C, Coals) == 0x0003C8, "Member 'AProp_bbq_C::Coals' has a wrong offset!");
static_assert(offsetof(AProp_bbq_C, A) == 0x0003CC, "Member 'AProp_bbq_C::A' has a wrong offset!");

}

