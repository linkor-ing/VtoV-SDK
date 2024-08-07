#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_saveSlot

#include "Basic.hpp"

#include "Struct_upgrades_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function umg_saveSlot.umg_saveSlot_C.ExecuteUbergraph_umg_saveSlot
// 0x01F0 (0x01F0 - 0x0000)
struct Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	class FString                                 CallFunc_RightChop_ReturnValue;                    // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0048(0x0018)()
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_1;        // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_gameVersion_version;                      // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A2[0x2];                                       // 0x00A2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x00A4(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00B8(0x0028)()
	class UTexture2D*                             CallFunc_BytesToImage_ReturnValue;                 // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_gameVersion_version_1;                    // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_109[0x7];                                      // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_gameVersion_version_2;                    // 0x0110(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_SelectString_ReturnValue_1;               // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0130(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0140(0x0018)()
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue;             // 0x0158(0x0018)()
	float                                         CallFunc_Text_ToFloat_ReturnValue;                 // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0174(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x0178(0x0018)()
	class FString                                 CallFunc_DateTime_ToString_String;                 // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x01B0(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x01C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01D8(0x0018)()
};
static_assert(alignof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot) == 0x000008, "Wrong alignment on Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot");
static_assert(sizeof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot) == 0x0001F0, "Wrong size on Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, EntryPoint) == 0x000000, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, Temp_object_Variable) == 0x000008, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000018, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_RightChop_ReturnValue) == 0x000038, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_RightChop_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_Conv_StringToText_ReturnValue) == 0x000048, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_getMainGamemode_AsMain_Gamemode_1) == 0x000060, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_getMainGamemode_AsMain_Gamemode_1' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_IsEmpty_ReturnValue) == 0x000068, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_SelectString_ReturnValue) == 0x000070, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_Concat_StrStr_ReturnValue) == 0x000080, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_gameVersion_version) == 0x000090, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_gameVersion_version' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, Temp_bool_Variable) == 0x0000A0, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000A1, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_SelectColor_ReturnValue) == 0x0000A4, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, K2Node_MakeStruct_SlateColor) == 0x0000B8, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_BytesToImage_ReturnValue) == 0x0000E0, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_BytesToImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_IsValid_ReturnValue) == 0x0000E8, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_gameVersion_version_1) == 0x0000F0, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_gameVersion_version_1' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, K2Node_Select_Default) == 0x000100, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_EqualEqual_StrStr_ReturnValue_1) == 0x000108, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_EqualEqual_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_gameVersion_version_2) == 0x000110, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_gameVersion_version_2' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_SelectString_ReturnValue_1) == 0x000120, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_SelectString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000130, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000140, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_Conv_Int64ToText_ReturnValue) == 0x000158, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_Conv_Int64ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_Text_ToFloat_ReturnValue) == 0x000170, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_Text_ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000174, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_Conv_FloatToText_ReturnValue) == 0x000178, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_DateTime_ToString_String) == 0x000190, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_DateTime_ToString_String' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_Conv_TextToString_ReturnValue) == 0x0001A0, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_Conv_StringToText_ReturnValue_2) == 0x0001B0, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0001C8, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001D8, "Member 'Umg_saveSlot_C_ExecuteUbergraph_umg_saveSlot::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");

