#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lightswitch

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK::Params
{

// Function lightswitch.lightswitch_C.ExecuteUbergraph_lightswitch
// 0x0220 (0x0220 - 0x0000)
struct Lightswitch_C_ExecuteUbergraph_lightswitch final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FFD[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                            Temp_object_Variable_1;                            // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player_3;                             // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit_2;                                // 0x0020(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          K2Node_Event_kick;                                 // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2FFE[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   K2Node_Event_name;                                 // 0x00AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2FFF[0x4];                                     // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player_2;                             // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit_1;                                // 0x00C8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3000[0x7];                                     // 0x0151(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_ttrigger_C>       K2Node_DynamicCast_AsInt_Ttrigger;                 // 0x0160(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3001[0x7];                                     // 0x0171(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            K2Node_Select_Default;                             // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetStaticMesh_ReturnValue;                // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3002[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0190(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         K2Node_Event_index;                                // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lightswitch_C_ExecuteUbergraph_lightswitch) == 0x000008, "Wrong alignment on Lightswitch_C_ExecuteUbergraph_lightswitch");
static_assert(sizeof(Lightswitch_C_ExecuteUbergraph_lightswitch) == 0x000220, "Wrong size on Lightswitch_C_ExecuteUbergraph_lightswitch");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, EntryPoint) == 0x000000, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::EntryPoint' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, Temp_bool_Variable) == 0x000004, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, Temp_object_Variable) == 0x000008, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, Temp_object_Variable_1) == 0x000010, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, K2Node_Event_player_3) == 0x000018, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::K2Node_Event_player_3' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, K2Node_Event_hit_2) == 0x000020, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::K2Node_Event_hit_2' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, K2Node_Event_kick) == 0x0000A8, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::K2Node_Event_kick' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, K2Node_Event_name) == 0x0000AC, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::K2Node_Event_name' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, K2Node_Event_player_2) == 0x0000B8, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::K2Node_Event_player_2' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, K2Node_Event_player_1) == 0x0000C0, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, K2Node_Event_hit_1) == 0x0000C8, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::K2Node_Event_hit_1' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, CallFunc_Not_PreBool_ReturnValue) == 0x000150, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, CallFunc_Array_Get_Item) == 0x000158, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, K2Node_DynamicCast_AsInt_Ttrigger) == 0x000160, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::K2Node_DynamicCast_AsInt_Ttrigger' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, K2Node_DynamicCast_bSuccess) == 0x000170, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, K2Node_Select_Default) == 0x000178, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, CallFunc_SetStaticMesh_ReturnValue) == 0x000180, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::CallFunc_SetStaticMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, K2Node_Event_player) == 0x000188, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, K2Node_Event_hit) == 0x000190, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, K2Node_Event_index) == 0x000218, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ExecuteUbergraph_lightswitch, K2Node_Event_action) == 0x00021C, "Member 'Lightswitch_C_ExecuteUbergraph_lightswitch::K2Node_Event_action' has a wrong offset!");

// Function lightswitch.lightswitch_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Lightswitch_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         Param_Index;                                       // 0x0090(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_interactionActions                       Action;                                            // 0x0094(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lightswitch_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Lightswitch_C_ActionOptionIndex");
static_assert(sizeof(Lightswitch_C_ActionOptionIndex) == 0x000098, "Wrong size on Lightswitch_C_ActionOptionIndex");
static_assert(offsetof(Lightswitch_C_ActionOptionIndex, Player) == 0x000000, "Member 'Lightswitch_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ActionOptionIndex, Hit) == 0x000008, "Member 'Lightswitch_C_ActionOptionIndex::Hit' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ActionOptionIndex, Param_Index) == 0x000090, "Member 'Lightswitch_C_ActionOptionIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_ActionOptionIndex, Action) == 0x000094, "Member 'Lightswitch_C_ActionOptionIndex::Action' has a wrong offset!");

