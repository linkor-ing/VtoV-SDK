#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_digcam

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_digcam.prop_digcam_C
// 0x0010 (0x0388 - 0x0378)
class AProp_digcam_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_digcam_C;                      // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Flash;                                             // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_digcam(int32 EntryPoint);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_digcam_C">();
	}
	static class AProp_digcam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_digcam_C>();
	}
};
static_assert(alignof(AProp_digcam_C) == 0x000008, "Wrong alignment on AProp_digcam_C");
static_assert(sizeof(AProp_digcam_C) == 0x000388, "Wrong size on AProp_digcam_C");
static_assert(offsetof(AProp_digcam_C, UberGraphFrame_Prop_digcam_C) == 0x000378, "Member 'AProp_digcam_C::UberGraphFrame_Prop_digcam_C' has a wrong offset!");
static_assert(offsetof(AProp_digcam_C, Flash) == 0x000380, "Member 'AProp_digcam_C::Flash' has a wrong offset!");

}

