#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: buttons

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK::Params
{

// Function buttons.buttons_C.landedOn
// 0x0010 (0x0010 - 0x0000)
struct buttons_C_LandedOn final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreFallDamage;                                  // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(buttons_C_LandedOn) == 0x000008, "Wrong alignment on buttons_C_LandedOn");
static_assert(sizeof(buttons_C_LandedOn) == 0x000010, "Wrong size on buttons_C_LandedOn");
static_assert(offsetof(buttons_C_LandedOn, Player) == 0x000000, "Member 'buttons_C_LandedOn::Player' has a wrong offset!");
static_assert(offsetof(buttons_C_LandedOn, IgnoreFallDamage) == 0x000008, "Member 'buttons_C_LandedOn::IgnoreFallDamage' has a wrong offset!");

// Function buttons.buttons_C.isButtonUsed
// 0x0001 (0x0001 - 0x0000)
struct buttons_C_IsButtonUsed final
{
public:
	bool                                          Failed;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(buttons_C_IsButtonUsed) == 0x000001, "Wrong alignment on buttons_C_IsButtonUsed");
static_assert(sizeof(buttons_C_IsButtonUsed) == 0x000001, "Wrong size on buttons_C_IsButtonUsed");
static_assert(offsetof(buttons_C_IsButtonUsed, Failed) == 0x000000, "Member 'buttons_C_IsButtonUsed::Failed' has a wrong offset!");

// Function buttons.buttons_C.lookAt
// 0x00E0 (0x00E0 - 0x0000)
struct buttons_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Number;                                            // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00B8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(buttons_C_LookAt) == 0x000008, "Wrong alignment on buttons_C_LookAt");
static_assert(sizeof(buttons_C_LookAt) == 0x0000E0, "Wrong size on buttons_C_LookAt");
static_assert(offsetof(buttons_C_LookAt, Player) == 0x000000, "Member 'buttons_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(buttons_C_LookAt, Hit) == 0x000008, "Member 'buttons_C_LookAt::Hit' has a wrong offset!");
static_assert(offsetof(buttons_C_LookAt, Return) == 0x000090, "Member 'buttons_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(buttons_C_LookAt, Text) == 0x000098, "Member 'buttons_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(buttons_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'buttons_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(buttons_C_LookAt, Number) == 0x0000B0, "Member 'buttons_C_LookAt::Number' has a wrong offset!");
static_assert(offsetof(buttons_C_LookAt, CallFunc_MakeLiteralText_ReturnValue) == 0x0000B8, "Member 'buttons_C_LookAt::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(buttons_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x0000D0, "Member 'buttons_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function buttons.buttons_C.noRespawn
// 0x0002 (0x0002 - 0x0000)
struct buttons_C_NoRespawn final
{
public:
	bool                                          Param_NoRespawn;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Return;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(buttons_C_NoRespawn) == 0x000001, "Wrong alignment on buttons_C_NoRespawn");
static_assert(sizeof(buttons_C_NoRespawn) == 0x000002, "Wrong size on buttons_C_NoRespawn");
static_assert(offsetof(buttons_C_NoRespawn, Param_NoRespawn) == 0x000000, "Member 'buttons_C_NoRespawn::Param_NoRespawn' has a wrong offset!");
static_assert(offsetof(buttons_C_NoRespawn, Return) == 0x000001, "Member 'buttons_C_NoRespawn::Return' has a wrong offset!");

// Function buttons.buttons_C.canPickup
// 0x0001 (0x0001 - 0x0000)
struct buttons_C_CanPickup final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(buttons_C_CanPickup) == 0x000001, "Wrong alignment on buttons_C_CanPickup");
static_assert(sizeof(buttons_C_CanPickup) == 0x000001, "Wrong size on buttons_C_CanPickup");
static_assert(offsetof(buttons_C_CanPickup, Return) == 0x000000, "Member 'buttons_C_CanPickup::Return' has a wrong offset!");

// Function buttons.buttons_C.asProp
// 0x0008 (0x0008 - 0x0000)
struct buttons_C_AsProp final
{
public:
	class AProp_C*                                Return;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(buttons_C_AsProp) == 0x000008, "Wrong alignment on buttons_C_AsProp");
static_assert(sizeof(buttons_C_AsProp) == 0x000008, "Wrong size on buttons_C_AsProp");
static_assert(offsetof(buttons_C_AsProp, Return) == 0x000000, "Member 'buttons_C_AsProp::Return' has a wrong offset!");

// Function buttons.buttons_C.canBePutInContainer
// 0x0001 (0x0001 - 0x0000)
struct buttons_C_CanBePutInContainer final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(buttons_C_CanBePutInContainer) == 0x000001, "Wrong alignment on buttons_C_CanBePutInContainer");
static_assert(sizeof(buttons_C_CanBePutInContainer) == 0x000001, "Wrong size on buttons_C_CanBePutInContainer");
static_assert(offsetof(buttons_C_CanBePutInContainer, Return) == 0x000000, "Member 'buttons_C_CanBePutInContainer::Return' has a wrong offset!");

// Function buttons.buttons_C.getActionOptions
// 0x0060 (0x0060 - 0x0000)
struct buttons_C_GetActionOptions final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Options;                                           // 0x0018(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               Options_enum;                                      // 0x0028(0x0010)(Parm, OutParm)
	TArray<class FText>                           OptionsNamesOverlay;                               // 0x0038(0x0010)(Parm, OutParm)
	uint8                                         Number;                                            // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<Enum_interactionActions>               K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
};
static_assert(alignof(buttons_C_GetActionOptions) == 0x000008, "Wrong alignment on buttons_C_GetActionOptions");
static_assert(sizeof(buttons_C_GetActionOptions) == 0x000060, "Wrong size on buttons_C_GetActionOptions");
static_assert(offsetof(buttons_C_GetActionOptions, Player) == 0x000000, "Member 'buttons_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(buttons_C_GetActionOptions, Component) == 0x000008, "Member 'buttons_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(buttons_C_GetActionOptions, Actor) == 0x000010, "Member 'buttons_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(buttons_C_GetActionOptions, Options) == 0x000018, "Member 'buttons_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(buttons_C_GetActionOptions, Options_enum) == 0x000028, "Member 'buttons_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(buttons_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'buttons_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(buttons_C_GetActionOptions, Number) == 0x000048, "Member 'buttons_C_GetActionOptions::Number' has a wrong offset!");
static_assert(offsetof(buttons_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000050, "Member 'buttons_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

// Function buttons.buttons_C.OnNotifyEnd_0148CEB84DE38329DFA5769609C745AE
// 0x0008 (0x0008 - 0x0000)
struct buttons_C_OnNotifyEnd_0148CEB84DE38329DFA5769609C745AE final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(buttons_C_OnNotifyEnd_0148CEB84DE38329DFA5769609C745AE) == 0x000004, "Wrong alignment on buttons_C_OnNotifyEnd_0148CEB84DE38329DFA5769609C745AE");
static_assert(sizeof(buttons_C_OnNotifyEnd_0148CEB84DE38329DFA5769609C745AE) == 0x000008, "Wrong size on buttons_C_OnNotifyEnd_0148CEB84DE38329DFA5769609C745AE");
static_assert(offsetof(buttons_C_OnNotifyEnd_0148CEB84DE38329DFA5769609C745AE, NotifyName) == 0x000000, "Member 'buttons_C_OnNotifyEnd_0148CEB84DE38329DFA5769609C745AE::NotifyName' has a wrong offset!");

// Function buttons.buttons_C.OnNotifyBegin_0148CEB84DE38329DFA5769609C745AE
// 0x0008 (0x0008 - 0x0000)
struct buttons_C_OnNotifyBegin_0148CEB84DE38329DFA5769609C745AE final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(buttons_C_OnNotifyBegin_0148CEB84DE38329DFA5769609C745AE) == 0x000004, "Wrong alignment on buttons_C_OnNotifyBegin_0148CEB84DE38329DFA5769609C745AE");
static_assert(sizeof(buttons_C_OnNotifyBegin_0148CEB84DE38329DFA5769609C745AE) == 0x000008, "Wrong size on buttons_C_OnNotifyBegin_0148CEB84DE38329DFA5769609C745AE");
static_assert(offsetof(buttons_C_OnNotifyBegin_0148CEB84DE38329DFA5769609C745AE, NotifyName) == 0x000000, "Member 'buttons_C_OnNotifyBegin_0148CEB84DE38329DFA5769609C745AE::NotifyName' has a wrong offset!");