// Function lightswitch.lightswitch_C.damageByPlayer
// 0x0090 (0x0090 - 0x0000)
struct Lightswitch_C_DamageByPlayer final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Lightswitch_C_DamageByPlayer) == 0x000008, "Wrong alignment on Lightswitch_C_DamageByPlayer");
static_assert(sizeof(Lightswitch_C_DamageByPlayer) == 0x000090, "Wrong size on Lightswitch_C_DamageByPlayer");
static_assert(offsetof(Lightswitch_C_DamageByPlayer, Player) == 0x000000, "Member 'Lightswitch_C_DamageByPlayer::Player' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_DamageByPlayer, Hit) == 0x000008, "Member 'Lightswitch_C_DamageByPlayer::Hit' has a wrong offset!");

// Function lightswitch.lightswitch_C.thrown
// 0x0008 (0x0008 - 0x0000)
struct Lightswitch_C_Thrown final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lightswitch_C_Thrown) == 0x000008, "Wrong alignment on Lightswitch_C_Thrown");
static_assert(sizeof(Lightswitch_C_Thrown) == 0x000008, "Wrong size on Lightswitch_C_Thrown");
static_assert(offsetof(Lightswitch_C_Thrown, Player) == 0x000000, "Member 'Lightswitch_C_Thrown::Player' has a wrong offset!");

// Function lightswitch.lightswitch_C.sendName
// 0x0008 (0x0008 - 0x0000)
struct Lightswitch_C_SendName final
{
public:
	class FName                                   Param_Name;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lightswitch_C_SendName) == 0x000004, "Wrong alignment on Lightswitch_C_SendName");
static_assert(sizeof(Lightswitch_C_SendName) == 0x000008, "Wrong size on Lightswitch_C_SendName");
static_assert(offsetof(Lightswitch_C_SendName, Param_Name) == 0x000000, "Member 'Lightswitch_C_SendName::Param_Name' has a wrong offset!");

// Function lightswitch.lightswitch_C.kicked
// 0x0001 (0x0001 - 0x0000)
struct Lightswitch_C_Kicked final
{
public:
	bool                                          Kick;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lightswitch_C_Kicked) == 0x000001, "Wrong alignment on Lightswitch_C_Kicked");
static_assert(sizeof(Lightswitch_C_Kicked) == 0x000001, "Wrong size on Lightswitch_C_Kicked");
static_assert(offsetof(Lightswitch_C_Kicked, Kick) == 0x000000, "Member 'Lightswitch_C_Kicked::Kick' has a wrong offset!");

// Function lightswitch.lightswitch_C.player_use
// 0x0090 (0x0090 - 0x0000)
struct Lightswitch_C_Player_use final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Lightswitch_C_Player_use) == 0x000008, "Wrong alignment on Lightswitch_C_Player_use");
static_assert(sizeof(Lightswitch_C_Player_use) == 0x000090, "Wrong size on Lightswitch_C_Player_use");
static_assert(offsetof(Lightswitch_C_Player_use, Player) == 0x000000, "Member 'Lightswitch_C_Player_use::Player' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_Player_use, Hit) == 0x000008, "Member 'Lightswitch_C_Player_use::Hit' has a wrong offset!");

// Function lightswitch.lightswitch_C.isButtonUsed
// 0x0001 (0x0001 - 0x0000)
struct Lightswitch_C_IsButtonUsed final
{
public:
	bool                                          Failed;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lightswitch_C_IsButtonUsed) == 0x000001, "Wrong alignment on Lightswitch_C_IsButtonUsed");
static_assert(sizeof(Lightswitch_C_IsButtonUsed) == 0x000001, "Wrong size on Lightswitch_C_IsButtonUsed");
static_assert(offsetof(Lightswitch_C_IsButtonUsed, Failed) == 0x000000, "Member 'Lightswitch_C_IsButtonUsed::Failed' has a wrong offset!");

// Function lightswitch.lightswitch_C.lookAt
// 0x00D8 (0x00D8 - 0x0000)
struct Lightswitch_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Hit;                                               // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3003[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00B0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Lightswitch_C_LookAt) == 0x000008, "Wrong alignment on Lightswitch_C_LookAt");
static_assert(sizeof(Lightswitch_C_LookAt) == 0x0000D8, "Wrong size on Lightswitch_C_LookAt");
static_assert(offsetof(Lightswitch_C_LookAt, Player) == 0x000000, "Member 'Lightswitch_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_LookAt, Hit) == 0x000008, "Member 'Lightswitch_C_LookAt::Hit' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_LookAt, Return) == 0x000090, "Member 'Lightswitch_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_LookAt, Text) == 0x000098, "Member 'Lightswitch_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Lightswitch_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_LookAt, CallFunc_MakeLiteralText_ReturnValue) == 0x0000B0, "Member 'Lightswitch_C_LookAt::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x0000C8, "Member 'Lightswitch_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

