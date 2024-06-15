#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bedEvent

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function bedEvent.bedEvent_C.ExecuteUbergraph_bedEvent
// 0x0190 (0x0190 - 0x0000)
struct bedEvent_C_ExecuteUbergraph_bedEvent final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43DB[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43DC[0x8];                                     // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x005C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43DD[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_player_C>         K2Node_DynamicCast_AsInt_Player;                   // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43DE[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x008C(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x0114(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43DF[0x3];                                     // 0x0115(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_C*                                CallFunc_asProp_return;                            // 0x0118(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43E0[0x4];                                     // 0x012C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0130(0x0030)(IsPlainOldData, NoDestructor)
	TScriptInterface<class IInt_objects_C>        CallFunc_setPropProps_self_CastInput;              // 0x0160(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0170(0x0010)(ZeroConstructor, NoDestructor)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode_1;        // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(bedEvent_C_ExecuteUbergraph_bedEvent) == 0x000010, "Wrong alignment on bedEvent_C_ExecuteUbergraph_bedEvent");
static_assert(sizeof(bedEvent_C_ExecuteUbergraph_bedEvent) == 0x000190, "Wrong size on bedEvent_C_ExecuteUbergraph_bedEvent");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, EntryPoint) == 0x000000, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::EntryPoint' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, CallFunc_getMainPlayer_AsMain_Player) == 0x000008, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000010, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, CallFunc_BreakTransform_Location) == 0x000050, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, CallFunc_BreakTransform_Rotation) == 0x00005C, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, CallFunc_BreakTransform_Scale) == 0x000068, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, K2Node_DynamicCast_AsInt_Player) == 0x000078, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::K2Node_DynamicCast_AsInt_Player' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, CallFunc_K2_SetActorLocationAndRotation_SweepHitResult) == 0x00008C, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::CallFunc_K2_SetActorLocationAndRotation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, CallFunc_K2_SetActorLocationAndRotation_ReturnValue) == 0x000114, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::CallFunc_K2_SetActorLocationAndRotation_ReturnValue' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, CallFunc_asProp_return) == 0x000118, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::CallFunc_asProp_return' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, CallFunc_Add_VectorVector_ReturnValue) == 0x000120, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, CallFunc_MakeTransform_ReturnValue) == 0x000130, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, CallFunc_setPropProps_self_CastInput) == 0x000160, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::CallFunc_setPropProps_self_CastInput' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, K2Node_CreateDelegate_OutputDelegate) == 0x000170, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(bedEvent_C_ExecuteUbergraph_bedEvent, CallFunc_getMainGamemode_AsMain_Gamemode_1) == 0x000180, "Member 'bedEvent_C_ExecuteUbergraph_bedEvent::CallFunc_getMainGamemode_AsMain_Gamemode_1' has a wrong offset!");

}
