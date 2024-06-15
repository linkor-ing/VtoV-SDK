#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PropThrown

#include "Basic.hpp"

#include "Struct_physSound_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function propThrown.propThrown_C.ExecuteUbergraph_propThrown
// 0x0210 (0x0210 - 0x0000)
struct PropThrown_C_ExecuteUbergraph_propThrown final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_372B[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                      CallFunc_GetPhysicalMaterial_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_physSound                      CallFunc_physSound_return;                         // 0x0018(0x0040)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_Origin_1;              // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent_1;           // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius_1;        // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMinElement_ReturnValue;                // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetMass_ReturnValue;                      // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentVelocity_ReturnValue;         // 0x0098(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Divide_VectorFloat_ReturnValue;           // 0x00A4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_372C[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_C*                                K2Node_CustomEvent_prop;                           // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_CustomEvent_component;                      // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x00D0(0x0010)(ConstParm, ReferenceParm)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x00E0(0x0010)(ZeroConstructor, NoDestructor)
	struct FHitResult                             CallFunc_SphereTraceSingleForObjects_OutHit;       // 0x00F0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_SphereTraceSingleForObjects_ReturnValue;  // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x017A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_372D[0x1];                                     // 0x017B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0180(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0184(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0190(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x019C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01A8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_372E[0x4];                                     // 0x01B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01E4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x01F0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_372F[0x4];                                     // 0x01FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_DynamicCast_AsMain_Player;                  // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PropThrown_C_ExecuteUbergraph_propThrown) == 0x000008, "Wrong alignment on PropThrown_C_ExecuteUbergraph_propThrown");
static_assert(sizeof(PropThrown_C_ExecuteUbergraph_propThrown) == 0x000210, "Wrong size on PropThrown_C_ExecuteUbergraph_propThrown");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, EntryPoint) == 0x000000, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::EntryPoint' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_GetMaterial_ReturnValue) == 0x000008, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_GetPhysicalMaterial_ReturnValue) == 0x000010, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_GetPhysicalMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_physSound_return) == 0x000018, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_physSound_return' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_GetComponentBounds_Origin) == 0x000058, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_GetComponentBounds_BoxExtent) == 0x000064, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_GetComponentBounds_SphereRadius) == 0x000070, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_GetComponentBounds_Origin_1) == 0x000074, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_GetComponentBounds_Origin_1' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_GetComponentBounds_BoxExtent_1) == 0x000080, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_GetComponentBounds_BoxExtent_1' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_GetComponentBounds_SphereRadius_1) == 0x00008C, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_GetComponentBounds_SphereRadius_1' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_GetMinElement_ReturnValue) == 0x000090, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_GetMinElement_ReturnValue' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_GetMass_ReturnValue) == 0x000094, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_GetMass_ReturnValue' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_GetComponentVelocity_ReturnValue) == 0x000098, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_GetComponentVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_Divide_VectorFloat_ReturnValue) == 0x0000A4, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_Divide_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000B0, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, K2Node_CustomEvent_prop) == 0x0000C0, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::K2Node_CustomEvent_prop' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, K2Node_CustomEvent_component) == 0x0000C8, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::K2Node_CustomEvent_component' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, Temp_object_Variable) == 0x0000D0, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, K2Node_CreateDelegate_OutputDelegate) == 0x0000E0, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_SphereTraceSingleForObjects_OutHit) == 0x0000F0, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_SphereTraceSingleForObjects_OutHit' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_SphereTraceSingleForObjects_ReturnValue) == 0x000178, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_SphereTraceSingleForObjects_ReturnValue' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_bBlockingHit) == 0x000179, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_bInitialOverlap) == 0x00017A, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_Time) == 0x00017C, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_Distance) == 0x000180, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_Location) == 0x000184, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_ImpactPoint) == 0x000190, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_Normal) == 0x00019C, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_ImpactNormal) == 0x0001A8, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_PhysMat) == 0x0001B8, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_HitActor) == 0x0001C0, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_HitComponent) == 0x0001C8, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_HitBoneName) == 0x0001D0, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_HitItem) == 0x0001D8, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_ElementIndex) == 0x0001DC, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_FaceIndex) == 0x0001E0, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_TraceStart) == 0x0001E4, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, CallFunc_BreakHitResult_TraceEnd) == 0x0001F0, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, K2Node_DynamicCast_AsMain_Player) == 0x000200, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::K2Node_DynamicCast_AsMain_Player' has a wrong offset!");
static_assert(offsetof(PropThrown_C_ExecuteUbergraph_propThrown, K2Node_DynamicCast_bSuccess) == 0x000208, "Member 'PropThrown_C_ExecuteUbergraph_propThrown::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function propThrown.propThrown_C.Init
// 0x0010 (0x0010 - 0x0000)
struct PropThrown_C_Init final
{
public:
	class AProp_C*                                Param_Prop;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Param_Component;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PropThrown_C_Init) == 0x000008, "Wrong alignment on PropThrown_C_Init");
static_assert(sizeof(PropThrown_C_Init) == 0x000010, "Wrong size on PropThrown_C_Init");
static_assert(offsetof(PropThrown_C_Init, Param_Prop) == 0x000000, "Member 'PropThrown_C_Init::Param_Prop' has a wrong offset!");
static_assert(offsetof(PropThrown_C_Init, Param_Component) == 0x000008, "Member 'PropThrown_C_Init::Param_Component' has a wrong offset!");

}

