#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_keycard

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "Engine_structs.hpp"
#include "Struct_mString_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_keycard.prop_keycard_C.ExecuteUbergraph_prop_keycard
// 0x00B0 (0x00B0 - 0x0000)
struct Prop_keycard_C_ExecuteUbergraph_prop_keycard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_383F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AHook_C*                                K2Node_Event_hook;                                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainPlayer_C*                          K2Node_Event_player;                               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BreakHitResult_bBlockingHit;              // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BreakHitResult_bInitialOverlap;           // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3840[0x2];                                     // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_BreakHitResult_Time;                      // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakHitResult_Distance;                  // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Location;                  // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactPoint;               // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_Normal;                    // 0x003C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_ImpactNormal;              // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3841[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysicalMaterial*                      CallFunc_BreakHitResult_PhysMat;                   // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BreakHitResult_HitActor;                  // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    CallFunc_BreakHitResult_HitComponent;              // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_BreakHitResult_HitBoneName;               // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_HitItem;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_ElementIndex;              // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_BreakHitResult_FaceIndex;                 // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceStart;                // 0x0084(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakHitResult_TraceEnd;                  // 0x0090(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3842[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APasswordLock_C*                        K2Node_DynamicCast_AsPassword_Lock;                // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_keycard_C_ExecuteUbergraph_prop_keycard) == 0x000008, "Wrong alignment on Prop_keycard_C_ExecuteUbergraph_prop_keycard");
static_assert(sizeof(Prop_keycard_C_ExecuteUbergraph_prop_keycard) == 0x0000B0, "Wrong size on Prop_keycard_C_ExecuteUbergraph_prop_keycard");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, EntryPoint) == 0x000000, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, K2Node_Event_hook) == 0x000008, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::K2Node_Event_hook' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, K2Node_Event_player) == 0x000010, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_bBlockingHit) == 0x000018, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_bBlockingHit' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_bInitialOverlap) == 0x000019, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_bInitialOverlap' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_Time) == 0x00001C, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_Time' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_Distance) == 0x000020, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_Distance' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_Location) == 0x000024, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_Location' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_ImpactPoint) == 0x000030, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_ImpactPoint' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_Normal) == 0x00003C, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_Normal' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_ImpactNormal) == 0x000048, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_ImpactNormal' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_PhysMat) == 0x000058, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_PhysMat' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_HitActor) == 0x000060, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_HitActor' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_HitComponent) == 0x000068, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_HitComponent' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_HitBoneName) == 0x000070, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_HitBoneName' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_HitItem) == 0x000078, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_HitItem' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_ElementIndex) == 0x00007C, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_ElementIndex' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_FaceIndex) == 0x000080, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_FaceIndex' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_TraceStart) == 0x000084, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_TraceStart' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_BreakHitResult_TraceEnd) == 0x000090, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_BreakHitResult_TraceEnd' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, K2Node_DynamicCast_AsPassword_Lock) == 0x0000A0, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::K2Node_DynamicCast_AsPassword_Lock' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_ExecuteUbergraph_prop_keycard, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0000A9, "Member 'Prop_keycard_C_ExecuteUbergraph_prop_keycard::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");

// Function prop_keycard.prop_keycard_C.hooked
// 0x0008 (0x0008 - 0x0000)
struct Prop_keycard_C_Hooked final
{
public:
	class AHook_C*                                Param_Hook;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_keycard_C_Hooked) == 0x000008, "Wrong alignment on Prop_keycard_C_Hooked");
static_assert(sizeof(Prop_keycard_C_Hooked) == 0x000008, "Wrong size on Prop_keycard_C_Hooked");
static_assert(offsetof(Prop_keycard_C_Hooked, Param_Hook) == 0x000000, "Member 'Prop_keycard_C_Hooked::Param_Hook' has a wrong offset!");

// Function prop_keycard.prop_keycard_C.playerHandUse_RMB
// 0x0008 (0x0008 - 0x0000)
struct Prop_keycard_C_PlayerHandUse_RMB final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_keycard_C_PlayerHandUse_RMB) == 0x000008, "Wrong alignment on Prop_keycard_C_PlayerHandUse_RMB");
static_assert(sizeof(Prop_keycard_C_PlayerHandUse_RMB) == 0x000008, "Wrong size on Prop_keycard_C_PlayerHandUse_RMB");
static_assert(offsetof(Prop_keycard_C_PlayerHandUse_RMB, Player) == 0x000000, "Member 'Prop_keycard_C_PlayerHandUse_RMB::Player' has a wrong offset!");

