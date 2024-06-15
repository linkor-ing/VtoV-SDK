#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_passlock

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function umg_passlock.umg_passlock_C.ExecuteUbergraph_umg_passlock
// 0x0070 (0x0070 - 0x0000)
struct Umg_passlock_C_ExecuteUbergraph_umg_passlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E8B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_ComponentBoundEvent_Text_1;                 // 0x0008(0x0018)(ConstParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Text_IsNumeric_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E8C[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   K2Node_ComponentBoundEvent_Text;                   // 0x0040(0x0018)(ConstParm)
	ETextCommit                                   K2Node_ComponentBoundEvent_CommitMethod;           // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E8D[0x6];                                     // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_1;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0068(0x0008)(NoDestructor)
};
static_assert(alignof(Umg_passlock_C_ExecuteUbergraph_umg_passlock) == 0x000008, "Wrong alignment on Umg_passlock_C_ExecuteUbergraph_umg_passlock");
static_assert(sizeof(Umg_passlock_C_ExecuteUbergraph_umg_passlock) == 0x000070, "Wrong size on Umg_passlock_C_ExecuteUbergraph_umg_passlock");
static_assert(offsetof(Umg_passlock_C_ExecuteUbergraph_umg_passlock, EntryPoint) == 0x000000, "Member 'Umg_passlock_C_ExecuteUbergraph_umg_passlock::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_ExecuteUbergraph_umg_passlock, K2Node_ComponentBoundEvent_Text_1) == 0x000008, "Member 'Umg_passlock_C_ExecuteUbergraph_umg_passlock::K2Node_ComponentBoundEvent_Text_1' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_ExecuteUbergraph_umg_passlock, CallFunc_Conv_TextToString_ReturnValue) == 0x000020, "Member 'Umg_passlock_C_ExecuteUbergraph_umg_passlock::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_ExecuteUbergraph_umg_passlock, CallFunc_Text_IsNumeric_ReturnValue) == 0x000030, "Member 'Umg_passlock_C_ExecuteUbergraph_umg_passlock::CallFunc_Text_IsNumeric_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_ExecuteUbergraph_umg_passlock, CallFunc_Conv_StringToInt_ReturnValue) == 0x000034, "Member 'Umg_passlock_C_ExecuteUbergraph_umg_passlock::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_ExecuteUbergraph_umg_passlock, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000038, "Member 'Umg_passlock_C_ExecuteUbergraph_umg_passlock::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_ExecuteUbergraph_umg_passlock, K2Node_ComponentBoundEvent_Text) == 0x000040, "Member 'Umg_passlock_C_ExecuteUbergraph_umg_passlock::K2Node_ComponentBoundEvent_Text' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_ExecuteUbergraph_umg_passlock, K2Node_ComponentBoundEvent_CommitMethod) == 0x000058, "Member 'Umg_passlock_C_ExecuteUbergraph_umg_passlock::K2Node_ComponentBoundEvent_CommitMethod' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_ExecuteUbergraph_umg_passlock, K2Node_SwitchEnum_CmpSuccess) == 0x000059, "Member 'Umg_passlock_C_ExecuteUbergraph_umg_passlock::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_ExecuteUbergraph_umg_passlock, CallFunc_getMainGamemode_AsMain_Gamemode_1) == 0x000060, "Member 'Umg_passlock_C_ExecuteUbergraph_umg_passlock::CallFunc_getMainGamemode_AsMain_Gamemode_1' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_ExecuteUbergraph_umg_passlock, K2Node_Event_InFocusEvent) == 0x000068, "Member 'Umg_passlock_C_ExecuteUbergraph_umg_passlock::K2Node_Event_InFocusEvent' has a wrong offset!");

