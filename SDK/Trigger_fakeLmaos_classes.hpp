#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_fakeLmaos

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass trigger_fakeLmaos.trigger_fakeLmaos_C
// 0x0018 (0x02A0 - 0x0288)
class ATrigger_fakeLmaos_C final : public ATriggerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Trigger_fakeLmaos_C;                // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         DishID;                                            // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43B2[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ADish_C*                                Dish;                                              // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetTriggerData(struct FStruct_triggerSave* Data);
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);
	void UserConstructionScript();
	void RunTrigger(class AActor* Param_Owner, int32 Param_Index);
	void ExecuteUbergraph_trigger_fakeLmaos(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"trigger_fakeLmaos_C">();
	}
	static class ATrigger_fakeLmaos_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrigger_fakeLmaos_C>();
	}
};
static_assert(alignof(ATrigger_fakeLmaos_C) == 0x000008, "Wrong alignment on ATrigger_fakeLmaos_C");
static_assert(sizeof(ATrigger_fakeLmaos_C) == 0x0002A0, "Wrong size on ATrigger_fakeLmaos_C");
static_assert(offsetof(ATrigger_fakeLmaos_C, UberGraphFrame_Trigger_fakeLmaos_C) == 0x000288, "Member 'ATrigger_fakeLmaos_C::UberGraphFrame_Trigger_fakeLmaos_C' has a wrong offset!");
static_assert(offsetof(ATrigger_fakeLmaos_C, DishID) == 0x000290, "Member 'ATrigger_fakeLmaos_C::DishID' has a wrong offset!");
static_assert(offsetof(ATrigger_fakeLmaos_C, Dish) == 0x000298, "Member 'ATrigger_fakeLmaos_C::Dish' has a wrong offset!");

}

