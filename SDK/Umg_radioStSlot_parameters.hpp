#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_radioStSlot

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function umg_radioStSlot.umg_radioStSlot_C.ExecuteUbergraph_umg_radioStSlot
// 0x0048 (0x0048 - 0x0000)
struct Umg_radioStSlot_C_ExecuteUbergraph_umg_radioStSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2714[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0030(0x0018)()
};
static_assert(alignof(Umg_radioStSlot_C_ExecuteUbergraph_umg_radioStSlot) == 0x000008, "Wrong alignment on Umg_radioStSlot_C_ExecuteUbergraph_umg_radioStSlot");
static_assert(sizeof(Umg_radioStSlot_C_ExecuteUbergraph_umg_radioStSlot) == 0x000048, "Wrong size on Umg_radioStSlot_C_ExecuteUbergraph_umg_radioStSlot");
static_assert(offsetof(Umg_radioStSlot_C_ExecuteUbergraph_umg_radioStSlot, EntryPoint) == 0x000000, "Member 'Umg_radioStSlot_C_ExecuteUbergraph_umg_radioStSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_radioStSlot_C_ExecuteUbergraph_umg_radioStSlot, CallFunc_SelectColor_ReturnValue) == 0x000004, "Member 'Umg_radioStSlot_C_ExecuteUbergraph_umg_radioStSlot::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_radioStSlot_C_ExecuteUbergraph_umg_radioStSlot, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'Umg_radioStSlot_C_ExecuteUbergraph_umg_radioStSlot::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_radioStSlot_C_ExecuteUbergraph_umg_radioStSlot, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000030, "Member 'Umg_radioStSlot_C_ExecuteUbergraph_umg_radioStSlot::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

// Function umg_radioStSlot.umg_radioStSlot_C.select
// 0x0005 (0x0005 - 0x0000)
struct Umg_radioStSlot_C_Select final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_radioStSlot_C_Select) == 0x000001, "Wrong alignment on Umg_radioStSlot_C_Select");
static_assert(sizeof(Umg_radioStSlot_C_Select) == 0x000005, "Wrong size on Umg_radioStSlot_C_Select");
static_assert(offsetof(Umg_radioStSlot_C_Select, Temp_bool_Variable) == 0x000000, "Member 'Umg_radioStSlot_C_Select::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Umg_radioStSlot_C_Select, Temp_byte_Variable) == 0x000001, "Member 'Umg_radioStSlot_C_Select::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Umg_radioStSlot_C_Select, Temp_byte_Variable_1) == 0x000002, "Member 'Umg_radioStSlot_C_Select::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_radioStSlot_C_Select, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000003, "Member 'Umg_radioStSlot_C_Select::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_radioStSlot_C_Select, K2Node_Select_Default) == 0x000004, "Member 'Umg_radioStSlot_C_Select::K2Node_Select_Default' has a wrong offset!");

}
