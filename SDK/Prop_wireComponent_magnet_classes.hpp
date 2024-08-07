#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_magnet

#include "Basic.hpp"

#include "Prop_wireComponent_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wireComponent_magnet.prop_wireComponent_magnet_C
// 0x0028 (0x03A8 - 0x0380)
class AProp_wireComponent_magnet_C final : public AProp_wireComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_wireComponent_magnet_C;        // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UPrimitiveComponent*>            Comps;                                             // 0x0390(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	float                                         Radius;                                            // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PeakForce;                                         // 0x03A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_wireComponent_magnet(int32 EntryPoint);
	void WirePass(class AWire_C* Wire);
	void BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void AddObj(class UPrimitiveComponent* InputPin);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wireComponent_magnet_C">();
	}
	static class AProp_wireComponent_magnet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wireComponent_magnet_C>();
	}
};
static_assert(alignof(AProp_wireComponent_magnet_C) == 0x000008, "Wrong alignment on AProp_wireComponent_magnet_C");
static_assert(sizeof(AProp_wireComponent_magnet_C) == 0x0003A8, "Wrong size on AProp_wireComponent_magnet_C");
static_assert(offsetof(AProp_wireComponent_magnet_C, UberGraphFrame_Prop_wireComponent_magnet_C) == 0x000380, "Member 'AProp_wireComponent_magnet_C::UberGraphFrame_Prop_wireComponent_magnet_C' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_magnet_C, Sphere) == 0x000388, "Member 'AProp_wireComponent_magnet_C::Sphere' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_magnet_C, Comps) == 0x000390, "Member 'AProp_wireComponent_magnet_C::Comps' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_magnet_C, Radius) == 0x0003A0, "Member 'AProp_wireComponent_magnet_C::Radius' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_magnet_C, PeakForce) == 0x0003A4, "Member 'AProp_wireComponent_magnet_C::PeakForce' has a wrong offset!");

}

