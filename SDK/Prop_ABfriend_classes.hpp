#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_ABfriend

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_ABfriend.prop_ABfriend_C
// 0x0028 (0x0390 - 0x0368)
class AProp_ABfriend_C final : public AProp_C
{
public:
	uint8                                         Pad_3774[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_ABfriend_C;                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URadarPointComponent_C*                 RadarPoint;                                        // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Ab_friend_crys;                                    // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_ABfriend(int32 EntryPoint);
	void BndEvt__Audio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_ABfriend_C">();
	}
	static class AProp_ABfriend_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_ABfriend_C>();
	}
};
static_assert(alignof(AProp_ABfriend_C) == 0x000008, "Wrong alignment on AProp_ABfriend_C");
static_assert(sizeof(AProp_ABfriend_C) == 0x000390, "Wrong size on AProp_ABfriend_C");
static_assert(offsetof(AProp_ABfriend_C, UberGraphFrame_Prop_ABfriend_C) == 0x000368, "Member 'AProp_ABfriend_C::UberGraphFrame_Prop_ABfriend_C' has a wrong offset!");
static_assert(offsetof(AProp_ABfriend_C, RadarPoint) == 0x000370, "Member 'AProp_ABfriend_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(AProp_ABfriend_C, Audio) == 0x000378, "Member 'AProp_ABfriend_C::Audio' has a wrong offset!");
static_assert(offsetof(AProp_ABfriend_C, Ab_friend_crys) == 0x000380, "Member 'AProp_ABfriend_C::Ab_friend_crys' has a wrong offset!");
static_assert(offsetof(AProp_ABfriend_C, PointLight) == 0x000388, "Member 'AProp_ABfriend_C::PointLight' has a wrong offset!");

}

