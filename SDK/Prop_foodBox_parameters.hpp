#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_foodBox

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_foodBox.prop_foodBox_C.ExecuteUbergraph_prop_foodBox
// 0x0050 (0x0050 - 0x0000)
struct Prop_foodBox_C_ExecuteUbergraph_prop_foodBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Temp_name_Variable;                                // 0x0004(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FFA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_C*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_foodBox_C_ExecuteUbergraph_prop_foodBox) == 0x000010, "Wrong alignment on Prop_foodBox_C_ExecuteUbergraph_prop_foodBox");
static_assert(sizeof(Prop_foodBox_C_ExecuteUbergraph_prop_foodBox) == 0x000050, "Wrong size on Prop_foodBox_C_ExecuteUbergraph_prop_foodBox");
static_assert(offsetof(Prop_foodBox_C_ExecuteUbergraph_prop_foodBox, EntryPoint) == 0x000000, "Member 'Prop_foodBox_C_ExecuteUbergraph_prop_foodBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_foodBox_C_ExecuteUbergraph_prop_foodBox, Temp_name_Variable) == 0x000004, "Member 'Prop_foodBox_C_ExecuteUbergraph_prop_foodBox::Temp_name_Variable' has a wrong offset!");
static_assert(offsetof(Prop_foodBox_C_ExecuteUbergraph_prop_foodBox, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'Prop_foodBox_C_ExecuteUbergraph_prop_foodBox::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_foodBox_C_ExecuteUbergraph_prop_foodBox, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000040, "Member 'Prop_foodBox_C_ExecuteUbergraph_prop_foodBox::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_foodBox_C_ExecuteUbergraph_prop_foodBox, CallFunc_FinishSpawningActor_ReturnValue) == 0x000048, "Member 'Prop_foodBox_C_ExecuteUbergraph_prop_foodBox::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

