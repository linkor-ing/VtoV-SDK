#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sticker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Struct_mString_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Struct_settings_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function sticker.sticker_C.ExecuteUbergraph_sticker
// 0x02F8 (0x02F8 - 0x0000)
struct Sticker_C_ExecuteUbergraph_sticker final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_2E6D[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        K2Node_Event_gamemode;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_settings                       K2Node_Event_settings;                             // 0x0020(0x00CC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E6E[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   K2Node_Event_key;                                  // 0x00F0(0x0018)(HasGetValueTypeHash)
	bool                                          K2Node_Event_pressed;                              // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E6F[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_color;                                // 0x010C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E70[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player_3;                             // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit_2;                                // 0x0128(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          K2Node_Event_kick;                                 // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E71[0x3];                                     // 0x01B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_name;                                 // 0x01B4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E72[0x4];                                     // 0x01BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player_2;                             // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit_1;                                // 0x01D0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0260(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         K2Node_Event_index;                                // 0x02E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x02EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x02ED(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E73[0x2];                                     // 0x02EE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x02F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_ExecuteUbergraph_sticker) == 0x000008, "Wrong alignment on Sticker_C_ExecuteUbergraph_sticker");
static_assert(sizeof(Sticker_C_ExecuteUbergraph_sticker) == 0x0002F8, "Wrong size on Sticker_C_ExecuteUbergraph_sticker");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, EntryPoint) == 0x000000, "Member 'Sticker_C_ExecuteUbergraph_sticker::EntryPoint' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_gamemode) == 0x000018, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_gamemode' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_settings) == 0x000020, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_settings' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_key) == 0x0000F0, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_key' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_pressed) == 0x000108, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_pressed' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_color) == 0x00010C, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_color' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_player_3) == 0x000120, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_player_3' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_hit_2) == 0x000128, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_hit_2' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_kick) == 0x0001B0, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_kick' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_name) == 0x0001B4, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_name' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_player_2) == 0x0001C0, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_player_2' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_player_1) == 0x0001C8, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_hit_1) == 0x0001D0, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_hit_1' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_player) == 0x000258, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_hit) == 0x000260, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_index) == 0x0002E8, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_Event_action) == 0x0002EC, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_SwitchEnum_CmpSuccess) == 0x0002ED, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Sticker_C_ExecuteUbergraph_sticker, K2Node_CustomEvent_DestroyedActor) == 0x0002F0, "Member 'Sticker_C_ExecuteUbergraph_sticker::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");

// Function sticker.sticker_C.D
// 0x0008 (0x0008 - 0x0000)
struct Sticker_C_D final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_D) == 0x000008, "Wrong alignment on Sticker_C_D");
static_assert(sizeof(Sticker_C_D) == 0x000008, "Wrong size on Sticker_C_D");
static_assert(offsetof(Sticker_C_D, DestroyedActor) == 0x000000, "Member 'Sticker_C_D::DestroyedActor' has a wrong offset!");

// Function sticker.sticker_C.damageByPlayer
// 0x0090 (0x0090 - 0x0000)
struct Sticker_C_DamageByPlayer final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Sticker_C_DamageByPlayer) == 0x000008, "Wrong alignment on Sticker_C_DamageByPlayer");
static_assert(sizeof(Sticker_C_DamageByPlayer) == 0x000090, "Wrong size on Sticker_C_DamageByPlayer");
static_assert(offsetof(Sticker_C_DamageByPlayer, Player) == 0x000000, "Member 'Sticker_C_DamageByPlayer::Player' has a wrong offset!");
static_assert(offsetof(Sticker_C_DamageByPlayer, Hit) == 0x000008, "Member 'Sticker_C_DamageByPlayer::Hit' has a wrong offset!");

