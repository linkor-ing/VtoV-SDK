#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_statsSlot

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function umg_statsSlot.umg_statsSlot_C.ExecuteUbergraph_umg_statsSlot
// 0x0004 (0x0004 - 0x0000)
struct Umg_statsSlot_C_ExecuteUbergraph_umg_statsSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_statsSlot_C_ExecuteUbergraph_umg_statsSlot) == 0x000004, "Wrong alignment on Umg_statsSlot_C_ExecuteUbergraph_umg_statsSlot");
static_assert(sizeof(Umg_statsSlot_C_ExecuteUbergraph_umg_statsSlot) == 0x000004, "Wrong size on Umg_statsSlot_C_ExecuteUbergraph_umg_statsSlot");
static_assert(offsetof(Umg_statsSlot_C_ExecuteUbergraph_umg_statsSlot, EntryPoint) == 0x000000, "Member 'Umg_statsSlot_C_ExecuteUbergraph_umg_statsSlot::EntryPoint' has a wrong offset!");

// Function umg_statsSlot.umg_statsSlot_C.upd
// 0x0170 (0x0170 - 0x0000)
struct Umg_statsSlot_C_Upd final
{
public:
	float                                         Param_Stat;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20A9[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0008(0x0018)()
	struct FTimespan                              CallFunc_FromSeconds_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan2_Days;                      // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan2_Hours;                     // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan2_Minutes;                   // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan2_Seconds;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakTimespan2_FractionNano;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20AA[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_2;           // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_3;           // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00E0(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_5;              // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20AB[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_6;              // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_7;              // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0140(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x0158(0x0018)()
};
static_assert(alignof(Umg_statsSlot_C_Upd) == 0x000008, "Wrong alignment on Umg_statsSlot_C_Upd");
static_assert(sizeof(Umg_statsSlot_C_Upd) == 0x000170, "Wrong size on Umg_statsSlot_C_Upd");
static_assert(offsetof(Umg_statsSlot_C_Upd, Param_Stat) == 0x000000, "Member 'Umg_statsSlot_C_Upd::Param_Stat' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, Temp_bool_Variable) == 0x000004, "Member 'Umg_statsSlot_C_Upd::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Conv_FloatToText_ReturnValue) == 0x000008, "Member 'Umg_statsSlot_C_Upd::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_FromSeconds_ReturnValue) == 0x000020, "Member 'Umg_statsSlot_C_Upd::CallFunc_FromSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'Umg_statsSlot_C_Upd::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_BreakTimespan2_Days) == 0x000038, "Member 'Umg_statsSlot_C_Upd::CallFunc_BreakTimespan2_Days' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_BreakTimespan2_Hours) == 0x00003C, "Member 'Umg_statsSlot_C_Upd::CallFunc_BreakTimespan2_Hours' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_BreakTimespan2_Minutes) == 0x000040, "Member 'Umg_statsSlot_C_Upd::CallFunc_BreakTimespan2_Minutes' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_BreakTimespan2_Seconds) == 0x000044, "Member 'Umg_statsSlot_C_Upd::CallFunc_BreakTimespan2_Seconds' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_BreakTimespan2_FractionNano) == 0x000048, "Member 'Umg_statsSlot_C_Upd::CallFunc_BreakTimespan2_FractionNano' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Conv_IntToString_ReturnValue) == 0x000050, "Member 'Umg_statsSlot_C_Upd::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000060, "Member 'Umg_statsSlot_C_Upd::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Conv_IntToString_ReturnValue_2) == 0x000070, "Member 'Umg_statsSlot_C_Upd::CallFunc_Conv_IntToString_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Conv_IntToString_ReturnValue_3) == 0x000080, "Member 'Umg_statsSlot_C_Upd::CallFunc_Conv_IntToString_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Concat_StrStr_ReturnValue) == 0x000090, "Member 'Umg_statsSlot_C_Upd::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Conv_TextToString_ReturnValue_1) == 0x0000A0, "Member 'Umg_statsSlot_C_Upd::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000B0, "Member 'Umg_statsSlot_C_Upd::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000C0, "Member 'Umg_statsSlot_C_Upd::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000D0, "Member 'Umg_statsSlot_C_Upd::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Conv_StringToText_ReturnValue) == 0x0000E0, "Member 'Umg_statsSlot_C_Upd::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0000F8, "Member 'Umg_statsSlot_C_Upd::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Concat_StrStr_ReturnValue_5) == 0x000108, "Member 'Umg_statsSlot_C_Upd::CallFunc_Concat_StrStr_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000118, "Member 'Umg_statsSlot_C_Upd::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Concat_StrStr_ReturnValue_6) == 0x000120, "Member 'Umg_statsSlot_C_Upd::CallFunc_Concat_StrStr_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Concat_StrStr_ReturnValue_7) == 0x000130, "Member 'Umg_statsSlot_C_Upd::CallFunc_Concat_StrStr_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000140, "Member 'Umg_statsSlot_C_Upd::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_statsSlot_C_Upd, K2Node_Select_Default) == 0x000158, "Member 'Umg_statsSlot_C_Upd::K2Node_Select_Default' has a wrong offset!");

}

