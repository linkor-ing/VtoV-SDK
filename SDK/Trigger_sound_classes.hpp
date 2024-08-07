#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_sound

#include "Basic.hpp"

#include "Struct_sound_structs.hpp"
#include "Engine_structs.hpp"
#include "TriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass trigger_sound.trigger_sound_C
// 0x0030 (0x02B8 - 0x0288)
class ATrigger_sound_C final : public ATriggerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Trigger_sound_C;                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          SetSound;                                          // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_sound                          Sound_data;                                        // 0x02A0(0x0018)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void MakeSoundData();
	void SetSoundData();
	void GetTriggerData(struct FStruct_triggerSave* Data);
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);
	void UserConstructionScript();
	void RunTrigger(class AActor* Param_Owner, int32 Param_Index);
	void ExecuteUbergraph_trigger_sound(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"trigger_sound_C">();
	}
	static class ATrigger_sound_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrigger_sound_C>();
	}
};
static_assert(alignof(ATrigger_sound_C) == 0x000008, "Wrong alignment on ATrigger_sound_C");
static_assert(sizeof(ATrigger_sound_C) == 0x0002B8, "Wrong size on ATrigger_sound_C");
static_assert(offsetof(ATrigger_sound_C, UberGraphFrame_Trigger_sound_C) == 0x000288, "Member 'ATrigger_sound_C::UberGraphFrame_Trigger_sound_C' has a wrong offset!");
static_assert(offsetof(ATrigger_sound_C, Audio) == 0x000290, "Member 'ATrigger_sound_C::Audio' has a wrong offset!");
static_assert(offsetof(ATrigger_sound_C, SetSound) == 0x000298, "Member 'ATrigger_sound_C::SetSound' has a wrong offset!");
static_assert(offsetof(ATrigger_sound_C, Sound_data) == 0x0002A0, "Member 'ATrigger_sound_C::Sound_data' has a wrong offset!");

}