// Function umg_passlock.umg_passlock_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct Umg_passlock_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(Umg_passlock_C_OnFocusLost) == 0x000004, "Wrong alignment on Umg_passlock_C_OnFocusLost");
static_assert(sizeof(Umg_passlock_C_OnFocusLost) == 0x000008, "Wrong size on Umg_passlock_C_OnFocusLost");
static_assert(offsetof(Umg_passlock_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'Umg_passlock_C_OnFocusLost::InFocusEvent' has a wrong offset!");

// Function umg_passlock.umg_passlock_C.BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000008, "Wrong alignment on Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(sizeof(Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature) == 0x000020, "Wrong size on Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature");
static_assert(offsetof(Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature, Text) == 0x000000, "Member 'Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature::Text' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature, CommitMethod) == 0x000018, "Member 'Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature::CommitMethod' has a wrong offset!");

// Function umg_passlock.umg_passlock_C.BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000008, "Wrong alignment on Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(sizeof(Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature) == 0x000018, "Wrong size on Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");
static_assert(offsetof(Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature, Text) == 0x000000, "Member 'Umg_passlock_C_BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature::Text' has a wrong offset!");

// Function umg_passlock.umg_passlock_C.Input
// 0x0040 (0x0040 - 0x0000)
struct Umg_passlock_C_Input final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E8E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E8F[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Len_ReturnValue;                          // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Len_ReturnValue_1;                        // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E90[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Umg_passlock_C_Input) == 0x000008, "Wrong alignment on Umg_passlock_C_Input");
static_assert(sizeof(Umg_passlock_C_Input) == 0x000040, "Wrong size on Umg_passlock_C_Input");
static_assert(offsetof(Umg_passlock_C_Input, Num) == 0x000000, "Member 'Umg_passlock_C_Input::Num' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_Input, CallFunc_Conv_IntToString_ReturnValue) == 0x000008, "Member 'Umg_passlock_C_Input::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_Input, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x000018, "Member 'Umg_passlock_C_Input::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_Input, CallFunc_Len_ReturnValue) == 0x00001C, "Member 'Umg_passlock_C_Input::CallFunc_Len_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_Input, CallFunc_Len_ReturnValue_1) == 0x000020, "Member 'Umg_passlock_C_Input::CallFunc_Len_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_Input, CallFunc_Concat_StrStr_ReturnValue) == 0x000028, "Member 'Umg_passlock_C_Input::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_Input, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000038, "Member 'Umg_passlock_C_Input::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function umg_passlock.umg_passlock_C.Init
// 0x0010 (0x0010 - 0x0000)
struct Umg_passlock_C_Init final
{
public:
	class FString                                 Param_Password;                                    // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_passlock_C_Init) == 0x000008, "Wrong alignment on Umg_passlock_C_Init");
static_assert(sizeof(Umg_passlock_C_Init) == 0x000010, "Wrong size on Umg_passlock_C_Init");
static_assert(offsetof(Umg_passlock_C_Init, Param_Password) == 0x000000, "Member 'Umg_passlock_C_Init::Param_Password' has a wrong offset!");

// Function umg_passlock.umg_passlock_C.upd
// 0x0018 (0x0018 - 0x0000)
struct Umg_passlock_C_Upd final
{
public:
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0000(0x0018)()
};
static_assert(alignof(Umg_passlock_C_Upd) == 0x000008, "Wrong alignment on Umg_passlock_C_Upd");
static_assert(sizeof(Umg_passlock_C_Upd) == 0x000018, "Wrong size on Umg_passlock_C_Upd");
static_assert(offsetof(Umg_passlock_C_Upd, CallFunc_Conv_StringToText_ReturnValue) == 0x000000, "Member 'Umg_passlock_C_Upd::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function umg_passlock.umg_passlock_C.OnKeyDown
// 0x0148 (0x0148 - 0x0000)
struct Umg_passlock_C_OnKeyDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0128(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Umg_passlock_C_OnKeyDown) == 0x000008, "Wrong alignment on Umg_passlock_C_OnKeyDown");
static_assert(sizeof(Umg_passlock_C_OnKeyDown) == 0x000148, "Wrong size on Umg_passlock_C_OnKeyDown");
static_assert(offsetof(Umg_passlock_C_OnKeyDown, MyGeometry) == 0x000000, "Member 'Umg_passlock_C_OnKeyDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_OnKeyDown, InKeyEvent) == 0x000038, "Member 'Umg_passlock_C_OnKeyDown::InKeyEvent' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_OnKeyDown, ReturnValue) == 0x000070, "Member 'Umg_passlock_C_OnKeyDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_OnKeyDown, CallFunc_GetKey_ReturnValue) == 0x000128, "Member 'Umg_passlock_C_OnKeyDown::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_passlock_C_OnKeyDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000140, "Member 'Umg_passlock_C_OnKeyDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");

}

