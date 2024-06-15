#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_hook

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_hook.prop_hook_C.ExecuteUbergraph_prop_hook
// 0x0270 (0x0270 - 0x0000)
struct Prop_hook_C_ExecuteUbergraph_prop_hook final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_118C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveSlot_C*                            CallFunc_getSaveSlot_saveSlot;                     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_118D[0x1];                                     // 0x001B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_118E[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_118F[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChildActor_ReturnValue;                 // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1190[0x3];                                     // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x00AC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1191[0x8];                                     // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x00C0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHook_C*                                CallFunc_FinishSpawningActor_ReturnValue;          // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1192[0x2];                                     // 0x010A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x010C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x0114(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x0120(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x012C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x0138(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1193[0x4];                                     // 0x0144(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x0158(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x016C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x0174(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x0180(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1194[0x4];                                     // 0x018C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue_1;              // 0x0190(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHook_C*                                CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_2;            // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_2;         // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1195[0x2];                                     // 0x01D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_2;                    // 0x01D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_2;                // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location_2;                // 0x01DC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_2;             // 0x01E8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_2;                  // 0x01F4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_2;            // 0x0200(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1196[0x4];                                     // 0x020C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_2;                 // 0x0210(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_2;                // 0x0218(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_2;            // 0x0220(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_2;             // 0x0228(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_2;                 // 0x0230(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_2;            // 0x0234(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_2;               // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart_2;              // 0x023C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_2;                // 0x0248(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChildActor_ReturnValue_1;               // 0x0254(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_updEquip_return;                          // 0x0255(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1197[0x2];                                     // 0x0256(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_updEquip_rebug;                           // 0x0258(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0268(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_hook_C_ExecuteUbergraph_prop_hook) == 0x000010, "Wrong alignment on Prop_hook_C_ExecuteUbergraph_prop_hook");
static_assert(sizeof(Prop_hook_C_ExecuteUbergraph_prop_hook) == 0x000270, "Wrong size on Prop_hook_C_ExecuteUbergraph_prop_hook");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, EntryPoint) == 0x000000, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, K2Node_Event_player) == 0x000008, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_getSaveSlot_saveSlot) == 0x000010, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_getSaveSlot_saveSlot' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_bBlockingHit) == 0x000019, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_bInitialOverlap) == 0x00001A, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_Time) == 0x00001C, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_Distance) == 0x000020, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_Location) == 0x000024, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_ImpactPoint) == 0x000030, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_Normal) == 0x00003C, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_ImpactNormal) == 0x000048, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_PhysMat) == 0x000058, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_HitActor) == 0x000060, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_HitComponent) == 0x000068, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_HitBoneName) == 0x000070, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_HitItem) == 0x000078, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_ElementIndex) == 0x00007C, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_FaceIndex) == 0x000080, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_TraceStart) == 0x000084, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_TraceEnd) == 0x000090, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x0000A0, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_IsChildActor_ReturnValue) == 0x0000A8, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_IsChildActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_K2_GetActorLocation_ReturnValue) == 0x0000AC, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_MakeTransform_ReturnValue) == 0x0000C0, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000F0, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000F8, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, K2Node_Event_player_1) == 0x000100, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_bBlockingHit_1) == 0x000108, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x000109, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_Time_1) == 0x00010C, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_Distance_1) == 0x000110, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_Location_1) == 0x000114, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_ImpactPoint_1) == 0x000120, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_Normal_1) == 0x00012C, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_ImpactNormal_1) == 0x000138, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_PhysMat_1) == 0x000148, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_HitActor_1) == 0x000150, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_HitComponent_1) == 0x000158, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_HitBoneName_1) == 0x000160, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_HitItem_1) == 0x000168, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_ElementIndex_1) == 0x00016C, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_FaceIndex_1) == 0x000170, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_TraceStart_1) == 0x000174, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_TraceEnd_1) == 0x000180, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_MakeTransform_ReturnValue_1) == 0x000190, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_MakeTransform_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0001C0, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x0001C8, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_bBlockingHit_2) == 0x0001D0, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_bBlockingHit_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_bInitialOverlap_2) == 0x0001D1, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_bInitialOverlap_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_Time_2) == 0x0001D4, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_Time_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_Distance_2) == 0x0001D8, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_Distance_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_Location_2) == 0x0001DC, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_Location_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_ImpactPoint_2) == 0x0001E8, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_ImpactPoint_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_Normal_2) == 0x0001F4, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_Normal_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_ImpactNormal_2) == 0x000200, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_ImpactNormal_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_PhysMat_2) == 0x000210, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_PhysMat_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_HitActor_2) == 0x000218, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_HitActor_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_HitComponent_2) == 0x000220, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_HitComponent_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_HitBoneName_2) == 0x000228, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_HitBoneName_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_HitItem_2) == 0x000230, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_HitItem_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_ElementIndex_2) == 0x000234, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_ElementIndex_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_FaceIndex_2) == 0x000238, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_FaceIndex_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_TraceStart_2) == 0x00023C, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_TraceStart_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_BreakHitResult_TraceEnd_2) == 0x000248, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_BreakHitResult_TraceEnd_2' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_IsChildActor_ReturnValue_1) == 0x000254, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_IsChildActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_updEquip_return) == 0x000255, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_updEquip_return' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_updEquip_rebug) == 0x000258, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_updEquip_rebug' has a wrong offset!");
static_assert(offsetof(Prop_hook_C_ExecuteUbergraph_prop_hook, CallFunc_IsValid_ReturnValue_1) == 0x000268, "Member 'Prop_hook_C_ExecuteUbergraph_prop_hook::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function prop_hook.prop_hook_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_hook_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_hook_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_hook_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_hook_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_hook_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_hook_C_PlayerHandUse_RMB, Player) == 0x000000, "Member 'Prop_hook_C_PlayerHandUse_RMB::Player' has a wrong offset!");

// Function prop_hook.prop_hook_C.playerHandUse_LMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_hook_C_PlayerHandUse_LMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_hook_C_PlayerHandUse_LMB) == 0x000008, "Wrong alignment on Prop_hook_C_PlayerHandUse_LMB");
static_assert(sizeof(Prop_hook_C_PlayerHandUse_LMB) == 0x000008, "Wrong size on Prop_hook_C_PlayerHandUse_LMB");
static_assert(offsetof(Prop_hook_C_PlayerHandUse_LMB, Player) == 0x000000, "Member 'Prop_hook_C_PlayerHandUse_LMB::Player' has a wrong offset!");

}
