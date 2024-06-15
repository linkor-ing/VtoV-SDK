#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_furfurPaltar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_furfurPaltar.prop_furfurPAltar_C
// 0x0030 (0x0398 - 0x0368)
class AProp_furfurPAltar_C final : public AProp_C
{
public:
	uint8                                         Pad_385D[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_furfurPAltar_C;                // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Two;                                               // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          One;                                               // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Has_1;                                             // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Has_2;                                             // 0x0391(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Activated;                                         // 0x0392(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_furfurPAltar(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void BndEvt__prop_furfurPAltar_2_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__prop_furfurPAltar_1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void GamemodeBeginPlay();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_furfurPAltar_C">();
	}
	static class AProp_furfurPAltar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_furfurPAltar_C>();
	}
};
static_assert(alignof(AProp_furfurPAltar_C) == 0x000008, "Wrong alignment on AProp_furfurPAltar_C");
static_assert(sizeof(AProp_furfurPAltar_C) == 0x000398, "Wrong size on AProp_furfurPAltar_C");
static_assert(offsetof(AProp_furfurPAltar_C, UberGraphFrame_Prop_furfurPAltar_C) == 0x000368, "Member 'AProp_furfurPAltar_C::UberGraphFrame_Prop_furfurPAltar_C' has a wrong offset!");
static_assert(offsetof(AProp_furfurPAltar_C, PointLight) == 0x000370, "Member 'AProp_furfurPAltar_C::PointLight' has a wrong offset!");
static_assert(offsetof(AProp_furfurPAltar_C, Sphere) == 0x000378, "Member 'AProp_furfurPAltar_C::Sphere' has a wrong offset!");
static_assert(offsetof(AProp_furfurPAltar_C, Two) == 0x000380, "Member 'AProp_furfurPAltar_C::Two' has a wrong offset!");
static_assert(offsetof(AProp_furfurPAltar_C, One) == 0x000388, "Member 'AProp_furfurPAltar_C::One' has a wrong offset!");
static_assert(offsetof(AProp_furfurPAltar_C, Has_1) == 0x000390, "Member 'AProp_furfurPAltar_C::Has_1' has a wrong offset!");
static_assert(offsetof(AProp_furfurPAltar_C, Has_2) == 0x000391, "Member 'AProp_furfurPAltar_C::Has_2' has a wrong offset!");
static_assert(offsetof(AProp_furfurPAltar_C, Activated) == 0x000392, "Member 'AProp_furfurPAltar_C::Activated' has a wrong offset!");

}
