#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_foodSleeper

#include "Basic.hpp"


namespace SDK::Params
{

// Function ticker_foodSleeper.ticker_foodSleeper_C.ExecuteUbergraph_ticker_foodSleeper
// 0x001C (0x001C - 0x0000)
struct Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F35[0x2];                                     // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F36[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RandomBoolWithWeight_ReturnValue;         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper) == 0x000004, "Wrong alignment on Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper");
static_assert(sizeof(Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper) == 0x00001C, "Wrong size on Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper");
static_assert(offsetof(Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper, EntryPoint) == 0x000000, "Member 'Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper::EntryPoint' has a wrong offset!");
static_assert(offsetof(Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000008, "Member 'Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x000009, "Member 'Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00000C, "Member 'Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper, CallFunc_Less_FloatFloat_ReturnValue) == 0x000010, "Member 'Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000014, "Member 'Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper, CallFunc_RandomBoolWithWeight_ReturnValue) == 0x000018, "Member 'Ticker_foodSleeper_C_ExecuteUbergraph_ticker_foodSleeper::CallFunc_RandomBoolWithWeight_ReturnValue' has a wrong offset!");

// Function ticker_foodSleeper.ticker_foodSleeper_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Ticker_foodSleeper_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ticker_foodSleeper_C_ReceiveTick) == 0x000004, "Wrong alignment on Ticker_foodSleeper_C_ReceiveTick");
static_assert(sizeof(Ticker_foodSleeper_C_ReceiveTick) == 0x000004, "Wrong size on Ticker_foodSleeper_C_ReceiveTick");
static_assert(offsetof(Ticker_foodSleeper_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Ticker_foodSleeper_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

