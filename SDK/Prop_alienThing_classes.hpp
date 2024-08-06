#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_alienThing

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_alienThing.prop_alienThing_C
// 0x0040 (0x03B8 - 0x0378)
class AProp_alienThing_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_alienThing_C;                  // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_radarPoint_C*                     RadarPoint;                                        // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Radius;                                            // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4[0x4];                                      // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            Comps;                                             // 0x03A8(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)

public:
	void ExecuteUbergraph_prop_alienThing(int32 EntryPoint);
	void BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void AddObj(class UPrimitiveComponent* InputPin);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_alienThing_C">();
	}
	static class AProp_alienThing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_alienThing_C>();
	}
};
static_assert(alignof(AProp_alienThing_C) == 0x000008, "Wrong alignment on AProp_alienThing_C");
static_assert(sizeof(AProp_alienThing_C) == 0x0003B8, "Wrong size on AProp_alienThing_C");
static_assert(offsetof(AProp_alienThing_C, UberGraphFrame_Prop_alienThing_C) == 0x000378, "Member 'AProp_alienThing_C::UberGraphFrame_Prop_alienThing_C' has a wrong offset!");
static_assert(offsetof(AProp_alienThing_C, Sphere) == 0x000380, "Member 'AProp_alienThing_C::Sphere' has a wrong offset!");
static_assert(offsetof(AProp_alienThing_C, Audio) == 0x000388, "Member 'AProp_alienThing_C::Audio' has a wrong offset!");
static_assert(offsetof(AProp_alienThing_C, PointLight) == 0x000390, "Member 'AProp_alienThing_C::PointLight' has a wrong offset!");
static_assert(offsetof(AProp_alienThing_C, RadarPoint) == 0x000398, "Member 'AProp_alienThing_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(AProp_alienThing_C, Radius) == 0x0003A0, "Member 'AProp_alienThing_C::Radius' has a wrong offset!");
static_assert(offsetof(AProp_alienThing_C, Comps) == 0x0003A8, "Member 'AProp_alienThing_C::Comps' has a wrong offset!");

}

