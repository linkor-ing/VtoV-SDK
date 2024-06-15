#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_turbine

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_wireComponent_turbine.prop_wireComponent_turbine_C.ExecuteUbergraph_prop_wireComponent_turbine
// 0x0248 (0x0248 - 0x0000)
struct Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D5B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AWire_C*                                K2Node_Event_wire;                                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue; // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorFloat_ReturnValue;           // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActive_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D5C[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_1;           // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D5D[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      CallFunc_obj_statDynPhys_obj;                      // 0x0060(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue_1;           // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x0094(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RandomFloatInRange_ReturnValue;           // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_3;       // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMass_ReturnValue;                      // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_2;           // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_4;       // 0x00E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x00F0(0x0010)(ConstParm, ReferenceParm)
	struct FHitResult                             CallFunc_LineTraceSingleForObjects_OutHit;         // 0x0100(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_LineTraceSingleForObjects_ReturnValue;    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D5E[0x3];                                     // 0x0189(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetForwardVector_ReturnValue_2;           // 0x018C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0199(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D5F[0x2];                                     // 0x019A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x019C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x01A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D60[0x4];                                     // 0x01D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0200(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0204(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0210(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSimulatingPhysics_ReturnValue;          // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D61[0x3];                                     // 0x021D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetMass_ReturnValue_1;                    // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0224(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_5;       // 0x0228(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_6;       // 0x0234(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsActive_ReturnValue_1;                   // 0x0240(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine) == 0x000008, "Wrong alignment on Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine");
static_assert(sizeof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine) == 0x000248, "Wrong size on Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, EntryPoint) == 0x000000, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, K2Node_Event_wire) == 0x000008, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::K2Node_Event_wire' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue) == 0x000010, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_GetPhysicsAngularVelocityInDegrees_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_GetForwardVector_ReturnValue) == 0x00001C, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_Divide_VectorFloat_ReturnValue) == 0x000028, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_Divide_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000034, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_IsActive_ReturnValue) == 0x000040, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_IsActive_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_GetForwardVector_ReturnValue_1) == 0x000044, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_GetForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000050, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_obj_statDynPhys_obj) == 0x000060, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_obj_statDynPhys_obj' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_RandomUnitVector_ReturnValue) == 0x000070, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_RandomUnitVector_ReturnValue_1) == 0x00007C, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_RandomUnitVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000088, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x000094, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_Add_VectorVector_ReturnValue) == 0x0000A0, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_RandomFloatInRange_ReturnValue) == 0x0000AC, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_RandomFloatInRange_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000B0, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_Multiply_VectorFloat_ReturnValue_3) == 0x0000BC, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_Multiply_VectorFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000C8, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_GetMass_ReturnValue) == 0x0000D4, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_GetMass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_Add_VectorVector_ReturnValue_2) == 0x0000D8, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_Add_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_Multiply_VectorFloat_ReturnValue_4) == 0x0000E4, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_Multiply_VectorFloat_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, Temp_object_Variable) == 0x0000F0, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_LineTraceSingleForObjects_OutHit) == 0x000100, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_LineTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_LineTraceSingleForObjects_ReturnValue) == 0x000188, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_LineTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_GetForwardVector_ReturnValue_2) == 0x00018C, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_GetForwardVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_bBlockingHit) == 0x000198, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_bInitialOverlap) == 0x000199, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_Time) == 0x00019C, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_Distance) == 0x0001A0, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_Location) == 0x0001A4, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_ImpactPoint) == 0x0001B0, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_Normal) == 0x0001BC, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_ImpactNormal) == 0x0001C8, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_PhysMat) == 0x0001D8, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_HitActor) == 0x0001E0, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_HitComponent) == 0x0001E8, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_HitBoneName) == 0x0001F0, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_HitItem) == 0x0001F8, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_ElementIndex) == 0x0001FC, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_FaceIndex) == 0x000200, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_TraceStart) == 0x000204, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_BreakHitResult_TraceEnd) == 0x000210, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_IsSimulatingPhysics_ReturnValue) == 0x00021C, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_IsSimulatingPhysics_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_GetMass_ReturnValue_1) == 0x000220, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_GetMass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000224, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_Multiply_VectorFloat_ReturnValue_5) == 0x000228, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_Multiply_VectorFloat_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_Multiply_VectorFloat_ReturnValue_6) == 0x000234, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_Multiply_VectorFloat_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine, CallFunc_IsActive_ReturnValue_1) == 0x000240, "Member 'Prop_wireComponent_turbine_C_ExecuteUbergraph_prop_wireComponent_turbine::CallFunc_IsActive_ReturnValue_1' has a wrong offset!");

// Function prop_wireComponent_turbine.prop_wireComponent_turbine_C.wirePass
// 0x0008 (0x0008 - 0x0000)
struct Prop_wireComponent_turbine_C_WirePass final
{
public:
	class AWire_C*                                Wire;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireComponent_turbine_C_WirePass) == 0x000008, "Wrong alignment on Prop_wireComponent_turbine_C_WirePass");
static_assert(sizeof(Prop_wireComponent_turbine_C_WirePass) == 0x000008, "Wrong size on Prop_wireComponent_turbine_C_WirePass");
static_assert(offsetof(Prop_wireComponent_turbine_C_WirePass, Wire) == 0x000000, "Member 'Prop_wireComponent_turbine_C_WirePass::Wire' has a wrong offset!");

}
