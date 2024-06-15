#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_achievement

#include "Basic.hpp"


namespace SDK::Params
{

// Function trigger_achievement.trigger_achievement_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct Trigger_achievement_C_RunTrigger final
{
public:
	class AActor*                                 Param_Owner;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_achievement_C_RunTrigger) == 0x000008, "Wrong alignment on Trigger_achievement_C_RunTrigger");
static_assert(sizeof(Trigger_achievement_C_RunTrigger) == 0x000010, "Wrong size on Trigger_achievement_C_RunTrigger");
static_assert(offsetof(Trigger_achievement_C_RunTrigger, Param_Owner) == 0x000000, "Member 'Trigger_achievement_C_RunTrigger::Param_Owner' has a wrong offset!");
static_assert(offsetof(Trigger_achievement_C_RunTrigger, Param_Index) == 0x000008, "Member 'Trigger_achievement_C_RunTrigger::Param_Index' has a wrong offset!");

// Function trigger_achievement.trigger_achievement_C.ExecuteUbergraph_trigger_achievement
// 0x0018 (0x0018 - 0x0000)
struct Trigger_achievement_C_ExecuteUbergraph_trigger_achievement final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E91[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_owner;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_achievement_C_ExecuteUbergraph_trigger_achievement) == 0x000008, "Wrong alignment on Trigger_achievement_C_ExecuteUbergraph_trigger_achievement");
static_assert(sizeof(Trigger_achievement_C_ExecuteUbergraph_trigger_achievement) == 0x000018, "Wrong size on Trigger_achievement_C_ExecuteUbergraph_trigger_achievement");
static_assert(offsetof(Trigger_achievement_C_ExecuteUbergraph_trigger_achievement, EntryPoint) == 0x000000, "Member 'Trigger_achievement_C_ExecuteUbergraph_trigger_achievement::EntryPoint' has a wrong offset!");
static_assert(offsetof(Trigger_achievement_C_ExecuteUbergraph_trigger_achievement, K2Node_Event_owner) == 0x000008, "Member 'Trigger_achievement_C_ExecuteUbergraph_trigger_achievement::K2Node_Event_owner' has a wrong offset!");
static_assert(offsetof(Trigger_achievement_C_ExecuteUbergraph_trigger_achievement, K2Node_Event_index) == 0x000010, "Member 'Trigger_achievement_C_ExecuteUbergraph_trigger_achievement::K2Node_Event_index' has a wrong offset!");

}
