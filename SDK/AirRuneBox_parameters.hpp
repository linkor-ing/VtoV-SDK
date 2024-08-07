#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AirRuneBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function airRuneBox.airRuneBox_C.BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// 0x00A8 (0x00A8 - 0x0000)
struct AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature final
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
static_assert(alignof(AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x000008, "Wrong alignment on AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(sizeof(AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature) == 0x0000A8, "Wrong size on AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");
static_assert(offsetof(AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OverlappedComponent) == 0x000000, "Member 'AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OverlappedComponent' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherActor) == 0x000008, "Member 'AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherActor' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherComp) == 0x000010, "Member 'AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherComp' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, OtherBodyIndex) == 0x000018, "Member 'AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, bFromSweep) == 0x00001C, "Member 'AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::bFromSweep' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature, SweepResult) == 0x000020, "Member 'AirRuneBox_C_BndEvt__airRuneBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature::SweepResult' has a wrong offset!");

// Function airRuneBox.airRuneBox_C.ExecuteUbergraph_airRuneBox
// 0x0110 (0x0110 - 0x0000)
struct AirRuneBox_C_ExecuteUbergraph_airRuneBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OverlappedComponent;    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_ComponentBoundEvent_OtherActor;             // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    K2Node_ComponentBoundEvent_OtherComp;              // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_OtherBodyIndex;         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_bFromSweep;             // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             K2Node_ComponentBoundEvent_SweepResult;            // 0x0028(0x0088)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AProp_C*                                K2Node_DynamicCast_AsProp;                         // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B9[0x7];                                       // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x00C0(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F9[0x7];                                       // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_rune_0_C*                         CallFunc_FinishSpawningActor_ReturnValue;          // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AirRuneBox_C_ExecuteUbergraph_airRuneBox) == 0x000010, "Wrong alignment on AirRuneBox_C_ExecuteUbergraph_airRuneBox");
static_assert(sizeof(AirRuneBox_C_ExecuteUbergraph_airRuneBox) == 0x000110, "Wrong size on AirRuneBox_C_ExecuteUbergraph_airRuneBox");
static_assert(offsetof(AirRuneBox_C_ExecuteUbergraph_airRuneBox, EntryPoint) == 0x000000, "Member 'AirRuneBox_C_ExecuteUbergraph_airRuneBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_ExecuteUbergraph_airRuneBox, K2Node_ComponentBoundEvent_OverlappedComponent) == 0x000008, "Member 'AirRuneBox_C_ExecuteUbergraph_airRuneBox::K2Node_ComponentBoundEvent_OverlappedComponent' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_ExecuteUbergraph_airRuneBox, K2Node_ComponentBoundEvent_OtherActor) == 0x000010, "Member 'AirRuneBox_C_ExecuteUbergraph_airRuneBox::K2Node_ComponentBoundEvent_OtherActor' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_ExecuteUbergraph_airRuneBox, K2Node_ComponentBoundEvent_OtherComp) == 0x000018, "Member 'AirRuneBox_C_ExecuteUbergraph_airRuneBox::K2Node_ComponentBoundEvent_OtherComp' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_ExecuteUbergraph_airRuneBox, K2Node_ComponentBoundEvent_OtherBodyIndex) == 0x000020, "Member 'AirRuneBox_C_ExecuteUbergraph_airRuneBox::K2Node_ComponentBoundEvent_OtherBodyIndex' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_ExecuteUbergraph_airRuneBox, K2Node_ComponentBoundEvent_bFromSweep) == 0x000024, "Member 'AirRuneBox_C_ExecuteUbergraph_airRuneBox::K2Node_ComponentBoundEvent_bFromSweep' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_ExecuteUbergraph_airRuneBox, K2Node_ComponentBoundEvent_SweepResult) == 0x000028, "Member 'AirRuneBox_C_ExecuteUbergraph_airRuneBox::K2Node_ComponentBoundEvent_SweepResult' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_ExecuteUbergraph_airRuneBox, K2Node_DynamicCast_AsProp) == 0x0000B0, "Member 'AirRuneBox_C_ExecuteUbergraph_airRuneBox::K2Node_DynamicCast_AsProp' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_ExecuteUbergraph_airRuneBox, K2Node_DynamicCast_bSuccess) == 0x0000B8, "Member 'AirRuneBox_C_ExecuteUbergraph_airRuneBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_ExecuteUbergraph_airRuneBox, CallFunc_GetTransform_ReturnValue) == 0x0000C0, "Member 'AirRuneBox_C_ExecuteUbergraph_airRuneBox::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_ExecuteUbergraph_airRuneBox, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000F0, "Member 'AirRuneBox_C_ExecuteUbergraph_airRuneBox::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_ExecuteUbergraph_airRuneBox, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000F8, "Member 'AirRuneBox_C_ExecuteUbergraph_airRuneBox::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(AirRuneBox_C_ExecuteUbergraph_airRuneBox, CallFunc_FinishSpawningActor_ReturnValue) == 0x000100, "Member 'AirRuneBox_C_ExecuteUbergraph_airRuneBox::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

