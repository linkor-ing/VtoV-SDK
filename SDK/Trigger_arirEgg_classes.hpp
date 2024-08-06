#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_arirEgg

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass trigger_arirEgg.trigger_arirEgg_C
// 0x0010 (0x0298 - 0x0288)
class ATrigger_arirEgg_C final : public ATriggerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Trigger_arirEgg_C;                  // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Snd;                                               // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void RunTrigger(class AActor* Param_Owner, int32 Param_Index);
	void ExecuteUbergraph_trigger_arirEgg(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"trigger_arirEgg_C">();
	}
	static class ATrigger_arirEgg_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrigger_arirEgg_C>();
	}
};
static_assert(alignof(ATrigger_arirEgg_C) == 0x000008, "Wrong alignment on ATrigger_arirEgg_C");
static_assert(sizeof(ATrigger_arirEgg_C) == 0x000298, "Wrong size on ATrigger_arirEgg_C");
static_assert(offsetof(ATrigger_arirEgg_C, UberGraphFrame_Trigger_arirEgg_C) == 0x000288, "Member 'ATrigger_arirEgg_C::UberGraphFrame_Trigger_arirEgg_C' has a wrong offset!");
static_assert(offsetof(ATrigger_arirEgg_C, Snd) == 0x000290, "Member 'ATrigger_arirEgg_C::Snd' has a wrong offset!");

}
