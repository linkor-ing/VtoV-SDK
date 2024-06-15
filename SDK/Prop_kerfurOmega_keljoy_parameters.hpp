#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_kerfurOmega_keljoy

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK::Params
{

// Function prop_kerfurOmega_keljoy.prop_kerfurOmega_keljoy_C.ExecuteUbergraph_prop_kerfurOmega_keljoy
// 0x0180 (0x0180 - 0x0000)
struct Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF0[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0010(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         K2Node_Event_index;                                // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF1[0x3];                                     // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00A0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3CF2[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x00EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CF3[0x8];                                     // 0x0128(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0130(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKerfurOmega_keljoy_C*                  CallFunc_FinishSpawningActor_ReturnValue;          // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy) == 0x000010, "Wrong alignment on Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy");
static_assert(sizeof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy) == 0x000180, "Wrong size on Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, EntryPoint) == 0x000000, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, K2Node_Event_player) == 0x000008, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, K2Node_Event_hit) == 0x000010, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, K2Node_Event_index) == 0x000098, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, K2Node_Event_action) == 0x00009C, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, CallFunc_GetTransform_ReturnValue) == 0x0000A0, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, K2Node_SwitchEnum_CmpSuccess) == 0x0000D0, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, CallFunc_BreakTransform_Location) == 0x0000D4, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, CallFunc_BreakTransform_Rotation) == 0x0000E0, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, CallFunc_BreakTransform_Scale) == 0x0000EC, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, CallFunc_BreakRotator_Roll) == 0x0000F8, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, CallFunc_BreakRotator_Pitch) == 0x0000FC, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, CallFunc_BreakRotator_Yaw) == 0x000100, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, CallFunc_MakeRotator_ReturnValue) == 0x000104, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000110, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, CallFunc_Add_VectorVector_ReturnValue) == 0x00011C, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, CallFunc_MakeTransform_ReturnValue) == 0x000130, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000160, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, CallFunc_FinishSpawningActor_ReturnValue) == 0x000168, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy, CallFunc_IsValid_ReturnValue) == 0x000170, "Member 'Prop_kerfurOmega_keljoy_C_ExecuteUbergraph_prop_kerfurOmega_keljoy::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function prop_kerfurOmega_keljoy.prop_kerfurOmega_keljoy_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_kerfurOmega_keljoy_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         Param_Index;                                       // 0x0090(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_interactionActions                       Action;                                            // 0x0094(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_kerfurOmega_keljoy_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_kerfurOmega_keljoy_C_ActionOptionIndex");
static_assert(sizeof(Prop_kerfurOmega_keljoy_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_kerfurOmega_keljoy_C_ActionOptionIndex");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_kerfurOmega_keljoy_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ActionOptionIndex, Param_Hit) == 0x000008, "Member 'Prop_kerfurOmega_keljoy_C_ActionOptionIndex::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ActionOptionIndex, Param_Index) == 0x000090, "Member 'Prop_kerfurOmega_keljoy_C_ActionOptionIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(Prop_kerfurOmega_keljoy_C_ActionOptionIndex, Action) == 0x000094, "Member 'Prop_kerfurOmega_keljoy_C_ActionOptionIndex::Action' has a wrong offset!");

}

