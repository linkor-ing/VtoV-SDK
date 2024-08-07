#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_magnet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_wireComponent_magnet.prop_wireComponent_magnet_C.ExecuteUbergraph_prop_wireComponent_magnet
// 0x01D0 (0x01D0 - 0x0000)
struct Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSimulatingPhysics_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D1F[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetComponentBounds_Origin;                // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent;             // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius;          // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D20[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent_1;  // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor_1;           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp_1;            // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex_1;       // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D21[0x3];                                     // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0048(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00F4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D22[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    CallFunc_Array_Get_Item;                           // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSimulatingPhysics_ReturnValue_1;        // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D23[0x3];                                     // 0x0109(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetClosestPointOnCollision_OutPointOnBody; // 0x010C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClosestPointOnCollision_ReturnValue;   // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_Origin_1;              // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetComponentBounds_BoxExtent_1;           // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetComponentBounds_SphereRadius_1;        // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetClosestPointOnCollision_OutPointOnBody_1; // 0x013C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClosestPointOnCollision_ReturnValue_1; // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D24[0x3];                                     // 0x014D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_VLerp_ReturnValue;                        // 0x0150(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetClosestPointOnCollision_OutPointOnBody_2; // 0x015C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClosestPointOnCollision_ReturnValue_2; // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetClosestPointOnCollision_OutPointOnBody_3; // 0x016C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetClosestPointOnCollision_ReturnValue_3; // 0x0178(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D25[0x3];                                     // 0x0181(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_FMin_ReturnValue;                         // 0x0184(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0188(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x0198(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWire_C*                                K2Node_Event_wire;                                 // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x01B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Lerp_ReturnValue;                         // 0x01B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SetVectorLength_ReturnValue;              // 0x01B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_SetVectorLength_ReturnValue_1;            // 0x01C4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet) == 0x000008, "Wrong alignment on Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet");
static_assert(sizeof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet) == 0x0001D0, "Wrong size on Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, EntryPoint) == 0x000000, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_IsSimulatingPhysics_ReturnValue) == 0x000004, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_IsSimulatingPhysics_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_GetComponentBounds_Origin) == 0x000008, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_GetComponentBounds_Origin' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_GetComponentBounds_BoxExtent) == 0x000014, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_GetComponentBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_GetComponentBounds_SphereRadius) == 0x000020, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_GetComponentBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, K2Node_ComponentBoundEvent_OverlappedComponent_1) == 0x000028, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::K2Node_ComponentBoundEvent_OverlappedComponent_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, K2Node_ComponentBoundEvent_OtherActor_1) == 0x000030, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::K2Node_ComponentBoundEvent_OtherActor_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, K2Node_ComponentBoundEvent_OtherComp_1) == 0x000038, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::K2Node_ComponentBoundEvent_OtherComp_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, K2Node_ComponentBoundEvent_OtherBodyIndex_1) == 0x000040, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::K2Node_ComponentBoundEvent_OtherBodyIndex_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, K2Node_ComponentBoundEvent_bFromSweep) == 0x000044, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, K2Node_ComponentBoundEvent_SweepResult) == 0x000048, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000D0, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, K2Node_ComponentBoundEvent_OtherActor) == 0x0000D8, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, K2Node_ComponentBoundEvent_OtherComp) == 0x0000E0, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000E8, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, Temp_int_Loop_Counter_Variable) == 0x0000EC, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, Temp_int_Array_Index_Variable) == 0x0000F0, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_Add_IntInt_ReturnValue) == 0x0000F4, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000F8, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_Array_Get_Item) == 0x000100, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_IsSimulatingPhysics_ReturnValue_1) == 0x000108, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_IsSimulatingPhysics_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_GetClosestPointOnCollision_OutPointOnBody) == 0x00010C, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_GetClosestPointOnCollision_OutPointOnBody' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_GetClosestPointOnCollision_ReturnValue) == 0x000118, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_GetClosestPointOnCollision_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_GetComponentBounds_Origin_1) == 0x00011C, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_GetComponentBounds_Origin_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_GetComponentBounds_BoxExtent_1) == 0x000128, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_GetComponentBounds_BoxExtent_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_GetComponentBounds_SphereRadius_1) == 0x000134, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_GetComponentBounds_SphereRadius_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_Array_Length_ReturnValue) == 0x000138, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_GetClosestPointOnCollision_OutPointOnBody_1) == 0x00013C, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_GetClosestPointOnCollision_OutPointOnBody_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_GetClosestPointOnCollision_ReturnValue_1) == 0x000148, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_GetClosestPointOnCollision_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_Less_IntInt_ReturnValue) == 0x00014C, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_VLerp_ReturnValue) == 0x000150, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_VLerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_GetClosestPointOnCollision_OutPointOnBody_2) == 0x00015C, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_GetClosestPointOnCollision_OutPointOnBody_2' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_GetClosestPointOnCollision_ReturnValue_2) == 0x000168, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_GetClosestPointOnCollision_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_GetClosestPointOnCollision_OutPointOnBody_3) == 0x00016C, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_GetClosestPointOnCollision_OutPointOnBody_3' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_GetClosestPointOnCollision_ReturnValue_3) == 0x000178, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_GetClosestPointOnCollision_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_Vector_Distance_ReturnValue) == 0x00017C, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_Array_RemoveItem_ReturnValue) == 0x000180, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_FMin_ReturnValue) == 0x000184, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_FMin_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000188, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000194, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_Subtract_VectorVector_ReturnValue_1) == 0x000198, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_Subtract_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_Subtract_FloatFloat_ReturnValue) == 0x0001A4, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_Subtract_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, K2Node_Event_wire) == 0x0001A8, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::K2Node_Event_wire' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x0001B0, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_Lerp_ReturnValue) == 0x0001B4, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_Lerp_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_SetVectorLength_ReturnValue) == 0x0001B8, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_SetVectorLength_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet, CallFunc_SetVectorLength_ReturnValue_1) == 0x0001C4, "Member 'Prop_wireComponent_magnet_C_ExecuteUbergraph_prop_wireComponent_magnet::CallFunc_SetVectorLength_ReturnValue_1' has a wrong offset!");

// Function prop_wireComponent_magnet.prop_wireComponent_magnet_C.wirePass
// 0x0008 (0x0008 - 0x0000)
struct Prop_wireComponent_magnet_C_WirePass final
{
public:
	class AWire_C*                                Wire;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireComponent_magnet_C_WirePass) == 0x000008, "Wrong alignment on Prop_wireComponent_magnet_C_WirePass");
