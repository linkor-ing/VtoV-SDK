#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wisp

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK::Params
{

// Function wisp.wisp_C.ExecuteUbergraph_wisp
// 0x0270 (0x0270 - 0x0000)
struct Wisp_C_ExecuteUbergraph_wisp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_230A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_230B[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Ease_ReturnValue;                         // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_230C[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_1;                       // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_230D[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult_1;               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPathFollowingResult                          K2Node_CustomEvent_MovementResult;                 // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_230E[0x2];                                     // 0x003E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EPathFollowingResult MovementResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	EPathFollowingResult                          Temp_byte_Variable;                                // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_230F[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0058(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Condition;                      // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2310[0x3];                                     // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VInterpTo_ReturnValue;                    // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x009C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0124(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation; // 0x0130(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue; // 0x013C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2311[0x3];                                     // 0x013D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAIAsyncTaskBlueprintProxy*             CallFunc_CreateMoveToProxyObject_ReturnValue;      // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2312[0x3];                                     // 0x0149(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_PerlinNoise1D_ReturnValue;                // 0x014C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue_2;                       // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0158(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x015C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_VictoryFloatPlusEquals_FloatOut;          // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0164(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0174(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x01FC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0210(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x021C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0220(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x022C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x022D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2313[0x2];                                     // 0x022E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;            // 0x0230(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;          // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2314[0x7];                                     // 0x0241(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2315[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_camera_bad_C*                     K2Node_DynamicCast_AsProp_Camera_Bad;              // 0x0258(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2316[0x3];                                     // 0x0261(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0264(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2317[0x3];                                     // 0x0269(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x026C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Wisp_C_ExecuteUbergraph_wisp) == 0x000008, "Wrong alignment on Wisp_C_ExecuteUbergraph_wisp");
static_assert(sizeof(Wisp_C_ExecuteUbergraph_wisp) == 0x000270, "Wrong size on Wisp_C_ExecuteUbergraph_wisp");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, EntryPoint) == 0x000000, "Member 'Wisp_C_ExecuteUbergraph_wisp::EntryPoint' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000008, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_NearlyEqual_FloatFloat_ReturnValue) == 0x000010, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_NearlyEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_Ease_ReturnValue) == 0x000014, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_Ease_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x00001C, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_Lerp_ReturnValue) == 0x000020, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_Lerp_ReturnValue_1) == 0x000024, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_Lerp_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, K2Node_SwitchEnum_CmpSuccess) == 0x000028, "Member 'Wisp_C_ExecuteUbergraph_wisp::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'Wisp_C_ExecuteUbergraph_wisp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, K2Node_CustomEvent_MovementResult_1) == 0x00003C, "Member 'Wisp_C_ExecuteUbergraph_wisp::K2Node_CustomEvent_MovementResult_1' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, K2Node_CustomEvent_MovementResult) == 0x00003D, "Member 'Wisp_C_ExecuteUbergraph_wisp::K2Node_CustomEvent_MovementResult' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, K2Node_CreateDelegate_OutputDelegate_1) == 0x000040, "Member 'Wisp_C_ExecuteUbergraph_wisp::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, Temp_byte_Variable) == 0x000050, "Member 'Wisp_C_ExecuteUbergraph_wisp::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, Temp_object_Variable) == 0x000058, "Member 'Wisp_C_ExecuteUbergraph_wisp::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, Temp_int_Array_Index_Variable) == 0x000068, "Member 'Wisp_C_ExecuteUbergraph_wisp::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, K2Node_CustomEvent_Condition) == 0x00006C, "Member 'Wisp_C_ExecuteUbergraph_wisp::K2Node_CustomEvent_Condition' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, K2Node_Event_DeltaSeconds) == 0x000070, "Member 'Wisp_C_ExecuteUbergraph_wisp::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000074, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000080, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x00008C, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_VInterpTo_ReturnValue) == 0x000090, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_VInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x00009C, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000124, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation) == 0x000130, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue) == 0x00013C, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_CreateMoveToProxyObject_ReturnValue) == 0x000140, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_CreateMoveToProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_IsValid_ReturnValue) == 0x000148, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_PerlinNoise1D_ReturnValue) == 0x00014C, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_PerlinNoise1D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x000150, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_Lerp_ReturnValue_2) == 0x000154, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_Lerp_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000158, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_Add_FloatFloat_ReturnValue) == 0x00015C, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_VictoryFloatPlusEquals_FloatOut) == 0x000160, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_VictoryFloatPlusEquals_FloatOut' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_MakeVector_ReturnValue) == 0x000164, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_RandomFloatInRange_ReturnValue) == 0x000170, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000174, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x0001FC, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000208, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000210, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_Vector_Distance_ReturnValue) == 0x00021C, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000220, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_Less_FloatFloat_ReturnValue) == 0x00022C, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_BooleanOR_ReturnValue) == 0x00022D, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_SphereOverlapActors_OutActors) == 0x000230, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_SphereOverlapActors_ReturnValue) == 0x000240, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_Array_Get_Item) == 0x000248, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_Array_Length_ReturnValue) == 0x000250, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, K2Node_DynamicCast_AsProp_Camera_Bad) == 0x000258, "Member 'Wisp_C_ExecuteUbergraph_wisp::K2Node_DynamicCast_AsProp_Camera_Bad' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, K2Node_DynamicCast_bSuccess) == 0x000260, "Member 'Wisp_C_ExecuteUbergraph_wisp::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, Temp_int_Loop_Counter_Variable) == 0x000264, "Member 'Wisp_C_ExecuteUbergraph_wisp::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_Less_IntInt_ReturnValue) == 0x000268, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_ExecuteUbergraph_wisp, CallFunc_Add_IntInt_ReturnValue) == 0x00026C, "Member 'Wisp_C_ExecuteUbergraph_wisp::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function wisp.wisp_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Wisp_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Wisp_C_ReceiveTick) == 0x000004, "Wrong alignment on Wisp_C_ReceiveTick");
static_assert(sizeof(Wisp_C_ReceiveTick) == 0x000004, "Wrong size on Wisp_C_ReceiveTick");
static_assert(offsetof(Wisp_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Wisp_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function wisp.wisp_C.dir
// 0x0001 (0x0001 - 0x0000)
struct Wisp_C_Dir final
{
public:
	bool                                          Condition;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Wisp_C_Dir) == 0x000001, "Wrong alignment on Wisp_C_Dir");
static_assert(sizeof(Wisp_C_Dir) == 0x000001, "Wrong size on Wisp_C_Dir");
static_assert(offsetof(Wisp_C_Dir, Condition) == 0x000000, "Member 'Wisp_C_Dir::Condition' has a wrong offset!");

// Function wisp.wisp_C.OnSuccess_95C7E50A40390A94DFC4A1A7F17F1D14
// 0x0001 (0x0001 - 0x0000)
struct Wisp_C_OnSuccess_95C7E50A40390A94DFC4A1A7F17F1D14 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Wisp_C_OnSuccess_95C7E50A40390A94DFC4A1A7F17F1D14) == 0x000001, "Wrong alignment on Wisp_C_OnSuccess_95C7E50A40390A94DFC4A1A7F17F1D14");
static_assert(sizeof(Wisp_C_OnSuccess_95C7E50A40390A94DFC4A1A7F17F1D14) == 0x000001, "Wrong size on Wisp_C_OnSuccess_95C7E50A40390A94DFC4A1A7F17F1D14");
static_assert(offsetof(Wisp_C_OnSuccess_95C7E50A40390A94DFC4A1A7F17F1D14, MovementResult) == 0x000000, "Member 'Wisp_C_OnSuccess_95C7E50A40390A94DFC4A1A7F17F1D14::MovementResult' has a wrong offset!");

