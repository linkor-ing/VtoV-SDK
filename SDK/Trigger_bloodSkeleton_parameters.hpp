#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_bloodSkeleton

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function trigger_bloodSkeleton.trigger_bloodSkeleton_C.runTrigger
// 0x0010 (0x0010 - 0x0000)
struct Trigger_bloodSkeleton_C_RunTrigger final
{
public:
	class AActor*                                 Param_Owner;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_bloodSkeleton_C_RunTrigger) == 0x000008, "Wrong alignment on Trigger_bloodSkeleton_C_RunTrigger");
static_assert(sizeof(Trigger_bloodSkeleton_C_RunTrigger) == 0x000010, "Wrong size on Trigger_bloodSkeleton_C_RunTrigger");
static_assert(offsetof(Trigger_bloodSkeleton_C_RunTrigger, Param_Owner) == 0x000000, "Member 'Trigger_bloodSkeleton_C_RunTrigger::Param_Owner' has a wrong offset!");
static_assert(offsetof(Trigger_bloodSkeleton_C_RunTrigger, Param_Index) == 0x000008, "Member 'Trigger_bloodSkeleton_C_RunTrigger::Param_Index' has a wrong offset!");

// Function trigger_bloodSkeleton.trigger_bloodSkeleton_C.ExecuteUbergraph_trigger_bloodSkeleton
// 0x0060 (0x0060 - 0x0000)
struct Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_Event_owner;                                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Event_index;                                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0xC];                                       // 0x0014(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AbloodSkeletonSpawner_C*                CallFunc_FinishSpawningActor_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton) == 0x000010, "Wrong alignment on Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton");
static_assert(sizeof(Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton) == 0x000060, "Wrong size on Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton");
static_assert(offsetof(Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton, EntryPoint) == 0x000000, "Member 'Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton::EntryPoint' has a wrong offset!");
static_assert(offsetof(Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton, K2Node_Event_owner) == 0x000008, "Member 'Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton::K2Node_Event_owner' has a wrong offset!");
static_assert(offsetof(Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton, K2Node_Event_index) == 0x000010, "Member 'Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000050, "Member 'Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton, CallFunc_FinishSpawningActor_ReturnValue) == 0x000058, "Member 'Trigger_bloodSkeleton_C_ExecuteUbergraph_trigger_bloodSkeleton::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

