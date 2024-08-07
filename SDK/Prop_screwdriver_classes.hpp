#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_screwdriver

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_screwdriver.prop_screwdriver_C
// 0x0010 (0x0388 - 0x0378)
class AProp_screwdriver_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_screwdriver_C;                 // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVelocityStuck_C*                       VelocityStuck;                                     // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_screwdriver(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_screwdriver_C">();
	}
	static class AProp_screwdriver_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_screwdriver_C>();
	}
};
static_assert(alignof(AProp_screwdriver_C) == 0x000008, "Wrong alignment on AProp_screwdriver_C");
static_assert(sizeof(AProp_screwdriver_C) == 0x000388, "Wrong size on AProp_screwdriver_C");
static_assert(offsetof(AProp_screwdriver_C, UberGraphFrame_Prop_screwdriver_C) == 0x000378, "Member 'AProp_screwdriver_C::UberGraphFrame_Prop_screwdriver_C' has a wrong offset!");
static_assert(offsetof(AProp_screwdriver_C, VelocityStuck) == 0x000380, "Member 'AProp_screwdriver_C::VelocityStuck' has a wrong offset!");

}