// Function sticker.sticker_C.thrown
// 0x0008 (0x0008 - 0x0000)
struct Sticker_C_Thrown final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_Thrown) == 0x000008, "Wrong alignment on Sticker_C_Thrown");
static_assert(sizeof(Sticker_C_Thrown) == 0x000008, "Wrong size on Sticker_C_Thrown");
static_assert(offsetof(Sticker_C_Thrown, Player) == 0x000000, "Member 'Sticker_C_Thrown::Player' has a wrong offset!");

// Function sticker.sticker_C.sendName
// 0x0008 (0x0008 - 0x0000)
struct Sticker_C_SendName final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_SendName) == 0x000004, "Wrong alignment on Sticker_C_SendName");
static_assert(sizeof(Sticker_C_SendName) == 0x000008, "Wrong size on Sticker_C_SendName");
static_assert(offsetof(Sticker_C_SendName, Param_Name) == 0x000000, "Member 'Sticker_C_SendName::Param_Name' has a wrong offset!");

// Function sticker.sticker_C.kicked
// 0x0001 (0x0001 - 0x0000)
struct Sticker_C_Kicked final
{
public:
	bool                                          Kick;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Sticker_C_Kicked) == 0x000001, "Wrong alignment on Sticker_C_Kicked");
static_assert(sizeof(Sticker_C_Kicked) == 0x000001, "Wrong size on Sticker_C_Kicked");
static_assert(offsetof(Sticker_C_Kicked, Kick) == 0x000000, "Member 'Sticker_C_Kicked::Kick' has a wrong offset!");

// Function sticker.sticker_C.player_use
// 0x0090 (0x0090 - 0x0000)
struct Sticker_C_Player_use final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Sticker_C_Player_use) == 0x000008, "Wrong alignment on Sticker_C_Player_use");
static_assert(sizeof(Sticker_C_Player_use) == 0x000090, "Wrong size on Sticker_C_Player_use");
static_assert(offsetof(Sticker_C_Player_use, Player) == 0x000000, "Member 'Sticker_C_Player_use::Player' has a wrong offset!");
static_assert(offsetof(Sticker_C_Player_use, Hit) == 0x000008, "Member 'Sticker_C_Player_use::Hit' has a wrong offset!");

// Function sticker.sticker_C.applyColor
// 0x0010 (0x0010 - 0x0000)
struct Sticker_C_ApplyColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_ApplyColor) == 0x000004, "Wrong alignment on Sticker_C_ApplyColor");
static_assert(sizeof(Sticker_C_ApplyColor) == 0x000010, "Wrong size on Sticker_C_ApplyColor");
static_assert(offsetof(Sticker_C_ApplyColor, Color) == 0x000000, "Member 'Sticker_C_ApplyColor::Color' has a wrong offset!");

// Function sticker.sticker_C.AnyKey
// 0x0020 (0x0020 - 0x0000)
struct Sticker_C_AnyKey final
{
public:
	struct FKey                                   Param_Key;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Pressed;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Sticker_C_AnyKey) == 0x000008, "Wrong alignment on Sticker_C_AnyKey");
static_assert(sizeof(Sticker_C_AnyKey) == 0x000020, "Wrong size on Sticker_C_AnyKey");
static_assert(offsetof(Sticker_C_AnyKey, Param_Key) == 0x000000, "Member 'Sticker_C_AnyKey::Param_Key' has a wrong offset!");
static_assert(offsetof(Sticker_C_AnyKey, Pressed) == 0x000018, "Member 'Sticker_C_AnyKey::Pressed' has a wrong offset!");

// Function sticker.sticker_C.settingsApplied
// 0x00CC (0x00CC - 0x0000)
struct Sticker_C_SettingsApplied final
{
public:
	struct FStruct_settings                       Settings;                                          // 0x0000(0x00CC)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_SettingsApplied) == 0x000004, "Wrong alignment on Sticker_C_SettingsApplied");
static_assert(sizeof(Sticker_C_SettingsApplied) == 0x0000CC, "Wrong size on Sticker_C_SettingsApplied");
static_assert(offsetof(Sticker_C_SettingsApplied, Settings) == 0x000000, "Member 'Sticker_C_SettingsApplied::Settings' has a wrong offset!");

// Function sticker.sticker_C.stuffUpgraded
// 0x0008 (0x0008 - 0x0000)
struct Sticker_C_StuffUpgraded final
{
public:
	class AMainGamemode_C*                        GameMode;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_StuffUpgraded) == 0x000008, "Wrong alignment on Sticker_C_StuffUpgraded");
