#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Event_arirFuelsAtv

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function event_arirFuelsAtv.event_arirFuelsAtv_C.ExecuteUbergraph_event_arirFuelsAtv
// 0x0190 (0x0190 - 0x0000)
struct Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_GetOverlappingActors_OverlappingActors;   // 0x0018(0x0010)(ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0040(0x0008)(NoDestructor, HasGetValueTypeHash)
	class ACar1_C*                                K2Node_DynamicCast_AsCar_1;                        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0080(0x0010)(ConstParm, ReferenceParm)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0030)(IsPlainOldData, NoDestructor)
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      CallFunc_obj_static_obj;                           // 0x00E0(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x00F8(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x0181(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_FloatFloat_ReturnValue_1;        // 0x0182(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv) == 0x000010, "Wrong alignment on Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv");
static_assert(sizeof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv) == 0x000190, "Wrong size on Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, EntryPoint) == 0x000000, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::EntryPoint' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_WasRecentlyRendered_ReturnValue) == 0x000004, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_WasRecentlyRendered_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000008, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_GetOverlappingActors_OverlappingActors) == 0x000018, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_GetOverlappingActors_OverlappingActors' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_Array_Get_Item) == 0x000038, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000040, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, K2Node_DynamicCast_AsCar_1) == 0x000048, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::K2Node_DynamicCast_AsCar_1' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000054, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_Add_VectorVector_ReturnValue) == 0x000060, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_Array_IsValidIndex_ReturnValue) == 0x00006C, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_RandomFloatInRange_ReturnValue) == 0x000070, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_MakeRotator_ReturnValue) == 0x000074, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, Temp_object_Variable) == 0x000080, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_GetPlayerPawn_ReturnValue) == 0x0000C0, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0000C8, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000D8, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_obj_static_obj) == 0x0000E0, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_obj_static_obj' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000F0, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_LineTraceSingleForObjects_OutHit) == 0x0000F8, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000180, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_NotEqual_FloatFloat_ReturnValue) == 0x000181, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_NotEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv, CallFunc_NotEqual_FloatFloat_ReturnValue_1) == 0x000182, "Member 'Event_arirFuelsAtv_C_ExecuteUbergraph_event_arirFuelsAtv::CallFunc_NotEqual_FloatFloat_ReturnValue_1' has a wrong offset!");

}

