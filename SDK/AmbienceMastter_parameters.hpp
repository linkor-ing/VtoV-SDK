#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbienceMastter

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ambienceMastter.ambienceMastter_C.ExecuteUbergraph_ambienceMastter
// 0x0080 (0x0080 - 0x0000)
struct AmbienceMastter_C_ExecuteUbergraph_ambienceMastter final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATrigger_ambientSound_C*                CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_2;                         // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FInterpTo_ReturnValue;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATrigger_ambientSound_C*                CallFunc_Array_Get_Item_3;                         // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5D[0x3];                                       // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntVector                             CallFunc_Array_Get_Item_4;                         // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x006D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E[0x2];                                       // 0x006E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ATrigger_ambientSound_C*                CallFunc_Array_Get_Item_5;                         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter) == 0x000008, "Wrong alignment on AmbienceMastter_C_ExecuteUbergraph_ambienceMastter");
static_assert(sizeof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter) == 0x000080, "Wrong size on AmbienceMastter_C_ExecuteUbergraph_ambienceMastter");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, EntryPoint) == 0x000000, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::EntryPoint' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, Temp_int_Array_Index_Variable) == 0x000004, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Array_Get_Item) == 0x000018, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Array_LastIndex_ReturnValue) == 0x000020, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Array_Get_Item_1) == 0x000024, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000028, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_SelectFloat_ReturnValue) == 0x000030, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000038, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Array_Get_Item_2) == 0x00003C, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, Temp_int_Variable) == 0x000040, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Add_IntInt_ReturnValue_1) == 0x000044, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_FInterpTo_ReturnValue) == 0x000048, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_FInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Array_Get_Item_3) == 0x000050, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Array_Length_ReturnValue_1) == 0x000058, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Less_IntInt_ReturnValue_1) == 0x00005C, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Array_Get_Item_4) == 0x000060, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00006C, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Array_IsValidIndex_ReturnValue_1) == 0x00006D, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Array_IsValidIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_Array_Get_Item_5) == 0x000070, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(AmbienceMastter_C_ExecuteUbergraph_ambienceMastter, CallFunc_BooleanAND_ReturnValue) == 0x000078, "Member 'AmbienceMastter_C_ExecuteUbergraph_ambienceMastter::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function ambienceMastter.ambienceMastter_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct AmbienceMastter_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AmbienceMastter_C_ReceiveTick) == 0x000004, "Wrong alignment on AmbienceMastter_C_ReceiveTick");
static_assert(sizeof(AmbienceMastter_C_ReceiveTick) == 0x000004, "Wrong size on AmbienceMastter_C_ReceiveTick");
static_assert(offsetof(AmbienceMastter_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'AmbienceMastter_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