static_assert(sizeof(Sticker_C_StuffUpgraded) == 0x000008, "Wrong size on Sticker_C_StuffUpgraded");
static_assert(offsetof(Sticker_C_StuffUpgraded, GameMode) == 0x000000, "Member 'Sticker_C_StuffUpgraded::GameMode' has a wrong offset!");

// Function sticker.sticker_C.setPoster
// 0x0020 (0x0020 - 0x0000)
struct Sticker_C_SetPoster final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E74[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_SetPoster) == 0x000008, "Wrong alignment on Sticker_C_SetPoster");
static_assert(sizeof(Sticker_C_SetPoster) == 0x000020, "Wrong size on Sticker_C_SetPoster");
static_assert(offsetof(Sticker_C_SetPoster, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'Sticker_C_SetPoster::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sticker_C_SetPoster, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000008, "Member 'Sticker_C_SetPoster::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Sticker_C_SetPoster, CallFunc_Array_Find_ReturnValue) == 0x000010, "Member 'Sticker_C_SetPoster::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sticker_C_SetPoster, CallFunc_Array_Get_Item) == 0x000018, "Member 'Sticker_C_SetPoster::CallFunc_Array_Get_Item' has a wrong offset!");

// Function sticker.sticker_C.canBePutInContainer
// 0x0001 (0x0001 - 0x0000)
struct Sticker_C_CanBePutInContainer final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Sticker_C_CanBePutInContainer) == 0x000001, "Wrong alignment on Sticker_C_CanBePutInContainer");
static_assert(sizeof(Sticker_C_CanBePutInContainer) == 0x000001, "Wrong size on Sticker_C_CanBePutInContainer");
static_assert(offsetof(Sticker_C_CanBePutInContainer, Return) == 0x000000, "Member 'Sticker_C_CanBePutInContainer::Return' has a wrong offset!");

// Function sticker.sticker_C.asProp
// 0x0008 (0x0008 - 0x0000)
struct Sticker_C_AsProp final
{
public:
	class AProp_C*                                Return;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_AsProp) == 0x000008, "Wrong alignment on Sticker_C_AsProp");
static_assert(sizeof(Sticker_C_AsProp) == 0x000008, "Wrong size on Sticker_C_AsProp");
static_assert(offsetof(Sticker_C_AsProp, Return) == 0x000000, "Member 'Sticker_C_AsProp::Return' has a wrong offset!");

// Function sticker.sticker_C.canPickup
// 0x0001 (0x0001 - 0x0000)
struct Sticker_C_CanPickup final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Sticker_C_CanPickup) == 0x000001, "Wrong alignment on Sticker_C_CanPickup");
static_assert(sizeof(Sticker_C_CanPickup) == 0x000001, "Wrong size on Sticker_C_CanPickup");
static_assert(offsetof(Sticker_C_CanPickup, Return) == 0x000000, "Member 'Sticker_C_CanPickup::Return' has a wrong offset!");

// Function sticker.sticker_C.noRespawn
// 0x0002 (0x0002 - 0x0000)
struct Sticker_C_NoRespawn final
{
public:
	bool                                          Param_NoRespawn;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Return;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Sticker_C_NoRespawn) == 0x000001, "Wrong alignment on Sticker_C_NoRespawn");
static_assert(sizeof(Sticker_C_NoRespawn) == 0x000002, "Wrong size on Sticker_C_NoRespawn");
static_assert(offsetof(Sticker_C_NoRespawn, Param_NoRespawn) == 0x000000, "Member 'Sticker_C_NoRespawn::Param_NoRespawn' has a wrong offset!");
static_assert(offsetof(Sticker_C_NoRespawn, Return) == 0x000001, "Member 'Sticker_C_NoRespawn::Return' has a wrong offset!");

