#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_hook

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_hook.prop_hook_C
// 0x0010 (0x0378 - 0x0368)
class AProp_hook_C : public AProp_C
{
public:
	uint8                                         Pad_118B[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_hook_C;                        // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Single;                                            // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_prop_hook(int32 EntryPoint);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_hook_C">();
	}
	static class AProp_hook_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_hook_C>();
	}
};
static_assert(alignof(AProp_hook_C) == 0x000008, "Wrong alignment on AProp_hook_C");
static_assert(sizeof(AProp_hook_C) == 0x000378, "Wrong size on AProp_hook_C");
static_assert(offsetof(AProp_hook_C, UberGraphFrame_Prop_hook_C) == 0x000368, "Member 'AProp_hook_C::UberGraphFrame_Prop_hook_C' has a wrong offset!");
static_assert(offsetof(AProp_hook_C, Single) == 0x000370, "Member 'AProp_hook_C::Single' has a wrong offset!");

}

