#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_welder

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_welder.prop_welder_C
// 0x0018 (0x0380 - 0x0368)
class AProp_welder_C final : public AProp_C
{
public:
	uint8                                         Pad_37B6[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_welder_C;                      // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AWeld_C*                                ActiveWeld;                                        // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Weld_A;                                            // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_welder(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void PlayerHandRelease_LMB(class AMainPlayer_C* Player);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_welder_C">();
	}
	static class AProp_welder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_welder_C>();
	}
};
static_assert(alignof(AProp_welder_C) == 0x000008, "Wrong alignment on AProp_welder_C");
static_assert(sizeof(AProp_welder_C) == 0x000380, "Wrong size on AProp_welder_C");
static_assert(offsetof(AProp_welder_C, UberGraphFrame_Prop_welder_C) == 0x000368, "Member 'AProp_welder_C::UberGraphFrame_Prop_welder_C' has a wrong offset!");
static_assert(offsetof(AProp_welder_C, ActiveWeld) == 0x000370, "Member 'AProp_welder_C::ActiveWeld' has a wrong offset!");
static_assert(offsetof(AProp_welder_C, Weld_A) == 0x000378, "Member 'AProp_welder_C::Weld_A' has a wrong offset!");

}
