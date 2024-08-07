#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Save_main

#include "Basic.hpp"

#include "Struct_keybind_structs.hpp"
#include "Struct_achievement_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_settings_structs.hpp"


namespace SDK::Params
{

// Function save_main.save_main_C.save
// 0x0001 (0x0001 - 0x0000)
struct Save_main_C_Save final
{
public:
	bool                                          CallFunc_SaveGameToSlot_ReturnValue;               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Save_main_C_Save) == 0x000001, "Wrong alignment on Save_main_C_Save");
static_assert(sizeof(Save_main_C_Save) == 0x000001, "Wrong size on Save_main_C_Save");
static_assert(offsetof(Save_main_C_Save, CallFunc_SaveGameToSlot_ReturnValue) == 0x000000, "Member 'Save_main_C_Save::CallFunc_SaveGameToSlot_ReturnValue' has a wrong offset!");

// Function save_main.save_main_C.setDefaultSettings
// 0x00D0 (0x00D0 - 0x0000)
struct Save_main_C_SetDefaultSettings final
{
public:
	int32                                         Type;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_settings                       Output;                                            // 0x0004(0x00CC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Save_main_C_SetDefaultSettings) == 0x000004, "Wrong alignment on Save_main_C_SetDefaultSettings");
static_assert(sizeof(Save_main_C_SetDefaultSettings) == 0x0000D0, "Wrong size on Save_main_C_SetDefaultSettings");
static_assert(offsetof(Save_main_C_SetDefaultSettings, Type) == 0x000000, "Member 'Save_main_C_SetDefaultSettings::Type' has a wrong offset!");
static_assert(offsetof(Save_main_C_SetDefaultSettings, Output) == 0x000004, "Member 'Save_main_C_SetDefaultSettings::Output' has a wrong offset!");

// Function save_main.save_main_C.saveKeybinds
// 0x00D0 (0x00D0 - 0x0000)
struct Save_main_C_SaveKeybinds final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3361[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue_1;           // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue_2;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInputSettings*                         CallFunc_GetInputSettings_ReturnValue_3;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInputActionKeyMapping>         CallFunc_GetActionMappingByName_OutMappings;       // 0x0038(0x0010)(ReferenceParm)
	struct FInputActionKeyMapping                 CallFunc_Array_Get_Item_1;                         // 0x0048(0x0028)()
	struct FStruct_keybind                        CallFunc_Array_Get_Item_2;                         // 0x0070(0x0030)(HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3362[0x3];                                     // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputActionKeyMapping                 K2Node_MakeStruct_InputActionKeyMapping;           // 0x00A8(0x0028)()
};
static_assert(alignof(Save_main_C_SaveKeybinds) == 0x000008, "Wrong alignment on Save_main_C_SaveKeybinds");
static_assert(sizeof(Save_main_C_SaveKeybinds) == 0x0000D0, "Wrong size on Save_main_C_SaveKeybinds");
static_assert(offsetof(Save_main_C_SaveKeybinds, Temp_int_Array_Index_Variable) == 0x000000, "Member 'Save_main_C_SaveKeybinds::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Save_main_C_SaveKeybinds, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Save_main_C_SaveKeybinds::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Save_main_C_SaveKeybinds, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'Save_main_C_SaveKeybinds::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_main_C_SaveKeybinds, CallFunc_GetInputSettings_ReturnValue) == 0x000010, "Member 'Save_main_C_SaveKeybinds::CallFunc_GetInputSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_main_C_SaveKeybinds, CallFunc_GetInputSettings_ReturnValue_1) == 0x000018, "Member 'Save_main_C_SaveKeybinds::CallFunc_GetInputSettings_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Save_main_C_SaveKeybinds, CallFunc_GetInputSettings_ReturnValue_2) == 0x000020, "Member 'Save_main_C_SaveKeybinds::CallFunc_GetInputSettings_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Save_main_C_SaveKeybinds, CallFunc_Array_Get_Item) == 0x000028, "Member 'Save_main_C_SaveKeybinds::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Save_main_C_SaveKeybinds, CallFunc_GetInputSettings_ReturnValue_3) == 0x000030, "Member 'Save_main_C_SaveKeybinds::CallFunc_GetInputSettings_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Save_main_C_SaveKeybinds, CallFunc_GetActionMappingByName_OutMappings) == 0x000038, "Member 'Save_main_C_SaveKeybinds::CallFunc_GetActionMappingByName_OutMappings' has a wrong offset!");
static_assert(offsetof(Save_main_C_SaveKeybinds, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'Save_main_C_SaveKeybinds::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Save_main_C_SaveKeybinds, CallFunc_Array_Get_Item_2) == 0x000070, "Member 'Save_main_C_SaveKeybinds::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Save_main_C_SaveKeybinds, CallFunc_Array_Length_ReturnValue) == 0x0000A0, "Member 'Save_main_C_SaveKeybinds::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_main_C_SaveKeybinds, CallFunc_Less_IntInt_ReturnValue) == 0x0000A4, "Member 'Save_main_C_SaveKeybinds::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_main_C_SaveKeybinds, K2Node_MakeStruct_InputActionKeyMapping) == 0x0000A8, "Member 'Save_main_C_SaveKeybinds::K2Node_MakeStruct_InputActionKeyMapping' has a wrong offset!");

// Function save_main.save_main_C.setObjects
// 0x0010 (0x0010 - 0x0000)
struct Save_main_C_SetObjects final
{
public:
	class AMainGamemode_C*                        Param_GameMode;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      Param_Controller;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Save_main_C_SetObjects) == 0x000008, "Wrong alignment on Save_main_C_SetObjects");
