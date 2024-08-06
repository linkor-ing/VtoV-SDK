#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MorningUfo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function morningUfo.morningUfo_C.ExecuteUbergraph_morningUfo
// 0x03F0 (0x03F0 - 0x0000)
struct MorningUfo_C_ExecuteUbergraph_morningUfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue_1;         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomPointInBoundingBox_ReturnValue;     // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VInterpTo_Constant_ReturnValue;           // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x00B0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_139[0x3];                                      // 0x0139(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue_1;       // 0x013C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x0140(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x014C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_2;    // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x0164(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_VectorVector_ReturnValue;      // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_171[0x3];                                      // 0x0171(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VInterpTo_Constant_ReturnValue_1;         // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult_1;     // 0x018C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue_1;        // 0x0214(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_215[0x3];                                      // 0x0215(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0218(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0228(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0234(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_235[0x3];                                      // 0x0235(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0238(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AMainPlayer_C*                          K2Node_DynamicCast_AsMain_Player;                  // 0x02C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C9[0x7];                                      // 0x02C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x02D0(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x02E0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0368(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0369(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x036A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_36B[0x1];                                      // 0x036B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x036C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0374(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0380(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x038C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0398(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4[0x4];                                      // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x03A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x03B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x03B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x03C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x03CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x03D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x03D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x03E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x03EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MorningUfo_C_ExecuteUbergraph_morningUfo) == 0x000008, "Wrong alignment on MorningUfo_C_ExecuteUbergraph_morningUfo");
static_assert(sizeof(MorningUfo_C_ExecuteUbergraph_morningUfo) == 0x0003F0, "Wrong size on MorningUfo_C_ExecuteUbergraph_morningUfo");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, EntryPoint) == 0x000000, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000020, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_GetPlayerCharacter_ReturnValue_1) == 0x000028, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_GetPlayerCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_GetComponentBounds_Origin) == 0x000030, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_GetComponentBounds_BoxExtent) == 0x00003C, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_GetComponentBounds_SphereRadius) == 0x000048, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_RandomPointInBoundingBox_ReturnValue) == 0x00004C, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_RandomPointInBoundingBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000058, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00005C, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000068, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_RandomFloatInRange_ReturnValue) == 0x000074, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000078, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_RandomFloatInRange_ReturnValue_2) == 0x00007C, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_RandomFloatInRange_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000080, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_MakeVector_ReturnValue) == 0x00008C, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_VInterpTo_Constant_ReturnValue) == 0x000098, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_VInterpTo_Constant_ReturnValue' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_RotateAngleAxis_ReturnValue) == 0x0000A4, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x0000B0, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000138, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_GetWorldDeltaSeconds_ReturnValue_1) == 0x00013C, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_GetWorldDeltaSeconds_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x000140, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_Add_VectorVector_ReturnValue) == 0x00014C, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_K2_GetComponentLocation_ReturnValue_2) == 0x000158, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_K2_GetComponentLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_Add_VectorVector_ReturnValue_1) == 0x000164, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_EqualEqual_VectorVector_ReturnValue) == 0x000170, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_EqualEqual_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000174, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_VInterpTo_Constant_ReturnValue_1) == 0x000180, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_VInterpTo_Constant_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_K2_SetActorLocation_SweepHitResult_1) == 0x00018C, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_K2_SetActorLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_K2_SetActorLocation_ReturnValue_1) == 0x000214, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_K2_SetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000218, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, K2Node_ComponentBoundEvent_OtherActor) == 0x000220, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, K2Node_ComponentBoundEvent_OtherComp) == 0x000228, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000230, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, K2Node_ComponentBoundEvent_bFromSweep) == 0x000234, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, K2Node_ComponentBoundEvent_SweepResult) == 0x000238, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, K2Node_DynamicCast_AsMain_Player) == 0x0002C0, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::K2Node_DynamicCast_AsMain_Player' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, K2Node_DynamicCast_bSuccess) == 0x0002C8, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, Temp_object_Variable) == 0x0002D0, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_LineTraceSingleForObjects_OutHit) == 0x0002E0, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000368, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_bBlockingHit) == 0x000369, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_bInitialOverlap) == 0x00036A, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_Time) == 0x00036C, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_Distance) == 0x000370, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_Location) == 0x000374, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_ImpactPoint) == 0x000380, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_Normal) == 0x00038C, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_ImpactNormal) == 0x000398, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_PhysMat) == 0x0003A8, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_HitActor) == 0x0003B0, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_HitComponent) == 0x0003B8, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_HitBoneName) == 0x0003C0, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_HitItem) == 0x0003C8, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_ElementIndex) == 0x0003CC, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_FaceIndex) == 0x0003D0, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_TraceStart) == 0x0003D4, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_BreakHitResult_TraceEnd) == 0x0003E0, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_ExecuteUbergraph_morningUfo, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0003EC, "Member 'MorningUfo_C_ExecuteUbergraph_morningUfo::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function morningUfo.morningUfo_C.BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'MorningUfo_C_BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function morningUfo.morningUfo_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct MorningUfo_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MorningUfo_C_ReceiveTick) == 0x000004, "Wrong alignment on MorningUfo_C_ReceiveTick");
static_assert(sizeof(MorningUfo_C_ReceiveTick) == 0x000004, "Wrong size on MorningUfo_C_ReceiveTick");
static_assert(offsetof(MorningUfo_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'MorningUfo_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