// Function prop_keycard.prop_keycard_C.loadData
// 0x00F0 (0x00F0 - 0x0000)
struct Prop_keycard_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_loadData_return;                          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3843[0x6];                                     // 0x00C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_mString                        CallFunc_Array_Get_Item;                           // 0x00C8(0x0010)(HasGetValueTypeHash)
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_keycard_C_LoadData) == 0x000010, "Wrong alignment on Prop_keycard_C_LoadData");
static_assert(sizeof(Prop_keycard_C_LoadData) == 0x0000F0, "Wrong size on Prop_keycard_C_LoadData");
static_assert(offsetof(Prop_keycard_C_LoadData, Data) == 0x000000, "Member 'Prop_keycard_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_LoadData, Return) == 0x0000C0, "Member 'Prop_keycard_C_LoadData::Return' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_LoadData, CallFunc_loadData_return) == 0x0000C1, "Member 'Prop_keycard_C_LoadData::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_LoadData, CallFunc_Array_Get_Item) == 0x0000C8, "Member 'Prop_keycard_C_LoadData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_LoadData, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'Prop_keycard_C_LoadData::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_keycard.prop_keycard_C.getData
// 0x0290 (0x0290 - 0x0000)
struct Prop_keycard_C_GetData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(Parm, OutParm, HasGetValueTypeHash)
	struct FStruct_save                           CallFunc_getData_data;                             // 0x00C0(0x00C0)(HasGetValueTypeHash)
	TArray<class FString>                         K2Node_MakeArray_Array;                            // 0x0180(0x0010)(ReferenceParm)
	struct FStruct_mString                        K2Node_MakeStruct_struct_mString;                  // 0x0190(0x0010)(HasGetValueTypeHash)
	struct FStruct_mString                        CallFunc_Array_Get_Item;                           // 0x01A0(0x0010)(HasGetValueTypeHash)
	struct FStruct_mString                        CallFunc_Array_Get_Item_1;                         // 0x01B0(0x0010)(HasGetValueTypeHash)
	TArray<struct FStruct_mString>                K2Node_MakeArray_Array_1;                          // 0x01C0(0x0010)(ReferenceParm)
	struct FStruct_save                           K2Node_SetFieldsInStruct_StructOut;                // 0x01D0(0x00C0)(HasGetValueTypeHash)
};
static_assert(alignof(Prop_keycard_C_GetData) == 0x000010, "Wrong alignment on Prop_keycard_C_GetData");
static_assert(sizeof(Prop_keycard_C_GetData) == 0x000290, "Wrong size on Prop_keycard_C_GetData");
static_assert(offsetof(Prop_keycard_C_GetData, Data) == 0x000000, "Member 'Prop_keycard_C_GetData::Data' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_GetData, CallFunc_getData_data) == 0x0000C0, "Member 'Prop_keycard_C_GetData::CallFunc_getData_data' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_GetData, K2Node_MakeArray_Array) == 0x000180, "Member 'Prop_keycard_C_GetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_GetData, K2Node_MakeStruct_struct_mString) == 0x000190, "Member 'Prop_keycard_C_GetData::K2Node_MakeStruct_struct_mString' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_GetData, CallFunc_Array_Get_Item) == 0x0001A0, "Member 'Prop_keycard_C_GetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_GetData, CallFunc_Array_Get_Item_1) == 0x0001B0, "Member 'Prop_keycard_C_GetData::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_GetData, K2Node_MakeArray_Array_1) == 0x0001C0, "Member 'Prop_keycard_C_GetData::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_GetData, K2Node_SetFieldsInStruct_StructOut) == 0x0001D0, "Member 'Prop_keycard_C_GetData::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

// Function prop_keycard.prop_keycard_C.lookAt
// 0x00D0 (0x00D0 - 0x0000)
struct Prop_keycard_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3844[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x00B0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_keycard_C_LookAt) == 0x000008, "Wrong alignment on Prop_keycard_C_LookAt");
static_assert(sizeof(Prop_keycard_C_LookAt) == 0x0000D0, "Wrong size on Prop_keycard_C_LookAt");
static_assert(offsetof(Prop_keycard_C_LookAt, Player) == 0x000000, "Member 'Prop_keycard_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_LookAt, Param_Hit) == 0x000008, "Member 'Prop_keycard_C_LookAt::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_LookAt, Return) == 0x000090, "Member 'Prop_keycard_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_LookAt, Text) == 0x000098, "Member 'Prop_keycard_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Prop_keycard_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_LookAt, CallFunc_Concat_StrStr_ReturnValue) == 0x0000B0, "Member 'Prop_keycard_C_LookAt::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_keycard_C_LookAt, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000C0, "Member 'Prop_keycard_C_LookAt::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");

}

