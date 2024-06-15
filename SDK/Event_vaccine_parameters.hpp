#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Event_vaccine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function event_vaccine.event_vaccine_C.ExecuteUbergraph_event_vaccine
// 0x0190 (0x0190 - 0x0000)
struct Event_vaccine_C_ExecuteUbergraph_event_vaccine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_276D[0xC];                                     // 0x0004(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0030)(IsPlainOldData, NoDestructor)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_clipboard_paper_C*                CallFunc_FinishSpawningActor_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_container_crate_C*                CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_276E[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x00B0(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	uint8                                         Pad_276F[0x8];                                     // 0x0138(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_2;              // 0x0140(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0178(0x0010)(ReferenceParm)
	class AProp_vaccine_C*                        CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Event_vaccine_C_ExecuteUbergraph_event_vaccine) == 0x000010, "Wrong alignment on Event_vaccine_C_ExecuteUbergraph_event_vaccine");
static_assert(sizeof(Event_vaccine_C_ExecuteUbergraph_event_vaccine) == 0x000190, "Wrong size on Event_vaccine_C_ExecuteUbergraph_event_vaccine");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, EntryPoint) == 0x000000, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::EntryPoint' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, CallFunc_MakeTransform_ReturnValue_1) == 0x000040, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000070, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x000078, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, CallFunc_FinishSpawningActor_ReturnValue) == 0x000080, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000088, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000090, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, K2Node_ComponentBoundEvent_OtherActor) == 0x000098, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, K2Node_ComponentBoundEvent_OtherComp) == 0x0000A0, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x0000A8, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, K2Node_ComponentBoundEvent_bFromSweep) == 0x0000AC, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, K2Node_ComponentBoundEvent_SweepResult) == 0x0000B0, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, CallFunc_MakeTransform_ReturnValue_2) == 0x000140, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::CallFunc_MakeTransform_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2) == 0x000170, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, K2Node_MakeArray_Array) == 0x000178, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_ExecuteUbergraph_event_vaccine, CallFunc_FinishSpawningActor_ReturnValue_2) == 0x000188, "Member 'Event_vaccine_C_ExecuteUbergraph_event_vaccine::CallFunc_FinishSpawningActor_ReturnValue_2' has a wrong offset!");

// Function event_vaccine.event_vaccine_C.BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
{
public:
	class UPrimitiveComponent*                    OverlappedComponent;                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 OtherActor;                                        // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    OtherComp;                                         // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OtherBodyIndex;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bFromSweep;                                        // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2770[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             SweepResult;                                       // 0x0020(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'Event_vaccine_C_BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

}
