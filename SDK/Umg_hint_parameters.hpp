#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_hint

#include "Basic.hpp"

#include "Enum_notifyType_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function umg_hint.umg_hint_C.ExecuteUbergraph_umg_hint
// 0x00A8 (0x00A8 - 0x0000)
struct Umg_hint_C_ExecuteUbergraph_umg_hint final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FloatSpringInterp_ReturnValue;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_GetDesiredSize_ReturnValue;               // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_1;           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_Add_Vector2DVector2D_ReturnValue;         // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VictoryFloatMinusEquals_FloatOut;         // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue_2;           // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x009C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_hint_C_ExecuteUbergraph_umg_hint) == 0x000008, "Wrong alignment on Umg_hint_C_ExecuteUbergraph_umg_hint");
static_assert(sizeof(Umg_hint_C_ExecuteUbergraph_umg_hint) == 0x0000A8, "Wrong size on Umg_hint_C_ExecuteUbergraph_umg_hint");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, EntryPoint) == 0x000000, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, K2Node_Event_MyGeometry) == 0x000004, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000040, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000048, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x000050, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_FloatSpringInterp_ReturnValue) == 0x000054, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_FloatSpringInterp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_GetDesiredSize_ReturnValue) == 0x000058, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_GetDesiredSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_SlotAsCanvasSlot_ReturnValue_1) == 0x000060, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_SlotAsCanvasSlot_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_Add_Vector2DVector2D_ReturnValue) == 0x000068, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_Add_Vector2DVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_BreakVector2D_X) == 0x000070, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_BreakVector2D_Y) == 0x000074, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000078, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_Lerp_ReturnValue) == 0x00007C, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_MakeVector2D_ReturnValue) == 0x000080, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x000088, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_VictoryFloatMinusEquals_FloatOut) == 0x00008C, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_VictoryFloatMinusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_SlotAsCanvasSlot_ReturnValue_2) == 0x000090, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_SlotAsCanvasSlot_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_Lerp_ReturnValue_1) == 0x000098, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_ExecuteUbergraph_umg_hint, CallFunc_MakeVector2D_ReturnValue_1) == 0x00009C, "Member 'Umg_hint_C_ExecuteUbergraph_umg_hint::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");

// Function umg_hint.umg_hint_C.Tick
// 0x003C (0x003C - 0x0000)
struct Umg_hint_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_hint_C_Tick) == 0x000004, "Wrong alignment on Umg_hint_C_Tick");
static_assert(sizeof(Umg_hint_C_Tick) == 0x00003C, "Wrong size on Umg_hint_C_Tick");
static_assert(offsetof(Umg_hint_C_Tick, MyGeometry) == 0x000000, "Member 'Umg_hint_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_Tick, InDeltaTime) == 0x000038, "Member 'Umg_hint_C_Tick::InDeltaTime' has a wrong offset!");

// Function umg_hint.umg_hint_C.begin
// 0x0080 (0x0080 - 0x0000)
struct Umg_hint_C_begin final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	Enum_notifyType                               Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_2;                            // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Temp_object_Variable_3;                            // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_notifyType                               Temp_byte_Variable_1;                              // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Temp_object_Variable_4;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_5;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_6;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Temp_object_Variable_7;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             K2Node_Select_Default_1;                           // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_hint_C_begin) == 0x000008, "Wrong alignment on Umg_hint_C_begin");
static_assert(sizeof(Umg_hint_C_begin) == 0x000080, "Wrong size on Umg_hint_C_begin");
static_assert(offsetof(Umg_hint_C_begin, InText) == 0x000000, "Member 'Umg_hint_C_begin::InText' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_begin, Temp_byte_Variable) == 0x000018, "Member 'Umg_hint_C_begin::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_begin, Temp_object_Variable) == 0x000020, "Member 'Umg_hint_C_begin::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_begin, Temp_object_Variable_1) == 0x000028, "Member 'Umg_hint_C_begin::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_begin, Temp_object_Variable_2) == 0x000030, "Member 'Umg_hint_C_begin::Temp_object_Variable_2' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_begin, Temp_object_Variable_3) == 0x000038, "Member 'Umg_hint_C_begin::Temp_object_Variable_3' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_begin, Temp_byte_Variable_1) == 0x000040, "Member 'Umg_hint_C_begin::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_begin, Temp_object_Variable_4) == 0x000048, "Member 'Umg_hint_C_begin::Temp_object_Variable_4' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_begin, Temp_object_Variable_5) == 0x000050, "Member 'Umg_hint_C_begin::Temp_object_Variable_5' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_begin, Temp_object_Variable_6) == 0x000058, "Member 'Umg_hint_C_begin::Temp_object_Variable_6' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_begin, Temp_object_Variable_7) == 0x000060, "Member 'Umg_hint_C_begin::Temp_object_Variable_7' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_begin, K2Node_Select_Default) == 0x000068, "Member 'Umg_hint_C_begin::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_begin, K2Node_Select_Default_1) == 0x000070, "Member 'Umg_hint_C_begin::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(Umg_hint_C_begin, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000078, "Member 'Umg_hint_C_begin::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

}

