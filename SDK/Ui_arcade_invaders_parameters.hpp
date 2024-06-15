#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ui_arcade_invaders

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Struct_settings_structs.hpp"
#include "InputCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ui_arcade_invaders.ui_arcade_invaders_C.ExecuteUbergraph_ui_arcade_invaders
// 0x0118 (0x0118 - 0x0000)
struct Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2664[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        K2Node_Event_gamemode;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_settings                       K2Node_Event_settings;                             // 0x0018(0x00CC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2665[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_Event_key;                                  // 0x00E8(0x0018)(HasGetValueTypeHash)
	bool                                          K2Node_Event_pressed;                              // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2666[0x3];                                     // 0x0101(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_color;                                // 0x0104(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders) == 0x000008, "Wrong alignment on Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders");
static_assert(sizeof(Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders) == 0x000118, "Wrong size on Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders");
static_assert(offsetof(Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders, EntryPoint) == 0x000000, "Member 'Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders, CallFunc_getMainPlayer_AsMain_Player) == 0x000008, "Member 'Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders, K2Node_Event_gamemode) == 0x000010, "Member 'Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders::K2Node_Event_gamemode' has a wrong offset!");
static_assert(offsetof(Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders, K2Node_Event_settings) == 0x000018, "Member 'Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders::K2Node_Event_settings' has a wrong offset!");
static_assert(offsetof(Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders, K2Node_Event_key) == 0x0000E8, "Member 'Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders::K2Node_Event_key' has a wrong offset!");
static_assert(offsetof(Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders, K2Node_Event_pressed) == 0x000100, "Member 'Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders::K2Node_Event_pressed' has a wrong offset!");
static_assert(offsetof(Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders, K2Node_Event_color) == 0x000104, "Member 'Ui_arcade_invaders_C_ExecuteUbergraph_ui_arcade_invaders::K2Node_Event_color' has a wrong offset!");

// Function ui_arcade_invaders.ui_arcade_invaders_C.applyColor
// 0x0010 (0x0010 - 0x0000)
struct Ui_arcade_invaders_C_ApplyColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ui_arcade_invaders_C_ApplyColor) == 0x000004, "Wrong alignment on Ui_arcade_invaders_C_ApplyColor");
static_assert(sizeof(Ui_arcade_invaders_C_ApplyColor) == 0x000010, "Wrong size on Ui_arcade_invaders_C_ApplyColor");
static_assert(offsetof(Ui_arcade_invaders_C_ApplyColor, Color) == 0x000000, "Member 'Ui_arcade_invaders_C_ApplyColor::Color' has a wrong offset!");

// Function ui_arcade_invaders.ui_arcade_invaders_C.AnyKey
// 0x0020 (0x0020 - 0x0000)
struct Ui_arcade_invaders_C_AnyKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Pressed;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Ui_arcade_invaders_C_AnyKey) == 0x000008, "Wrong alignment on Ui_arcade_invaders_C_AnyKey");
static_assert(sizeof(Ui_arcade_invaders_C_AnyKey) == 0x000020, "Wrong size on Ui_arcade_invaders_C_AnyKey");
static_assert(offsetof(Ui_arcade_invaders_C_AnyKey, Key) == 0x000000, "Member 'Ui_arcade_invaders_C_AnyKey::Key' has a wrong offset!");
static_assert(offsetof(Ui_arcade_invaders_C_AnyKey, Pressed) == 0x000018, "Member 'Ui_arcade_invaders_C_AnyKey::Pressed' has a wrong offset!");

// Function ui_arcade_invaders.ui_arcade_invaders_C.settingsApplied
// 0x00CC (0x00CC - 0x0000)
struct Ui_arcade_invaders_C_SettingsApplied final
{
public:
	struct FStruct_settings                       Settings;                                          // 0x0000(0x00CC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ui_arcade_invaders_C_SettingsApplied) == 0x000004, "Wrong alignment on Ui_arcade_invaders_C_SettingsApplied");
static_assert(sizeof(Ui_arcade_invaders_C_SettingsApplied) == 0x0000CC, "Wrong size on Ui_arcade_invaders_C_SettingsApplied");
static_assert(offsetof(Ui_arcade_invaders_C_SettingsApplied, Settings) == 0x000000, "Member 'Ui_arcade_invaders_C_SettingsApplied::Settings' has a wrong offset!");

// Function ui_arcade_invaders.ui_arcade_invaders_C.stuffUpgraded
// 0x0008 (0x0008 - 0x0000)
struct Ui_arcade_invaders_C_StuffUpgraded final
{
public:
	class AMainGamemode_C*                        GameMode;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ui_arcade_invaders_C_StuffUpgraded) == 0x000008, "Wrong alignment on Ui_arcade_invaders_C_StuffUpgraded");
static_assert(sizeof(Ui_arcade_invaders_C_StuffUpgraded) == 0x000008, "Wrong size on Ui_arcade_invaders_C_StuffUpgraded");
static_assert(offsetof(Ui_arcade_invaders_C_StuffUpgraded, GameMode) == 0x000000, "Member 'Ui_arcade_invaders_C_StuffUpgraded::GameMode' has a wrong offset!");

// Function ui_arcade_invaders.ui_arcade_invaders_C.dreamInv
// 0x0018 (0x0018 - 0x0000)
struct Ui_arcade_invaders_C_DreamInv final
{
public:
	TArray<struct FStruct_save>                   Invv;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ADreamBase_C*                           Base;                                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ui_arcade_invaders_C_DreamInv) == 0x000008, "Wrong alignment on Ui_arcade_invaders_C_DreamInv");
static_assert(sizeof(Ui_arcade_invaders_C_DreamInv) == 0x000018, "Wrong size on Ui_arcade_invaders_C_DreamInv");
static_assert(offsetof(Ui_arcade_invaders_C_DreamInv, Invv) == 0x000000, "Member 'Ui_arcade_invaders_C_DreamInv::Invv' has a wrong offset!");
static_assert(offsetof(Ui_arcade_invaders_C_DreamInv, Base) == 0x000010, "Member 'Ui_arcade_invaders_C_DreamInv::Base' has a wrong offset!");

}