// Function buttons.buttons_C.OnInterrupted_0148CEB84DE38329DFA5769609C745AE
// 0x0008 (0x0008 - 0x0000)
struct buttons_C_OnInterrupted_0148CEB84DE38329DFA5769609C745AE final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(buttons_C_OnInterrupted_0148CEB84DE38329DFA5769609C745AE) == 0x000004, "Wrong alignment on buttons_C_OnInterrupted_0148CEB84DE38329DFA5769609C745AE");
static_assert(sizeof(buttons_C_OnInterrupted_0148CEB84DE38329DFA5769609C745AE) == 0x000008, "Wrong size on buttons_C_OnInterrupted_0148CEB84DE38329DFA5769609C745AE");
static_assert(offsetof(buttons_C_OnInterrupted_0148CEB84DE38329DFA5769609C745AE, NotifyName) == 0x000000, "Member 'buttons_C_OnInterrupted_0148CEB84DE38329DFA5769609C745AE::NotifyName' has a wrong offset!");

// Function buttons.buttons_C.OnBlendOut_0148CEB84DE38329DFA5769609C745AE
// 0x0008 (0x0008 - 0x0000)
struct buttons_C_OnBlendOut_0148CEB84DE38329DFA5769609C745AE final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(buttons_C_OnBlendOut_0148CEB84DE38329DFA5769609C745AE) == 0x000004, "Wrong alignment on buttons_C_OnBlendOut_0148CEB84DE38329DFA5769609C745AE");
static_assert(sizeof(buttons_C_OnBlendOut_0148CEB84DE38329DFA5769609C745AE) == 0x000008, "Wrong size on buttons_C_OnBlendOut_0148CEB84DE38329DFA5769609C745AE");
static_assert(offsetof(buttons_C_OnBlendOut_0148CEB84DE38329DFA5769609C745AE, NotifyName) == 0x000000, "Member 'buttons_C_OnBlendOut_0148CEB84DE38329DFA5769609C745AE::NotifyName' has a wrong offset!");

