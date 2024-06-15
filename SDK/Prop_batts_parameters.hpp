#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_batts

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_save_structs.hpp"
#include "Struct_mFloat_structs.hpp"


namespace SDK::Params
{

// Function prop_batts.prop_batts_C.ExecuteUbergraph_prop_batts
// 0x0210 (0x0210 - 0x0000)
struct Prop_batts_C_ExecuteUbergraph_prop_batts final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B57[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 CallFunc_GetObjectClass_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B58[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             CallFunc_GetPlayerCharacter_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B59[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          CallFunc_getMainPlayer_AsMain_Player;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetCenterOfMass_ReturnValue;              // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B5A[0x4];                                     // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_batts_C*                          CallFunc_FinishSpawningActor_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0090(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_putObjectInventory2_return;               // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B5B[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExplosion_C*                           CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player_2;                             // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             K2Node_Event_hit;                                  // 0x00E0(0x0088)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         K2Node_Event_index;                                // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_interactionActions                       K2Node_Event_action;                               // 0x016C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B5C[0x3];                                     // 0x016D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B5D[0x7];                                     // 0x0179(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0189(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B5E[0x2];                                     // 0x018A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x018C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0190(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0194(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x01A0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x01AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x01B8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B5F[0x4];                                     // 0x01C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x01E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x01E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x01EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x01F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x01F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0200(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_batts_C_ExecuteUbergraph_prop_batts) == 0x000010, "Wrong alignment on Prop_batts_C_ExecuteUbergraph_prop_batts");
static_assert(sizeof(Prop_batts_C_ExecuteUbergraph_prop_batts) == 0x000210, "Wrong size on Prop_batts_C_ExecuteUbergraph_prop_batts");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, EntryPoint) == 0x000000, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_GetObjectClass_ReturnValue) == 0x000008, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_GetObjectClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000010, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_IsValidClass_ReturnValue) == 0x000018, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_GetPlayerCharacter_ReturnValue) == 0x000020, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_GetPlayerCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000028, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_getMainPlayer_AsMain_Player) == 0x000038, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_getMainPlayer_AsMain_Player' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_MakeTransform_ReturnValue) == 0x000040, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000070, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_GetCenterOfMass_ReturnValue) == 0x000078, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_GetCenterOfMass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_FinishSpawningActor_ReturnValue) == 0x000088, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_MakeTransform_ReturnValue_1) == 0x000090, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_putObjectInventory2_return) == 0x0000C0, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_putObjectInventory2_return' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0000C8, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0000D0, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, K2Node_Event_player_2) == 0x0000D8, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::K2Node_Event_player_2' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, K2Node_Event_hit) == 0x0000E0, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::K2Node_Event_hit' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, K2Node_Event_index) == 0x000168, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::K2Node_Event_index' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, K2Node_Event_action) == 0x00016C, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::K2Node_Event_action' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, K2Node_Event_player_1) == 0x000170, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, K2Node_SwitchEnum_CmpSuccess) == 0x000178, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, K2Node_Event_player) == 0x000180, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_bBlockingHit) == 0x000188, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_bInitialOverlap) == 0x000189, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_Time) == 0x00018C, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_Distance) == 0x000190, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_Location) == 0x000194, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_ImpactPoint) == 0x0001A0, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_Normal) == 0x0001AC, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_ImpactNormal) == 0x0001B8, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_PhysMat) == 0x0001C8, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_HitActor) == 0x0001D0, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_HitComponent) == 0x0001D8, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_HitBoneName) == 0x0001E0, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_HitItem) == 0x0001E8, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_ElementIndex) == 0x0001EC, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_FaceIndex) == 0x0001F0, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_TraceStart) == 0x0001F4, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ExecuteUbergraph_prop_batts, CallFunc_BreakHitResult_TraceEnd) == 0x000200, "Member 'Prop_batts_C_ExecuteUbergraph_prop_batts::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");

