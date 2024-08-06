#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireSpark

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_wireSpark.prop_wireSpark_C.ExecuteUbergraph_prop_wireSpark
// 0x0180 (0x0180 - 0x0000)
struct Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player_2;                             // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x001C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0028(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x0034(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x007C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0088(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player_1;                             // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_wire_C>           K2Node_DynamicCast_AsInt_Wire;                     // 0x00A0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bBlockingHit_1;            // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap_1;         // 0x00B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_B3[0x1];                                       // 0x00B3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time_1;                    // 0x00B4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance_1;                // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location_1;                // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint_1;             // 0x00C8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal_1;                  // 0x00D4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal_1;            // 0x00E0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat_1;                 // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor_1;                // 0x00F8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent_1;            // 0x0100(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName_1;             // 0x0108(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem_1;                 // 0x0110(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex_1;            // 0x0114(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex_1;               // 0x0118(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart_1;              // 0x011C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd_1;                // 0x0128(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue;       // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AWire_C*                                K2Node_DynamicCast_AsWire;                         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IInt_wire_C>           K2Node_DynamicCast_AsInt_Wire_1;                   // 0x0158(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_DoesImplementInterface_ReturnValue_1;     // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_16B[0x5];                                      // 0x016B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AWire_C*                                K2Node_DynamicCast_AsWire_1;                       // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark) == 0x000008, "Wrong alignment on Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark");
static_assert(sizeof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark) == 0x000180, "Wrong size on Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, EntryPoint) == 0x000000, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, K2Node_Event_player_2) == 0x000008, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::K2Node_Event_player_2' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_bBlockingHit) == 0x000010, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_bInitialOverlap) == 0x000011, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_Time) == 0x000014, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_Distance) == 0x000018, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_Location) == 0x00001C, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_ImpactPoint) == 0x000028, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_Normal) == 0x000034, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_ImpactNormal) == 0x000040, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_PhysMat) == 0x000050, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_HitActor) == 0x000058, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_HitComponent) == 0x000060, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_HitBoneName) == 0x000068, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_HitItem) == 0x000070, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_ElementIndex) == 0x000074, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_FaceIndex) == 0x000078, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_TraceStart) == 0x00007C, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_TraceEnd) == 0x000088, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, K2Node_Event_player_1) == 0x000098, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::K2Node_Event_player_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, K2Node_DynamicCast_AsInt_Wire) == 0x0000A0, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::K2Node_DynamicCast_AsInt_Wire' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, K2Node_DynamicCast_bSuccess) == 0x0000B0, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_bBlockingHit_1) == 0x0000B1, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_bBlockingHit_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_bInitialOverlap_1) == 0x0000B2, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_bInitialOverlap_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_Time_1) == 0x0000B4, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_Time_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_Distance_1) == 0x0000B8, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_Distance_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_Location_1) == 0x0000BC, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_Location_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_ImpactPoint_1) == 0x0000C8, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_ImpactPoint_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_Normal_1) == 0x0000D4, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_Normal_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_ImpactNormal_1) == 0x0000E0, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_ImpactNormal_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_PhysMat_1) == 0x0000F0, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_PhysMat_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_HitActor_1) == 0x0000F8, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_HitActor_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_HitComponent_1) == 0x000100, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_HitComponent_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_HitBoneName_1) == 0x000108, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_HitBoneName_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_HitItem_1) == 0x000110, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_HitItem_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_ElementIndex_1) == 0x000114, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_ElementIndex_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_FaceIndex_1) == 0x000118, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_FaceIndex_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_TraceStart_1) == 0x00011C, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_TraceStart_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_BreakHitResult_TraceEnd_1) == 0x000128, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_BreakHitResult_TraceEnd_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_DoesImplementInterface_ReturnValue) == 0x000134, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_DoesImplementInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, K2Node_DynamicCast_AsWire) == 0x000138, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::K2Node_DynamicCast_AsWire' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, K2Node_DynamicCast_bSuccess_1) == 0x000140, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, K2Node_Event_player) == 0x000148, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, K2Node_Event_DeltaSeconds) == 0x000150, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, K2Node_DynamicCast_AsInt_Wire_1) == 0x000158, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::K2Node_DynamicCast_AsInt_Wire_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, K2Node_DynamicCast_bSuccess_2) == 0x000168, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_IsValid_ReturnValue) == 0x000169, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, CallFunc_DoesImplementInterface_ReturnValue_1) == 0x00016A, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::CallFunc_DoesImplementInterface_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, K2Node_DynamicCast_AsWire_1) == 0x000170, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::K2Node_DynamicCast_AsWire_1' has a wrong offset!");
static_assert(offsetof(Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark, K2Node_DynamicCast_bSuccess_3) == 0x000178, "Member 'Prop_wireSpark_C_ExecuteUbergraph_prop_wireSpark::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");

// Function prop_wireSpark.prop_wireSpark_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_wireSpark_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireSpark_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_wireSpark_C_ReceiveTick");
static_assert(sizeof(Prop_wireSpark_C_ReceiveTick) == 0x000004, "Wrong size on Prop_wireSpark_C_ReceiveTick");
static_assert(offsetof(Prop_wireSpark_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_wireSpark_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function prop_wireSpark.prop_wireSpark_C.playerHandRelease_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_wireSpark_C_PlayerHandRelease_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireSpark_C_PlayerHandRelease_RMB) == 0x000008, "Wrong alignment on Prop_wireSpark_C_PlayerHandRelease_RMB");
static_assert(sizeof(Prop_wireSpark_C_PlayerHandRelease_RMB) == 0x000008, "Wrong size on Prop_wireSpark_C_PlayerHandRelease_RMB");
static_assert(offsetof(Prop_wireSpark_C_PlayerHandRelease_RMB, Player) == 0x000000, "Member 'Prop_wireSpark_C_PlayerHandRelease_RMB::Player' has a wrong offset!");

// Function prop_wireSpark.prop_wireSpark_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_wireSpark_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireSpark_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_wireSpark_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_wireSpark_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_wireSpark_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_wireSpark_C_PlayerHandUse_RMB, Player) == 0x000000, "Member 'Prop_wireSpark_C_PlayerHandUse_RMB::Player' has a wrong offset!");

// Function prop_wireSpark.prop_wireSpark_C.playerHandUse_LMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_wireSpark_C_PlayerHandUse_LMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wireSpark_C_PlayerHandUse_LMB) == 0x000008, "Wrong alignment on Prop_wireSpark_C_PlayerHandUse_LMB");
static_assert(sizeof(Prop_wireSpark_C_PlayerHandUse_LMB) == 0x000008, "Wrong size on Prop_wireSpark_C_PlayerHandUse_LMB");
static_assert(offsetof(Prop_wireSpark_C_PlayerHandUse_LMB, Player) == 0x000000, "Member 'Prop_wireSpark_C_PlayerHandUse_LMB::Player' has a wrong offset!");

}