static_assert(sizeof(Save_main_C_SetObjects) == 0x000010, "Wrong size on Save_main_C_SetObjects");
static_assert(offsetof(Save_main_C_SetObjects, Param_GameMode) == 0x000000, "Member 'Save_main_C_SetObjects::Param_GameMode' has a wrong offset!");
static_assert(offsetof(Save_main_C_SetObjects, Param_Controller) == 0x000008, "Member 'Save_main_C_SetObjects::Param_Controller' has a wrong offset!");

// Function save_main.save_main_C.progressAchievement
// 0x0080 (0x0080 - 0x0000)
struct Save_main_C_ProgressAchievement final
{
public:
	class FName                                   Achievement;                                       // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Popup;                                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3363[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Ind;                                               // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_achievement                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0010(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x0062(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_Get_Item;                           // 0x0063(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0068(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3364[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue_1;                  // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue_2;                  // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Save_main_C_ProgressAchievement) == 0x000008, "Wrong alignment on Save_main_C_ProgressAchievement");
static_assert(sizeof(Save_main_C_ProgressAchievement) == 0x000080, "Wrong size on Save_main_C_ProgressAchievement");
static_assert(offsetof(Save_main_C_ProgressAchievement, Achievement) == 0x000000, "Member 'Save_main_C_ProgressAchievement::Achievement' has a wrong offset!");
static_assert(offsetof(Save_main_C_ProgressAchievement, Popup) == 0x000008, "Member 'Save_main_C_ProgressAchievement::Popup' has a wrong offset!");
static_assert(offsetof(Save_main_C_ProgressAchievement, Ind) == 0x00000C, "Member 'Save_main_C_ProgressAchievement::Ind' has a wrong offset!");
static_assert(offsetof(Save_main_C_ProgressAchievement, CallFunc_GetDataTableRowFromName_OutRow) == 0x000010, "Member 'Save_main_C_ProgressAchievement::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Save_main_C_ProgressAchievement, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000060, "Member 'Save_main_C_ProgressAchievement::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_main_C_ProgressAchievement, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000061, "Member 'Save_main_C_ProgressAchievement::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_main_C_ProgressAchievement, CallFunc_GreaterEqual_IntInt_ReturnValue_1) == 0x000062, "Member 'Save_main_C_ProgressAchievement::CallFunc_GreaterEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Save_main_C_ProgressAchievement, CallFunc_Array_Get_Item) == 0x000063, "Member 'Save_main_C_ProgressAchievement::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Save_main_C_ProgressAchievement, CallFunc_Array_Add_ReturnValue) == 0x000064, "Member 'Save_main_C_ProgressAchievement::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_main_C_ProgressAchievement, Temp_bool_Variable) == 0x000068, "Member 'Save_main_C_ProgressAchievement::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(Save_main_C_ProgressAchievement, CallFunc_Array_Add_ReturnValue_1) == 0x00006C, "Member 'Save_main_C_ProgressAchievement::CallFunc_Array_Add_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Save_main_C_ProgressAchievement, CallFunc_Array_Add_ReturnValue_2) == 0x000070, "Member 'Save_main_C_ProgressAchievement::CallFunc_Array_Add_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Save_main_C_ProgressAchievement, CallFunc_Array_Find_ReturnValue) == 0x000074, "Member 'Save_main_C_ProgressAchievement::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Save_main_C_ProgressAchievement, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'Save_main_C_ProgressAchievement::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

}