// Function prop_batts.prop_batts_C.actionOptionIndex
// 0x0098 (0x0098 - 0x0000)
struct Prop_batts_C_ActionOptionIndex final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                         Param_Index;                                       // 0x0090(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_interactionActions                       Action;                                            // 0x0094(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_batts_C_ActionOptionIndex) == 0x000008, "Wrong alignment on Prop_batts_C_ActionOptionIndex");
static_assert(sizeof(Prop_batts_C_ActionOptionIndex) == 0x000098, "Wrong size on Prop_batts_C_ActionOptionIndex");
static_assert(offsetof(Prop_batts_C_ActionOptionIndex, Player) == 0x000000, "Member 'Prop_batts_C_ActionOptionIndex::Player' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ActionOptionIndex, Param_Hit) == 0x000008, "Member 'Prop_batts_C_ActionOptionIndex::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ActionOptionIndex, Param_Index) == 0x000090, "Member 'Prop_batts_C_ActionOptionIndex::Param_Index' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_ActionOptionIndex, Action) == 0x000094, "Member 'Prop_batts_C_ActionOptionIndex::Action' has a wrong offset!");

// Function prop_batts.prop_batts_C.playerHandUse_LMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_batts_C_PlayerHandUse_LMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_batts_C_PlayerHandUse_LMB) == 0x000008, "Wrong alignment on Prop_batts_C_PlayerHandUse_LMB");
static_assert(sizeof(Prop_batts_C_PlayerHandUse_LMB) == 0x000008, "Wrong size on Prop_batts_C_PlayerHandUse_LMB");
static_assert(offsetof(Prop_batts_C_PlayerHandUse_LMB, Player) == 0x000000, "Member 'Prop_batts_C_PlayerHandUse_LMB::Player' has a wrong offset!");

// Function prop_batts.prop_batts_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_batts_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_batts_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_batts_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_batts_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_batts_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_batts_C_PlayerHandUse_RMB, Player) == 0x000000, "Member 'Prop_batts_C_PlayerHandUse_RMB::Player' has a wrong offset!");

// Function prop_batts.prop_batts_C.isButtonUsed
// 0x0001 (0x0001 - 0x0000)
struct Prop_batts_C_IsButtonUsed final
{
public:
	bool                                          Failed;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_batts_C_IsButtonUsed) == 0x000001, "Wrong alignment on Prop_batts_C_IsButtonUsed");
static_assert(sizeof(Prop_batts_C_IsButtonUsed) == 0x000001, "Wrong size on Prop_batts_C_IsButtonUsed");
static_assert(offsetof(Prop_batts_C_IsButtonUsed, Failed) == 0x000000, "Member 'Prop_batts_C_IsButtonUsed::Failed' has a wrong offset!");

// Function prop_batts.prop_batts_C.lookAt
// 0x0128 (0x0128 - 0x0000)
struct Prop_batts_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B60[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x00B0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B61[0x4];                                     // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00E0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_FloatToText_ReturnValue;             // 0x00F0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0108(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0118(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_batts_C_LookAt) == 0x000008, "Wrong alignment on Prop_batts_C_LookAt");
static_assert(sizeof(Prop_batts_C_LookAt) == 0x000128, "Wrong size on Prop_batts_C_LookAt");
static_assert(offsetof(Prop_batts_C_LookAt, Player) == 0x000000, "Member 'Prop_batts_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LookAt, Param_Hit) == 0x000008, "Member 'Prop_batts_C_LookAt::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LookAt, Return) == 0x000090, "Member 'Prop_batts_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LookAt, Text) == 0x000098, "Member 'Prop_batts_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Prop_batts_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LookAt, CallFunc_MakeLiteralText_ReturnValue) == 0x0000B0, "Member 'Prop_batts_C_LookAt::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x0000C8, "Member 'Prop_batts_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LookAt, CallFunc_Abs_ReturnValue) == 0x0000D8, "Member 'Prop_batts_C_LookAt::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LookAt, CallFunc_Concat_StrStr_ReturnValue) == 0x0000E0, "Member 'Prop_batts_C_LookAt::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LookAt, CallFunc_Conv_FloatToText_ReturnValue) == 0x0000F0, "Member 'Prop_batts_C_LookAt::CallFunc_Conv_FloatToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LookAt, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000108, "Member 'Prop_batts_C_LookAt::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LookAt, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000118, "Member 'Prop_batts_C_LookAt::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

