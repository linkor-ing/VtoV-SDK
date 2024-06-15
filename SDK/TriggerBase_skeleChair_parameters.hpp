#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TriggerBase_skeleChair

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function triggerBase_skeleChair.triggerBase_skeleChair_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct TriggerBase_skeleChair_C_RunTrigger final
{
public:
	class AActor*                                 Param_Owner;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TriggerBase_skeleChair_C_RunTrigger) == 0x000008, "Wrong alignment on TriggerBase_skeleChair_C_RunTrigger");
static_assert(sizeof(TriggerBase_skeleChair_C_RunTrigger) == 0x000010, "Wrong size on TriggerBase_skeleChair_C_RunTrigger");
static_assert(offsetof(TriggerBase_skeleChair_C_RunTrigger, Param_Owner) == 0x000000, "Member 'TriggerBase_skeleChair_C_RunTrigger::Param_Owner' has a wrong offset!");
static_assert(offsetof(TriggerBase_skeleChair_C_RunTrigger, Param_Index) == 0x000008, "Member 'TriggerBase_skeleChair_C_RunTrigger::Param_Index' has a wrong offset!");

// Function triggerBase_skeleChair.triggerBase_skeleChair_C.ExecuteUbergraph_triggerBase_skeleChair
// 0x0060 (0x0060 - 0x0000)
struct TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2696[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGameInst_C*                            CallFunc_getMainGameInstance_AsGame_Inst;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_owner;                                // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2697[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkeletonChair_C*                       CallFunc_FinishSpawningActor_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair) == 0x000010, "Wrong alignment on TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair");
static_assert(sizeof(TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair) == 0x000060, "Wrong size on TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair");
static_assert(offsetof(TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair, EntryPoint) == 0x000000, "Member 'TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair::EntryPoint' has a wrong offset!");
static_assert(offsetof(TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair, CallFunc_getMainGameInstance_AsGame_Inst) == 0x000008, "Member 'TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair::CallFunc_getMainGameInstance_AsGame_Inst' has a wrong offset!");
static_assert(offsetof(TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair, K2Node_Event_owner) == 0x000010, "Member 'TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair::K2Node_Event_owner' has a wrong offset!");
static_assert(offsetof(TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair, K2Node_Event_index) == 0x000018, "Member 'TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00001C, "Member 'TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000050, "Member 'TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair, CallFunc_FinishSpawningActor_ReturnValue) == 0x000058, "Member 'TriggerBase_skeleChair_C_ExecuteUbergraph_triggerBase_skeleChair::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

