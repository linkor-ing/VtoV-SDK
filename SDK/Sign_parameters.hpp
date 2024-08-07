#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Sign

#include "Basic.hpp"

#include "Struct_settings_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function sign.sign_C.dreamInv
// 0x0018 (0x0018 - 0x0000)
struct Sign_C_DreamInv final
{
public:
	TArray<struct FStruct_save>                   Invv;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ADreamBase_C*                           Base;                                              // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sign_C_DreamInv) == 0x000008, "Wrong alignment on Sign_C_DreamInv");
static_assert(sizeof(Sign_C_DreamInv) == 0x000018, "Wrong size on Sign_C_DreamInv");
static_assert(offsetof(Sign_C_DreamInv, Invv) == 0x000000, "Member 'Sign_C_DreamInv::Invv' has a wrong offset!");
static_assert(offsetof(Sign_C_DreamInv, Base) == 0x000010, "Member 'Sign_C_DreamInv::Base' has a wrong offset!");

// Function sign.sign_C.upd
// 0x00B0 (0x00B0 - 0x0000)
struct Sign_C_Upd final
{
public:
	TArray<class UTextRenderComponent*>           Txts;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextRenderComponent*                   CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item_1;                         // 0x0028(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_RightChop_ReturnValue;                    // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Conv_StringToInt_ReturnValue;             // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTextRenderComponent*>           K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm, ContainsInstancedReference)
	class ADish_C*                                CallFunc_Array_Get_Item_2;                         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sign_C_Upd) == 0x000008, "Wrong alignment on Sign_C_Upd");
static_assert(sizeof(Sign_C_Upd) == 0x0000B0, "Wrong size on Sign_C_Upd");
static_assert(offsetof(Sign_C_Upd, Txts) == 0x000000, "Member 'Sign_C_Upd::Txts' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, Temp_int_Array_Index_Variable) == 0x000010, "Member 'Sign_C_Upd::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'Sign_C_Upd::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'Sign_C_Upd::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, CallFunc_Array_Get_Item) == 0x000020, "Member 'Sign_C_Upd::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, CallFunc_Array_Get_Item_1) == 0x000028, "Member 'Sign_C_Upd::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'Sign_C_Upd::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, CallFunc_Conv_TextToString_ReturnValue) == 0x000048, "Member 'Sign_C_Upd::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'Sign_C_Upd::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, CallFunc_RightChop_ReturnValue) == 0x000060, "Member 'Sign_C_Upd::CallFunc_RightChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, CallFunc_Conv_StringToInt_ReturnValue) == 0x000070, "Member 'Sign_C_Upd::CallFunc_Conv_StringToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, CallFunc_Left_ReturnValue) == 0x000078, "Member 'Sign_C_Upd::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, CallFunc_Subtract_IntInt_ReturnValue) == 0x000088, "Member 'Sign_C_Upd::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x00008C, "Member 'Sign_C_Upd::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000090, "Member 'Sign_C_Upd::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, K2Node_MakeArray_Array) == 0x000098, "Member 'Sign_C_Upd::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Sign_C_Upd, CallFunc_Array_Get_Item_2) == 0x0000A8, "Member 'Sign_C_Upd::CallFunc_Array_Get_Item_2' has a wrong offset!");