// Function prop_batts.prop_batts_C.loadData
// 0x00E0 (0x00E0 - 0x0000)
struct Prop_batts_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B62[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mFloat                         CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	float                                         CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_batts_C_LoadData) == 0x000010, "Wrong alignment on Prop_batts_C_LoadData");
static_assert(sizeof(Prop_batts_C_LoadData) == 0x0000E0, "Wrong size on Prop_batts_C_LoadData");
static_assert(offsetof(Prop_batts_C_LoadData, Data) == 0x000000, "Member 'Prop_batts_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LoadData, Return) == 0x0000C0, "Member 'Prop_batts_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_batts_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_batts_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_batts_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_batts.prop_batts_C.getData
// 0x0280 (0x0280 - 0x0000)
struct Prop_batts_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<float>                                 K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mFloat                         K2Node_MakeStruct_struct_mFloat;                   // 0x0190(0x0010)(HasGetValueTypeHash)
	struct FStruct_mFloat                         CallFunc_Array_Get_Item;                           // 0x01A0(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mFloat>                 K2Node_MakeArray_Array_1;                          // 0x01B0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01C0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_batts_C_GetData) == 0x000010, "Wrong alignment on Prop_batts_C_GetData");
static_assert(sizeof(Prop_batts_C_GetData) == 0x000280, "Wrong size on Prop_batts_C_GetData");
static_assert(offsetof(Prop_batts_C_GetData, Data) == 0x000000, "Member 'Prop_batts_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Prop_batts_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Prop_batts_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_GetData, K2Node_MakeStruct_struct_mFloat) == 0x000190, "Member 'Prop_batts_C_GetData::K2Node_MakeStruct_struct_mFloat' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_GetData, CallFunc_Array_Get_Item) == 0x0001A0, "Member 'Prop_batts_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_GetData, K2Node_MakeArray_Array_1) == 0x0001B0, "Member 'Prop_batts_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001C0, "Member 'Prop_batts_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function prop_batts.prop_batts_C.getActionOptions
// 0x0058 (0x0058 - 0x0000)
struct Prop_batts_C_GetActionOptions final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor;                                             // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         Options;                                           // 0x0018(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               Options_enum;                                      // 0x0028(0x0010)(Parm, OutParm)
	TArray<class FText>                           OptionsNamesOverlay;                               // 0x0038(0x0010)(Parm, OutParm)
	TArray<Enum_interactionActions>               K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
};
static_assert(alignof(Prop_batts_C_GetActionOptions) == 0x000008, "Wrong alignment on Prop_batts_C_GetActionOptions");
static_assert(sizeof(Prop_batts_C_GetActionOptions) == 0x000058, "Wrong size on Prop_batts_C_GetActionOptions");
static_assert(offsetof(Prop_batts_C_GetActionOptions, Player) == 0x000000, "Member 'Prop_batts_C_GetActionOptions::Player' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_GetActionOptions, Component) == 0x000008, "Member 'Prop_batts_C_GetActionOptions::Component' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_GetActionOptions, Actor) == 0x000010, "Member 'Prop_batts_C_GetActionOptions::Actor' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_GetActionOptions, Options) == 0x000018, "Member 'Prop_batts_C_GetActionOptions::Options' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_GetActionOptions, Options_enum) == 0x000028, "Member 'Prop_batts_C_GetActionOptions::Options_enum' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_GetActionOptions, OptionsNamesOverlay) == 0x000038, "Member 'Prop_batts_C_GetActionOptions::OptionsNamesOverlay' has a wrong offset!");
static_assert(offsetof(Prop_batts_C_GetActionOptions, K2Node_MakeArray_Array) == 0x000048, "Member 'Prop_batts_C_GetActionOptions::K2Node_MakeArray_Array' has a wrong offset!");

}
