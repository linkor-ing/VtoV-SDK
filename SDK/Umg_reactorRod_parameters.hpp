#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_reactorRod

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function umg_reactorRod.umg_reactorRod_C.ExecuteUbergraph_umg_reactorRod
// 0x0028 (0x0028 - 0x0000)
struct Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_ComponentBoundEvent_Value;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod) == 0x000008, "Wrong alignment on Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod");
static_assert(sizeof(Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod) == 0x000028, "Wrong size on Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod");
static_assert(offsetof(Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod, EntryPoint) == 0x000000, "Member 'Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod::EntryPoint' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod, K2Node_ComponentBoundEvent_Value) == 0x000004, "Member 'Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod::K2Node_ComponentBoundEvent_Value' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x000020, "Member 'Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod, CallFunc_Subtract_FloatFloat_ReturnValue_1) == 0x000024, "Member 'Umg_reactorRod_C_ExecuteUbergraph_umg_reactorRod::CallFunc_Subtract_FloatFloat_ReturnValue_1' has a wrong offset!");

// Function umg_reactorRod.umg_reactorRod_C.BndEvt__Slider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct Umg_reactorRod_C_BndEvt__Slider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature final
{
public:
	float                                         Value;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Umg_reactorRod_C_BndEvt__Slider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong alignment on Umg_reactorRod_C_BndEvt__Slider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(sizeof(Umg_reactorRod_C_BndEvt__Slider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature) == 0x000004, "Wrong size on Umg_reactorRod_C_BndEvt__Slider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
static_assert(offsetof(Umg_reactorRod_C_BndEvt__Slider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature, Value) == 0x000000, "Member 'Umg_reactorRod_C_BndEvt__Slider_89_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature::Value' has a wrong offset!");

// Function umg_reactorRod.umg_reactorRod_C.upd
// 0x00D8 (0x00D8 - 0x0000)
struct Umg_reactorRod_C_Upd final
{
public:
	float                                         Alpha;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakVector_X;                            // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x004C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Umg_reactorRod_C_Upd) == 0x000008, "Wrong alignment on Umg_reactorRod_C_Upd");
static_assert(sizeof(Umg_reactorRod_C_Upd) == 0x0000D8, "Wrong size on Umg_reactorRod_C_Upd");
static_assert(offsetof(Umg_reactorRod_C_Upd, Alpha) == 0x000000, "Member 'Umg_reactorRod_C_Upd::Alpha' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_Upd, CallFunc_Lerp_ReturnValue) == 0x000004, "Member 'Umg_reactorRod_C_Upd::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_Upd, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'Umg_reactorRod_C_Upd::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_Upd, CallFunc_Lerp_ReturnValue_1) == 0x00000C, "Member 'Umg_reactorRod_C_Upd::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_Upd, CallFunc_MakeVector2D_ReturnValue) == 0x000010, "Member 'Umg_reactorRod_C_Upd::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_Upd, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000018, "Member 'Umg_reactorRod_C_Upd::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_Upd, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'Umg_reactorRod_C_Upd::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_Upd, CallFunc_Array_IsValidIndex_ReturnValue) == 0x000021, "Member 'Umg_reactorRod_C_Upd::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_Upd, CallFunc_Array_Get_Item) == 0x000028, "Member 'Umg_reactorRod_C_Upd::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_Upd, CallFunc_IsValid_ReturnValue_2) == 0x000030, "Member 'Umg_reactorRod_C_Upd::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_Upd, CallFunc_BreakVector_X) == 0x000034, "Member 'Umg_reactorRod_C_Upd::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_Upd, CallFunc_BreakVector_Y) == 0x000038, "Member 'Umg_reactorRod_C_Upd::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_Upd, CallFunc_BreakVector_Z) == 0x00003C, "Member 'Umg_reactorRod_C_Upd::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_Upd, CallFunc_MakeVector_ReturnValue) == 0x000040, "Member 'Umg_reactorRod_C_Upd::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Umg_reactorRod_C_Upd, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x00004C, "Member 'Umg_reactorRod_C_Upd::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");

}
