#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GrayEventController

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function grayEventController.grayEventController_C.ExecuteUbergraph_grayEventController
// 0x0250 (0x0250 - 0x0000)
struct GrayEventController_C_ExecuteUbergraph_grayEventController final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      CallFunc_obj_dynPhysPawn_obj;                      // 0x0008(0x0010)(ReferenceParm)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor)
	TArray<class AActor*>                         Temp_object_Variable;                              // 0x0030(0x0010)(ConstParm, ReferenceParm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0058(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrayTest_C*                            CallFunc_Array_Get_Item;                           // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x00C4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C5[0x3];                                       // 0x00C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x00C8(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           K2Node_MakeArray_Array;                            // 0x0158(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UStaticMeshComponent*                   CallFunc_Array_Get_Item_1;                         // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0170(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0180(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B1[0x7];                                      // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrayTest_C*                            CallFunc_FinishSpawningActor_ReturnValue;          // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x01C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1CC[0x4];                                      // 0x01CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_1;        // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x01D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E4[0x4];                                      // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         CallFunc_SphereOverlapActors_OutActors;            // 0x01E8(0x0010)(ReferenceParm)
	bool                                          CallFunc_SphereOverlapActors_ReturnValue;          // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_Array_Get_Item_2;                         // 0x0200(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0208(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20C[0x4];                                      // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AP_kerfus_C*                            K2Node_DynamicCast_AsP_Kerfus;                     // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21A[0x6];                                      // 0x021A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AKerfurOmega_C*                         K2Node_DynamicCast_AsKerfur_Omega;                 // 0x0220(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_229[0x7];                                      // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_rdrone_C*                         K2Node_DynamicCast_AsProp_Rdrone;                  // 0x0230(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0238(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_239[0x7];                                      // 0x0239(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_camera_bad_C*                     K2Node_DynamicCast_AsProp_Camera_Bad;              // 0x0240(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0248(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GrayEventController_C_ExecuteUbergraph_grayEventController) == 0x000010, "Wrong alignment on GrayEventController_C_ExecuteUbergraph_grayEventController");
static_assert(sizeof(GrayEventController_C_ExecuteUbergraph_grayEventController) == 0x000250, "Wrong size on GrayEventController_C_ExecuteUbergraph_grayEventController");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, EntryPoint) == 0x000000, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::EntryPoint' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_obj_dynPhysPawn_obj) == 0x000008, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_obj_dynPhysPawn_obj' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, Temp_int_Variable) == 0x000018, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, Temp_object_Variable) == 0x000030, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, Temp_int_Array_Index_Variable) == 0x000040, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_CreateDelegate_OutputDelegate_1) == 0x000044, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000058, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, Temp_int_Loop_Counter_Variable) == 0x000060, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_Add_IntInt_ReturnValue_1) == 0x000064, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, Temp_int_Array_Index_Variable_1) == 0x000068, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, Temp_int_Loop_Counter_Variable_1) == 0x00006C, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_Add_IntInt_ReturnValue_2) == 0x000070, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_getMainPlayer_AsMain_Player) == 0x000078, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_GetActorForwardVector_ReturnValue) == 0x000080, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00008C, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_Array_Get_Item) == 0x000098, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_Array_Length_ReturnValue) == 0x0000A0, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_Less_IntInt_ReturnValue) == 0x0000A4, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000A8, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_ComponentBoundEvent_OtherActor) == 0x0000B0, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_ComponentBoundEvent_OtherComp) == 0x0000B8, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000C0, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_ComponentBoundEvent_bFromSweep) == 0x0000C4, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_ComponentBoundEvent_SweepResult) == 0x0000C8, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000150, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_MakeArray_Array) == 0x000158, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_Array_Get_Item_1) == 0x000168, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000170, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_Array_Length_ReturnValue_1) == 0x00017C, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_MakeTransform_ReturnValue) == 0x000180, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_Less_IntInt_ReturnValue_1) == 0x0001B0, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0001B8, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_FinishSpawningActor_ReturnValue) == 0x0001C0, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_Array_Add_ReturnValue) == 0x0001C8, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_getMainGamemode_AsMain_Gamemode_1) == 0x0001D0, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_getMainGamemode_AsMain_Gamemode_1' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0001D8, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_SphereOverlapActors_OutActors) == 0x0001E8, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_SphereOverlapActors_OutActors' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_SphereOverlapActors_ReturnValue) == 0x0001F8, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_SphereOverlapActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_Array_Get_Item_2) == 0x000200, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_Array_Length_ReturnValue_2) == 0x000208, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_DynamicCast_AsP_Kerfus) == 0x000210, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_DynamicCast_AsP_Kerfus' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_DynamicCast_bSuccess) == 0x000218, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, CallFunc_Less_IntInt_ReturnValue_2) == 0x000219, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_DynamicCast_AsKerfur_Omega) == 0x000220, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_DynamicCast_AsKerfur_Omega' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_DynamicCast_bSuccess_1) == 0x000228, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_DynamicCast_AsProp_Rdrone) == 0x000230, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_DynamicCast_AsProp_Rdrone' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_DynamicCast_bSuccess_2) == 0x000238, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_DynamicCast_AsProp_Camera_Bad) == 0x000240, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_DynamicCast_AsProp_Camera_Bad' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_ExecuteUbergraph_grayEventController, K2Node_DynamicCast_bSuccess_3) == 0x000248, "Member 'GrayEventController_C_ExecuteUbergraph_grayEventController::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

// Function grayEventController.grayEventController_C.BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'GrayEventController_C_BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

}