// Function wisp.wisp_C.OnFail_95C7E50A40390A94DFC4A1A7F17F1D14
// 0x0001 (0x0001 - 0x0000)
struct Wisp_C_OnFail_95C7E50A40390A94DFC4A1A7F17F1D14 final
{
public:
	EPathFollowingResult                          MovementResult;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Wisp_C_OnFail_95C7E50A40390A94DFC4A1A7F17F1D14) == 0x000001, "Wrong alignment on Wisp_C_OnFail_95C7E50A40390A94DFC4A1A7F17F1D14");
static_assert(sizeof(Wisp_C_OnFail_95C7E50A40390A94DFC4A1A7F17F1D14) == 0x000001, "Wrong size on Wisp_C_OnFail_95C7E50A40390A94DFC4A1A7F17F1D14");
static_assert(offsetof(Wisp_C_OnFail_95C7E50A40390A94DFC4A1A7F17F1D14, MovementResult) == 0x000000, "Member 'Wisp_C_OnFail_95C7E50A40390A94DFC4A1A7F17F1D14::MovementResult' has a wrong offset!");

// Function wisp.wisp_C.UserConstructionScript
// 0x0094 (0x0094 - 0x0000)
struct Wisp_C_UserConstructionScript final
{
public:
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x000C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Wisp_C_UserConstructionScript) == 0x000004, "Wrong alignment on Wisp_C_UserConstructionScript");
static_assert(sizeof(Wisp_C_UserConstructionScript) == 0x000094, "Wrong size on Wisp_C_UserConstructionScript");
static_assert(offsetof(Wisp_C_UserConstructionScript, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000000, "Member 'Wisp_C_UserConstructionScript::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Wisp_C_UserConstructionScript, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x00000C, "Member 'Wisp_C_UserConstructionScript::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");

}

