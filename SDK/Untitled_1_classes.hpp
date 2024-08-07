#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Untitled_1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass untitled_1.untitled_1_C
// 0x0028 (0x0250 - 0x0228)
class AUntitled_1_C final : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ARiverFlow_C*                           RiverFlow2_9_ExecuteUbergraph_untitled_1_RefProperty; // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACameraActor*                           SleepCam_ExecuteUbergraph_untitled_1_RefProperty;  // 0x0238(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARuntimeVirtualTextureVolume*           RuntimeVirtualTextureVolume_1_ExecuteUbergraph_untitled_1_RefProperty; // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ARiverFlow_C*                           RiverFlow_6_ExecuteUbergraph_untitled_1_RefProperty; // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void InpActEvt_demosnow_K2Node_InputActionEvent_0(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_untitled_1(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"untitled_1_C">();
	}
	static class AUntitled_1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUntitled_1_C>();
	}
};
static_assert(alignof(AUntitled_1_C) == 0x000008, "Wrong alignment on AUntitled_1_C");
static_assert(sizeof(AUntitled_1_C) == 0x000250, "Wrong size on AUntitled_1_C");
static_assert(offsetof(AUntitled_1_C, UberGraphFrame) == 0x000228, "Member 'AUntitled_1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AUntitled_1_C, RiverFlow2_9_ExecuteUbergraph_untitled_1_RefProperty) == 0x000230, "Member 'AUntitled_1_C::RiverFlow2_9_ExecuteUbergraph_untitled_1_RefProperty' has a wrong offset!");
static_assert(offsetof(AUntitled_1_C, SleepCam_ExecuteUbergraph_untitled_1_RefProperty) == 0x000238, "Member 'AUntitled_1_C::SleepCam_ExecuteUbergraph_untitled_1_RefProperty' has a wrong offset!");
static_assert(offsetof(AUntitled_1_C, RuntimeVirtualTextureVolume_1_ExecuteUbergraph_untitled_1_RefProperty) == 0x000240, "Member 'AUntitled_1_C::RuntimeVirtualTextureVolume_1_ExecuteUbergraph_untitled_1_RefProperty' has a wrong offset!");
static_assert(offsetof(AUntitled_1_C, RiverFlow_6_ExecuteUbergraph_untitled_1_RefProperty) == 0x000248, "Member 'AUntitled_1_C::RiverFlow_6_ExecuteUbergraph_untitled_1_RefProperty' has a wrong offset!");

}
