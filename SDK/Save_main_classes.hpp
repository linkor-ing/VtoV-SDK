#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Save_main

#include "Basic.hpp"

#include "Struct_settings_structs.hpp"
#include "Struct_stats_structs.hpp"
#include "Struct_achievement_structs.hpp"
#include "Struct_keybind_structs.hpp"
#include "Engine_classes.hpp"
#include "Struct_save_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass save_main.save_main_C
// 0x02C0 (0x02E8 - 0x0028)
class USave_main_C final : public USaveGame
{
public:
	struct FStruct_settings                       Settings_defaults;                                 // 0x0028(0x00CC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_settings                       Settings;                                          // 0x00F4(0x00CC)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStruct_keybind>                Keybinds;                                          // 0x01C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AMainGamemode_C*                        GameMode;                                          // 0x01D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      Controller;                                        // 0x01D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           KeybindsNames;                                     // 0x01E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          LockedMouse;                                       // 0x01F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3360[0x7];                                     // 0x01F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FStruct_achievement>            Achievements;                                      // 0x01F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           AchievementsNames;                                 // 0x0208(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  AchievementsCompleted;                             // 0x0218(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         Keybinds_keys;                                     // 0x0228(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MaxDays;                                           // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_stats                          Stats;                                             // 0x023C(0x005C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStruct_save>                   MailboxData;                                       // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           SignalsGlossary;                                   // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 SignalsGlossary_lvl;                               // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         LastPlayed;                                        // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 PreviousVersion;                                   // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void Save();
	void SetDefaultSettings(int32 Type, struct FStruct_settings* Output);
	void SaveKeybinds();
	void SetObjects(class AMainGamemode_C* Param_GameMode, class APlayerController* Param_Controller);
	void ProgressAchievement(const class FName& Achievement, bool Popup);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"save_main_C">();
	}
	static class USave_main_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USave_main_C>();
	}
};
static_assert(alignof(USave_main_C) == 0x000008, "Wrong alignment on USave_main_C");
static_assert(sizeof(USave_main_C) == 0x0002E8, "Wrong size on USave_main_C");
static_assert(offsetof(USave_main_C, Settings_defaults) == 0x000028, "Member 'USave_main_C::Settings_defaults' has a wrong offset!");
static_assert(offsetof(USave_main_C, Settings) == 0x0000F4, "Member 'USave_main_C::Settings' has a wrong offset!");
static_assert(offsetof(USave_main_C, Keybinds) == 0x0001C0, "Member 'USave_main_C::Keybinds' has a wrong offset!");
static_assert(offsetof(USave_main_C, GameMode) == 0x0001D0, "Member 'USave_main_C::GameMode' has a wrong offset!");
static_assert(offsetof(USave_main_C, Controller) == 0x0001D8, "Member 'USave_main_C::Controller' has a wrong offset!");
static_assert(offsetof(USave_main_C, KeybindsNames) == 0x0001E0, "Member 'USave_main_C::KeybindsNames' has a wrong offset!");
static_assert(offsetof(USave_main_C, LockedMouse) == 0x0001F0, "Member 'USave_main_C::LockedMouse' has a wrong offset!");
static_assert(offsetof(USave_main_C, Achievements) == 0x0001F8, "Member 'USave_main_C::Achievements' has a wrong offset!");
static_assert(offsetof(USave_main_C, AchievementsNames) == 0x000208, "Member 'USave_main_C::AchievementsNames' has a wrong offset!");
static_assert(offsetof(USave_main_C, AchievementsCompleted) == 0x000218, "Member 'USave_main_C::AchievementsCompleted' has a wrong offset!");
static_assert(offsetof(USave_main_C, Keybinds_keys) == 0x000228, "Member 'USave_main_C::Keybinds_keys' has a wrong offset!");
static_assert(offsetof(USave_main_C, MaxDays) == 0x000238, "Member 'USave_main_C::MaxDays' has a wrong offset!");
static_assert(offsetof(USave_main_C, Stats) == 0x00023C, "Member 'USave_main_C::Stats' has a wrong offset!");
static_assert(offsetof(USave_main_C, MailboxData) == 0x000298, "Member 'USave_main_C::MailboxData' has a wrong offset!");
static_assert(offsetof(USave_main_C, SignalsGlossary) == 0x0002A8, "Member 'USave_main_C::SignalsGlossary' has a wrong offset!");
static_assert(offsetof(USave_main_C, SignalsGlossary_lvl) == 0x0002B8, "Member 'USave_main_C::SignalsGlossary_lvl' has a wrong offset!");
static_assert(offsetof(USave_main_C, LastPlayed) == 0x0002C8, "Member 'USave_main_C::LastPlayed' has a wrong offset!");
static_assert(offsetof(USave_main_C, PreviousVersion) == 0x0002D8, "Member 'USave_main_C::PreviousVersion' has a wrong offset!");

}