// Function sticker.sticker_C.lookAt
// 0x00B0 (0x00B0 - 0x0000)
struct Sticker_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E75[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_LookAt) == 0x000008, "Wrong alignment on Sticker_C_LookAt");
static_assert(sizeof(Sticker_C_LookAt) == 0x0000B0, "Wrong size on Sticker_C_LookAt");
static_assert(offsetof(Sticker_C_LookAt, Player) == 0x000000, "Member 'Sticker_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Sticker_C_LookAt, Hit) == 0x000008, "Member 'Sticker_C_LookAt::Hit' has a wrong offset!");
static_assert(offsetof(Sticker_C_LookAt, Return) == 0x000090, "Member 'Sticker_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Sticker_C_LookAt, Text) == 0x000098, "Member 'Sticker_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Sticker_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Sticker_C_LookAt::boundObjectReplace' has a wrong offset!");

// Function sticker.sticker_C.isButtonUsed
// 0x0001 (0x0001 - 0x0000)
struct Sticker_C_IsButtonUsed final
{
public:
	bool                                          Failed;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Sticker_C_IsButtonUsed) == 0x000001, "Wrong alignment on Sticker_C_IsButtonUsed");
static_assert(sizeof(Sticker_C_IsButtonUsed) == 0x000001, "Wrong size on Sticker_C_IsButtonUsed");
static_assert(offsetof(Sticker_C_IsButtonUsed, Failed) == 0x000000, "Member 'Sticker_C_IsButtonUsed::Failed' has a wrong offset!");

// Function sticker.sticker_C.dreamInv
// 0x0018 (0x0018 - 0x0000)
struct Sticker_C_DreamInv final
{
public:
	TArray<struct FStruct_save>                   Invv;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ADreamBase_C*                           Base;                                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_DreamInv) == 0x000008, "Wrong alignment on Sticker_C_DreamInv");
static_assert(sizeof(Sticker_C_DreamInv) == 0x000018, "Wrong size on Sticker_C_DreamInv");
static_assert(offsetof(Sticker_C_DreamInv, Invv) == 0x000000, "Member 'Sticker_C_DreamInv::Invv' has a wrong offset!");
static_assert(offsetof(Sticker_C_DreamInv, Base) == 0x000010, "Member 'Sticker_C_DreamInv::Base' has a wrong offset!");

