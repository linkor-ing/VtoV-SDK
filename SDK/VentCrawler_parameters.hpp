#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VentCrawler

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ventCrawler.ventCrawler_C.ExecuteUbergraph_ventCrawler
// 0x0188 (0x0188 - 0x0000)
struct VentCrawler_C_ExecuteUbergraph_ventCrawler final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EF9[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EFA[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1EFB[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EFC[0x3];                                     // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0068(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x00F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_AddActorWorldOffset_SweepHitResult;    // 0x0100(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(VentCrawler_C_ExecuteUbergraph_ventCrawler) == 0x000008, "Wrong alignment on VentCrawler_C_ExecuteUbergraph_ventCrawler");
static_assert(sizeof(VentCrawler_C_ExecuteUbergraph_ventCrawler) == 0x000188, "Wrong size on VentCrawler_C_ExecuteUbergraph_ventCrawler");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, EntryPoint) == 0x000000, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::EntryPoint' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, Temp_bool_IsClosed_Variable) == 0x000020, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, K2Node_Event_DeltaSeconds) == 0x000024, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, CallFunc_GetForwardVector_ReturnValue) == 0x000028, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000034, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, CallFunc_GetWorldDeltaSeconds_ReturnValue) == 0x000040, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::CallFunc_GetWorldDeltaSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000048, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, K2Node_ComponentBoundEvent_OtherActor) == 0x000050, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, K2Node_ComponentBoundEvent_OtherComp) == 0x000058, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000060, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, K2Node_ComponentBoundEvent_bFromSweep) == 0x000064, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, K2Node_ComponentBoundEvent_SweepResult) == 0x000068, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x0000F0, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x0000F4, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_ExecuteUbergraph_ventCrawler, CallFunc_K2_AddActorWorldOffset_SweepHitResult) == 0x000100, "Member 'VentCrawler_C_ExecuteUbergraph_ventCrawler::CallFunc_K2_AddActorWorldOffset_SweepHitResult' has a wrong offset!");

// Function ventCrawler.ventCrawler_C.BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EFD[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'VentCrawler_C_BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function ventCrawler.ventCrawler_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct VentCrawler_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(VentCrawler_C_ReceiveTick) == 0x000004, "Wrong alignment on VentCrawler_C_ReceiveTick");
static_assert(sizeof(VentCrawler_C_ReceiveTick) == 0x000004, "Wrong size on VentCrawler_C_ReceiveTick");
static_assert(offsetof(VentCrawler_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'VentCrawler_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}
