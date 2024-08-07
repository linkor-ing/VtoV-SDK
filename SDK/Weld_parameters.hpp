#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Weld

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Struct_mVector_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Struct_mString_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function weld.weld_C.ExecuteUbergraph_weld
// 0x0070 (0x0070 - 0x0000)
struct Weld_C_ExecuteUbergraph_weld final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_CustomEvent_DestroyedActor_1;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate;              // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_DynamicCast_AsPrimitive_Component;          // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Weld_C_ExecuteUbergraph_weld) == 0x000008, "Wrong alignment on Weld_C_ExecuteUbergraph_weld");
static_assert(sizeof(Weld_C_ExecuteUbergraph_weld) == 0x000070, "Wrong size on Weld_C_ExecuteUbergraph_weld");
static_assert(offsetof(Weld_C_ExecuteUbergraph_weld, EntryPoint) == 0x000000, "Member 'Weld_C_ExecuteUbergraph_weld::EntryPoint' has a wrong offset!");
static_assert(offsetof(Weld_C_ExecuteUbergraph_weld, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000004, "Member 'Weld_C_ExecuteUbergraph_weld::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weld_C_ExecuteUbergraph_weld, K2Node_CustomEvent_DestroyedActor_1) == 0x000010, "Member 'Weld_C_ExecuteUbergraph_weld::K2Node_CustomEvent_DestroyedActor_1' has a wrong offset!");
static_assert(offsetof(Weld_C_ExecuteUbergraph_weld, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'Weld_C_ExecuteUbergraph_weld::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weld_C_ExecuteUbergraph_weld, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'Weld_C_ExecuteUbergraph_weld::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weld_C_ExecuteUbergraph_weld, K2Node_CustomEvent_DestroyedActor) == 0x000020, "Member 'Weld_C_ExecuteUbergraph_weld::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(Weld_C_ExecuteUbergraph_weld, K2Node_CreateDelegate_OutputDelegate) == 0x000028, "Member 'Weld_C_ExecuteUbergraph_weld::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Weld_C_ExecuteUbergraph_weld, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000038, "Member 'Weld_C_ExecuteUbergraph_weld::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weld_C_ExecuteUbergraph_weld, K2Node_DynamicCast_AsPrimitive_Component) == 0x000040, "Member 'Weld_C_ExecuteUbergraph_weld::K2Node_DynamicCast_AsPrimitive_Component' has a wrong offset!");
static_assert(offsetof(Weld_C_ExecuteUbergraph_weld, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'Weld_C_ExecuteUbergraph_weld::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Weld_C_ExecuteUbergraph_weld, K2Node_CreateDelegate_OutputDelegate_1) == 0x00004C, "Member 'Weld_C_ExecuteUbergraph_weld::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(Weld_C_ExecuteUbergraph_weld, CallFunc_K2_GetComponentLocation_ReturnValue_1) == 0x00005C, "Member 'Weld_C_ExecuteUbergraph_weld::CallFunc_K2_GetComponentLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weld_C_ExecuteUbergraph_weld, CallFunc_Vector_Distance_ReturnValue) == 0x000068, "Member 'Weld_C_ExecuteUbergraph_weld::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weld_C_ExecuteUbergraph_weld, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00006C, "Member 'Weld_C_ExecuteUbergraph_weld::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");

// Function weld.weld_C.dest_B
// 0x0008 (0x0008 - 0x0000)
struct Weld_C_Dest_B final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Weld_C_Dest_B) == 0x000008, "Wrong alignment on Weld_C_Dest_B");
static_assert(sizeof(Weld_C_Dest_B) == 0x000008, "Wrong size on Weld_C_Dest_B");
static_assert(offsetof(Weld_C_Dest_B, DestroyedActor) == 0x000000, "Member 'Weld_C_Dest_B::DestroyedActor' has a wrong offset!");

// Function weld.weld_C.dest_A
// 0x0008 (0x0008 - 0x0000)
struct Weld_C_Dest_A final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Weld_C_Dest_A) == 0x000008, "Wrong alignment on Weld_C_Dest_A");
static_assert(sizeof(Weld_C_Dest_A) == 0x000008, "Wrong size on Weld_C_Dest_A");
static_assert(offsetof(Weld_C_Dest_A, DestroyedActor) == 0x000000, "Member 'Weld_C_Dest_A::DestroyedActor' has a wrong offset!");

