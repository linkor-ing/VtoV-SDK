#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_erieGun

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_erieGun.prop_erieGun_C.ExecuteUbergraph_prop_erieGun
// 0x00A0 (0x00A0 - 0x0000)
struct Prop_erieGun_C_ExecuteUbergraph_prop_erieGun final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0044(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x0050(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0060(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_eriePlush_superEater_C*           CallFunc_FinishSpawningActor_ReturnValue;          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_erieGun_C_ExecuteUbergraph_prop_erieGun) == 0x000010, "Wrong alignment on Prop_erieGun_C_ExecuteUbergraph_prop_erieGun");
static_assert(sizeof(Prop_erieGun_C_ExecuteUbergraph_prop_erieGun) == 0x0000A0, "Wrong size on Prop_erieGun_C_ExecuteUbergraph_prop_erieGun");
static_assert(offsetof(Prop_erieGun_C_ExecuteUbergraph_prop_erieGun, EntryPoint) == 0x000000, "Member 'Prop_erieGun_C_ExecuteUbergraph_prop_erieGun::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_erieGun_C_ExecuteUbergraph_prop_erieGun, K2Node_Event_player_1) == 0x000008, "Member 'Prop_erieGun_C_ExecuteUbergraph_prop_erieGun::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Prop_erieGun_C_ExecuteUbergraph_prop_erieGun, K2Node_Event_player) == 0x000010, "Member 'Prop_erieGun_C_ExecuteUbergraph_prop_erieGun::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_erieGun_C_ExecuteUbergraph_prop_erieGun, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000018, "Member 'Prop_erieGun_C_ExecuteUbergraph_prop_erieGun::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_erieGun_C_ExecuteUbergraph_prop_erieGun, CallFunc_GetActorForwardVector_ReturnValue) == 0x000020, "Member 'Prop_erieGun_C_ExecuteUbergraph_prop_erieGun::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_erieGun_C_ExecuteUbergraph_prop_erieGun, CallFunc_K2_GetActorLocation_ReturnValue) == 0x00002C, "Member 'Prop_erieGun_C_ExecuteUbergraph_prop_erieGun::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_erieGun_C_ExecuteUbergraph_prop_erieGun, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000038, "Member 'Prop_erieGun_C_ExecuteUbergraph_prop_erieGun::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_erieGun_C_ExecuteUbergraph_prop_erieGun, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000044, "Member 'Prop_erieGun_C_ExecuteUbergraph_prop_erieGun::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_erieGun_C_ExecuteUbergraph_prop_erieGun, CallFunc_Conv_VectorToRotator_ReturnValue) == 0x000050, "Member 'Prop_erieGun_C_ExecuteUbergraph_prop_erieGun::CallFunc_Conv_VectorToRotator_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_erieGun_C_ExecuteUbergraph_prop_erieGun, CallFunc_MakeTransform_ReturnValue) == 0x000060, "Member 'Prop_erieGun_C_ExecuteUbergraph_prop_erieGun::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_erieGun_C_ExecuteUbergraph_prop_erieGun, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000090, "Member 'Prop_erieGun_C_ExecuteUbergraph_prop_erieGun::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_erieGun_C_ExecuteUbergraph_prop_erieGun, CallFunc_FinishSpawningActor_ReturnValue) == 0x000098, "Member 'Prop_erieGun_C_ExecuteUbergraph_prop_erieGun::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function prop_erieGun.prop_erieGun_C.playerHandRelease_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_erieGun_C_PlayerHandRelease_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_erieGun_C_PlayerHandRelease_RMB) == 0x000008, "Wrong alignment on Prop_erieGun_C_PlayerHandRelease_RMB");
static_assert(sizeof(Prop_erieGun_C_PlayerHandRelease_RMB) == 0x000008, "Wrong size on Prop_erieGun_C_PlayerHandRelease_RMB");
static_assert(offsetof(Prop_erieGun_C_PlayerHandRelease_RMB, Player) == 0x000000, "Member 'Prop_erieGun_C_PlayerHandRelease_RMB::Player' has a wrong offset!");

// Function prop_erieGun.prop_erieGun_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_erieGun_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_erieGun_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_erieGun_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_erieGun_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_erieGun_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_erieGun_C_PlayerHandUse_RMB, Player) == 0x000000, "Member 'Prop_erieGun_C_PlayerHandUse_RMB::Player' has a wrong offset!");

}