// Function buttons.buttons_C.OnCompleted_0148CEB84DE38329DFA5769609C745AE
// 0x0008 (0x0008 - 0x0000)
struct buttons_C_OnCompleted_0148CEB84DE38329DFA5769609C745AE final
{
public:
	class FName                                   NotifyName;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(buttons_C_OnCompleted_0148CEB84DE38329DFA5769609C745AE) == 0x000004, "Wrong alignment on buttons_C_OnCompleted_0148CEB84DE38329DFA5769609C745AE");
static_assert(sizeof(buttons_C_OnCompleted_0148CEB84DE38329DFA5769609C745AE) == 0x000008, "Wrong size on buttons_C_OnCompleted_0148CEB84DE38329DFA5769609C745AE");
static_assert(offsetof(buttons_C_OnCompleted_0148CEB84DE38329DFA5769609C745AE, NotifyName) == 0x000000, "Member 'buttons_C_OnCompleted_0148CEB84DE38329DFA5769609C745AE::NotifyName' has a wrong offset!");

// Function buttons.buttons_C.player_use
// 0x0090 (0x0090 - 0x0000)
struct buttons_C_Player_use final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(buttons_C_Player_use) == 0x000008, "Wrong alignment on buttons_C_Player_use");
static_assert(sizeof(buttons_C_Player_use) == 0x000090, "Wrong size on buttons_C_Player_use");
static_assert(offsetof(buttons_C_Player_use, Player) == 0x000000, "Member 'buttons_C_Player_use::Player' has a wrong offset!");
static_assert(offsetof(buttons_C_Player_use, Hit) == 0x000008, "Member 'buttons_C_Player_use::Hit' has a wrong offset!");

// Function buttons.buttons_C.kicked
// 0x0001 (0x0001 - 0x0000)
struct buttons_C_Kicked final
{
public:
	bool                                          Kick;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(buttons_C_Kicked) == 0x000001, "Wrong alignment on buttons_C_Kicked");
static_assert(sizeof(buttons_C_Kicked) == 0x000001, "Wrong size on buttons_C_Kicked");
static_assert(offsetof(buttons_C_Kicked, Kick) == 0x000000, "Member 'buttons_C_Kicked::Kick' has a wrong offset!");

