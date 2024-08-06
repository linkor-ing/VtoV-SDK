#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_rocket

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_rocket.prop_rocket_C.ExecuteUbergraph_prop_rocket
// 0x03A0 (0x03A0 - 0x0000)
struct Prop_rocket_C_ExecuteUbergraph_prop_rocket final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue;          // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0028(0x0010)(ConstParm, ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_makeAim_ReturnValue;                      // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTimeAlive_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0060(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_FClamp_ReturnValue;                       // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue_1;       // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_SetActorRotation_ReturnValue_1;        // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_85[0x3];                                       // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_VInterpTo_ReturnValue;                    // 0x009C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      CallFunc_obj_statDynPhys_obj;                      // 0x00A8(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x00B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_SphereTraceSingleForObjects_OutHit;       // 0x00C4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingleForObjects_ReturnValue;  // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x014D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x014E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_14F[0x1];                                      // 0x014F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0158(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0164(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x017C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0198(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x01D0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentVelocity_ReturnValue;         // 0x0208(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_ClampVectorSize_ReturnValue;              // 0x0214(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExplosion_C*                           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_look_OutHit;                              // 0x0230(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_look_ReturnValue;                         // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2B9[0x3];                                      // 0x02B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue_1;      // 0x02BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x02C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x02C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CA[0x2];                                      // 0x02CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x02CC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x02D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x02D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x02E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x02EC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x02F8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_304[0x4];                                      // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x0308(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x0310(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x0318(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0320(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x0328(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x032C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x0330(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x0334(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x0340(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x034C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SelectVector_ReturnValue;                 // 0x0358(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0364(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0370(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x037C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue_1;                     // 0x0388(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_rocket_C_ExecuteUbergraph_prop_rocket) == 0x000010, "Wrong alignment on Prop_rocket_C_ExecuteUbergraph_prop_rocket");
static_assert(sizeof(Prop_rocket_C_ExecuteUbergraph_prop_rocket) == 0x0003A0, "Wrong size on Prop_rocket_C_ExecuteUbergraph_prop_rocket");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, EntryPoint) == 0x000000, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000004, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, K2Node_Event_DeltaSeconds) == 0x000010, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_K2_SetActorRotation_ReturnValue) == 0x000014, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_K2_SetActorRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000018, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, Temp_object_Variable) == 0x000028, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000038, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_K2_GetActorLocation_ReturnValue_2) == 0x000044, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_K2_GetActorLocation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_makeAim_ReturnValue) == 0x000050, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_makeAim_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_GetTimeAlive_ReturnValue) == 0x00005C, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_GetTimeAlive_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_GetActorForwardVector_ReturnValue) == 0x000060, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00006C, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_FClamp_ReturnValue) == 0x000070, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_Conv_VectorToRotator_ReturnValue_1) == 0x000074, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_Conv_VectorToRotator_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x000080, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_K2_SetActorRotation_ReturnValue_1) == 0x000084, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_K2_SetActorRotation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000088, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00008C, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000098, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_VInterpTo_ReturnValue) == 0x00009C, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_VInterpTo_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_obj_statDynPhys_obj) == 0x0000A8, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_obj_statDynPhys_obj' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_Normal_ReturnValue) == 0x0000B8, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_SphereTraceSingleForObjects_OutHit) == 0x0000C4, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_SphereTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_SphereTraceSingleForObjects_ReturnValue) == 0x00014C, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_SphereTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_bBlockingHit) == 0x00014D, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_bInitialOverlap) == 0x00014E, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_Time) == 0x000150, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_Distance) == 0x000154, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_Location) == 0x000158, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_ImpactPoint) == 0x000164, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_Normal) == 0x000170, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_ImpactNormal) == 0x00017C, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_PhysMat) == 0x000188, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_HitActor) == 0x000190, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_HitComponent) == 0x000198, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_HitBoneName) == 0x0001A0, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_HitItem) == 0x0001A8, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_ElementIndex) == 0x0001AC, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_FaceIndex) == 0x0001B0, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_TraceStart) == 0x0001B4, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_TraceEnd) == 0x0001C0, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_MakeTransform_ReturnValue) == 0x0001D0, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000200, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_GetComponentVelocity_ReturnValue) == 0x000208, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_GetComponentVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_ClampVectorSize_ReturnValue) == 0x000214, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_ClampVectorSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_FinishSpawningActor_ReturnValue) == 0x000220, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000228, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_look_OutHit) == 0x000230, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_look_OutHit' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_look_ReturnValue) == 0x0002B8, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_look_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_GetActorForwardVector_ReturnValue_1) == 0x0002BC, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_GetActorForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_bBlockingHit_1) == 0x0002C8, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x0002C9, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_Time_1) == 0x0002CC, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_Distance_1) == 0x0002D0, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_Location_1) == 0x0002D4, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_ImpactPoint_1) == 0x0002E0, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_Normal_1) == 0x0002EC, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_ImpactNormal_1) == 0x0002F8, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_PhysMat_1) == 0x000308, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_HitActor_1) == 0x000310, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_HitComponent_1) == 0x000318, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_HitBoneName_1) == 0x000320, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_HitItem_1) == 0x000328, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_ElementIndex_1) == 0x00032C, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_FaceIndex_1) == 0x000330, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_TraceStart_1) == 0x000334, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_BreakHitResult_TraceEnd_1) == 0x000340, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x00034C, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_SelectVector_ReturnValue) == 0x000358, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_SelectVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_Add_VectorVector_ReturnValue) == 0x000364, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000370, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x00037C, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_ExecuteUbergraph_prop_rocket, CallFunc_Normal_ReturnValue_1) == 0x000388, "Member 'Prop_rocket_C_ExecuteUbergraph_prop_rocket::CallFunc_Normal_ReturnValue_1' has a wrong offset!");

// Function prop_rocket.prop_rocket_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_rocket_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_rocket_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_rocket_C_ReceiveTick");
static_assert(sizeof(Prop_rocket_C_ReceiveTick) == 0x000004, "Wrong size on Prop_rocket_C_ReceiveTick");
static_assert(offsetof(Prop_rocket_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_rocket_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function prop_rocket.prop_rocket_C.makeAim
// 0x004C (0x004C - 0x0000)
struct Prop_rocket_C_MakeAim final
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_rocket_C_MakeAim) == 0x000004, "Wrong alignment on Prop_rocket_C_MakeAim");
static_assert(sizeof(Prop_rocket_C_MakeAim) == 0x00004C, "Wrong size on Prop_rocket_C_MakeAim");
static_assert(offsetof(Prop_rocket_C_MakeAim, ReturnValue) == 0x000000, "Member 'Prop_rocket_C_MakeAim::ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_MakeAim, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00000C, "Member 'Prop_rocket_C_MakeAim::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_MakeAim, CallFunc_GetActorForwardVector_ReturnValue) == 0x000018, "Member 'Prop_rocket_C_MakeAim::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_MakeAim, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000024, "Member 'Prop_rocket_C_MakeAim::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_MakeAim, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000030, "Member 'Prop_rocket_C_MakeAim::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_MakeAim, CallFunc_Normal_ReturnValue) == 0x00003C, "Member 'Prop_rocket_C_MakeAim::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_rocket_C_MakeAim, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'Prop_rocket_C_MakeAim::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}
