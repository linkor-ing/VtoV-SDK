#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Mann

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function mann.mann_C.ExecuteUbergraph_mann
// 0x0208 (0x0208 - 0x0000)
struct Mann_C_ExecuteUbergraph_mann final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0008(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloat_ReturnValue;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;            // 0x0058(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;          // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_4;        // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_VSize_ReturnValue;                        // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_5;        // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue_1;              // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_6;        // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0104(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0110(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_Normal_ReturnValue_1;                     // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0134(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_addFood_full;                             // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C9[0x3];                                      // 0x01C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x01CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player_1;            // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SetVectorLength_ReturnValue;              // 0x01E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue_1;      // 0x01EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SetVectorLength_ReturnValue_1;            // 0x01F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mann_C_ExecuteUbergraph_mann) == 0x000008, "Wrong alignment on Mann_C_ExecuteUbergraph_mann");
static_assert(sizeof(Mann_C_ExecuteUbergraph_mann) == 0x000208, "Wrong size on Mann_C_ExecuteUbergraph_mann");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, EntryPoint) == 0x000000, "Member 'Mann_C_ExecuteUbergraph_mann::EntryPoint' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, Temp_object_Variable) == 0x000008, "Member 'Mann_C_ExecuteUbergraph_mann::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, Temp_int_Array_Index_Variable) == 0x000018, "Member 'Mann_C_ExecuteUbergraph_mann::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'Mann_C_ExecuteUbergraph_mann::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_RandomFloat_ReturnValue) == 0x000024, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_RandomFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, K2Node_Event_DeltaSeconds) == 0x000028, "Member 'Mann_C_ExecuteUbergraph_mann::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00002C, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000038, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000044, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000048, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_SphereOverlapActors_OutActors) == 0x000058, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_SphereOverlapActors_ReturnValue) == 0x000068, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_GetPlayerPawn_ReturnValue) == 0x000070, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_Array_Get_Item) == 0x000078, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_K2_GetActorLocation_ReturnValue_3) == 0x000080, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_K2_GetActorLocation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_K2_GetActorLocation_ReturnValue_4) == 0x00008C, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_K2_GetActorLocation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_Vector_Distance_ReturnValue) == 0x000098, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_Subtract_VectorVector_ReturnValue) == 0x00009C, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_LessEqual_FloatFloat_ReturnValue) == 0x0000A8, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_LessEqual_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_VSize_ReturnValue) == 0x0000AC, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_VSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000B0, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_Normal_ReturnValue) == 0x0000B4, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_FClamp_ReturnValue) == 0x0000C0, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_Array_Length_ReturnValue) == 0x0000C4, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0000C8, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_Less_IntInt_ReturnValue) == 0x0000CC, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x0000D0, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x0000D8, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_K2_GetActorLocation_ReturnValue_5) == 0x0000E0, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_K2_GetActorLocation_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_GetPlayerPawn_ReturnValue_1) == 0x0000F0, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_GetPlayerPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_K2_GetActorLocation_ReturnValue_6) == 0x0000F8, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_K2_GetActorLocation_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_GetVelocity_ReturnValue) == 0x000104, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000110, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x00011C, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_Normal_ReturnValue_1) == 0x000128, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_Normal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000134, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_RandomFloatInRange_ReturnValue) == 0x0001BC, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_getMainPlayer_AsMain_Player) == 0x0001C0, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_addFood_full) == 0x0001C8, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_addFood_full' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_GetActorForwardVector_ReturnValue) == 0x0001CC, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_getMainPlayer_AsMain_Player_1) == 0x0001D8, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_getMainPlayer_AsMain_Player_1' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_SetVectorLength_ReturnValue) == 0x0001E0, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_SetVectorLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_GetActorForwardVector_ReturnValue_1) == 0x0001EC, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_GetActorForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Mann_C_ExecuteUbergraph_mann, CallFunc_SetVectorLength_ReturnValue_1) == 0x0001F8, "Member 'Mann_C_ExecuteUbergraph_mann::CallFunc_SetVectorLength_ReturnValue_1' has a wrong offset!");

// Function mann.mann_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Mann_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Mann_C_ReceiveTick) == 0x000004, "Wrong alignment on Mann_C_ReceiveTick");
static_assert(sizeof(Mann_C_ReceiveTick) == 0x000004, "Wrong size on Mann_C_ReceiveTick");
static_assert(offsetof(Mann_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Mann_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

