#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_laserDir

#include "Basic.hpp"

#include "Prop_wireComponent_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wireComponent_laserDir.prop_wireComponent_laserDir_C
// 0x0008 (0x0378 - 0x0370)
class AProp_wireComponent_laserDir_C final : public AProp_wireComponent_C
{
public:
	class UArrowComponent*                        Dir;                                               // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wireComponent_laserDir_C">();
	}
	static class AProp_wireComponent_laserDir_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wireComponent_laserDir_C>();
	}
};
static_assert(alignof(AProp_wireComponent_laserDir_C) == 0x000008, "Wrong alignment on AProp_wireComponent_laserDir_C");
static_assert(sizeof(AProp_wireComponent_laserDir_C) == 0x000378, "Wrong size on AProp_wireComponent_laserDir_C");
static_assert(offsetof(AProp_wireComponent_laserDir_C, Dir) == 0x000370, "Member 'AProp_wireComponent_laserDir_C::Dir' has a wrong offset!");

}

