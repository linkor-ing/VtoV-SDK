#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_ubaitBox

#include "Basic.hpp"

#include "Enum_interactionActions_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_ubaitBox.prop_ubaitBox_C.ExecuteUbergraph_prop_ubaitBox
// 0x0170 (0x0170 - 0x0000)
struct Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	class UClass*                                 Temp_class_Variable;                               // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_1;                             // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_2;                             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 Temp_class_Variable_3;                             // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0078(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0101(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_102[0x2];                                      // 0x0102(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_RandomPointInBoundingBox_ReturnValue;     // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_TransformLocation_ReturnValue;            // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 K2Node_Select_Default;                             // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_128[0x8];                                      // 0x0128(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0130(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox) == 0x000010, "Wrong alignment on Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox");
static_assert(sizeof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox) == 0x000170, "Wrong size on Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, EntryPoint) == 0x000000, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, Temp_int_Variable) == 0x000004, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000010, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, Temp_class_Variable) == 0x000040, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::Temp_class_Variable' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, Temp_class_Variable_1) == 0x000048, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::Temp_class_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, Temp_class_Variable_2) == 0x000050, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::Temp_class_Variable_2' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, Temp_class_Variable_3) == 0x000058, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::Temp_class_Variable_3' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, Temp_int_Variable_1) == 0x000060, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000064, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, CallFunc_Add_IntInt_ReturnValue) == 0x000068, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, K2Node_Event_player) == 0x000070, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, K2Node_Event_hit) == 0x000078, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, K2Node_Event_action) == 0x000100, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, K2Node_SwitchEnum_CmpSuccess) == 0x000101, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, CallFunc_RandomPointInBoundingBox_ReturnValue) == 0x000104, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::CallFunc_RandomPointInBoundingBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, CallFunc_TransformLocation_ReturnValue) == 0x000110, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::CallFunc_TransformLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, K2Node_Select_Default) == 0x000120, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, CallFunc_MakeTransform_ReturnValue) == 0x000130, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000160, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox, CallFunc_FinishSpawningActor_ReturnValue) == 0x000168, "Member 'Prop_ubaitBox_C_ExecuteUbergraph_prop_ubaitBox::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function prop_ubaitBox.prop_ubaitBox_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_ubaitBox_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	Enum_interactionActions                       Action;                                            // 0x0090(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_ubaitBox_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_ubaitBox_C_ActionOptionIndex");
static_assert(sizeof(Prop_ubaitBox_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_ubaitBox_C_ActionOptionIndex");
static_assert(offsetof(Prop_ubaitBox_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_ubaitBox_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ActionOptionIndex, Param_Hit) == 0x000008, "Member 'Prop_ubaitBox_C_ActionOptionIndex::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_ActionOptionIndex, Action) == 0x000090, "Member 'Prop_ubaitBox_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_ubaitBox.prop_ubaitBox_C.getActionOptions
// 0x0060 (0x0060 - 0x0000)
struct Prop_ubaitBox_C_GetActionOptions final
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
static_assert(alignof(Prop_ubaitBox_C_GetActionOptions) == 0x000008, "Wrong alignment on Prop_ubaitBox_C_GetActionOptions");
static_assert(sizeof(Prop_ubaitBox_C_GetActionOptions) == 0x000060, "Wrong size on Prop_ubaitBox_C_GetActionOptions");
static_assert(offsetof(Prop_ubaitBox_C_GetActionOptions, Player) == 0x000000, "Member 'Prop_ubaitBox_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_GetActionOptions, Component) == 0x000008, "Member 'Prop_ubaitBox_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_GetActionOptions, Actor) == 0x000010, "Member 'Prop_ubaitBox_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_GetActionOptions, Options) == 0x000018, "Member 'Prop_ubaitBox_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Prop_ubaitBox_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Prop_ubaitBox_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_GetActionOptions, Number) == 0x000048, "Member 'Prop_ubaitBox_C_GetActionOptions::Number' has a wrong offset!");
static_assert(offsetof(Prop_ubaitBox_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000050, "Member 'Prop_ubaitBox_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}