// Function lightswitch.lightswitch_C.noRespawn
// 0x0002 (0x0002 - 0x0000)
struct Lightswitch_C_NoRespawn final
{
public:
	bool                                          Param_NoRespawn;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Return;                                            // 0x0001(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lightswitch_C_NoRespawn) == 0x000001, "Wrong alignment on Lightswitch_C_NoRespawn");
static_assert(sizeof(Lightswitch_C_NoRespawn) == 0x000002, "Wrong size on Lightswitch_C_NoRespawn");
static_assert(offsetof(Lightswitch_C_NoRespawn, Param_NoRespawn) == 0x000000, "Member 'Lightswitch_C_NoRespawn::Param_NoRespawn' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_NoRespawn, Return) == 0x000001, "Member 'Lightswitch_C_NoRespawn::Return' has a wrong offset!");

// Function lightswitch.lightswitch_C.canPickup
// 0x0001 (0x0001 - 0x0000)
struct Lightswitch_C_CanPickup final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lightswitch_C_CanPickup) == 0x000001, "Wrong alignment on Lightswitch_C_CanPickup");
static_assert(sizeof(Lightswitch_C_CanPickup) == 0x000001, "Wrong size on Lightswitch_C_CanPickup");
static_assert(offsetof(Lightswitch_C_CanPickup, Return) == 0x000000, "Member 'Lightswitch_C_CanPickup::Return' has a wrong offset!");

// Function lightswitch.lightswitch_C.asProp
// 0x0008 (0x0008 - 0x0000)
struct Lightswitch_C_AsProp final
{
public:
	class AProp_C*                                Return;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Lightswitch_C_AsProp) == 0x000008, "Wrong alignment on Lightswitch_C_AsProp");
static_assert(sizeof(Lightswitch_C_AsProp) == 0x000008, "Wrong size on Lightswitch_C_AsProp");
static_assert(offsetof(Lightswitch_C_AsProp, Return) == 0x000000, "Member 'Lightswitch_C_AsProp::Return' has a wrong offset!");

// Function lightswitch.lightswitch_C.canBePutInContainer
// 0x0001 (0x0001 - 0x0000)
struct Lightswitch_C_CanBePutInContainer final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lightswitch_C_CanBePutInContainer) == 0x000001, "Wrong alignment on Lightswitch_C_CanBePutInContainer");
static_assert(sizeof(Lightswitch_C_CanBePutInContainer) == 0x000001, "Wrong size on Lightswitch_C_CanBePutInContainer");
static_assert(offsetof(Lightswitch_C_CanBePutInContainer, Return) == 0x000000, "Member 'Lightswitch_C_CanBePutInContainer::Return' has a wrong offset!");

// Function lightswitch.lightswitch_C.UserConstructionScript
// 0x0001 (0x0001 - 0x0000)
struct Lightswitch_C_UserConstructionScript final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Lightswitch_C_UserConstructionScript) == 0x000001, "Wrong alignment on Lightswitch_C_UserConstructionScript");
static_assert(sizeof(Lightswitch_C_UserConstructionScript) == 0x000001, "Wrong size on Lightswitch_C_UserConstructionScript");
static_assert(offsetof(Lightswitch_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'Lightswitch_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function lightswitch.lightswitch_C.getActionOptions
// 0x0058 (0x0058 - 0x0000)
struct Lightswitch_C_GetActionOptions final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Options;                                           // 0x0018(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               Options_enum;                                      // 0x0028(0x0010)(Parm, OutParm)
	TArray<class FText>                           OptionsNamesOverlay;                               // 0x0038(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
};
static_assert(alignof(Lightswitch_C_GetActionOptions) == 0x000008, "Wrong alignment on Lightswitch_C_GetActionOptions");
static_assert(sizeof(Lightswitch_C_GetActionOptions) == 0x000058, "Wrong size on Lightswitch_C_GetActionOptions");
static_assert(offsetof(Lightswitch_C_GetActionOptions, Player) == 0x000000, "Member 'Lightswitch_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_GetActionOptions, Component) == 0x000008, "Member 'Lightswitch_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_GetActionOptions, Actor) == 0x000010, "Member 'Lightswitch_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_GetActionOptions, Options) == 0x000018, "Member 'Lightswitch_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Lightswitch_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Lightswitch_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Lightswitch_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000048, "Member 'Lightswitch_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}
