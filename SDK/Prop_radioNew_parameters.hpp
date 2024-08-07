#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_radioNew

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_radioNew.prop_radioNew_C.ExecuteUbergraph_prop_radioNew
// 0x00F8 (0x00F8 - 0x0000)
struct Prop_radioNew_C_ExecuteUbergraph_prop_radioNew final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& OpenedUrl)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(const class FString& FailedUrl)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0030(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue;               // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_OpenUrl_ReturnValue;                      // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_CustomEvent_OpenedUrl;                      // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_FailedUrl;                      // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UMediaPlayer*                           CallFunc_GetMediaPlayer_ReturnValue_1;             // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Play_ReturnValue;                         // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_radioNew_C_ExecuteUbergraph_prop_radioNew) == 0x000008, "Wrong alignment on Prop_radioNew_C_ExecuteUbergraph_prop_radioNew");
static_assert(sizeof(Prop_radioNew_C_ExecuteUbergraph_prop_radioNew) == 0x0000F8, "Wrong size on Prop_radioNew_C_ExecuteUbergraph_prop_radioNew");
static_assert(offsetof(Prop_radioNew_C_ExecuteUbergraph_prop_radioNew, EntryPoint) == 0x000000, "Member 'Prop_radioNew_C_ExecuteUbergraph_prop_radioNew::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_radioNew_C_ExecuteUbergraph_prop_radioNew, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'Prop_radioNew_C_ExecuteUbergraph_prop_radioNew::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Prop_radioNew_C_ExecuteUbergraph_prop_radioNew, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'Prop_radioNew_C_ExecuteUbergraph_prop_radioNew::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Prop_radioNew_C_ExecuteUbergraph_prop_radioNew, K2Node_Event_player) == 0x000028, "Member 'Prop_radioNew_C_ExecuteUbergraph_prop_radioNew::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_radioNew_C_ExecuteUbergraph_prop_radioNew, K2Node_Event_hit) == 0x000030, "Member 'Prop_radioNew_C_ExecuteUbergraph_prop_radioNew::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_radioNew_C_ExecuteUbergraph_prop_radioNew, CallFunc_GetMediaPlayer_ReturnValue) == 0x0000B8, "Member 'Prop_radioNew_C_ExecuteUbergraph_prop_radioNew::CallFunc_GetMediaPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radioNew_C_ExecuteUbergraph_prop_radioNew, CallFunc_OpenUrl_ReturnValue) == 0x0000C0, "Member 'Prop_radioNew_C_ExecuteUbergraph_prop_radioNew::CallFunc_OpenUrl_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_radioNew_C_ExecuteUbergraph_prop_radioNew, K2Node_CustomEvent_OpenedUrl) == 0x0000C8, "Member 'Prop_radioNew_C_ExecuteUbergraph_prop_radioNew::K2Node_CustomEvent_OpenedUrl' has a wrong offset!");
static_assert(offsetof(Prop_radioNew_C_ExecuteUbergraph_prop_radioNew, K2Node_CustomEvent_FailedUrl) == 0x0000D8, "Member 'Prop_radioNew_C_ExecuteUbergraph_prop_radioNew::K2Node_CustomEvent_FailedUrl' has a wrong offset!");
static_assert(offsetof(Prop_radioNew_C_ExecuteUbergraph_prop_radioNew, CallFunc_GetMediaPlayer_ReturnValue_1) == 0x0000E8, "Member 'Prop_radioNew_C_ExecuteUbergraph_prop_radioNew::CallFunc_GetMediaPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_radioNew_C_ExecuteUbergraph_prop_radioNew, CallFunc_Play_ReturnValue) == 0x0000F0, "Member 'Prop_radioNew_C_ExecuteUbergraph_prop_radioNew::CallFunc_Play_ReturnValue' has a wrong offset!");

// Function prop_radioNew.prop_radioNew_C.fail
// 0x0010 (0x0010 - 0x0000)
struct Prop_radioNew_C_Fail final
{
public:
	class FString                                 FailedUrl;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_radioNew_C_Fail) == 0x000008, "Wrong alignment on Prop_radioNew_C_Fail");
static_assert(sizeof(Prop_radioNew_C_Fail) == 0x000010, "Wrong size on Prop_radioNew_C_Fail");
static_assert(offsetof(Prop_radioNew_C_Fail, FailedUrl) == 0x000000, "Member 'Prop_radioNew_C_Fail::FailedUrl' has a wrong offset!");

// Function prop_radioNew.prop_radioNew_C.openMedia
// 0x0010 (0x0010 - 0x0000)
struct Prop_radioNew_C_OpenMedia final
{
public:
	class FString                                 OpenedUrl;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_radioNew_C_OpenMedia) == 0x000008, "Wrong alignment on Prop_radioNew_C_OpenMedia");
static_assert(sizeof(Prop_radioNew_C_OpenMedia) == 0x000010, "Wrong size on Prop_radioNew_C_OpenMedia");
static_assert(offsetof(Prop_radioNew_C_OpenMedia, OpenedUrl) == 0x000000, "Member 'Prop_radioNew_C_OpenMedia::OpenedUrl' has a wrong offset!");

// Function prop_radioNew.prop_radioNew_C.player_use
// 0x0090 (0x0090 - 0x0000)
struct Prop_radioNew_C_Player_use final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_radioNew_C_Player_use) == 0x000008, "Wrong alignment on Prop_radioNew_C_Player_use");
static_assert(sizeof(Prop_radioNew_C_Player_use) == 0x000090, "Wrong size on Prop_radioNew_C_Player_use");
static_assert(offsetof(Prop_radioNew_C_Player_use, Player) == 0x000000, "Member 'Prop_radioNew_C_Player_use::Player' has a wrong offset!");
static_assert(offsetof(Prop_radioNew_C_Player_use, Param_Hit) == 0x000008, "Member 'Prop_radioNew_C_Player_use::Param_Hit' has a wrong offset!");

}