// Function sign.sign_C.gen
// 0x0228 (0x0228 - 0x0000)
struct Sign_C_Gen final
{
public:
	TArray<class UPrimitiveComponent*>            Comps;                                             // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class UTextRenderComponent*>           Txts;                                              // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	ECollisionEnabled                             Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECollisionEnabled                             Temp_byte_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_23[0x1];                                       // 0x0023(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0030(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	EHorizTextAligment                            Temp_byte_Variable_2;                              // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHorizTextAligment                            Temp_byte_Variable_3;                              // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BB[0x5];                                       // 0x00BB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UTextRenderComponent*>           K2Node_MakeArray_Array_1;                          // 0x00D0(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Array_Get_Item;                           // 0x00E8(0x0018)()
	int32                                         CallFunc_Array_Get_Item_1;                         // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0104(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_105[0x3];                                      // 0x0105(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_IntFloat_ReturnValue;            // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue_1;                // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECollisionEnabled                             K2Node_Select_Default;                             // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11A[0x2];                                      // 0x011A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x011C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextRenderComponent*                   CallFunc_Array_Get_Item_2;                         // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item_3;                         // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x7];                                      // 0x0129(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item_4;                         // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult_1;  // 0x0138(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	EHorizTextAligment                            K2Node_Select_Default_1;                           // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C1[0x3];                                      // 0x01C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x01C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue_1;               // 0x01D0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1DC[0x4];                                      // 0x01DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextRenderComponent*                   CallFunc_Array_Get_Item_5;                         // 0x01E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EC[0x4];                                      // 0x01EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x01F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0200(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21D[0x3];                                      // 0x021D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sign_C_Gen) == 0x000008, "Wrong alignment on Sign_C_Gen");
static_assert(sizeof(Sign_C_Gen) == 0x000228, "Wrong size on Sign_C_Gen");
static_assert(offsetof(Sign_C_Gen, Comps) == 0x000000, "Member 'Sign_C_Gen::Comps' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, Txts) == 0x000010, "Member 'Sign_C_Gen::Txts' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, Temp_byte_Variable) == 0x000020, "Member 'Sign_C_Gen::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, Temp_byte_Variable_1) == 0x000021, "Member 'Sign_C_Gen::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, Temp_bool_Variable) == 0x000022, "Member 'Sign_C_Gen::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_MakeRotator_ReturnValue) == 0x000024, "Member 'Sign_C_Gen::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000030, "Member 'Sign_C_Gen::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, Temp_byte_Variable_2) == 0x0000B8, "Member 'Sign_C_Gen::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, Temp_byte_Variable_3) == 0x0000B9, "Member 'Sign_C_Gen::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, Temp_bool_Variable_1) == 0x0000BA, "Member 'Sign_C_Gen::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, K2Node_MakeArray_Array) == 0x0000C0, "Member 'Sign_C_Gen::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, K2Node_MakeArray_Array_1) == 0x0000D0, "Member 'Sign_C_Gen::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Array_Length_ReturnValue) == 0x0000E0, "Member 'Sign_C_Gen::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, Temp_int_Array_Index_Variable) == 0x0000E4, "Member 'Sign_C_Gen::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Array_Get_Item) == 0x0000E8, "Member 'Sign_C_Gen::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Array_Get_Item_1) == 0x000100, "Member 'Sign_C_Gen::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_TextIsEmpty_ReturnValue) == 0x000104, "Member 'Sign_C_Gen::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Multiply_IntFloat_ReturnValue) == 0x000108, "Member 'Sign_C_Gen::CallFunc_Multiply_IntFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_MakeRotator_ReturnValue_1) == 0x00010C, "Member 'Sign_C_Gen::CallFunc_MakeRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, K2Node_Select_Default) == 0x000118, "Member 'Sign_C_Gen::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Not_PreBool_ReturnValue) == 0x000119, "Member 'Sign_C_Gen::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x00011C, "Member 'Sign_C_Gen::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Array_Get_Item_2) == 0x000120, "Member 'Sign_C_Gen::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Array_Get_Item_3) == 0x000128, "Member 'Sign_C_Gen::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Array_Get_Item_4) == 0x000130, "Member 'Sign_C_Gen::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_K2_SetRelativeRotation_SweepHitResult_1) == 0x000138, "Member 'Sign_C_Gen::CallFunc_K2_SetRelativeRotation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, K2Node_Select_Default_1) == 0x0001C0, "Member 'Sign_C_Gen::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_SelectVector_ReturnValue) == 0x0001C4, "Member 'Sign_C_Gen::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_SelectVector_ReturnValue_1) == 0x0001D0, "Member 'Sign_C_Gen::CallFunc_SelectVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Array_Get_Item_5) == 0x0001E0, "Member 'Sign_C_Gen::CallFunc_Array_Get_Item_5' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Add_IntInt_ReturnValue) == 0x0001E8, "Member 'Sign_C_Gen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Conv_IntToString_ReturnValue) == 0x0001F0, "Member 'Sign_C_Gen::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Concat_StrStr_ReturnValue) == 0x000200, "Member 'Sign_C_Gen::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Conv_StringToName_ReturnValue) == 0x000210, "Member 'Sign_C_Gen::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, Temp_int_Loop_Counter_Variable) == 0x000218, "Member 'Sign_C_Gen::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Less_IntInt_ReturnValue) == 0x00021C, "Member 'Sign_C_Gen::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Sign_C_Gen, CallFunc_Add_IntInt_ReturnValue_1) == 0x000220, "Member 'Sign_C_Gen::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function sign.sign_C.stuffUpgraded
// 0x0008 (0x0008 - 0x0000)
struct Sign_C_StuffUpgraded final
{
public:
	class AMainGamemode_C*                        GameMode;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sign_C_StuffUpgraded) == 0x000008, "Wrong alignment on Sign_C_StuffUpgraded");
static_assert(sizeof(Sign_C_StuffUpgraded) == 0x000008, "Wrong size on Sign_C_StuffUpgraded");
static_assert(offsetof(Sign_C_StuffUpgraded, GameMode) == 0x000000, "Member 'Sign_C_StuffUpgraded::GameMode' has a wrong offset!");

// Function sign.sign_C.AnyKey
// 0x0020 (0x0020 - 0x0000)
struct Sign_C_AnyKey final
{
public:
	struct FKey                                   Key;                                               // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Pressed;                                           // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Sign_C_AnyKey) == 0x000008, "Wrong alignment on Sign_C_AnyKey");
static_assert(sizeof(Sign_C_AnyKey) == 0x000020, "Wrong size on Sign_C_AnyKey");
static_assert(offsetof(Sign_C_AnyKey, Key) == 0x000000, "Member 'Sign_C_AnyKey::Key' has a wrong offset!");
static_assert(offsetof(Sign_C_AnyKey, Pressed) == 0x000018, "Member 'Sign_C_AnyKey::Pressed' has a wrong offset!");

// Function sign.sign_C.applyColor
// 0x0010 (0x0010 - 0x0000)
struct Sign_C_ApplyColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sign_C_ApplyColor) == 0x000004, "Wrong alignment on Sign_C_ApplyColor");
static_assert(sizeof(Sign_C_ApplyColor) == 0x000010, "Wrong size on Sign_C_ApplyColor");
static_assert(offsetof(Sign_C_ApplyColor, Color) == 0x000000, "Member 'Sign_C_ApplyColor::Color' has a wrong offset!");

