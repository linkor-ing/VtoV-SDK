#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_objectActionButton

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function umg_objectActionButton.umg_objectActionButton_C.ExecuteUbergraph_umg_objectActionButton
// 0x0080 (0x0080 - 0x0000)
struct Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31FD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31FE[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31FF[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0068(0x0018)()
};
static_assert(alignof(Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton) == 0x000008, "Wrong alignment on Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton");
static_assert(sizeof(Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton) == 0x000080, "Wrong size on Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton");
static_assert(offsetof(Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton, EntryPoint) == 0x000000, "Member 'Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton, CallFunc_Conv_TextToString_ReturnValue) == 0x000008, "Member 'Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton, CallFunc_TextIsEmpty_ReturnValue) == 0x000018, "Member 'Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton, CallFunc_SelectString_ReturnValue) == 0x000020, "Member 'Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton, CallFunc_Concat_StrStr_ReturnValue) == 0x000048, "Member 'Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000058, "Member 'Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton, CallFunc_Conv_StringToText_ReturnValue) == 0x000068, "Member 'Umg_objectActionButton_C_ExecuteUbergraph_umg_objectActionButton::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function umg_objectActionButton.umg_objectActionButton_C.upd
// 0x0028 (0x0028 - 0x0000)
struct Umg_objectActionButton_C_Upd final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3200[0x5];                                     // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3201[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player_1;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_objectActionButton_C_Upd) == 0x000008, "Wrong alignment on Umg_objectActionButton_C_Upd");
static_assert(sizeof(Umg_objectActionButton_C_Upd) == 0x000028, "Wrong size on Umg_objectActionButton_C_Upd");
static_assert(offsetof(Umg_objectActionButton_C_Upd, Temp_byte_Variable) == 0x000000, "Member 'Umg_objectActionButton_C_Upd::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_Upd, Temp_byte_Variable_1) == 0x000001, "Member 'Umg_objectActionButton_C_Upd::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_Upd, Temp_bool_Variable) == 0x000002, "Member 'Umg_objectActionButton_C_Upd::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_Upd, CallFunc_getMainPlayer_AsMain_Player) == 0x000008, "Member 'Umg_objectActionButton_C_Upd::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_Upd, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'Umg_objectActionButton_C_Upd::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_Upd, CallFunc_getMainPlayer_AsMain_Player_1) == 0x000018, "Member 'Umg_objectActionButton_C_Upd::CallFunc_getMainPlayer_AsMain_Player_1' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_Upd, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000020, "Member 'Umg_objectActionButton_C_Upd::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_objectActionButton_C_Upd, K2Node_Select_Default) == 0x000021, "Member 'Umg_objectActionButton_C_Upd::K2Node_Select_Default' has a wrong offset!");

}

