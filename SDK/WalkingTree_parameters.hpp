#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WalkingTree

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function walkingTree.walkingTree_C.ExecuteUbergraph_walkingTree
// 0x0118 (0x0118 - 0x0000)
struct WalkingTree_C_ExecuteUbergraph_walkingTree final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_1;               // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult;                 // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	EPathFollowingResult                          Temp_byte_Variable;                                // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation; // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue; // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue;      // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue_1;        // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52[0x6];                                       // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue_2;        // 0x0065(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_WasRecentlyRendered_ReturnValue_3;        // 0x0066(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_67[0x1];                                       // 0x0067(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue_1;              // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0075(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_76[0x2];                                       // 0x0076(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_Event_hit;                                  // 0x0078(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetGlobalTimeDilation_ReturnValue;        // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0108(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x0115(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WalkingTree_C_ExecuteUbergraph_walkingTree) == 0x000008, "Wrong alignment on WalkingTree_C_ExecuteUbergraph_walkingTree");
static_assert(sizeof(WalkingTree_C_ExecuteUbergraph_walkingTree) == 0x000118, "Wrong size on WalkingTree_C_ExecuteUbergraph_walkingTree");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, EntryPoint) == 0x000000, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::EntryPoint' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_WasRecentlyRendered_ReturnValue) == 0x000004, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_WasRecentlyRendered_ReturnValue' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, K2Node_CustomEvent_MovementResult_1) == 0x000005, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::K2Node_CustomEvent_MovementResult_1' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, K2Node_CustomEvent_MovementResult) == 0x000006, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::K2Node_CustomEvent_MovementResult' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, Temp_byte_Variable) == 0x000018, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00001C, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation) == 0x000028, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue) == 0x000034, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_CreateMoveToProxyObject_ReturnValue) == 0x000038, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_CreateMoveToProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_WasRecentlyRendered_ReturnValue_1) == 0x000051, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_WasRecentlyRendered_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_GetPlayerPawn_ReturnValue) == 0x000058, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_GetDistanceTo_ReturnValue) == 0x000060, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_Less_FloatFloat_ReturnValue) == 0x000064, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_WasRecentlyRendered_ReturnValue_2) == 0x000065, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_WasRecentlyRendered_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_WasRecentlyRendered_ReturnValue_3) == 0x000066, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_WasRecentlyRendered_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_GetPlayerPawn_ReturnValue_1) == 0x000068, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_GetPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_GetDistanceTo_ReturnValue_1) == 0x000070, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_GetDistanceTo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_Less_FloatFloat_ReturnValue_1) == 0x000074, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_Less_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_BooleanOR_ReturnValue) == 0x000075, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, K2Node_Event_hit) == 0x000078, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_RandomFloatInRange_ReturnValue) == 0x000100, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_GetGlobalTimeDilation_ReturnValue) == 0x000104, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_GetGlobalTimeDilation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000108, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000114, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WalkingTree_C_ExecuteUbergraph_walkingTree, CallFunc_BooleanOR_ReturnValue_1) == 0x000115, "Member 'WalkingTree_C_ExecuteUbergraph_walkingTree::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");

// Function walkingTree.walkingTree_C.OnLanded
// 0x0088 (0x0088 - 0x0000)
struct WalkingTree_C_OnLanded final
{
public:
	struct FHitResult                             Hit;                                               // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(WalkingTree_C_OnLanded) == 0x000004, "Wrong alignment on WalkingTree_C_OnLanded");
static_assert(sizeof(WalkingTree_C_OnLanded) == 0x000088, "Wrong size on WalkingTree_C_OnLanded");
static_assert(offsetof(WalkingTree_C_OnLanded, Hit) == 0x000000, "Member 'WalkingTree_C_OnLanded::Hit' has a wrong offset!");

// Function walkingTree.walkingTree_C.OnSuccess_FF173AF7418E4709B590F7A441AAF80A
// 0x0001 (0x0001 - 0x0000)
struct WalkingTree_C_OnSuccess_FF173AF7418E4709B590F7A441AAF80A final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WalkingTree_C_OnSuccess_FF173AF7418E4709B590F7A441AAF80A) == 0x000001, "Wrong alignment on WalkingTree_C_OnSuccess_FF173AF7418E4709B590F7A441AAF80A");
static_assert(sizeof(WalkingTree_C_OnSuccess_FF173AF7418E4709B590F7A441AAF80A) == 0x000001, "Wrong size on WalkingTree_C_OnSuccess_FF173AF7418E4709B590F7A441AAF80A");
static_assert(offsetof(WalkingTree_C_OnSuccess_FF173AF7418E4709B590F7A441AAF80A, MovementResult) == 0x000000, "Member 'WalkingTree_C_OnSuccess_FF173AF7418E4709B590F7A441AAF80A::MovementResult' has a wrong offset!");

// Function walkingTree.walkingTree_C.OnFail_FF173AF7418E4709B590F7A441AAF80A
// 0x0001 (0x0001 - 0x0000)
struct WalkingTree_C_OnFail_FF173AF7418E4709B590F7A441AAF80A final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WalkingTree_C_OnFail_FF173AF7418E4709B590F7A441AAF80A) == 0x000001, "Wrong alignment on WalkingTree_C_OnFail_FF173AF7418E4709B590F7A441AAF80A");
static_assert(sizeof(WalkingTree_C_OnFail_FF173AF7418E4709B590F7A441AAF80A) == 0x000001, "Wrong size on WalkingTree_C_OnFail_FF173AF7418E4709B590F7A441AAF80A");
static_assert(offsetof(WalkingTree_C_OnFail_FF173AF7418E4709B590F7A441AAF80A, MovementResult) == 0x000000, "Member 'WalkingTree_C_OnFail_FF173AF7418E4709B590F7A441AAF80A::MovementResult' has a wrong offset!");

}
