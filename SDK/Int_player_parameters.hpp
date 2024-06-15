#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Int_player

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function int_player.int_player_C.isButtonUsed
// 0x0001 (0x0001 - 0x0000)
struct Int_player_C_IsButtonUsed final
{
public:
	bool                                          Failed;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Int_player_C_IsButtonUsed) == 0x000001, "Wrong alignment on Int_player_C_IsButtonUsed");
static_assert(sizeof(Int_player_C_IsButtonUsed) == 0x000001, "Wrong size on Int_player_C_IsButtonUsed");
static_assert(offsetof(Int_player_C_IsButtonUsed, Failed) == 0x000000, "Member 'Int_player_C_IsButtonUsed::Failed' has a wrong offset!");

// Function int_player.int_player_C.player_use
// 0x0090 (0x0090 - 0x0000)
struct Int_player_C_Player_use final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Int_player_C_Player_use) == 0x000008, "Wrong alignment on Int_player_C_Player_use");
static_assert(sizeof(Int_player_C_Player_use) == 0x000090, "Wrong size on Int_player_C_Player_use");
static_assert(offsetof(Int_player_C_Player_use, Player) == 0x000000, "Member 'Int_player_C_Player_use::Player' has a wrong offset!");
static_assert(offsetof(Int_player_C_Player_use, Hit) == 0x000008, "Member 'Int_player_C_Player_use::Hit' has a wrong offset!");

// Function int_player.int_player_C.lookAt
// 0x00B0 (0x00B0 - 0x0000)
struct Int_player_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B39[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Int_player_C_LookAt) == 0x000008, "Wrong alignment on Int_player_C_LookAt");
static_assert(sizeof(Int_player_C_LookAt) == 0x0000B0, "Wrong size on Int_player_C_LookAt");
static_assert(offsetof(Int_player_C_LookAt, Player) == 0x000000, "Member 'Int_player_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Int_player_C_LookAt, Hit) == 0x000008, "Member 'Int_player_C_LookAt::Hit' has a wrong offset!");
static_assert(offsetof(Int_player_C_LookAt, Return) == 0x000090, "Member 'Int_player_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Int_player_C_LookAt, Text) == 0x000098, "Member 'Int_player_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Int_player_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Int_player_C_LookAt::boundObjectReplace' has a wrong offset!");

// Function int_player.int_player_C.noRespawn
// 0x0002 (0x0002 - 0x0000)
struct Int_player_C_NoRespawn final
{
public:
	bool                                          Param_NoRespawn;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Return;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Int_player_C_NoRespawn) == 0x000001, "Wrong alignment on Int_player_C_NoRespawn");
static_assert(sizeof(Int_player_C_NoRespawn) == 0x000002, "Wrong size on Int_player_C_NoRespawn");
static_assert(offsetof(Int_player_C_NoRespawn, Param_NoRespawn) == 0x000000, "Member 'Int_player_C_NoRespawn::Param_NoRespawn' has a wrong offset!");
static_assert(offsetof(Int_player_C_NoRespawn, Return) == 0x000001, "Member 'Int_player_C_NoRespawn::Return' has a wrong offset!");

// Function int_player.int_player_C.canPickup
// 0x0001 (0x0001 - 0x0000)
struct Int_player_C_CanPickup final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Int_player_C_CanPickup) == 0x000001, "Wrong alignment on Int_player_C_CanPickup");
static_assert(sizeof(Int_player_C_CanPickup) == 0x000001, "Wrong size on Int_player_C_CanPickup");
static_assert(offsetof(Int_player_C_CanPickup, Return) == 0x000000, "Member 'Int_player_C_CanPickup::Return' has a wrong offset!");

// Function int_player.int_player_C.asProp
// 0x0008 (0x0008 - 0x0000)
struct Int_player_C_AsProp final
{
public:
	class AProp_C*                                Return;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Int_player_C_AsProp) == 0x000008, "Wrong alignment on Int_player_C_AsProp");
static_assert(sizeof(Int_player_C_AsProp) == 0x000008, "Wrong size on Int_player_C_AsProp");
static_assert(offsetof(Int_player_C_AsProp, Return) == 0x000000, "Member 'Int_player_C_AsProp::Return' has a wrong offset!");

// Function int_player.int_player_C.kicked
// 0x0001 (0x0001 - 0x0000)
struct Int_player_C_Kicked final
{
public:
	bool                                          Kick;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Int_player_C_Kicked) == 0x000001, "Wrong alignment on Int_player_C_Kicked");
static_assert(sizeof(Int_player_C_Kicked) == 0x000001, "Wrong size on Int_player_C_Kicked");
static_assert(offsetof(Int_player_C_Kicked, Kick) == 0x000000, "Member 'Int_player_C_Kicked::Kick' has a wrong offset!");

// Function int_player.int_player_C.sendName
// 0x0008 (0x0008 - 0x0000)
struct Int_player_C_SendName final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Int_player_C_SendName) == 0x000004, "Wrong alignment on Int_player_C_SendName");
static_assert(sizeof(Int_player_C_SendName) == 0x000008, "Wrong size on Int_player_C_SendName");
static_assert(offsetof(Int_player_C_SendName, Param_Name) == 0x000000, "Member 'Int_player_C_SendName::Param_Name' has a wrong offset!");

// Function int_player.int_player_C.canBePutInContainer
// 0x0001 (0x0001 - 0x0000)
struct Int_player_C_CanBePutInContainer final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Int_player_C_CanBePutInContainer) == 0x000001, "Wrong alignment on Int_player_C_CanBePutInContainer");
static_assert(sizeof(Int_player_C_CanBePutInContainer) == 0x000001, "Wrong size on Int_player_C_CanBePutInContainer");
static_assert(offsetof(Int_player_C_CanBePutInContainer, Return) == 0x000000, "Member 'Int_player_C_CanBePutInContainer::Return' has a wrong offset!");

// Function int_player.int_player_C.thrown
// 0x0008 (0x0008 - 0x0000)
struct Int_player_C_Thrown final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Int_player_C_Thrown) == 0x000008, "Wrong alignment on Int_player_C_Thrown");
static_assert(sizeof(Int_player_C_Thrown) == 0x000008, "Wrong size on Int_player_C_Thrown");
static_assert(offsetof(Int_player_C_Thrown, Player) == 0x000000, "Member 'Int_player_C_Thrown::Player' has a wrong offset!");

// Function int_player.int_player_C.damageByPlayer
// 0x0090 (0x0090 - 0x0000)
struct Int_player_C_DamageByPlayer final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Int_player_C_DamageByPlayer) == 0x000008, "Wrong alignment on Int_player_C_DamageByPlayer");
static_assert(sizeof(Int_player_C_DamageByPlayer) == 0x000090, "Wrong size on Int_player_C_DamageByPlayer");
static_assert(offsetof(Int_player_C_DamageByPlayer, Player) == 0x000000, "Member 'Int_player_C_DamageByPlayer::Player' has a wrong offset!");
static_assert(offsetof(Int_player_C_DamageByPlayer, Hit) == 0x000008, "Member 'Int_player_C_DamageByPlayer::Hit' has a wrong offset!");

}

