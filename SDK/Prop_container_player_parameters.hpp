#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_container_player

#include "Basic.hpp"

#include "Struct_save_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_container_player.prop_container_player_C.ignoreSave
// 0x0001 (0x0001 - 0x0000)
struct Prop_container_player_C_IgnoreSave final
{
public:
	bool                                          Param_IgnoreSave;                                  // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_container_player_C_IgnoreSave) == 0x000001, "Wrong alignment on Prop_container_player_C_IgnoreSave");
static_assert(sizeof(Prop_container_player_C_IgnoreSave) == 0x000001, "Wrong size on Prop_container_player_C_IgnoreSave");
static_assert(offsetof(Prop_container_player_C_IgnoreSave, Param_IgnoreSave) == 0x000000, "Member 'Prop_container_player_C_IgnoreSave::Param_IgnoreSave' has a wrong offset!");

// Function prop_container_player.prop_container_player_C.extract
// 0x01C0 (0x01C0 - 0x0000)
struct Prop_container_player_C_Extract final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0010(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x004C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0xC];                                       // 0x0064(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0070(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_takeObj_return;                           // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A1[0xF];                                       // 0x00A1(0x000F)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_save                           CallFunc_takeObj_Output;                           // 0x00B0(0x00C0)(HasGetValueTypeHash)
	class AActor*                                 CallFunc_takeObj_object;                           // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IInt_save1_C>          K2Node_DynamicCast_AsInt_Save_1;                   // 0x0188(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_199[0x7];                                      // 0x0199(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x01A0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_loadData_return;                          // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMeshComponent*                   K2Node_DynamicCast_AsStatic_Mesh_Component;        // 0x01B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_container_player_C_Extract) == 0x000010, "Wrong alignment on Prop_container_player_C_Extract");
static_assert(sizeof(Prop_container_player_C_Extract) == 0x0001C0, "Wrong size on Prop_container_player_C_Extract");
static_assert(offsetof(Prop_container_player_C_Extract, Param_Index) == 0x000000, "Member 'Prop_container_player_C_Extract::Param_Index' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, CallFunc_GetPlayerPawn_ReturnValue) == 0x000008, "Member 'Prop_container_player_C_Extract::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, CallFunc_GetTransform_ReturnValue) == 0x000010, "Member 'Prop_container_player_C_Extract::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, CallFunc_BreakTransform_Location) == 0x000040, "Member 'Prop_container_player_C_Extract::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, CallFunc_BreakTransform_Rotation) == 0x00004C, "Member 'Prop_container_player_C_Extract::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, CallFunc_BreakTransform_Scale) == 0x000058, "Member 'Prop_container_player_C_Extract::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, CallFunc_MakeTransform_ReturnValue) == 0x000070, "Member 'Prop_container_player_C_Extract::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, CallFunc_takeObj_return) == 0x0000A0, "Member 'Prop_container_player_C_Extract::CallFunc_takeObj_return' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, CallFunc_takeObj_Output) == 0x0000B0, "Member 'Prop_container_player_C_Extract::CallFunc_takeObj_Output' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, CallFunc_takeObj_object) == 0x000170, "Member 'Prop_container_player_C_Extract::CallFunc_takeObj_object' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000178, "Member 'Prop_container_player_C_Extract::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, CallFunc_FinishSpawningActor_ReturnValue) == 0x000180, "Member 'Prop_container_player_C_Extract::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, K2Node_DynamicCast_AsInt_Save_1) == 0x000188, "Member 'Prop_container_player_C_Extract::K2Node_DynamicCast_AsInt_Save_1' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, K2Node_DynamicCast_bSuccess) == 0x000198, "Member 'Prop_container_player_C_Extract::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0001A0, "Member 'Prop_container_player_C_Extract::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, CallFunc_loadData_return) == 0x0001A8, "Member 'Prop_container_player_C_Extract::CallFunc_loadData_return' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, K2Node_DynamicCast_AsStatic_Mesh_Component) == 0x0001B0, "Member 'Prop_container_player_C_Extract::K2Node_DynamicCast_AsStatic_Mesh_Component' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_Extract, K2Node_DynamicCast_bSuccess_1) == 0x0001B8, "Member 'Prop_container_player_C_Extract::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function prop_container_player.prop_container_player_C.loadData
// 0x00D0 (0x00D0 - 0x0000)
struct Prop_container_player_C_LoadData final
{
public:
	struct FStruct_save                           Data;                                              // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          Return;                                            // 0x00C0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Prop_container_player_C_LoadData) == 0x000010, "Wrong alignment on Prop_container_player_C_LoadData");
static_assert(sizeof(Prop_container_player_C_LoadData) == 0x0000D0, "Wrong size on Prop_container_player_C_LoadData");
static_assert(offsetof(Prop_container_player_C_LoadData, Data) == 0x000000, "Member 'Prop_container_player_C_LoadData::Data' has a wrong offset!");
static_assert(offsetof(Prop_container_player_C_LoadData, Return) == 0x0000C0, "Member 'Prop_container_player_C_LoadData::Return' has a wrong offset!");

}

