#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_timeclock

#include "Basic.hpp"


namespace SDK::Params
{

// Function prop_timeclock.prop_timeclock_C.ExecuteUbergraph_prop_timeclock
// 0x0020 (0x0020 - 0x0000)
struct Prop_timeclock_C_ExecuteUbergraph_prop_timeclock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38F5[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_timeclock_C_ExecuteUbergraph_prop_timeclock) == 0x000008, "Wrong alignment on Prop_timeclock_C_ExecuteUbergraph_prop_timeclock");
static_assert(sizeof(Prop_timeclock_C_ExecuteUbergraph_prop_timeclock) == 0x000020, "Wrong size on Prop_timeclock_C_ExecuteUbergraph_prop_timeclock");
static_assert(offsetof(Prop_timeclock_C_ExecuteUbergraph_prop_timeclock, EntryPoint) == 0x000000, "Member 'Prop_timeclock_C_ExecuteUbergraph_prop_timeclock::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_timeclock_C_ExecuteUbergraph_prop_timeclock, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000004, "Member 'Prop_timeclock_C_ExecuteUbergraph_prop_timeclock::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_timeclock_C_ExecuteUbergraph_prop_timeclock, CallFunc_Lerp_ReturnValue) == 0x000008, "Member 'Prop_timeclock_C_ExecuteUbergraph_prop_timeclock::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_timeclock_C_ExecuteUbergraph_prop_timeclock, K2Node_Event_player) == 0x000010, "Member 'Prop_timeclock_C_ExecuteUbergraph_prop_timeclock::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_timeclock_C_ExecuteUbergraph_prop_timeclock, Temp_bool_Variable) == 0x000018, "Member 'Prop_timeclock_C_ExecuteUbergraph_prop_timeclock::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Prop_timeclock_C_ExecuteUbergraph_prop_timeclock, CallFunc_Not_PreBool_ReturnValue) == 0x000019, "Member 'Prop_timeclock_C_ExecuteUbergraph_prop_timeclock::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function prop_timeclock.prop_timeclock_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_timeclock_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_timeclock_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_timeclock_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_timeclock_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_timeclock_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_timeclock_C_PlayerHandUse_RMB, Player) == 0x000000, "Member 'Prop_timeclock_C_PlayerHandUse_RMB::Player' has a wrong offset!");

}

