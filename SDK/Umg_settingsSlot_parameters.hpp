#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_settingsSlot

#include "Basic.hpp"


namespace SDK::Params
{

// Function umg_settingsSlot.umg_settingsSlot_C.ExecuteUbergraph_umg_settingsSlot
// 0x0010 (0x0010 - 0x0000)
struct Umg_settingsSlot_C_ExecuteUbergraph_umg_settingsSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value_1;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bIsChecked;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_209C[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_settingsSlot_C_ExecuteUbergraph_umg_settingsSlot) == 0x000004, "Wrong alignment on Umg_settingsSlot_C_ExecuteUbergraph_umg_settingsSlot");
static_assert(sizeof(Umg_settingsSlot_C_ExecuteUbergraph_umg_settingsSlot) == 0x000010, "Wrong size on Umg_settingsSlot_C_ExecuteUbergraph_umg_settingsSlot");
static_assert(offsetof(Umg_settingsSlot_C_ExecuteUbergraph_umg_settingsSlot, EntryPoint) == 0x000000, "Member 'Umg_settingsSlot_C_ExecuteUbergraph_umg_settingsSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_ExecuteUbergraph_umg_settingsSlot, K2Node_ComponentBoundEvent_Value_1) == 0x000004, "Member 'Umg_settingsSlot_C_ExecuteUbergraph_umg_settingsSlot::K2Node_ComponentBoundEvent_Value_1' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_ExecuteUbergraph_umg_settingsSlot, K2Node_ComponentBoundEvent_bIsChecked) == 0x000008, "Member 'Umg_settingsSlot_C_ExecuteUbergraph_umg_settingsSlot::K2Node_ComponentBoundEvent_bIsChecked' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_ExecuteUbergraph_umg_settingsSlot, K2Node_ComponentBoundEvent_Value) == 0x00000C, "Member 'Umg_settingsSlot_C_ExecuteUbergraph_umg_settingsSlot::K2Node_ComponentBoundEvent_Value' has a wrong offset!");

// Function umg_settingsSlot.umg_settingsSlot_C.BndEvt__slider_v_flo_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Umg_settingsSlot_C_BndEvt__slider_v_flo_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_settingsSlot_C_BndEvt__slider_v_flo_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on Umg_settingsSlot_C_BndEvt__slider_v_flo_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(Umg_settingsSlot_C_BndEvt__slider_v_flo_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on Umg_settingsSlot_C_BndEvt__slider_v_flo_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(Umg_settingsSlot_C_BndEvt__slider_v_flo_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'Umg_settingsSlot_C_BndEvt__slider_v_flo_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function umg_settingsSlot.umg_settingsSlot_C.BndEvt__CheckBox_vres_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct Umg_settingsSlot_C_BndEvt__CheckBox_vres_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature final
{
public:
	bool                                          bIsChecked;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Umg_settingsSlot_C_BndEvt__CheckBox_vres_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong alignment on Umg_settingsSlot_C_BndEvt__CheckBox_vres_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(sizeof(Umg_settingsSlot_C_BndEvt__CheckBox_vres_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature) == 0x000001, "Wrong size on Umg_settingsSlot_C_BndEvt__CheckBox_vres_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature");
static_assert(offsetof(Umg_settingsSlot_C_BndEvt__CheckBox_vres_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature, bIsChecked) == 0x000000, "Member 'Umg_settingsSlot_C_BndEvt__CheckBox_vres_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature::bIsChecked' has a wrong offset!");

// Function umg_settingsSlot.umg_settingsSlot_C.BndEvt__slider_v_res_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Umg_settingsSlot_C_BndEvt__slider_v_res_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_settingsSlot_C_BndEvt__slider_v_res_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on Umg_settingsSlot_C_BndEvt__slider_v_res_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(Umg_settingsSlot_C_BndEvt__slider_v_res_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on Umg_settingsSlot_C_BndEvt__slider_v_res_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(Umg_settingsSlot_C_BndEvt__slider_v_res_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'Umg_settingsSlot_C_BndEvt__slider_v_res_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function umg_settingsSlot.umg_settingsSlot_C.upd
// 0x0070 (0x0070 - 0x0000)
struct Umg_settingsSlot_C_Upd final
{
public:
	float                                         Val;                                               // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0010(0x0018)()
	float                                         K2Node_Select_Default_1;                           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValue_ReturnValue;                     // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RoundDecimals_ReturnValue;                // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_209D[0x3];                                     // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_2;                               // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_2;                           // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_209E[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Round_ReturnValue;                        // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_209F[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x0048(0x0018)()
	float                                         CallFunc_GetValue_ReturnValue_1;                   // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Round_ReturnValue_1;                      // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_settingsSlot_C_Upd) == 0x000008, "Wrong alignment on Umg_settingsSlot_C_Upd");
static_assert(sizeof(Umg_settingsSlot_C_Upd) == 0x000070, "Wrong size on Umg_settingsSlot_C_Upd");
static_assert(offsetof(Umg_settingsSlot_C_Upd, Val) == 0x000000, "Member 'Umg_settingsSlot_C_Upd::Val' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, Temp_int_Variable) == 0x000004, "Member 'Umg_settingsSlot_C_Upd::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, Temp_int_Variable_1) == 0x000008, "Member 'Umg_settingsSlot_C_Upd::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, K2Node_Select_Default) == 0x00000C, "Member 'Umg_settingsSlot_C_Upd::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, CallFunc_Conv_FloatToText_ReturnValue) == 0x000010, "Member 'Umg_settingsSlot_C_Upd::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, K2Node_Select_Default_1) == 0x000028, "Member 'Umg_settingsSlot_C_Upd::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, CallFunc_GetValue_ReturnValue) == 0x00002C, "Member 'Umg_settingsSlot_C_Upd::CallFunc_GetValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, CallFunc_RoundDecimals_ReturnValue) == 0x000030, "Member 'Umg_settingsSlot_C_Upd::CallFunc_RoundDecimals_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, CallFunc_IsChecked_ReturnValue) == 0x000034, "Member 'Umg_settingsSlot_C_Upd::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, Temp_int_Variable_2) == 0x000038, "Member 'Umg_settingsSlot_C_Upd::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, K2Node_Select_Default_2) == 0x00003C, "Member 'Umg_settingsSlot_C_Upd::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, K2Node_SwitchInteger_CmpSuccess) == 0x00003D, "Member 'Umg_settingsSlot_C_Upd::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, CallFunc_Round_ReturnValue) == 0x000040, "Member 'Umg_settingsSlot_C_Upd::CallFunc_Round_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, CallFunc_Conv_FloatToText_ReturnValue_1) == 0x000048, "Member 'Umg_settingsSlot_C_Upd::CallFunc_Conv_FloatToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, CallFunc_GetValue_ReturnValue_1) == 0x000060, "Member 'Umg_settingsSlot_C_Upd::CallFunc_GetValue_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, CallFunc_Round_ReturnValue_1) == 0x000064, "Member 'Umg_settingsSlot_C_Upd::CallFunc_Round_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Upd, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000068, "Member 'Umg_settingsSlot_C_Upd::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");

