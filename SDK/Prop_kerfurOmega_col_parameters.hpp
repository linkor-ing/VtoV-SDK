#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_kerfurOmega_col

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Struct_mVector_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_kerfurOmega_col.prop_kerfurOmega_col_C.ExecuteUbergraph_prop_kerfurOmega_col
// 0x01D0 (0x01D0 - 0x0000)
struct Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0010(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00A0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D1[0x3];                                       // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_128[0x8];                                      // 0x0128(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0130(0x0030)(IsPlainOldData, NoDestructor)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKerfurOmega_col_C*                     CallFunc_FinishSpawningActor_ReturnValue;          // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_179[0x3];                                      // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Event_color;                                // 0x0188(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_HSVToRGB_ReturnValue;                     // 0x0198(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_H;                               // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_S;                               // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_V;                               // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RGBToHSV_A;                               // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x01B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col) == 0x000010, "Wrong alignment on Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col");
static_assert(sizeof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col) == 0x0001D0, "Wrong size on Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, EntryPoint) == 0x000000, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, K2Node_Event_player) == 0x000008, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, K2Node_Event_hit) == 0x000010, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, K2Node_Event_action) == 0x000098, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_GetTransform_ReturnValue) == 0x0000A0, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, K2Node_SwitchEnum_CmpSuccess) == 0x0000D0, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_BreakTransform_Location) == 0x0000D4, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_BreakTransform_Rotation) == 0x0000E0, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_BreakTransform_Scale) == 0x0000EC, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_BreakRotator_Roll) == 0x0000F8, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_BreakRotator_Pitch) == 0x0000FC, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_BreakRotator_Yaw) == 0x000100, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_MakeRotator_ReturnValue) == 0x000104, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000110, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_Add_VectorVector_ReturnValue) == 0x00011C, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_MakeTransform_ReturnValue) == 0x000130, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000160, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000168, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_FinishSpawningActor_ReturnValue) == 0x000170, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_IsValid_ReturnValue) == 0x000178, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_BreakVector_X) == 0x00017C, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_BreakVector_Y) == 0x000180, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_BreakVector_Z) == 0x000184, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, K2Node_Event_color) == 0x000188, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::K2Node_Event_color' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_HSVToRGB_ReturnValue) == 0x000198, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_HSVToRGB_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_RGBToHSV_H) == 0x0001A8, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_RGBToHSV_H' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_RGBToHSV_S) == 0x0001AC, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_RGBToHSV_S' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_RGBToHSV_V) == 0x0001B0, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_RGBToHSV_V' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_RGBToHSV_A) == 0x0001B4, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_RGBToHSV_A' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col, CallFunc_MakeVector_ReturnValue) == 0x0001B8, "Member 'Prop_kerfurOmega_col_C_ExecuteUbergraph_prop_kerfurOmega_col::CallFunc_MakeVector_ReturnValue' has a wrong offset!");

// Function prop_kerfurOmega_col.prop_kerfurOmega_col_C.setColor
// 0x0028 (0x0028 - 0x0000)
struct Prop_kerfurOmega_col_C_SetColor final
{
public:
	float                                         CallFunc_BreakVector_X;                            // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_HSVToRGB_ReturnValue;                     // 0x000C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_LinearColorToVector_ReturnValue;     // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_kerfurOmega_col_C_SetColor) == 0x000004, "Wrong alignment on Prop_kerfurOmega_col_C_SetColor");
static_assert(sizeof(Prop_kerfurOmega_col_C_SetColor) == 0x000028, "Wrong size on Prop_kerfurOmega_col_C_SetColor");
static_assert(offsetof(Prop_kerfurOmega_col_C_SetColor, CallFunc_BreakVector_X) == 0x000000, "Member 'Prop_kerfurOmega_col_C_SetColor::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_SetColor, CallFunc_BreakVector_Y) == 0x000004, "Member 'Prop_kerfurOmega_col_C_SetColor::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_SetColor, CallFunc_BreakVector_Z) == 0x000008, "Member 'Prop_kerfurOmega_col_C_SetColor::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_SetColor, CallFunc_HSVToRGB_ReturnValue) == 0x00000C, "Member 'Prop_kerfurOmega_col_C_SetColor::CallFunc_HSVToRGB_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_SetColor, CallFunc_Conv_LinearColorToVector_ReturnValue) == 0x00001C, "Member 'Prop_kerfurOmega_col_C_SetColor::CallFunc_Conv_LinearColorToVector_ReturnValue' has a wrong offset!");

// Function prop_kerfurOmega_col.prop_kerfurOmega_col_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_kerfurOmega_col_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_kerfurOmega_col_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_kerfurOmega_col_C_ActionOptionIndex");
static_assert(sizeof(Prop_kerfurOmega_col_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_kerfurOmega_col_C_ActionOptionIndex");
static_assert(offsetof(Prop_kerfurOmega_col_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_kerfurOmega_col_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ActionOptionIndex, Param_Hit) == 0x000008, "Member 'Prop_kerfurOmega_col_C_ActionOptionIndex::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_ActionOptionIndex, Action) == 0x000090, "Member 'Prop_kerfurOmega_col_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_kerfurOmega_col.prop_kerfurOmega_col_C.applyColor
// 0x0010 (0x0010 - 0x0000)
struct Prop_kerfurOmega_col_C_ApplyColor final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_kerfurOmega_col_C_ApplyColor) == 0x000004, "Wrong alignment on Prop_kerfurOmega_col_C_ApplyColor");
static_assert(sizeof(Prop_kerfurOmega_col_C_ApplyColor) == 0x000010, "Wrong size on Prop_kerfurOmega_col_C_ApplyColor");
static_assert(offsetof(Prop_kerfurOmega_col_C_ApplyColor, Color) == 0x000000, "Member 'Prop_kerfurOmega_col_C_ApplyColor::Color' has a wrong offset!");

// Function prop_kerfurOmega_col.prop_kerfurOmega_col_C.loadData
// 0x00F0 (0x00F0 - 0x0000)
struct Prop_kerfurOmega_col_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mVector                        CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_1;                         // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_kerfurOmega_col_C_LoadData) == 0x000010, "Wrong alignment on Prop_kerfurOmega_col_C_LoadData");
static_assert(sizeof(Prop_kerfurOmega_col_C_LoadData) == 0x0000F0, "Wrong size on Prop_kerfurOmega_col_C_LoadData");
static_assert(offsetof(Prop_kerfurOmega_col_C_LoadData, Data) == 0x000000, "Member 'Prop_kerfurOmega_col_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_LoadData, Return) == 0x0000C0, "Member 'Prop_kerfurOmega_col_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_kerfurOmega_col_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_kerfurOmega_col_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_kerfurOmega_col_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_kerfurOmega_col.prop_kerfurOmega_col_C.getData
// 0x0270 (0x0270 - 0x0000)
struct Prop_kerfurOmega_col_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<struct FVector>                        K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mVector                        K2Node_MakeStruct_struct_mVector;                  // 0x0190(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mVector>                K2Node_MakeArray_Array_1;                          // 0x01A0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01B0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_kerfurOmega_col_C_GetData) == 0x000010, "Wrong alignment on Prop_kerfurOmega_col_C_GetData");
static_assert(sizeof(Prop_kerfurOmega_col_C_GetData) == 0x000270, "Wrong size on Prop_kerfurOmega_col_C_GetData");
static_assert(offsetof(Prop_kerfurOmega_col_C_GetData, Data) == 0x000000, "Member 'Prop_kerfurOmega_col_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Prop_kerfurOmega_col_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Prop_kerfurOmega_col_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_GetData, K2Node_MakeStruct_struct_mVector) == 0x000190, "Member 'Prop_kerfurOmega_col_C_GetData::K2Node_MakeStruct_struct_mVector' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_GetData, K2Node_MakeArray_Array_1) == 0x0001A0, "Member 'Prop_kerfurOmega_col_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001B0, "Member 'Prop_kerfurOmega_col_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function prop_kerfurOmega_col.prop_kerfurOmega_col_C.getActionOptions
// 0x0060 (0x0060 - 0x0000)
struct Prop_kerfurOmega_col_C_GetActionOptions final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Options;                                           // 0x0018(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               Options_enum;                                      // 0x0028(0x0010)(Parm, OutParm)
	TArray<class FText>                           OptionsNamesOverlay;                               // 0x0038(0x0010)(Parm, OutParm)
	uint8                                         Number;                                            // 0x0048(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<Enum_interactionActions>               K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm)
};
static_assert(alignof(Prop_kerfurOmega_col_C_GetActionOptions) == 0x000008, "Wrong alignment on Prop_kerfurOmega_col_C_GetActionOptions");
static_assert(sizeof(Prop_kerfurOmega_col_C_GetActionOptions) == 0x000060, "Wrong size on Prop_kerfurOmega_col_C_GetActionOptions");
static_assert(offsetof(Prop_kerfurOmega_col_C_GetActionOptions, Player) == 0x000000, "Member 'Prop_kerfurOmega_col_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_GetActionOptions, Component) == 0x000008, "Member 'Prop_kerfurOmega_col_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_GetActionOptions, Actor) == 0x000010, "Member 'Prop_kerfurOmega_col_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_GetActionOptions, Options) == 0x000018, "Member 'Prop_kerfurOmega_col_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Prop_kerfurOmega_col_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Prop_kerfurOmega_col_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_GetActionOptions, Number) == 0x000048, "Member 'Prop_kerfurOmega_col_C_GetActionOptions::Number' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_col_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000050, "Member 'Prop_kerfurOmega_col_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}

