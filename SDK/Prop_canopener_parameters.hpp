#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_canopener

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_canopener.prop_canopener_C.ExecuteUbergraph_prop_canopener
// 0x00A8 (0x00A8 - 0x0000)
struct Prop_canopener_C_ExecuteUbergraph_prop_canopener final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B31[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3B32[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B33[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3B34[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AProp_cannedFood_C*                     K2Node_DynamicCast_AsProp_Canned_Food;             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_canopener_C_ExecuteUbergraph_prop_canopener) == 0x000008, "Wrong alignment on Prop_canopener_C_ExecuteUbergraph_prop_canopener");
static_assert(sizeof(Prop_canopener_C_ExecuteUbergraph_prop_canopener) == 0x0000A8, "Wrong size on Prop_canopener_C_ExecuteUbergraph_prop_canopener");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, EntryPoint) == 0x000000, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, K2Node_Event_player) == 0x000008, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_bBlockingHit) == 0x000010, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_bInitialOverlap) == 0x000011, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_Time) == 0x000014, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_Distance) == 0x000018, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_Location) == 0x00001C, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_ImpactPoint) == 0x000028, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_Normal) == 0x000034, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_ImpactNormal) == 0x000040, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_PhysMat) == 0x000050, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_HitActor) == 0x000058, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_HitComponent) == 0x000060, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_HitBoneName) == 0x000068, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_HitItem) == 0x000070, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_ElementIndex) == 0x000074, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_FaceIndex) == 0x000078, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_TraceStart) == 0x00007C, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, CallFunc_BreakHitResult_TraceEnd) == 0x000088, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, K2Node_DynamicCast_AsProp_Canned_Food) == 0x000098, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::K2Node_DynamicCast_AsProp_Canned_Food' has a wrong offset!");
static_assert(offsetof(Prop_canopener_C_ExecuteUbergraph_prop_canopener, K2Node_DynamicCast_bSuccess) == 0x0000A0, "Member 'Prop_canopener_C_ExecuteUbergraph_prop_canopener::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function prop_canopener.prop_canopener_C.playerHandUse_LMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_canopener_C_PlayerHandUse_LMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_canopener_C_PlayerHandUse_LMB) == 0x000008, "Wrong alignment on Prop_canopener_C_PlayerHandUse_LMB");
static_assert(sizeof(Prop_canopener_C_PlayerHandUse_LMB) == 0x000008, "Wrong size on Prop_canopener_C_PlayerHandUse_LMB");
static_assert(offsetof(Prop_canopener_C_PlayerHandUse_LMB, Player) == 0x000000, "Member 'Prop_canopener_C_PlayerHandUse_LMB::Player' has a wrong offset!");

}