// Function weld.weld_C.weld
// 0x01A8 (0x01A8 - 0x0000)
struct Weld_C_Weld final
{
public:
	class AActor*                                 Param_Weld_A;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Param_Weld_B;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Param_WeldB;                                       // 0x0010(0x000C)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Can;                                               // 0x001C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue_1;     // 0x001E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F[0x1];                                       // 0x001F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_getAttachActorRoot_rootActor;             // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAllAttachedActors_ReturnValue;         // 0x0028(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x6];                                       // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_getAttachActorRoot_rootActor_1;           // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         CallFunc_GetAllAttachedActors_ReturnValue_1;       // 0x0048(0x0010)(ReferenceParm)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue_1;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue;         // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue_2;       // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_LowEntry_LocalVariable_Value__Object;       // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_LowEntry_LocalVariable_Value__1_Object;     // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetAttachParentActor_ReturnValue_3;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_DynamicCast_AsPrimitive_Component;          // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSimulatingPhysics_ReturnValue;          // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA[0x6];                                       // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects;                  // 0x00D0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x00E4(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_16C[0x4];                                      // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_getKey_key;                               // 0x0170(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects_1;                // 0x0180(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_getKey_key_1;                             // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Weld_C_Weld) == 0x000008, "Wrong alignment on Weld_C_Weld");
static_assert(sizeof(Weld_C_Weld) == 0x0001A8, "Wrong size on Weld_C_Weld");
static_assert(offsetof(Weld_C_Weld, Param_Weld_A) == 0x000000, "Member 'Weld_C_Weld::Param_Weld_A' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, Param_Weld_B) == 0x000008, "Member 'Weld_C_Weld::Param_Weld_B' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, Param_WeldB) == 0x000010, "Member 'Weld_C_Weld::Param_WeldB' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, Can) == 0x00001C, "Member 'Weld_C_Weld::Can' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_DoesImplementInterface_ReturnValue) == 0x00001D, "Member 'Weld_C_Weld::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_DoesImplementInterface_ReturnValue_1) == 0x00001E, "Member 'Weld_C_Weld::CallFunc_DoesImplementInterface_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_getAttachActorRoot_rootActor) == 0x000020, "Member 'Weld_C_Weld::CallFunc_getAttachActorRoot_rootActor' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_GetAllAttachedActors_ReturnValue) == 0x000028, "Member 'Weld_C_Weld::CallFunc_GetAllAttachedActors_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_Array_Contains_ReturnValue) == 0x000038, "Member 'Weld_C_Weld::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000039, "Member 'Weld_C_Weld::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_getAttachActorRoot_rootActor_1) == 0x000040, "Member 'Weld_C_Weld::CallFunc_getAttachActorRoot_rootActor_1' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_GetAllAttachedActors_ReturnValue_1) == 0x000048, "Member 'Weld_C_Weld::CallFunc_GetAllAttachedActors_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_Array_Contains_ReturnValue_1) == 0x000058, "Member 'Weld_C_Weld::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_GetAttachParentActor_ReturnValue) == 0x000060, "Member 'Weld_C_Weld::CallFunc_GetAttachParentActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_EqualEqual_ObjectObject_ReturnValue_1) == 0x000068, "Member 'Weld_C_Weld::CallFunc_EqualEqual_ObjectObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_GetAttachParentActor_ReturnValue_1) == 0x000070, "Member 'Weld_C_Weld::CallFunc_GetAttachParentActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_EqualEqual_ObjectObject_ReturnValue_2) == 0x000078, "Member 'Weld_C_Weld::CallFunc_EqualEqual_ObjectObject_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_K2_AttachToComponent_ReturnValue) == 0x000079, "Member 'Weld_C_Weld::CallFunc_K2_AttachToComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_GetAttachParentActor_ReturnValue_2) == 0x000080, "Member 'Weld_C_Weld::CallFunc_GetAttachParentActor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_IsValid_ReturnValue) == 0x000088, "Member 'Weld_C_Weld::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, K2Node_LowEntry_LocalVariable_Value__Object) == 0x000090, "Member 'Weld_C_Weld::K2Node_LowEntry_LocalVariable_Value__Object' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, K2Node_LowEntry_LocalVariable_Value__1_Object) == 0x000098, "Member 'Weld_C_Weld::K2Node_LowEntry_LocalVariable_Value__1_Object' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_GetAttachParentActor_ReturnValue_3) == 0x0000A0, "Member 'Weld_C_Weld::CallFunc_GetAttachParentActor_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_IsValid_ReturnValue_1) == 0x0000A8, "Member 'Weld_C_Weld::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0000B0, "Member 'Weld_C_Weld::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_K2_AttachToComponent_ReturnValue_1) == 0x0000B8, "Member 'Weld_C_Weld::CallFunc_K2_AttachToComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, K2Node_DynamicCast_AsPrimitive_Component) == 0x0000C0, "Member 'Weld_C_Weld::K2Node_DynamicCast_AsPrimitive_Component' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'Weld_C_Weld::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_IsSimulatingPhysics_ReturnValue) == 0x0000C9, "Member 'Weld_C_Weld::CallFunc_IsSimulatingPhysics_ReturnValue' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, K2Node_DynamicCast_AsInt_Objects) == 0x0000D0, "Member 'Weld_C_Weld::K2Node_DynamicCast_AsInt_Objects' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, K2Node_DynamicCast_bSuccess_1) == 0x0000E0, "Member 'Weld_C_Weld::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_K2_SetWorldLocation_SweepHitResult) == 0x0000E4, "Member 'Weld_C_Weld::CallFunc_K2_SetWorldLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_getKey_key) == 0x000170, "Member 'Weld_C_Weld::CallFunc_getKey_key' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, K2Node_DynamicCast_AsInt_Objects_1) == 0x000180, "Member 'Weld_C_Weld::K2Node_DynamicCast_AsInt_Objects_1' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, K2Node_DynamicCast_bSuccess_2) == 0x000190, "Member 'Weld_C_Weld::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Weld_C_Weld, CallFunc_getKey_key_1) == 0x000198, "Member 'Weld_C_Weld::CallFunc_getKey_key_1' has a wrong offset!");