// Function buttons.buttons_C.sendName
// 0x0008 (0x0008 - 0x0000)
struct buttons_C_SendName final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(buttons_C_SendName) == 0x000004, "Wrong alignment on buttons_C_SendName");
static_assert(sizeof(buttons_C_SendName) == 0x000008, "Wrong size on buttons_C_SendName");
static_assert(offsetof(buttons_C_SendName, Param_Name) == 0x000000, "Member 'buttons_C_SendName::Param_Name' has a wrong offset!");

// Function buttons.buttons_C.thrown
// 0x0008 (0x0008 - 0x0000)
struct buttons_C_Thrown final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(buttons_C_Thrown) == 0x000008, "Wrong alignment on buttons_C_Thrown");
static_assert(sizeof(buttons_C_Thrown) == 0x000008, "Wrong size on buttons_C_Thrown");
static_assert(offsetof(buttons_C_Thrown, Player) == 0x000000, "Member 'buttons_C_Thrown::Player' has a wrong offset!");

// Function buttons.buttons_C.damageByPlayer
// 0x0098 (0x0098 - 0x0000)
struct buttons_C_DamageByPlayer final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         Damage;                                            // 0x0090(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(buttons_C_DamageByPlayer) == 0x000008, "Wrong alignment on buttons_C_DamageByPlayer");
static_assert(sizeof(buttons_C_DamageByPlayer) == 0x000098, "Wrong size on buttons_C_DamageByPlayer");
static_assert(offsetof(buttons_C_DamageByPlayer, Player) == 0x000000, "Member 'buttons_C_DamageByPlayer::Player' has a wrong offset!");
static_assert(offsetof(buttons_C_DamageByPlayer, Hit) == 0x000008, "Member 'buttons_C_DamageByPlayer::Hit' has a wrong offset!");
static_assert(offsetof(buttons_C_DamageByPlayer, Damage) == 0x000090, "Member 'buttons_C_DamageByPlayer::Damage' has a wrong offset!");

// Function buttons.buttons_C.playerUnequip
// 0x0008 (0x0008 - 0x0000)
struct buttons_C_PlayerUnequip final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(buttons_C_PlayerUnequip) == 0x000008, "Wrong alignment on buttons_C_PlayerUnequip");
static_assert(sizeof(buttons_C_PlayerUnequip) == 0x000008, "Wrong size on buttons_C_PlayerUnequip");
static_assert(offsetof(buttons_C_PlayerUnequip, Player) == 0x000000, "Member 'buttons_C_PlayerUnequip::Player' has a wrong offset!");

// Function buttons.buttons_C.playerHold
// 0x0008 (0x0008 - 0x0000)
struct buttons_C_PlayerHold final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(buttons_C_PlayerHold) == 0x000008, "Wrong alignment on buttons_C_PlayerHold");
static_assert(sizeof(buttons_C_PlayerHold) == 0x000008, "Wrong size on buttons_C_PlayerHold");
static_assert(offsetof(buttons_C_PlayerHold, Player) == 0x000000, "Member 'buttons_C_PlayerHold::Player' has a wrong offset!");

// Function buttons.buttons_C.playerR
// 0x0008 (0x0008 - 0x0000)
struct buttons_C_PlayerR final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(buttons_C_PlayerR) == 0x000008, "Wrong alignment on buttons_C_PlayerR");
static_assert(sizeof(buttons_C_PlayerR) == 0x000008, "Wrong size on buttons_C_PlayerR");
static_assert(offsetof(buttons_C_PlayerR, Player) == 0x000000, "Member 'buttons_C_PlayerR::Player' has a wrong offset!");

