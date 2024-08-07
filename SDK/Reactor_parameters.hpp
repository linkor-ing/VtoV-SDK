#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Reactor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function reactor.reactor_C.ExecuteUbergraph_reactor
// 0x00BC (0x00BC - 0x0000)
struct Reactor_C_ExecuteUbergraph_reactor final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SelectFloat_ReturnValue;                  // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FB4[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FInterpTo_Constant_ReturnValue;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetRelativeRotation_SweepHitResult;    // 0x0030(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Reactor_C_ExecuteUbergraph_reactor) == 0x000004, "Wrong alignment on Reactor_C_ExecuteUbergraph_reactor");
static_assert(sizeof(Reactor_C_ExecuteUbergraph_reactor) == 0x0000BC, "Wrong size on Reactor_C_ExecuteUbergraph_reactor");
static_assert(offsetof(Reactor_C_ExecuteUbergraph_reactor, EntryPoint) == 0x000000, "Member 'Reactor_C_ExecuteUbergraph_reactor::EntryPoint' has a wrong offset!");
static_assert(offsetof(Reactor_C_ExecuteUbergraph_reactor, CallFunc_SelectFloat_ReturnValue) == 0x000004, "Member 'Reactor_C_ExecuteUbergraph_reactor::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Reactor_C_ExecuteUbergraph_reactor, K2Node_Event_DeltaSeconds) == 0x000008, "Member 'Reactor_C_ExecuteUbergraph_reactor::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Reactor_C_ExecuteUbergraph_reactor, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x00000C, "Member 'Reactor_C_ExecuteUbergraph_reactor::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Reactor_C_ExecuteUbergraph_reactor, CallFunc_BreakRotator_Roll) == 0x000010, "Member 'Reactor_C_ExecuteUbergraph_reactor::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(Reactor_C_ExecuteUbergraph_reactor, CallFunc_BreakRotator_Pitch) == 0x000014, "Member 'Reactor_C_ExecuteUbergraph_reactor::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(Reactor_C_ExecuteUbergraph_reactor, CallFunc_BreakRotator_Yaw) == 0x000018, "Member 'Reactor_C_ExecuteUbergraph_reactor::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(Reactor_C_ExecuteUbergraph_reactor, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x00001C, "Member 'Reactor_C_ExecuteUbergraph_reactor::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Reactor_C_ExecuteUbergraph_reactor, CallFunc_FInterpTo_Constant_ReturnValue) == 0x000020, "Member 'Reactor_C_ExecuteUbergraph_reactor::CallFunc_FInterpTo_Constant_ReturnValue' has a wrong offset!");
static_assert(offsetof(Reactor_C_ExecuteUbergraph_reactor, CallFunc_MakeRotator_ReturnValue) == 0x000024, "Member 'Reactor_C_ExecuteUbergraph_reactor::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Reactor_C_ExecuteUbergraph_reactor, CallFunc_K2_SetRelativeRotation_SweepHitResult) == 0x000030, "Member 'Reactor_C_ExecuteUbergraph_reactor::CallFunc_K2_SetRelativeRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Reactor_C_ExecuteUbergraph_reactor, CallFunc_Not_PreBool_ReturnValue) == 0x0000B8, "Member 'Reactor_C_ExecuteUbergraph_reactor::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function reactor.reactor_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Reactor_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Reactor_C_ReceiveTick) == 0x000004, "Wrong alignment on Reactor_C_ReceiveTick");
static_assert(sizeof(Reactor_C_ReceiveTick) == 0x000004, "Wrong size on Reactor_C_ReceiveTick");
static_assert(offsetof(Reactor_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Reactor_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function reactor.reactor_C.gen
// 0x0090 (0x0090 - 0x0000)
struct Reactor_C_Gen final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FB5[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FB6[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Array_Get_Item_1;                         // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorInt_ReturnValue;           // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FB7[0xB];                                     // 0x0045(0x000B)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	class UStaticMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Reactor_C_Gen) == 0x000010, "Wrong alignment on Reactor_C_Gen");
static_assert(sizeof(Reactor_C_Gen) == 0x000090, "Wrong size on Reactor_C_Gen");
static_assert(offsetof(Reactor_C_Gen, Temp_int_Variable) == 0x000000, "Member 'Reactor_C_Gen::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Reactor_C_Gen, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'Reactor_C_Gen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Reactor_C_Gen, Temp_int_Array_Index_Variable) == 0x000008, "Member 'Reactor_C_Gen::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Reactor_C_Gen, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'Reactor_C_Gen::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Reactor_C_Gen, CallFunc_Add_IntInt_ReturnValue_1) == 0x000010, "Member 'Reactor_C_Gen::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Reactor_C_Gen, CallFunc_Array_Get_Item) == 0x000018, "Member 'Reactor_C_Gen::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Reactor_C_Gen, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'Reactor_C_Gen::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Reactor_C_Gen, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'Reactor_C_Gen::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Reactor_C_Gen, CallFunc_Array_Get_Item_1) == 0x000028, "Member 'Reactor_C_Gen::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Reactor_C_Gen, CallFunc_Array_Length_ReturnValue_1) == 0x000034, "Member 'Reactor_C_Gen::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Reactor_C_Gen, CallFunc_Multiply_VectorInt_ReturnValue) == 0x000038, "Member 'Reactor_C_Gen::CallFunc_Multiply_VectorInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Reactor_C_Gen, CallFunc_Less_IntInt_ReturnValue_1) == 0x000044, "Member 'Reactor_C_Gen::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Reactor_C_Gen, CallFunc_MakeTransform_ReturnValue) == 0x000050, "Member 'Reactor_C_Gen::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Reactor_C_Gen, CallFunc_AddComponent_ReturnValue) == 0x000080, "Member 'Reactor_C_Gen::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Reactor_C_Gen, CallFunc_Array_Add_ReturnValue) == 0x000088, "Member 'Reactor_C_Gen::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

}

