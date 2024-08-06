#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Save_main

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Struct_settings_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Engine_classes.hpp"
#include "Struct_stats_structs.hpp"
#include "Struct_achievement_structs.hpp"
#include "Struct_keybind_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass save_main.save_main_C
// 0x0348 (0x0370 - 0x0028)
class USave_main_C final : public USaveGame
{
public:
	struct FStruct_settings                       Settings_defaults;                                 // 0x0028(0x00F0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FStruct_settings                       Settings;                                          // 0x0118(0x00F0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FStruct_keybind>                Keybinds;                                          // 0x0208(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AMainGamemode_C*                        GameMode;                                          // 0x0218(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      Controller;                                        // 0x0220(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           KeybindsNames;                                     // 0x0228(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          LockedMouse;                                       // 0x0238(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FStruct_achievement>            Achievements;                                      // 0x0240(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           AchievementsNames;                                 // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  AchievementsCompleted;                             // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         Keybinds_keys;                                     // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MaxDays;                                           // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_stats                          Stats;                                             // 0x0284(0x005C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStruct_save>                   MailboxData;                                       // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           SignalsGlossary;                                   // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 SignalsGlossary_lvl;                               // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         LastPlayed;                                        // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 PreviousVersion;                                   // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FName>                           FoundTreasures;                                    // 0x0330(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           FoundFish;                                         // 0x0340(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           FavouriteStore;                                    // 0x0350(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          NewVar_0;                                          // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NewVar_1;                                          // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NewVar_2;                                          // 0x0362(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_363[0x5];                                      // 0x0363(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              NewVar_22;                                         // 0x0368(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Save();
	void SetDefaultSettings(int32 Type, struct FStruct_settings* Output);
	void SaveKeybinds();
	void SetObjects(class AMainGamemode_C* Param_GameMode, class APlayerController* Param_Controller);
	void ProgressAchievement(const class FName Achievement, bool Popup, bool Autosave);
	void AddTreasure(const class FName& ItemToFind);
	void AddFish(const class FName& ItemToFind);
	void AddToFavourites(const class FName& ItemToFind);

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
static_assert(sizeof(USave_main_C) == 0x000370, "Wrong size on USave_main_C");
static_assert(offsetof(USave_main_C, Settings_defaults) == 0x000028, "Member 'USave_main_C::Settings_defaults' has a wrong offset!");
static_assert(offsetof(USave_main_C, Settings) == 0x000118, "Member 'USave_main_C::Settings' has a wrong offset!");
static_assert(offsetof(USave_main_C, Keybinds) == 0x000208, "Member 'USave_main_C::Keybinds' has a wrong offset!");
static_assert(offsetof(USave_main_C, GameMode) == 0x000218, "Member 'USave_main_C::GameMode' has a wrong offset!");
static_assert(offsetof(USave_main_C, Controller) == 0x000220, "Member 'USave_main_C::Controller' has a wrong offset!");
static_assert(offsetof(USave_main_C, KeybindsNames) == 0x000228, "Member 'USave_main_C::KeybindsNames' has a wrong offset!");
static_assert(offsetof(USave_main_C, LockedMouse) == 0x000238, "Member 'USave_main_C::LockedMouse' has a wrong offset!");
static_assert(offsetof(USave_main_C, Achievements) == 0x000240, "Member 'USave_main_C::Achievements' has a wrong offset!");
static_assert(offsetof(USave_main_C, AchievementsNames) == 0x000250, "Member 'USave_main_C::AchievementsNames' has a wrong offset!");
static_assert(offsetof(USave_main_C, AchievementsCompleted) == 0x000260, "Member 'USave_main_C::AchievementsCompleted' has a wrong offset!");
static_assert(offsetof(USave_main_C, Keybinds_keys) == 0x000270, "Member 'USave_main_C::Keybinds_keys' has a wrong offset!");
static_assert(offsetof(USave_main_C, MaxDays) == 0x000280, "Member 'USave_main_C::MaxDays' has a wrong offset!");
static_assert(offsetof(USave_main_C, Stats) == 0x000284, "Member 'USave_main_C::Stats' has a wrong offset!");
static_assert(offsetof(USave_main_C, MailboxData) == 0x0002E0, "Member 'USave_main_C::MailboxData' has a wrong offset!");
static_assert(offsetof(USave_main_C, SignalsGlossary) == 0x0002F0, "Member 'USave_main_C::SignalsGlossary' has a wrong offset!");
static_assert(offsetof(USave_main_C, SignalsGlossary_lvl) == 0x000300, "Member 'USave_main_C::SignalsGlossary_lvl' has a wrong offset!");
static_assert(offsetof(USave_main_C, LastPlayed) == 0x000310, "Member 'USave_main_C::LastPlayed' has a wrong offset!");
static_assert(offsetof(USave_main_C, PreviousVersion) == 0x000320, "Member 'USave_main_C::PreviousVersion' has a wrong offset!");
static_assert(offsetof(USave_main_C, FoundTreasures) == 0x000330, "Member 'USave_main_C::FoundTreasures' has a wrong offset!");
static_assert(offsetof(USave_main_C, FoundFish) == 0x000340, "Member 'USave_main_C::FoundFish' has a wrong offset!");
static_assert(offsetof(USave_main_C, FavouriteStore) == 0x000350, "Member 'USave_main_C::FavouriteStore' has a wrong offset!");
static_assert(offsetof(USave_main_C, NewVar_0) == 0x000360, "Member 'USave_main_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(USave_main_C, NewVar_1) == 0x000361, "Member 'USave_main_C::NewVar_1' has a wrong offset!");
static_assert(offsetof(USave_main_C, NewVar_2) == 0x000362, "Member 'USave_main_C::NewVar_2' has a wrong offset!");
static_assert(offsetof(USave_main_C, NewVar_22) == 0x000368, "Member 'USave_main_C::NewVar_22' has a wrong offset!");

}

