#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_crystal

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_crystal.prop_crystal_C
// 0x0010 (0x0378 - 0x0368)
class AProp_crystal_C : public AProp_C
{
public:
	uint8                                         Pad_377A[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URadarPointComponent_C*                 RadarPoint;                                        // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_crystal_C">();
	}
	static class AProp_crystal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_crystal_C>();
	}
};
static_assert(alignof(AProp_crystal_C) == 0x000008, "Wrong alignment on AProp_crystal_C");
static_assert(sizeof(AProp_crystal_C) == 0x000378, "Wrong size on AProp_crystal_C");
static_assert(offsetof(AProp_crystal_C, RadarPoint) == 0x000368, "Member 'AProp_crystal_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(AProp_crystal_C, PointLight) == 0x000370, "Member 'AProp_crystal_C::PointLight' has a wrong offset!");

}

