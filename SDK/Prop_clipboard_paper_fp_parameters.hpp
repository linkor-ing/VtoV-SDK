#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_clipboard_paper_fp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK::Params
{

// Function prop_clipboard_paper_fp.prop_clipboard_paper_fp_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_clipboard_paper_fp_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         Param_Index;                                       // 0x0090(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_interactionActions                       Action;                                            // 0x0094(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_clipboard_paper_fp_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_clipboard_paper_fp_C_ActionOptionIndex");
static_assert(sizeof(Prop_clipboard_paper_fp_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_clipboard_paper_fp_C_ActionOptionIndex");
static_assert(offsetof(Prop_clipboard_paper_fp_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_clipboard_paper_fp_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_paper_fp_C_ActionOptionIndex, Param_Hit) == 0x000008, "Member 'Prop_clipboard_paper_fp_C_ActionOptionIndex::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_paper_fp_C_ActionOptionIndex, Param_Index) == 0x000090, "Member 'Prop_clipboard_paper_fp_C_ActionOptionIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_paper_fp_C_ActionOptionIndex, Action) == 0x000094, "Member 'Prop_clipboard_paper_fp_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_clipboard_paper_fp.prop_clipboard_paper_fp_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_clipboard_paper_fp_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_clipboard_paper_fp_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_clipboard_paper_fp_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_clipboard_paper_fp_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_clipboard_paper_fp_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_clipboard_paper_fp_C_PlayerHandUse_RMB, Player) == 0x000000, "Member 'Prop_clipboard_paper_fp_C_PlayerHandUse_RMB::Player' has a wrong offset!");

// Function prop_clipboard_paper_fp.prop_clipboard_paper_fp_C.ExecuteUbergraph_prop_clipboard_paper_fp
// 0x00B0 (0x00B0 - 0x0000)
struct Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_439D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFprints_C*                             CallFunc_GetActorOfClass_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0018(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         K2Node_Event_index;                                // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_439E[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp) == 0x000008, "Wrong alignment on Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp");
static_assert(sizeof(Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp) == 0x0000B0, "Wrong size on Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp");
static_assert(offsetof(Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp, EntryPoint) == 0x000000, "Member 'Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp, CallFunc_GetActorOfClass_ReturnValue) == 0x000008, "Member 'Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp::CallFunc_GetActorOfClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp, K2Node_Event_player_1) == 0x000010, "Member 'Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp, K2Node_Event_hit) == 0x000018, "Member 'Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp, K2Node_Event_index) == 0x0000A0, "Member 'Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp, K2Node_Event_action) == 0x0000A4, "Member 'Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp, K2Node_Event_player) == 0x0000A8, "Member 'Prop_clipboard_paper_fp_C_ExecuteUbergraph_prop_clipboard_paper_fp::K2Node_Event_player' has a wrong offset!");

}

