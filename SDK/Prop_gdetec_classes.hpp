#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_gdetec

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_gdetec.prop_gdetec_C
// 0x0058 (0x03C0 - 0x0368)
class AProp_gdetec_C final : public AProp_C
{
public:
	uint8                                         Pad_3906[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_gdetec_C;                      // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               L1;                                                // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               L3;                                                // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               L2;                                                // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               L4;                                                // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        beep;                                              // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Ovs;                                               // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	float                                         T;                                                 // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Mt;                                                // 0x03B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_gdetec(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);
	void ReceiveBeginPlay();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void Upd();
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_gdetec_C">();
	}
	static class AProp_gdetec_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_gdetec_C>();
	}
};
static_assert(alignof(AProp_gdetec_C) == 0x000008, "Wrong alignment on AProp_gdetec_C");
static_assert(sizeof(AProp_gdetec_C) == 0x0003C0, "Wrong size on AProp_gdetec_C");
static_assert(offsetof(AProp_gdetec_C, UberGraphFrame_Prop_gdetec_C) == 0x000368, "Member 'AProp_gdetec_C::UberGraphFrame_Prop_gdetec_C' has a wrong offset!");
static_assert(offsetof(AProp_gdetec_C, L1) == 0x000370, "Member 'AProp_gdetec_C::L1' has a wrong offset!");
static_assert(offsetof(AProp_gdetec_C, L3) == 0x000378, "Member 'AProp_gdetec_C::L3' has a wrong offset!");
static_assert(offsetof(AProp_gdetec_C, L2) == 0x000380, "Member 'AProp_gdetec_C::L2' has a wrong offset!");
static_assert(offsetof(AProp_gdetec_C, L4) == 0x000388, "Member 'AProp_gdetec_C::L4' has a wrong offset!");
static_assert(offsetof(AProp_gdetec_C, beep) == 0x000390, "Member 'AProp_gdetec_C::beep' has a wrong offset!");
static_assert(offsetof(AProp_gdetec_C, Sphere) == 0x000398, "Member 'AProp_gdetec_C::Sphere' has a wrong offset!");
static_assert(offsetof(AProp_gdetec_C, Ovs) == 0x0003A0, "Member 'AProp_gdetec_C::Ovs' has a wrong offset!");
static_assert(offsetof(AProp_gdetec_C, T) == 0x0003B0, "Member 'AProp_gdetec_C::T' has a wrong offset!");
static_assert(offsetof(AProp_gdetec_C, Mt) == 0x0003B4, "Member 'AProp_gdetec_C::Mt' has a wrong offset!");
static_assert(offsetof(AProp_gdetec_C, Active) == 0x0003B8, "Member 'AProp_gdetec_C::Active' has a wrong offset!");

}

