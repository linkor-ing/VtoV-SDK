#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_physgun_s

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_physgun_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_physgun_s.prop_physgun_s_C
// 0x0010 (0x05B0 - 0x05A0)
class AProp_physgun_s_C final : public AProp_physgun_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_physgun_s_C;                   // 0x0598(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Charges;                                           // 0x05A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_physgun_s(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_physgun_s_C">();
	}
	static class AProp_physgun_s_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_physgun_s_C>();
	}
};
static_assert(alignof(AProp_physgun_s_C) == 0x000010, "Wrong alignment on AProp_physgun_s_C");
static_assert(sizeof(AProp_physgun_s_C) == 0x0005B0, "Wrong size on AProp_physgun_s_C");
static_assert(offsetof(AProp_physgun_s_C, UberGraphFrame_Prop_physgun_s_C) == 0x000598, "Member 'AProp_physgun_s_C::UberGraphFrame_Prop_physgun_s_C' has a wrong offset!");
static_assert(offsetof(AProp_physgun_s_C, Charges) == 0x0005A0, "Member 'AProp_physgun_s_C::Charges' has a wrong offset!");

}

