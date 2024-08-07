#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_advancementSlot

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Struct_achievement_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function umg_advancementSlot.umg_advancementSlot_C.ExecuteUbergraph_umg_advancementSlot
// 0x0004 (0x0004 - 0x0000)
struct Umg_advancementSlot_C_ExecuteUbergraph_umg_advancementSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_advancementSlot_C_ExecuteUbergraph_umg_advancementSlot) == 0x000004, "Wrong alignment on Umg_advancementSlot_C_ExecuteUbergraph_umg_advancementSlot");
static_assert(sizeof(Umg_advancementSlot_C_ExecuteUbergraph_umg_advancementSlot) == 0x000004, "Wrong size on Umg_advancementSlot_C_ExecuteUbergraph_umg_advancementSlot");
static_assert(offsetof(Umg_advancementSlot_C_ExecuteUbergraph_umg_advancementSlot, EntryPoint) == 0x000000, "Member 'Umg_advancementSlot_C_ExecuteUbergraph_umg_advancementSlot::EntryPoint' has a wrong offset!");

// Function umg_advancementSlot.umg_advancementSlot_C.upd
// 0x0090 (0x0090 - 0x0000)
struct Umg_advancementSlot_C_Upd final
{
public:
	struct FStruct_achievement                    Param_Data;                                        // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_27FB[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0054(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27FC[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0068(0x0028)()
};
static_assert(alignof(Umg_advancementSlot_C_Upd) == 0x000008, "Wrong alignment on Umg_advancementSlot_C_Upd");
static_assert(sizeof(Umg_advancementSlot_C_Upd) == 0x000090, "Wrong size on Umg_advancementSlot_C_Upd");
static_assert(offsetof(Umg_advancementSlot_C_Upd, Param_Data) == 0x000000, "Member 'Umg_advancementSlot_C_Upd::Param_Data' has a wrong offset!");
static_assert(offsetof(Umg_advancementSlot_C_Upd, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000050, "Member 'Umg_advancementSlot_C_Upd::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_advancementSlot_C_Upd, CallFunc_SelectColor_ReturnValue) == 0x000054, "Member 'Umg_advancementSlot_C_Upd::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_advancementSlot_C_Upd, K2Node_MakeStruct_SlateColor) == 0x000068, "Member 'Umg_advancementSlot_C_Upd::K2Node_MakeStruct_SlateColor' has a wrong offset!");

// Function umg_advancementSlot.umg_advancementSlot_C.check
// 0x0010 (0x0010 - 0x0000)
struct Umg_advancementSlot_C_Check final
{
public:
	class UUmg_advancementSlot_C*                 Ac;                                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x000B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_advancementSlot_C_Check) == 0x000008, "Wrong alignment on Umg_advancementSlot_C_Check");
static_assert(sizeof(Umg_advancementSlot_C_Check) == 0x000010, "Wrong size on Umg_advancementSlot_C_Check");
static_assert(offsetof(Umg_advancementSlot_C_Check, Ac) == 0x000000, "Member 'Umg_advancementSlot_C_Check::Ac' has a wrong offset!");
static_assert(offsetof(Umg_advancementSlot_C_Check, Temp_bool_Variable) == 0x000008, "Member 'Umg_advancementSlot_C_Check::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Umg_advancementSlot_C_Check, Temp_byte_Variable) == 0x000009, "Member 'Umg_advancementSlot_C_Check::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Umg_advancementSlot_C_Check, Temp_byte_Variable_1) == 0x00000A, "Member 'Umg_advancementSlot_C_Check::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_advancementSlot_C_Check, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x00000B, "Member 'Umg_advancementSlot_C_Check::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_advancementSlot_C_Check, K2Node_Select_Default) == 0x00000C, "Member 'Umg_advancementSlot_C_Check::K2Node_Select_Default' has a wrong offset!");

}