// Function sticker.sticker_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Sticker_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         Param_Index;                                       // 0x0090(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_interactionActions                       Action;                                            // 0x0094(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Sticker_C_ActionOptionIndex");
static_assert(sizeof(Sticker_C_ActionOptionIndex) == 0x000098, "Wrong size on Sticker_C_ActionOptionIndex");
static_assert(offsetof(Sticker_C_ActionOptionIndex, Player) == 0x000000, "Member 'Sticker_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Sticker_C_ActionOptionIndex, Hit) == 0x000008, "Member 'Sticker_C_ActionOptionIndex::Hit' has a wrong offset!");
static_assert(offsetof(Sticker_C_ActionOptionIndex, Param_Index) == 0x000090, "Member 'Sticker_C_ActionOptionIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(Sticker_C_ActionOptionIndex, Action) == 0x000094, "Member 'Sticker_C_ActionOptionIndex::Action' has a wrong offset!");

// Function sticker.sticker_C.loadData
// 0x0100 (0x0100 - 0x0000)
struct Sticker_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E76[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mString                        CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_2;                         // 0x00E8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_LoadData) == 0x000010, "Wrong alignment on Sticker_C_LoadData");
static_assert(sizeof(Sticker_C_LoadData) == 0x000100, "Wrong size on Sticker_C_LoadData");
static_assert(offsetof(Sticker_C_LoadData, Data) == 0x000000, "Member 'Sticker_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Sticker_C_LoadData, Return) == 0x0000C0, "Member 'Sticker_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Sticker_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Sticker_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Sticker_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Sticker_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Sticker_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Sticker_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Sticker_C_LoadData, CallFunc_Array_Get_Item_2) == 0x0000E8, "Member 'Sticker_C_LoadData::CallFunc_Array_Get_Item_2' has a wrong offset!");

// Function sticker.sticker_C.getData
// 0x0280 (0x0280 - 0x0000)
struct Sticker_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mString                        K2Node_MakeStruct_struct_mString;                  // 0x0190(0x0010)(HasGetValueTypeHash)
	struct FStruct_mString                        CallFunc_Array_Get_Item;                           // 0x01A0(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mString>                K2Node_MakeArray_Array_1;                          // 0x01B0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01C0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_GetData) == 0x000010, "Wrong alignment on Sticker_C_GetData");
static_assert(sizeof(Sticker_C_GetData) == 0x000280, "Wrong size on Sticker_C_GetData");
static_assert(offsetof(Sticker_C_GetData, Data) == 0x000000, "Member 'Sticker_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Sticker_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Sticker_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Sticker_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Sticker_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Sticker_C_GetData, K2Node_MakeStruct_struct_mString) == 0x000190, "Member 'Sticker_C_GetData::K2Node_MakeStruct_struct_mString' has a wrong offset!");
static_assert(offsetof(Sticker_C_GetData, CallFunc_Array_Get_Item) == 0x0001A0, "Member 'Sticker_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Sticker_C_GetData, K2Node_MakeArray_Array_1) == 0x0001B0, "Member 'Sticker_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Sticker_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001C0, "Member 'Sticker_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function sticker.sticker_C.processKeys
// 0x0018 (0x0018 - 0x0000)
struct Sticker_C_ProcessKeys final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E77[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_getObjectFromKey_Output;                  // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sticker_C_ProcessKeys) == 0x000008, "Wrong alignment on Sticker_C_ProcessKeys");
static_assert(sizeof(Sticker_C_ProcessKeys) == 0x000018, "Wrong size on Sticker_C_ProcessKeys");
static_assert(offsetof(Sticker_C_ProcessKeys, Return) == 0x000000, "Member 'Sticker_C_ProcessKeys::Return' has a wrong offset!");
static_assert(offsetof(Sticker_C_ProcessKeys, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'Sticker_C_ProcessKeys::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sticker_C_ProcessKeys, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000008, "Member 'Sticker_C_ProcessKeys::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Sticker_C_ProcessKeys, CallFunc_getObjectFromKey_Output) == 0x000010, "Member 'Sticker_C_ProcessKeys::CallFunc_getObjectFromKey_Output' has a wrong offset!");

// Function sticker.sticker_C.getActionOptions
// 0x0058 (0x0058 - 0x0000)
struct Sticker_C_GetActionOptions final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Param_Actor;                                       // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Options;                                           // 0x0018(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               Options_enum;                                      // 0x0028(0x0010)(Parm, OutParm)
	TArray<class FText>                           OptionsNamesOverlay;                               // 0x0038(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
};
static_assert(alignof(Sticker_C_GetActionOptions) == 0x000008, "Wrong alignment on Sticker_C_GetActionOptions");
static_assert(sizeof(Sticker_C_GetActionOptions) == 0x000058, "Wrong size on Sticker_C_GetActionOptions");
static_assert(offsetof(Sticker_C_GetActionOptions, Player) == 0x000000, "Member 'Sticker_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Sticker_C_GetActionOptions, Component) == 0x000008, "Member 'Sticker_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Sticker_C_GetActionOptions, Param_Actor) == 0x000010, "Member 'Sticker_C_GetActionOptions::Param_Actor' has a wrong offset!");
static_assert(offsetof(Sticker_C_GetActionOptions, Options) == 0x000018, "Member 'Sticker_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Sticker_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Sticker_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Sticker_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Sticker_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Sticker_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000048, "Member 'Sticker_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}
