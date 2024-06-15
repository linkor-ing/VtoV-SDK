#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_spawnFollowingArir

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass trigger_spawnFollowingArir.trigger_spawnFollowingArir_C
// 0x0008 (0x0290 - 0x0288)
class ATrigger_spawnFollowingArir_C final : public ATriggerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Trigger_spawnFollowingArir_C;       // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_trigger_spawnFollowingArir(int32 EntryPoint);
	void RunTrigger(class AActor* Param_Owner, int32 Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"trigger_spawnFollowingArir_C">();
	}
	static class ATrigger_spawnFollowingArir_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrigger_spawnFollowingArir_C>();
	}
};
static_assert(alignof(ATrigger_spawnFollowingArir_C) == 0x000008, "Wrong alignment on ATrigger_spawnFollowingArir_C");
static_assert(sizeof(ATrigger_spawnFollowingArir_C) == 0x000290, "Wrong size on ATrigger_spawnFollowingArir_C");
static_assert(offsetof(ATrigger_spawnFollowingArir_C, UberGraphFrame_Trigger_spawnFollowingArir_C) == 0x000288, "Member 'ATrigger_spawnFollowingArir_C::UberGraphFrame_Trigger_spawnFollowingArir_C' has a wrong offset!");

}
