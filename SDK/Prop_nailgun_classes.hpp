#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_nailgun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_nailgun.prop_nailgun_C
// 0x0008 (0x0380 - 0x0378)
class AProp_nailgun_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_nailgun_C;                     // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_nailgun(int32 EntryPoint);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_nailgun_C">();
	}
	static class AProp_nailgun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_nailgun_C>();
	}
};
static_assert(alignof(AProp_nailgun_C) == 0x000008, "Wrong alignment on AProp_nailgun_C");
static_assert(sizeof(AProp_nailgun_C) == 0x000380, "Wrong size on AProp_nailgun_C");
static_assert(offsetof(AProp_nailgun_C, UberGraphFrame_Prop_nailgun_C) == 0x000378, "Member 'AProp_nailgun_C::UberGraphFrame_Prop_nailgun_C' has a wrong offset!");

}

