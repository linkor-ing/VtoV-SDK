#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_soos

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_soos.prop_soos_C
// 0x0030 (0x03A8 - 0x0378)
class AProp_soos_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_soos_C;                        // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Eff_radCapsUnderwater;                             // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_radiation_C*                      RadComp;                                           // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Max;                                               // 0x0398(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AlphaD;                                            // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsExploding;                                       // 0x03A4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_soos(int32 EntryPoint);
	void Exp(bool Skip);
	void Light(float NewIntensity);
	void EnteredTheWater();
	void ExitTheWater();
	void LeaveWater(class AWaterVolume_C* Water);
	void Microwave();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_soos_C">();
	}
	static class AProp_soos_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_soos_C>();
	}
};
static_assert(alignof(AProp_soos_C) == 0x000008, "Wrong alignment on AProp_soos_C");
static_assert(sizeof(AProp_soos_C) == 0x0003A8, "Wrong size on AProp_soos_C");
static_assert(offsetof(AProp_soos_C, UberGraphFrame_Prop_soos_C) == 0x000378, "Member 'AProp_soos_C::UberGraphFrame_Prop_soos_C' has a wrong offset!");
static_assert(offsetof(AProp_soos_C, Eff_radCapsUnderwater) == 0x000380, "Member 'AProp_soos_C::Eff_radCapsUnderwater' has a wrong offset!");
static_assert(offsetof(AProp_soos_C, PointLight) == 0x000388, "Member 'AProp_soos_C::PointLight' has a wrong offset!");
static_assert(offsetof(AProp_soos_C, RadComp) == 0x000390, "Member 'AProp_soos_C::RadComp' has a wrong offset!");
static_assert(offsetof(AProp_soos_C, Max) == 0x000398, "Member 'AProp_soos_C::Max' has a wrong offset!");
static_assert(offsetof(AProp_soos_C, Time) == 0x00039C, "Member 'AProp_soos_C::Time' has a wrong offset!");
static_assert(offsetof(AProp_soos_C, AlphaD) == 0x0003A0, "Member 'AProp_soos_C::AlphaD' has a wrong offset!");
static_assert(offsetof(AProp_soos_C, IsExploding) == 0x0003A4, "Member 'AProp_soos_C::IsExploding' has a wrong offset!");

}