// Function weld.weld_C.loadData
// 0x0120 (0x0120 - 0x0000)
struct Weld_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C2[0x6];                                       // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mVector                        CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	struct FStruct_mString                        CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0010)(HasGetValueTypeHash)
	struct FVector                                CallFunc_Array_Get_Item_2;                         // 0x00E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F4[0x4];                                       // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item_3;                         // 0x00F8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_4;                         // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Weld_C_LoadData) == 0x000010, "Wrong alignment on Weld_C_LoadData");
static_assert(sizeof(Weld_C_LoadData) == 0x000120, "Wrong size on Weld_C_LoadData");
static_assert(offsetof(Weld_C_LoadData, Data) == 0x000000, "Member 'Weld_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Weld_C_LoadData, Return) == 0x0000C0, "Member 'Weld_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Weld_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Weld_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Weld_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Weld_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Weld_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Weld_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Weld_C_LoadData, CallFunc_Array_Get_Item_2) == 0x0000E8, "Member 'Weld_C_LoadData::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(Weld_C_LoadData, CallFunc_Array_Get_Item_3) == 0x0000F8, "Member 'Weld_C_LoadData::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(Weld_C_LoadData, CallFunc_Array_Get_Item_4) == 0x000108, "Member 'Weld_C_LoadData::CallFunc_Array_Get_Item_4' has a wrong offset!");

// Function weld.weld_C.getData
// 0x02A0 (0x02A0 - 0x0000)
struct Weld_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	TArray<struct FVector>                        K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	struct FStruct_mVector                        K2Node_MakeStruct_struct_mVector;                  // 0x00D0(0x0010)(HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array_1;                          // 0x00E0(0x0010)(ReferenceParm)
	TArray<struct FStruct_mVector>                K2Node_MakeArray_Array_2;                          // 0x00F0(0x0010)(ReferenceParm)
	struct FStruct_mString                        K2Node_MakeStruct_struct_mString;                  // 0x0100(0x0010)(HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x0110(0x00C0)(HasGetValueTypeHash)
	TArray<struct FStruct_mString>                K2Node_MakeArray_Array_3;                          // 0x01D0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01E0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Weld_C_GetData) == 0x000010, "Wrong alignment on Weld_C_GetData");
static_assert(sizeof(Weld_C_GetData) == 0x0002A0, "Wrong size on Weld_C_GetData");
static_assert(offsetof(Weld_C_GetData, Data) == 0x000000, "Member 'Weld_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Weld_C_GetData, K2Node_MakeArray_Array) == 0x0000C0, "Member 'Weld_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Weld_C_GetData, K2Node_MakeStruct_struct_mVector) == 0x0000D0, "Member 'Weld_C_GetData::K2Node_MakeStruct_struct_mVector' has a wrong offset!");
static_assert(offsetof(Weld_C_GetData, K2Node_MakeArray_Array_1) == 0x0000E0, "Member 'Weld_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Weld_C_GetData, K2Node_MakeArray_Array_2) == 0x0000F0, "Member 'Weld_C_GetData::K2Node_MakeArray_Array_2' has a wrong offset!");
static_assert(offsetof(Weld_C_GetData, K2Node_MakeStruct_struct_mString) == 0x000100, "Member 'Weld_C_GetData::K2Node_MakeStruct_struct_mString' has a wrong offset!");
static_assert(offsetof(Weld_C_GetData, CallFunc_getData_data) == 0x000110, "Member 'Weld_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Weld_C_GetData, K2Node_MakeArray_Array_3) == 0x0001D0, "Member 'Weld_C_GetData::K2Node_MakeArray_Array_3' has a wrong offset!");
static_assert(offsetof(Weld_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001E0, "Member 'Weld_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function weld.weld_C.processKeys
// 0x0030 (0x0030 - 0x0000)
struct Weld_C_ProcessKeys final
{
public:
	bool                                          Return;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_1;        // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_getObjectFromKey_Output;                  // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_getObjectFromKey_Output_1;                // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_processKeys_return;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Weld_C_ProcessKeys) == 0x000008, "Wrong alignment on Weld_C_ProcessKeys");
static_assert(sizeof(Weld_C_ProcessKeys) == 0x000030, "Wrong size on Weld_C_ProcessKeys");
static_assert(offsetof(Weld_C_ProcessKeys, Return) == 0x000000, "Member 'Weld_C_ProcessKeys::Return' has a wrong offset!");
static_assert(offsetof(Weld_C_ProcessKeys, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000008, "Member 'Weld_C_ProcessKeys::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Weld_C_ProcessKeys, CallFunc_getMainGamemode_AsMain_Gamemode_1) == 0x000010, "Member 'Weld_C_ProcessKeys::CallFunc_getMainGamemode_AsMain_Gamemode_1' has a wrong offset!");
static_assert(offsetof(Weld_C_ProcessKeys, CallFunc_getObjectFromKey_Output) == 0x000018, "Member 'Weld_C_ProcessKeys::CallFunc_getObjectFromKey_Output' has a wrong offset!");
static_assert(offsetof(Weld_C_ProcessKeys, CallFunc_getObjectFromKey_Output_1) == 0x000020, "Member 'Weld_C_ProcessKeys::CallFunc_getObjectFromKey_Output_1' has a wrong offset!");
static_assert(offsetof(Weld_C_ProcessKeys, CallFunc_processKeys_return) == 0x000028, "Member 'Weld_C_ProcessKeys::CallFunc_processKeys_return' has a wrong offset!");

}

