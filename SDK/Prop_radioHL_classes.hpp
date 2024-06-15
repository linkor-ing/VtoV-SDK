#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_radioHL

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_radioHL.prop_radioHL_C
// 0x0018 (0x0380 - 0x0368)
class AProp_radioHL_C final : public AProp_C
{
public:
	uint8                                         Pad_38F8[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_radioHL_C;                     // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          A_0;                                               // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_radioHL(int32 EntryPoint);
	void Player_use(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_radioHL_C">();
	}
	static class AProp_radioHL_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_radioHL_C>();
	}
};
static_assert(alignof(AProp_radioHL_C) == 0x000008, "Wrong alignment on AProp_radioHL_C");
static_assert(sizeof(AProp_radioHL_C) == 0x000380, "Wrong size on AProp_radioHL_C");
static_assert(offsetof(AProp_radioHL_C, UberGraphFrame_Prop_radioHL_C) == 0x000368, "Member 'AProp_radioHL_C::UberGraphFrame_Prop_radioHL_C' has a wrong offset!");
static_assert(offsetof(AProp_radioHL_C, Audio) == 0x000370, "Member 'AProp_radioHL_C::Audio' has a wrong offset!");
static_assert(offsetof(AProp_radioHL_C, A_0) == 0x000378, "Member 'AProp_radioHL_C::A_0' has a wrong offset!");

}

