#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UfoDropper

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ufoDropper.ufoDropper_C.ExecuteUbergraph_ufoDropper
// 0x01B0 (0x01B0 - 0x0000)
struct UfoDropper_C_ExecuteUbergraph_ufoDropper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CC5[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x0008(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2CC6[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x00BC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CC7[0x3];                                     // 0x00BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x00C0(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_2CC8[0x8];                                     // 0x0148(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0150(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_objects_C>        K2Node_DynamicCast_AsInt_Objects;                  // 0x0190(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UfoDropper_C_ExecuteUbergraph_ufoDropper) == 0x000010, "Wrong alignment on UfoDropper_C_ExecuteUbergraph_ufoDropper");
static_assert(sizeof(UfoDropper_C_ExecuteUbergraph_ufoDropper) == 0x0001B0, "Wrong size on UfoDropper_C_ExecuteUbergraph_ufoDropper");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, EntryPoint) == 0x000000, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::EntryPoint' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, CallFunc_K2_SetRelativeLocation_SweepHitResult) == 0x000008, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::CallFunc_K2_SetRelativeLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000090, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x0000A0, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, K2Node_ComponentBoundEvent_OtherActor) == 0x0000A8, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, K2Node_ComponentBoundEvent_OtherComp) == 0x0000B0, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000B8, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, K2Node_ComponentBoundEvent_bFromSweep) == 0x0000BC, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, K2Node_ComponentBoundEvent_SweepResult) == 0x0000C0, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, CallFunc_MakeTransform_ReturnValue) == 0x000150, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000180, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, CallFunc_FinishSpawningActor_ReturnValue) == 0x000188, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, K2Node_DynamicCast_AsInt_Objects) == 0x000190, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::K2Node_DynamicCast_AsInt_Objects' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_ExecuteUbergraph_ufoDropper, K2Node_DynamicCast_bSuccess) == 0x0001A0, "Member 'UfoDropper_C_ExecuteUbergraph_ufoDropper::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function ufoDropper.ufoDropper_C.BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CC9[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'UfoDropper_C_BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

}
