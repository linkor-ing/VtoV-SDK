#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_shopOrderSlot

#include "Basic.hpp"


namespace SDK::Params
{

// Function umg_shopOrderSlot.umg_shopOrderSlot_C.ExecuteUbergraph_umg_shopOrderSlot
// 0x0028 (0x0028 - 0x0000)
struct Umg_shopOrderSlot_C_ExecuteUbergraph_umg_shopOrderSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27EB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	int32                                         K2Node_Event_index;                                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_shopOrderSlot_C_ExecuteUbergraph_umg_shopOrderSlot) == 0x000008, "Wrong alignment on Umg_shopOrderSlot_C_ExecuteUbergraph_umg_shopOrderSlot");
static_assert(sizeof(Umg_shopOrderSlot_C_ExecuteUbergraph_umg_shopOrderSlot) == 0x000028, "Wrong size on Umg_shopOrderSlot_C_ExecuteUbergraph_umg_shopOrderSlot");
static_assert(offsetof(Umg_shopOrderSlot_C_ExecuteUbergraph_umg_shopOrderSlot, EntryPoint) == 0x000000, "Member 'Umg_shopOrderSlot_C_ExecuteUbergraph_umg_shopOrderSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_shopOrderSlot_C_ExecuteUbergraph_umg_shopOrderSlot, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'Umg_shopOrderSlot_C_ExecuteUbergraph_umg_shopOrderSlot::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_shopOrderSlot_C_ExecuteUbergraph_umg_shopOrderSlot, K2Node_Event_index) == 0x000020, "Member 'Umg_shopOrderSlot_C_ExecuteUbergraph_umg_shopOrderSlot::K2Node_Event_index' has a wrong offset!");

// Function umg_shopOrderSlot.umg_shopOrderSlot_C.setIndex
// 0x0004 (0x0004 - 0x0000)
struct Umg_shopOrderSlot_C_SetIndex final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_shopOrderSlot_C_SetIndex) == 0x000004, "Wrong alignment on Umg_shopOrderSlot_C_SetIndex");
static_assert(sizeof(Umg_shopOrderSlot_C_SetIndex) == 0x000004, "Wrong size on Umg_shopOrderSlot_C_SetIndex");
static_assert(offsetof(Umg_shopOrderSlot_C_SetIndex, Param_Index) == 0x000000, "Member 'Umg_shopOrderSlot_C_SetIndex::Param_Index' has a wrong offset!");

// Function umg_shopOrderSlot.umg_shopOrderSlot_C.updtime
// 0x0004 (0x0004 - 0x0000)
struct Umg_shopOrderSlot_C_Updtime final
{
public:
	float                                         Param_Time;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_shopOrderSlot_C_Updtime) == 0x000004, "Wrong alignment on Umg_shopOrderSlot_C_Updtime");
static_assert(sizeof(Umg_shopOrderSlot_C_Updtime) == 0x000004, "Wrong size on Umg_shopOrderSlot_C_Updtime");
static_assert(offsetof(Umg_shopOrderSlot_C_Updtime, Param_Time) == 0x000000, "Member 'Umg_shopOrderSlot_C_Updtime::Param_Time' has a wrong offset!");

// Function umg_shopOrderSlot.umg_shopOrderSlot_C.upd
// 0x0060 (0x0060 - 0x0000)
struct Umg_shopOrderSlot_C_Upd final
{
public:
	class FText                                   Temp_text_Variable;                                // 0x0000(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0018(0x0018)()
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27EC[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27ED[0x5];                                     // 0x0043(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x0048(0x0018)()
};
static_assert(alignof(Umg_shopOrderSlot_C_Upd) == 0x000008, "Wrong alignment on Umg_shopOrderSlot_C_Upd");
static_assert(sizeof(Umg_shopOrderSlot_C_Upd) == 0x000060, "Wrong size on Umg_shopOrderSlot_C_Upd");
static_assert(offsetof(Umg_shopOrderSlot_C_Upd, Temp_text_Variable) == 0x000000, "Member 'Umg_shopOrderSlot_C_Upd::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(Umg_shopOrderSlot_C_Upd, Temp_text_Variable_1) == 0x000018, "Member 'Umg_shopOrderSlot_C_Upd::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_shopOrderSlot_C_Upd, Temp_bool_Variable) == 0x000030, "Member 'Umg_shopOrderSlot_C_Upd::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Umg_shopOrderSlot_C_Upd, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000038, "Member 'Umg_shopOrderSlot_C_Upd::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Umg_shopOrderSlot_C_Upd, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000040, "Member 'Umg_shopOrderSlot_C_Upd::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_shopOrderSlot_C_Upd, CallFunc_IsValid_ReturnValue) == 0x000041, "Member 'Umg_shopOrderSlot_C_Upd::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_shopOrderSlot_C_Upd, CallFunc_BooleanAND_ReturnValue) == 0x000042, "Member 'Umg_shopOrderSlot_C_Upd::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_shopOrderSlot_C_Upd, K2Node_Select_Default) == 0x000048, "Member 'Umg_shopOrderSlot_C_Upd::K2Node_Select_Default' has a wrong offset!");

}
