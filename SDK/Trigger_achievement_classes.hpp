#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_achievement

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass trigger_achievement.trigger_achievement_C
// 0x0010 (0x0298 - 0x0288)
class ATrigger_achievement_C final : public ATriggerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Trigger_achievement_C;              // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   Achiv;                                             // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void RunTrigger(class AActor* Param_Owner, int32 Param_Index);
	void ExecuteUbergraph_trigger_achievement(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"trigger_achievement_C">();
	}
	static class ATrigger_achievement_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrigger_achievement_C>();
	}
};
static_assert(alignof(ATrigger_achievement_C) == 0x000008, "Wrong alignment on ATrigger_achievement_C");
static_assert(sizeof(ATrigger_achievement_C) == 0x000298, "Wrong size on ATrigger_achievement_C");
static_assert(offsetof(ATrigger_achievement_C, UberGraphFrame_Trigger_achievement_C) == 0x000288, "Member 'ATrigger_achievement_C::UberGraphFrame_Trigger_achievement_C' has a wrong offset!");
static_assert(offsetof(ATrigger_achievement_C, Achiv) == 0x000290, "Member 'ATrigger_achievement_C::Achiv' has a wrong offset!");

}

