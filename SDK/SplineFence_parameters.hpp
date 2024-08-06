#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SplineFence

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function splineFence.splineFence_C.gen
// 0x02D0 (0x02D0 - 0x0000)
struct SplineFence_C_Gen final
{
public:
	int32                                         I2;                                                // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Bh;                                                // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ah;                                                // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Ind;                                               // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               Br;                                                // 0x0010(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                               AR;                                                // 0x001C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         R;                                                 // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          C;                                                 // 0x002C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRandomStream                          Str;                                               // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor)
	int32                                         I;                                                 // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                B;                                                 // 0x003C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                A;                                                 // 0x0048(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ml;                                                // 0x0054(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         L;                                                 // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_75[0x3];                                       // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRandomStream                          CallFunc_MakeRandomStream_ReturnValue;             // 0x0080(0x0008)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      CallFunc_obj_static_obj;                           // 0x0098(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<uint8>                                 CallFunc_StringToBytesUtf8_ReturnValue;            // 0x00C0(0x0010)(ReferenceParm)
	TArray<uint8>                                 CallFunc_Pearson_ReturnValue;                      // 0x00D0(0x0010)(ReferenceParm)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x00E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BytesToInteger_ReturnValue;               // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue_2;          // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtTime_ReturnValue;            // 0x00F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0104(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0108(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_115[0x3];                                      // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0118(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_124[0x4];                                      // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0128(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0138(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x01C2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1C3[0x1];                                      // 0x01C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x01C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1FC[0x4];                                      // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0208(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0210(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x022C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0238(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_244[0xC];                                      // 0x0244(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0250(0x0030)(IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0280(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x028C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RotateAngleAxis_ReturnValue;              // 0x0298(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AddInstanceWorldSpace_ReturnValue;        // 0x02A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x02A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Cross_VectorVector_ReturnValue;           // 0x02B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotationFromAxes_ReturnValue;         // 0x02C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_GetSplineLength_ReturnValue;              // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SplineFence_C_Gen) == 0x000010, "Wrong alignment on SplineFence_C_Gen");
static_assert(sizeof(SplineFence_C_Gen) == 0x0002D0, "Wrong size on SplineFence_C_Gen");
static_assert(offsetof(SplineFence_C_Gen, I2) == 0x000000, "Member 'SplineFence_C_Gen::I2' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, Bh) == 0x000004, "Member 'SplineFence_C_Gen::Bh' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, Ah) == 0x000008, "Member 'SplineFence_C_Gen::Ah' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, Ind) == 0x00000C, "Member 'SplineFence_C_Gen::Ind' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, Br) == 0x000010, "Member 'SplineFence_C_Gen::Br' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, AR) == 0x00001C, "Member 'SplineFence_C_Gen::AR' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, R) == 0x000028, "Member 'SplineFence_C_Gen::R' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, C) == 0x00002C, "Member 'SplineFence_C_Gen::C' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, Str) == 0x000030, "Member 'SplineFence_C_Gen::Str' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, I) == 0x000038, "Member 'SplineFence_C_Gen::I' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, B) == 0x00003C, "Member 'SplineFence_C_Gen::B' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, A) == 0x000048, "Member 'SplineFence_C_Gen::A' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, Ml) == 0x000054, "Member 'SplineFence_C_Gen::Ml' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, L) == 0x000058, "Member 'SplineFence_C_Gen::L' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Vector_Distance_ReturnValue) == 0x00005C, "Member 'SplineFence_C_Gen::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000060, "Member 'SplineFence_C_Gen::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_MakeVector_ReturnValue) == 0x000064, "Member 'SplineFence_C_Gen::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_RandomFloatInRange_ReturnValue) == 0x000070, "Member 'SplineFence_C_Gen::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Greater_IntInt_ReturnValue) == 0x000074, "Member 'SplineFence_C_Gen::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_RandomFloatInRange_ReturnValue_1) == 0x000078, "Member 'SplineFence_C_Gen::CallFunc_RandomFloatInRange_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Percent_IntInt_ReturnValue) == 0x00007C, "Member 'SplineFence_C_Gen::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_MakeRandomStream_ReturnValue) == 0x000080, "Member 'SplineFence_C_Gen::CallFunc_MakeRandomStream_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000088, "Member 'SplineFence_C_Gen::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_obj_static_obj) == 0x000098, "Member 'SplineFence_C_Gen::CallFunc_obj_static_obj' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Conv_VectorToString_ReturnValue) == 0x0000A8, "Member 'SplineFence_C_Gen::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, Temp_int_Variable) == 0x0000B8, "Member 'SplineFence_C_Gen::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_StringToBytesUtf8_ReturnValue) == 0x0000C0, "Member 'SplineFence_C_Gen::CallFunc_StringToBytesUtf8_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Pearson_ReturnValue) == 0x0000D0, "Member 'SplineFence_C_Gen::CallFunc_Pearson_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Conv_IntToFloat_ReturnValue) == 0x0000E0, "Member 'SplineFence_C_Gen::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BytesToInteger_ReturnValue) == 0x0000E4, "Member 'SplineFence_C_Gen::CallFunc_BytesToInteger_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Add_IntInt_ReturnValue) == 0x0000E8, "Member 'SplineFence_C_Gen::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Divide_FloatFloat_ReturnValue_1) == 0x0000EC, "Member 'SplineFence_C_Gen::CallFunc_Divide_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000F0, "Member 'SplineFence_C_Gen::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Divide_FloatFloat_ReturnValue_2) == 0x0000F4, "Member 'SplineFence_C_Gen::CallFunc_Divide_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_GetLocationAtTime_ReturnValue) == 0x0000F8, "Member 'SplineFence_C_Gen::CallFunc_GetLocationAtTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_FTrunc_ReturnValue) == 0x000104, "Member 'SplineFence_C_Gen::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Add_VectorVector_ReturnValue) == 0x000108, "Member 'SplineFence_C_Gen::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000114, "Member 'SplineFence_C_Gen::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000118, "Member 'SplineFence_C_Gen::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, Temp_object_Variable) == 0x000128, "Member 'SplineFence_C_Gen::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000138, "Member 'SplineFence_C_Gen::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x0001C0, "Member 'SplineFence_C_Gen::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_bBlockingHit) == 0x0001C1, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_bInitialOverlap) == 0x0001C2, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_Time) == 0x0001C4, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_Distance) == 0x0001C8, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_Location) == 0x0001CC, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_ImpactPoint) == 0x0001D8, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_Normal) == 0x0001E4, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_ImpactNormal) == 0x0001F0, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_PhysMat) == 0x000200, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_HitActor) == 0x000208, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_HitComponent) == 0x000210, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_HitBoneName) == 0x000218, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_HitItem) == 0x000220, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_ElementIndex) == 0x000224, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_FaceIndex) == 0x000228, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_TraceStart) == 0x00022C, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_BreakHitResult_TraceEnd) == 0x000238, "Member 'SplineFence_C_Gen::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_MakeTransform_ReturnValue) == 0x000250, "Member 'SplineFence_C_Gen::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_SelectVector_ReturnValue) == 0x000280, "Member 'SplineFence_C_Gen::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x00028C, "Member 'SplineFence_C_Gen::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_RotateAngleAxis_ReturnValue) == 0x000298, "Member 'SplineFence_C_Gen::CallFunc_RotateAngleAxis_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_AddInstanceWorldSpace_ReturnValue) == 0x0002A4, "Member 'SplineFence_C_Gen::CallFunc_AddInstanceWorldSpace_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0002A8, "Member 'SplineFence_C_Gen::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_Cross_VectorVector_ReturnValue) == 0x0002B4, "Member 'SplineFence_C_Gen::CallFunc_Cross_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_MakeRotationFromAxes_ReturnValue) == 0x0002C0, "Member 'SplineFence_C_Gen::CallFunc_MakeRotationFromAxes_ReturnValue' has a wrong offset!");
static_assert(offsetof(SplineFence_C_Gen, CallFunc_GetSplineLength_ReturnValue) == 0x0002CC, "Member 'SplineFence_C_Gen::CallFunc_GetSplineLength_ReturnValue' has a wrong offset!");

// Function splineFence.splineFence_C.ExecuteUbergraph_splineFence
// 0x0004 (0x0004 - 0x0000)
struct SplineFence_C_ExecuteUbergraph_splineFence final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SplineFence_C_ExecuteUbergraph_splineFence) == 0x000004, "Wrong alignment on SplineFence_C_ExecuteUbergraph_splineFence");
static_assert(sizeof(SplineFence_C_ExecuteUbergraph_splineFence) == 0x000004, "Wrong size on SplineFence_C_ExecuteUbergraph_splineFence");
static_assert(offsetof(SplineFence_C_ExecuteUbergraph_splineFence, EntryPoint) == 0x000000, "Member 'SplineFence_C_ExecuteUbergraph_splineFence::EntryPoint' has a wrong offset!");

}