static_assert(sizeof(Prop_wireComponent_magnet_C_WirePass) == 0x000008, "Wrong size on Prop_wireComponent_magnet_C_WirePass");
static_assert(offsetof(Prop_wireComponent_magnet_C_WirePass, Wire) == 0x000000, "Member 'Prop_wireComponent_magnet_C_WirePass::Wire' has a wrong offset!");

// Function prop_wireComponent_magnet.prop_wireComponent_magnet_C.BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(sizeof(Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature) == 0x000020, "Wrong size on Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");
static_assert(offsetof(Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");

// Function prop_wireComponent_magnet.prop_wireComponent_magnet_C.BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D26[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Prop_wireComponent_magnet_C_BndEvt__prop_alienThing_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function prop_wireComponent_magnet.prop_wireComponent_magnet_C.addObj
// 0x0058 (0x0058 - 0x0000)
struct Prop_wireComponent_magnet_C_AddObj final
{
public:
	class UPrimitiveComponent*                    InputPin;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPhysicalMaterial*>              Mats;                                              // 0x0008(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CallFunc_GetMaterial_ReturnValue;                  // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D27[0x2];                                     // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_GetPhysicalMaterial_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D28[0x3];                                     // 0x003D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D29[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPhysicalMaterial*>              K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
};
static_assert(alignof(Prop_wireComponent_magnet_C_AddObj) == 0x000008, "Wrong alignment on Prop_wireComponent_magnet_C_AddObj");
static_assert(sizeof(Prop_wireComponent_magnet_C_AddObj) == 0x000058, "Wrong size on Prop_wireComponent_magnet_C_AddObj");
static_assert(offsetof(Prop_wireComponent_magnet_C_AddObj, InputPin) == 0x000000, "Member 'Prop_wireComponent_magnet_C_AddObj::InputPin' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_AddObj, Mats) == 0x000008, "Member 'Prop_wireComponent_magnet_C_AddObj::Mats' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_AddObj, Temp_int_Variable) == 0x000018, "Member 'Prop_wireComponent_magnet_C_AddObj::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_AddObj, CallFunc_GetNumMaterials_ReturnValue) == 0x00001C, "Member 'Prop_wireComponent_magnet_C_AddObj::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_AddObj, CallFunc_GetMaterial_ReturnValue) == 0x000020, "Member 'Prop_wireComponent_magnet_C_AddObj::CallFunc_GetMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_AddObj, CallFunc_Subtract_IntInt_ReturnValue) == 0x000028, "Member 'Prop_wireComponent_magnet_C_AddObj::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_AddObj, CallFunc_IsValid_ReturnValue) == 0x00002C, "Member 'Prop_wireComponent_magnet_C_AddObj::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_AddObj, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00002D, "Member 'Prop_wireComponent_magnet_C_AddObj::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_AddObj, CallFunc_GetPhysicalMaterial_ReturnValue) == 0x000030, "Member 'Prop_wireComponent_magnet_C_AddObj::CallFunc_GetPhysicalMaterial_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_AddObj, CallFunc_Add_IntInt_ReturnValue) == 0x000038, "Member 'Prop_wireComponent_magnet_C_AddObj::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_AddObj, CallFunc_Array_Contains_ReturnValue) == 0x00003C, "Member 'Prop_wireComponent_magnet_C_AddObj::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_AddObj, CallFunc_Array_Add_ReturnValue) == 0x000040, "Member 'Prop_wireComponent_magnet_C_AddObj::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireComponent_magnet_C_AddObj, K2Node_MakeArray_Array) == 0x000048, "Member 'Prop_wireComponent_magnet_C_AddObj::K2Node_MakeArray_Array' has a wrong offset!");

}

