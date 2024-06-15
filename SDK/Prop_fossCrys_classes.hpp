#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_fossCrys

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_fossCrys.prop_fossCrys_C
// 0x0018 (0x0380 - 0x0368)
class AProp_fossCrys_C final : public AProp_C
{
public:
	uint8                                         Pad_386F[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_fossCrys_C;                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPnormal_C*                             Pnormal;                                           // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_fossCrys(int32 EntryPoint);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_fossCrys_C">();
	}
	static class AProp_fossCrys_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_fossCrys_C>();
	}
};
static_assert(alignof(AProp_fossCrys_C) == 0x000008, "Wrong alignment on AProp_fossCrys_C");
static_assert(sizeof(AProp_fossCrys_C) == 0x000380, "Wrong size on AProp_fossCrys_C");
static_assert(offsetof(AProp_fossCrys_C, UberGraphFrame_Prop_fossCrys_C) == 0x000368, "Member 'AProp_fossCrys_C::UberGraphFrame_Prop_fossCrys_C' has a wrong offset!");
static_assert(offsetof(AProp_fossCrys_C, Pnormal) == 0x000370, "Member 'AProp_fossCrys_C::Pnormal' has a wrong offset!");
static_assert(offsetof(AProp_fossCrys_C, PointLight) == 0x000378, "Member 'AProp_fossCrys_C::PointLight' has a wrong offset!");

}