// Function umg_settingsSlot.umg_settingsSlot_C.set
// 0x0020 (0x0020 - 0x0000)
struct Umg_settingsSlot_C_Set final
{
public:
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20A0[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_3;            // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20A1[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_settingsSlot_C_Set) == 0x000008, "Wrong alignment on Umg_settingsSlot_C_Set");
static_assert(sizeof(Umg_settingsSlot_C_Set) == 0x000020, "Wrong size on Umg_settingsSlot_C_Set");
static_assert(offsetof(Umg_settingsSlot_C_Set, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000000, "Member 'Umg_settingsSlot_C_Set::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Set, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000004, "Member 'Umg_settingsSlot_C_Set::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Set, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000008, "Member 'Umg_settingsSlot_C_Set::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Set, K2Node_SwitchInteger_CmpSuccess) == 0x00000C, "Member 'Umg_settingsSlot_C_Set::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Set, CallFunc_Conv_IntToFloat_ReturnValue_3) == 0x000010, "Member 'Umg_settingsSlot_C_Set::CallFunc_Conv_IntToFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_Set, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000018, "Member 'Umg_settingsSlot_C_Set::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");

// Function umg_settingsSlot.umg_settingsSlot_C.begin
// 0x0058 (0x0058 - 0x0000)
struct Umg_settingsSlot_C_begin final
{
public:
	class UUmg_settings_C*                        Param_Parent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0018(0x0018)()
	float                                         K2Node_Select_Default_1;                           // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20A2[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue_1;           // 0x0038(0x0018)()
	int32                                         Temp_int_Variable_2;                               // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_2;                           // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Umg_settingsSlot_C_begin) == 0x000008, "Wrong alignment on Umg_settingsSlot_C_begin");
static_assert(sizeof(Umg_settingsSlot_C_begin) == 0x000058, "Wrong size on Umg_settingsSlot_C_begin");
static_assert(offsetof(Umg_settingsSlot_C_begin, Param_Parent) == 0x000000, "Member 'Umg_settingsSlot_C_begin::Param_Parent' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_begin, Temp_int_Variable) == 0x000008, "Member 'Umg_settingsSlot_C_begin::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_begin, Temp_int_Variable_1) == 0x00000C, "Member 'Umg_settingsSlot_C_begin::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_begin, K2Node_Select_Default) == 0x000010, "Member 'Umg_settingsSlot_C_begin::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_begin, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000014, "Member 'Umg_settingsSlot_C_begin::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_begin, CallFunc_Conv_FloatToText_ReturnValue) == 0x000018, "Member 'Umg_settingsSlot_C_begin::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_begin, K2Node_Select_Default_1) == 0x000030, "Member 'Umg_settingsSlot_C_begin::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_begin, CallFunc_Conv_FloatToText_ReturnValue_1) == 0x000038, "Member 'Umg_settingsSlot_C_begin::CallFunc_Conv_FloatToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_begin, Temp_int_Variable_2) == 0x000050, "Member 'Umg_settingsSlot_C_begin::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_begin, K2Node_Select_Default_2) == 0x000054, "Member 'Umg_settingsSlot_C_begin::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(Umg_settingsSlot_C_begin, K2Node_SwitchInteger_CmpSuccess) == 0x000055, "Member 'Umg_settingsSlot_C_begin::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");

}