// Function buttons.buttons_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct buttons_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(buttons_C_ActionOptionIndex) == 0x000008, "Wrong alignment on buttons_C_ActionOptionIndex");
static_assert(sizeof(buttons_C_ActionOptionIndex) == 0x000098, "Wrong size on buttons_C_ActionOptionIndex");
static_assert(offsetof(buttons_C_ActionOptionIndex, Player) == 0x000000, "Member 'buttons_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(buttons_C_ActionOptionIndex, Hit) == 0x000008, "Member 'buttons_C_ActionOptionIndex::Hit' has a wrong offset!");
static_assert(offsetof(buttons_C_ActionOptionIndex, Action) == 0x000090, "Member 'buttons_C_ActionOptionIndex::Action' has a wrong offset!");

// Function buttons.buttons_C.ExecuteUbergraph_buttons
// 0x02A0 (0x02A0 - 0x0000)
struct buttons_C_ExecuteUbergraph_buttons final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0010(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x3];                                       // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_CustomEvent_NotifyName_4;                   // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_NotifyName_3;                   // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate;              // 0x00AC(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_2;                   // 0x00BC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_1;            // 0x00C4(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName_1;                   // 0x00D4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_2;            // 0x00DC(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   K2Node_CustomEvent_NotifyName;                     // 0x00EC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_3;            // 0x00F4(0x0010)(ZeroConstructor, NoDestructor)
	class FName                                   Temp_name_Variable;                                // 0x0104(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player_6;                             // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit_2;                                // 0x0118(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          K2Node_Event_kick;                                 // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A1[0x3];                                      // 0x01A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_name;                                 // 0x01A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1AC[0x4];                                      // 0x01AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player_5;                             // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player_4;                             // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit_1;                                // 0x01C0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         K2Node_Event_damage;                               // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24C[0x4];                                      // 0x024C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player_3;                             // 0x0250(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player_2;                             // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x0260(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*              CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0270(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_ttrigger_C>       K2Node_DynamicCast_AsInt_Ttrigger;                 // 0x0278(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0289(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28A[0x2];                                      // 0x028A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class FName NotifyName)>       K2Node_CreateDelegate_OutputDelegate_4;            // 0x028C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(buttons_C_ExecuteUbergraph_buttons) == 0x000008, "Wrong alignment on buttons_C_ExecuteUbergraph_buttons");
static_assert(sizeof(buttons_C_ExecuteUbergraph_buttons) == 0x0002A0, "Wrong size on buttons_C_ExecuteUbergraph_buttons");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, EntryPoint) == 0x000000, "Member 'buttons_C_ExecuteUbergraph_buttons::EntryPoint' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_Event_player) == 0x000008, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_Event_hit) == 0x000010, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_Event_action) == 0x000098, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_CustomEvent_NotifyName_4) == 0x00009C, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_CustomEvent_NotifyName_4' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_CustomEvent_NotifyName_3) == 0x0000A4, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_CustomEvent_NotifyName_3' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_CreateDelegate_OutputDelegate) == 0x0000AC, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_CustomEvent_NotifyName_2) == 0x0000BC, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_CustomEvent_NotifyName_2' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_CreateDelegate_OutputDelegate_1) == 0x0000C4, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_CustomEvent_NotifyName_1) == 0x0000D4, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_CustomEvent_NotifyName_1' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000DC, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_CustomEvent_NotifyName) == 0x0000EC, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_CustomEvent_NotifyName' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000F4, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, Temp_name_Variable) == 0x000104, "Member 'buttons_C_ExecuteUbergraph_buttons::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_Event_player_6) == 0x000110, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_Event_player_6' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_Event_hit_2) == 0x000118, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_Event_hit_2' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_Event_kick) == 0x0001A0, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_Event_kick' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_Event_name) == 0x0001A4, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_Event_name' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_Event_player_5) == 0x0001B0, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_Event_player_5' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_Event_player_4) == 0x0001B8, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_Event_player_4' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_Event_hit_1) == 0x0001C0, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_Event_hit_1' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_Event_damage) == 0x000248, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_Event_damage' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_Event_player_3) == 0x000250, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_Event_player_3' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_Event_player_2) == 0x000258, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_Event_player_2' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_Event_player_1) == 0x000260, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, CallFunc_CreateProxyObjectForPlayMontage_ReturnValue) == 0x000268, "Member 'buttons_C_ExecuteUbergraph_buttons::CallFunc_CreateProxyObjectForPlayMontage_ReturnValue' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, CallFunc_Array_Get_Item) == 0x000270, "Member 'buttons_C_ExecuteUbergraph_buttons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_DynamicCast_AsInt_Ttrigger) == 0x000278, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_DynamicCast_AsInt_Ttrigger' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_DynamicCast_bSuccess) == 0x000288, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, CallFunc_IsValid_ReturnValue) == 0x000289, "Member 'buttons_C_ExecuteUbergraph_buttons::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(buttons_C_ExecuteUbergraph_buttons, K2Node_CreateDelegate_OutputDelegate_4) == 0x00028C, "Member 'buttons_C_ExecuteUbergraph_buttons::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");

}

