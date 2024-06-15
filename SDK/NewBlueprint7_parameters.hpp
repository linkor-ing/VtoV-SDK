#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint7

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ProceduralMeshComponent_structs.hpp"
#include "AIModule_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function NewBlueprint7.NewBlueprint7_C.ExecuteUbergraph_NewBlueprint7
// 0x0148 (0x0148 - 0x0000)
struct NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_1;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E22[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E23[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	EPathFollowingResult                          Temp_byte_Variable;                                // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E24[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UblackScreen_C*                         CallFunc_Create_ReturnValue;                       // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E25[0x3];                                     // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue_1;     // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue;                // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetGamePaused_ReturnValue;                // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E26[0x2];                                     // 0x005E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E27[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue_2;     // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDistanceTo_ReturnValue_1;              // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E28[0x3];                                     // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VSize_ReturnValue;                        // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E29[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_FindLookAtRotation_ReturnValue;           // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakRotator_Roll;                        // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Pitch;                       // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakRotator_Yaw;                         // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotator_ReturnValue;                  // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x00C0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7) == 0x000008, "Wrong alignment on NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7");
static_assert(sizeof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7) == 0x000148, "Wrong size on NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, EntryPoint) == 0x000000, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::EntryPoint' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, K2Node_CustomEvent_MovementResult_1) == 0x000004, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::K2Node_CustomEvent_MovementResult_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, K2Node_CustomEvent_MovementResult) == 0x000018, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::K2Node_CustomEvent_MovementResult' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, Temp_byte_Variable) == 0x00002C, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_Create_ReturnValue) == 0x000030, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000038, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_CreateMoveToProxyObject_ReturnValue) == 0x000040, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_CreateMoveToProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, K2Node_Event_DeltaSeconds) == 0x000048, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_IsValid_ReturnValue) == 0x00004C, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_GetPlayerCameraManager_ReturnValue_1) == 0x000050, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_GetPlayerCameraManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_GetDistanceTo_ReturnValue) == 0x000058, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_GetDistanceTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x00005C, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_SetGamePaused_ReturnValue) == 0x00005D, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_SetGamePaused_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000060, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_GetPlayerCameraManager_ReturnValue_2) == 0x000070, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_GetPlayerCameraManager_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_GetDistanceTo_ReturnValue_1) == 0x000078, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_GetDistanceTo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_Greater_FloatFloat_ReturnValue) == 0x00007C, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_VSize_ReturnValue) == 0x000080, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_LessEqual_FloatFloat_ReturnValue_1) == 0x000084, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_LessEqual_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_GetPlayerPawn_ReturnValue) == 0x000088, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000090, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_FindLookAtRotation_ReturnValue) == 0x00009C, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_FindLookAtRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_BreakRotator_Roll) == 0x0000A8, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_BreakRotator_Roll' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_BreakRotator_Pitch) == 0x0000AC, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_BreakRotator_Pitch' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_BreakRotator_Yaw) == 0x0000B0, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_BreakRotator_Yaw' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_MakeRotator_ReturnValue) == 0x0000B4, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_MakeRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x0000C0, "Member 'NewBlueprint7_C_ExecuteUbergraph_NewBlueprint7::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

// Function NewBlueprint7.NewBlueprint7_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct NewBlueprint7_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewBlueprint7_C_ReceiveTick) == 0x000004, "Wrong alignment on NewBlueprint7_C_ReceiveTick");
static_assert(sizeof(NewBlueprint7_C_ReceiveTick) == 0x000004, "Wrong size on NewBlueprint7_C_ReceiveTick");
static_assert(offsetof(NewBlueprint7_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'NewBlueprint7_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function NewBlueprint7.NewBlueprint7_C.OnSuccess_F89F5A8F414EC9E1688955A98075908F
// 0x0001 (0x0001 - 0x0000)
struct NewBlueprint7_C_OnSuccess_F89F5A8F414EC9E1688955A98075908F final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewBlueprint7_C_OnSuccess_F89F5A8F414EC9E1688955A98075908F) == 0x000001, "Wrong alignment on NewBlueprint7_C_OnSuccess_F89F5A8F414EC9E1688955A98075908F");
static_assert(sizeof(NewBlueprint7_C_OnSuccess_F89F5A8F414EC9E1688955A98075908F) == 0x000001, "Wrong size on NewBlueprint7_C_OnSuccess_F89F5A8F414EC9E1688955A98075908F");
static_assert(offsetof(NewBlueprint7_C_OnSuccess_F89F5A8F414EC9E1688955A98075908F, MovementResult) == 0x000000, "Member 'NewBlueprint7_C_OnSuccess_F89F5A8F414EC9E1688955A98075908F::MovementResult' has a wrong offset!");

// Function NewBlueprint7.NewBlueprint7_C.OnFail_F89F5A8F414EC9E1688955A98075908F
// 0x0001 (0x0001 - 0x0000)
struct NewBlueprint7_C_OnFail_F89F5A8F414EC9E1688955A98075908F final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(NewBlueprint7_C_OnFail_F89F5A8F414EC9E1688955A98075908F) == 0x000001, "Wrong alignment on NewBlueprint7_C_OnFail_F89F5A8F414EC9E1688955A98075908F");
static_assert(sizeof(NewBlueprint7_C_OnFail_F89F5A8F414EC9E1688955A98075908F) == 0x000001, "Wrong size on NewBlueprint7_C_OnFail_F89F5A8F414EC9E1688955A98075908F");
static_assert(offsetof(NewBlueprint7_C_OnFail_F89F5A8F414EC9E1688955A98075908F, MovementResult) == 0x000000, "Member 'NewBlueprint7_C_OnFail_F89F5A8F414EC9E1688955A98075908F::MovementResult' has a wrong offset!");

// Function NewBlueprint7.NewBlueprint7_C.NewFunction_0
// 0x0050 (0x0050 - 0x0000)
struct NewBlueprint7_C_NewFunction_0 final
{
public:
	TArray<struct FLinearColor>                   Temp_struct_Variable;                              // 0x0000(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FVector2D>                      Temp_struct_Variable_1;                            // 0x0010(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FVector2D>                      Temp_struct_Variable_2;                            // 0x0020(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FVector2D>                      Temp_struct_Variable_3;                            // 0x0030(0x0010)(ConstParm, ReferenceParm)
	TArray<struct FProcMeshTangent>               Temp_struct_Variable_4;                            // 0x0040(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(NewBlueprint7_C_NewFunction_0) == 0x000008, "Wrong alignment on NewBlueprint7_C_NewFunction_0");
static_assert(sizeof(NewBlueprint7_C_NewFunction_0) == 0x000050, "Wrong size on NewBlueprint7_C_NewFunction_0");
static_assert(offsetof(NewBlueprint7_C_NewFunction_0, Temp_struct_Variable) == 0x000000, "Member 'NewBlueprint7_C_NewFunction_0::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_NewFunction_0, Temp_struct_Variable_1) == 0x000010, "Member 'NewBlueprint7_C_NewFunction_0::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_NewFunction_0, Temp_struct_Variable_2) == 0x000020, "Member 'NewBlueprint7_C_NewFunction_0::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_NewFunction_0, Temp_struct_Variable_3) == 0x000030, "Member 'NewBlueprint7_C_NewFunction_0::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(NewBlueprint7_C_NewFunction_0, Temp_struct_Variable_4) == 0x000040, "Member 'NewBlueprint7_C_NewFunction_0::Temp_struct_Variable_4' has a wrong offset!");

}

