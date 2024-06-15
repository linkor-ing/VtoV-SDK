#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_settingsSlot_DeleteInvalidMeshes

#include "Basic.hpp"


namespace SDK::Params
{

// Function umg_settingsSlot_DeleteInvalidMeshes.umg_settingsSlot_DeleteInvalidMeshes_C.ExecuteUbergraph_umg_settingsSlot_DeleteInvalidMeshes
// 0x0004 (0x0004 - 0x0000)
struct Umg_settingsSlot_DeleteInvalidMeshes_C_ExecuteUbergraph_umg_settingsSlot_DeleteInvalidMeshes final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_settingsSlot_DeleteInvalidMeshes_C_ExecuteUbergraph_umg_settingsSlot_DeleteInvalidMeshes) == 0x000004, "Wrong alignment on Umg_settingsSlot_DeleteInvalidMeshes_C_ExecuteUbergraph_umg_settingsSlot_DeleteInvalidMeshes");
static_assert(sizeof(Umg_settingsSlot_DeleteInvalidMeshes_C_ExecuteUbergraph_umg_settingsSlot_DeleteInvalidMeshes) == 0x000004, "Wrong size on Umg_settingsSlot_DeleteInvalidMeshes_C_ExecuteUbergraph_umg_settingsSlot_DeleteInvalidMeshes");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_ExecuteUbergraph_umg_settingsSlot_DeleteInvalidMeshes, EntryPoint) == 0x000000, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_ExecuteUbergraph_umg_settingsSlot_DeleteInvalidMeshes::EntryPoint' has a wrong offset!");

// Function umg_settingsSlot_DeleteInvalidMeshes.umg_settingsSlot_DeleteInvalidMeshes_C.Clear
// 0x00B8 (0x00B8 - 0x0000)
struct Umg_settingsSlot_DeleteInvalidMeshes_C_Clear final
{
public:
	int32                                         Nums;                                              // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209A[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	const class APrintedObject_C*                 Temp_object_Variable;                              // 0x0018(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0020(0x0018)()
	const class APrintedObject_C*                 Temp_object_Variable_1;                            // 0x0038(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209B[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APrintedObject_C*                       CallFunc_Array_Get_Item;                           // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x00B5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear) == 0x000008, "Wrong alignment on Umg_settingsSlot_DeleteInvalidMeshes_C_Clear");
static_assert(sizeof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear) == 0x0000B8, "Wrong size on Umg_settingsSlot_DeleteInvalidMeshes_C_Clear");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, Nums) == 0x000000, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::Nums' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, Temp_int_Variable) == 0x000004, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, Temp_int_Array_Index_Variable) == 0x000010, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, Temp_object_Variable) == 0x000018, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, CallFunc_MakeLiteralText_ReturnValue) == 0x000020, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, Temp_object_Variable_1) == 0x000038, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, CallFunc_Conv_TextToString_ReturnValue) == 0x000040, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, CallFunc_Conv_IntToString_ReturnValue) == 0x000050, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, CallFunc_Concat_StrStr_ReturnValue) == 0x000060, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, CallFunc_Add_IntInt_ReturnValue_1) == 0x000070, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000078, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x0000A0, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, CallFunc_Array_Get_Item) == 0x0000A8, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, CallFunc_Array_Length_ReturnValue) == 0x0000B0, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, CallFunc_Less_IntInt_ReturnValue) == 0x0000B4, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_DeleteInvalidMeshes_C_Clear, CallFunc_Array_RemoveItem_ReturnValue) == 0x0000B5, "Member 'Umg_settingsSlot_DeleteInvalidMeshes_C_Clear::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

}

