#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_lightRoot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass trigger_lightRoot.trigger_lightRoot_C
// 0x0058 (0x02E0 - 0x0288)
class ATrigger_lightRoot_C final : public ATriggerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Trigger_lightRoot_C;                // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class ACeilingLamp_C*>                 Lights;                                            // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AAmbLigh_C*>                     Ambs;                                              // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                          IsActive;                                          // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Active;                                            // 0x02B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FE0[0x6];                                     // 0x02B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         Lights_keys;                                       // 0x02B8(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         Ambs_keys;                                         // 0x02C8(0x0010)(Edit, BlueprintVisible)
	bool                                          buffIsActive;                                      // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_trigger_lightRoot(int32 EntryPoint);
	void Flick();
	void LoadAft();
	void RunTrigger(class AActor* Param_Owner, int32 Param_Index);
	void UpdLig();
	void SetActive(bool Param_Active);
	void UserConstructionScript();
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);
	void GetTriggerData(struct FStruct_triggerSave* Data);
	void ProcessKeys(bool* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"trigger_lightRoot_C">();
	}
	static class ATrigger_lightRoot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrigger_lightRoot_C>();
	}
};
static_assert(alignof(ATrigger_lightRoot_C) == 0x000008, "Wrong alignment on ATrigger_lightRoot_C");
static_assert(sizeof(ATrigger_lightRoot_C) == 0x0002E0, "Wrong size on ATrigger_lightRoot_C");
static_assert(offsetof(ATrigger_lightRoot_C, UberGraphFrame_Trigger_lightRoot_C) == 0x000288, "Member 'ATrigger_lightRoot_C::UberGraphFrame_Trigger_lightRoot_C' has a wrong offset!");
static_assert(offsetof(ATrigger_lightRoot_C, Lights) == 0x000290, "Member 'ATrigger_lightRoot_C::Lights' has a wrong offset!");
static_assert(offsetof(ATrigger_lightRoot_C, Ambs) == 0x0002A0, "Member 'ATrigger_lightRoot_C::Ambs' has a wrong offset!");
static_assert(offsetof(ATrigger_lightRoot_C, IsActive) == 0x0002B0, "Member 'ATrigger_lightRoot_C::IsActive' has a wrong offset!");
static_assert(offsetof(ATrigger_lightRoot_C, Active) == 0x0002B1, "Member 'ATrigger_lightRoot_C::Active' has a wrong offset!");
static_assert(offsetof(ATrigger_lightRoot_C, Lights_keys) == 0x0002B8, "Member 'ATrigger_lightRoot_C::Lights_keys' has a wrong offset!");
static_assert(offsetof(ATrigger_lightRoot_C, Ambs_keys) == 0x0002C8, "Member 'ATrigger_lightRoot_C::Ambs_keys' has a wrong offset!");
static_assert(offsetof(ATrigger_lightRoot_C, buffIsActive) == 0x0002D8, "Member 'ATrigger_lightRoot_C::buffIsActive' has a wrong offset!");

}