// Function sign.sign_C.texturePickerApply
// 0x0018 (0x0018 - 0x0000)
struct Sign_C_TexturePickerApply final
{
public:
	class UUmg_texturePicker_C*                   Picker;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Texture;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Sign_C_TexturePickerApply) == 0x000008, "Wrong alignment on Sign_C_TexturePickerApply");
static_assert(sizeof(Sign_C_TexturePickerApply) == 0x000018, "Wrong size on Sign_C_TexturePickerApply");
static_assert(offsetof(Sign_C_TexturePickerApply, Picker) == 0x000000, "Member 'Sign_C_TexturePickerApply::Picker' has a wrong offset!");
static_assert(offsetof(Sign_C_TexturePickerApply, Texture) == 0x000008, "Member 'Sign_C_TexturePickerApply::Texture' has a wrong offset!");
static_assert(offsetof(Sign_C_TexturePickerApply, Param_Index) == 0x000010, "Member 'Sign_C_TexturePickerApply::Param_Index' has a wrong offset!");

// Function sign.sign_C.settingsApplied
// 0x00F0 (0x00F0 - 0x0000)
struct Sign_C_SettingsApplied final
{
public:
	struct FStruct_settings                       Settings;                                          // 0x0000(0x00F0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(Sign_C_SettingsApplied) == 0x000008, "Wrong alignment on Sign_C_SettingsApplied");
static_assert(sizeof(Sign_C_SettingsApplied) == 0x0000F0, "Wrong size on Sign_C_SettingsApplied");
static_assert(offsetof(Sign_C_SettingsApplied, Settings) == 0x000000, "Member 'Sign_C_SettingsApplied::Settings' has a wrong offset!");

// Function sign.sign_C.ExecuteUbergraph_sign
// 0x0148 (0x0148 - 0x0000)
struct Sign_C_ExecuteUbergraph_sign final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        K2Node_Event_gamemode;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                   K2Node_Event_key;                                  // 0x0010(0x0018)(HasGetValueTypeHash)
	bool                                          K2Node_Event_pressed;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           K2Node_Event_color;                                // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUmg_texturePicker_C*                   K2Node_Event_picker;                               // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Event_texture;                              // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_settings                       K2Node_Event_settings;                             // 0x0058(0x00F0)(HasGetValueTypeHash)
};
static_assert(alignof(Sign_C_ExecuteUbergraph_sign) == 0x000008, "Wrong alignment on Sign_C_ExecuteUbergraph_sign");
static_assert(sizeof(Sign_C_ExecuteUbergraph_sign) == 0x000148, "Wrong size on Sign_C_ExecuteUbergraph_sign");
static_assert(offsetof(Sign_C_ExecuteUbergraph_sign, EntryPoint) == 0x000000, "Member 'Sign_C_ExecuteUbergraph_sign::EntryPoint' has a wrong offset!");
static_assert(offsetof(Sign_C_ExecuteUbergraph_sign, K2Node_Event_gamemode) == 0x000008, "Member 'Sign_C_ExecuteUbergraph_sign::K2Node_Event_gamemode' has a wrong offset!");
static_assert(offsetof(Sign_C_ExecuteUbergraph_sign, K2Node_Event_key) == 0x000010, "Member 'Sign_C_ExecuteUbergraph_sign::K2Node_Event_key' has a wrong offset!");
static_assert(offsetof(Sign_C_ExecuteUbergraph_sign, K2Node_Event_pressed) == 0x000028, "Member 'Sign_C_ExecuteUbergraph_sign::K2Node_Event_pressed' has a wrong offset!");
static_assert(offsetof(Sign_C_ExecuteUbergraph_sign, K2Node_Event_color) == 0x00002C, "Member 'Sign_C_ExecuteUbergraph_sign::K2Node_Event_color' has a wrong offset!");
static_assert(offsetof(Sign_C_ExecuteUbergraph_sign, K2Node_Event_picker) == 0x000040, "Member 'Sign_C_ExecuteUbergraph_sign::K2Node_Event_picker' has a wrong offset!");
static_assert(offsetof(Sign_C_ExecuteUbergraph_sign, K2Node_Event_texture) == 0x000048, "Member 'Sign_C_ExecuteUbergraph_sign::K2Node_Event_texture' has a wrong offset!");
static_assert(offsetof(Sign_C_ExecuteUbergraph_sign, K2Node_Event_index) == 0x000050, "Member 'Sign_C_ExecuteUbergraph_sign::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Sign_C_ExecuteUbergraph_sign, K2Node_Event_settings) == 0x000058, "Member 'Sign_C_ExecuteUbergraph_sign::K2Node_Event_settings' has a wrong offset!");

}