// Function umg_saveSlot.umg_saveSlot_C.upd
// 0x0028 (0x0028 - 0x0000)
struct Umg_saveSlot_C_Upd final
{
public:
	int32                                         Param_ID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Texture;                                           // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_saveSlot_C_Upd) == 0x000008, "Wrong alignment on Umg_saveSlot_C_Upd");
static_assert(sizeof(Umg_saveSlot_C_Upd) == 0x000028, "Wrong size on Umg_saveSlot_C_Upd");
static_assert(offsetof(Umg_saveSlot_C_Upd, Param_ID) == 0x000000, "Member 'Umg_saveSlot_C_Upd::Param_ID' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_Upd, Texture) == 0x000008, "Member 'Umg_saveSlot_C_Upd::Texture' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_Upd, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000010, "Member 'Umg_saveSlot_C_Upd::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_Upd, CallFunc_SelectColor_ReturnValue) == 0x000014, "Member 'Umg_saveSlot_C_Upd::CallFunc_SelectColor_ReturnValue' has a wrong offset!");

// Function umg_saveSlot.umg_saveSlot_C.deleteSlot
// 0x0001 (0x0001 - 0x0000)
struct Umg_saveSlot_C_DeleteSlot final
{
public:
	bool                                          CallFunc_DeleteGameInSlot_ReturnValue;             // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Umg_saveSlot_C_DeleteSlot) == 0x000001, "Wrong alignment on Umg_saveSlot_C_DeleteSlot");
static_assert(sizeof(Umg_saveSlot_C_DeleteSlot) == 0x000001, "Wrong size on Umg_saveSlot_C_DeleteSlot");
static_assert(offsetof(Umg_saveSlot_C_DeleteSlot, CallFunc_DeleteGameInSlot_ReturnValue) == 0x000000, "Member 'Umg_saveSlot_C_DeleteSlot::CallFunc_DeleteGameInSlot_ReturnValue' has a wrong offset!");

// Function umg_saveSlot.umg_saveSlot_C.resetSlot
// 0x0090 (0x0090 - 0x0000)
struct Umg_saveSlot_C_ResetSlot final
{
public:
	class USaveSlot_C*                            CallFunc_CreateSaveGameObject_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SaveGameToSlot_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DeleteGameInSlot_ReturnValue;             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USaveGame*                              CallFunc_LoadGameFromSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveSlot_C*                            K2Node_DynamicCast_AsSave_Slot;                    // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_upgrades                       K2Node_LowEntry_LocalVariable_Value__Object;       // 0x0024(0x0068)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_LowEntry_LocalVariable_Value__1_Object;     // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_saveSlot_C_ResetSlot) == 0x000008, "Wrong alignment on Umg_saveSlot_C_ResetSlot");
static_assert(sizeof(Umg_saveSlot_C_ResetSlot) == 0x000090, "Wrong size on Umg_saveSlot_C_ResetSlot");
static_assert(offsetof(Umg_saveSlot_C_ResetSlot, CallFunc_CreateSaveGameObject_ReturnValue) == 0x000000, "Member 'Umg_saveSlot_C_ResetSlot::CallFunc_CreateSaveGameObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ResetSlot, CallFunc_SaveGameToSlot_ReturnValue) == 0x000008, "Member 'Umg_saveSlot_C_ResetSlot::CallFunc_SaveGameToSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ResetSlot, CallFunc_DeleteGameInSlot_ReturnValue) == 0x000009, "Member 'Umg_saveSlot_C_ResetSlot::CallFunc_DeleteGameInSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ResetSlot, CallFunc_LoadGameFromSlot_ReturnValue) == 0x000010, "Member 'Umg_saveSlot_C_ResetSlot::CallFunc_LoadGameFromSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ResetSlot, K2Node_DynamicCast_AsSave_Slot) == 0x000018, "Member 'Umg_saveSlot_C_ResetSlot::K2Node_DynamicCast_AsSave_Slot' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ResetSlot, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Umg_saveSlot_C_ResetSlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ResetSlot, K2Node_LowEntry_LocalVariable_Value__Object) == 0x000024, "Member 'Umg_saveSlot_C_ResetSlot::K2Node_LowEntry_LocalVariable_Value__Object' has a wrong offset!");
static_assert(offsetof(Umg_saveSlot_C_ResetSlot, K2Node_LowEntry_LocalVariable_Value__1_Object) == 0x00008C, "Member 'Umg_saveSlot_C_ResetSlot::K2Node_LowEntry_LocalVariable_Value__1_Object' has a wrong offset!");

}
