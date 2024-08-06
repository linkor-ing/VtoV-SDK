#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wallclock

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function prop_wallclock.prop_wallclock_C.ExecuteUbergraph_prop_wallclock
// 0x0030 (0x0030 - 0x0000)
struct Prop_wallclock_C_ExecuteUbergraph_prop_wallclock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                          CallFunc_GetAnimInstance_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWallclockArrows_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsWallclock_Arrows_Skeleton_Anim_Blueprint; // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wallclock_C_ExecuteUbergraph_prop_wallclock) == 0x000008, "Wrong alignment on Prop_wallclock_C_ExecuteUbergraph_prop_wallclock");
static_assert(sizeof(Prop_wallclock_C_ExecuteUbergraph_prop_wallclock) == 0x000030, "Wrong size on Prop_wallclock_C_ExecuteUbergraph_prop_wallclock");
static_assert(offsetof(Prop_wallclock_C_ExecuteUbergraph_prop_wallclock, EntryPoint) == 0x000000, "Member 'Prop_wallclock_C_ExecuteUbergraph_prop_wallclock::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_ExecuteUbergraph_prop_wallclock, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'Prop_wallclock_C_ExecuteUbergraph_prop_wallclock::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_ExecuteUbergraph_prop_wallclock, CallFunc_GetAnimInstance_ReturnValue) == 0x000008, "Member 'Prop_wallclock_C_ExecuteUbergraph_prop_wallclock::CallFunc_GetAnimInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_ExecuteUbergraph_prop_wallclock, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000010, "Member 'Prop_wallclock_C_ExecuteUbergraph_prop_wallclock::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_ExecuteUbergraph_prop_wallclock, K2Node_DynamicCast_AsWallclock_Arrows_Skeleton_Anim_Blueprint) == 0x000018, "Member 'Prop_wallclock_C_ExecuteUbergraph_prop_wallclock::K2Node_DynamicCast_AsWallclock_Arrows_Skeleton_Anim_Blueprint' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_ExecuteUbergraph_prop_wallclock, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'Prop_wallclock_C_ExecuteUbergraph_prop_wallclock::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_ExecuteUbergraph_prop_wallclock, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000024, "Member 'Prop_wallclock_C_ExecuteUbergraph_prop_wallclock::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_ExecuteUbergraph_prop_wallclock, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000028, "Member 'Prop_wallclock_C_ExecuteUbergraph_prop_wallclock::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");

// Function prop_wallclock.prop_wallclock_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_wallclock_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wallclock_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_wallclock_C_ReceiveTick");
static_assert(sizeof(Prop_wallclock_C_ReceiveTick) == 0x000004, "Wrong size on Prop_wallclock_C_ReceiveTick");
static_assert(offsetof(Prop_wallclock_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_wallclock_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function prop_wallclock.prop_wallclock_C.lookAt
// 0x01A8 (0x01A8 - 0x0000)
struct Prop_wallclock_C_LookAt final
{
public:
	class AMainPlayer_C*                          Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             Param_Hit;                                         // 0x0008(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          Return;                                            // 0x0090(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_91[0x7];                                       // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Text;                                              // 0x0098(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    boundObjectReplace;                                // 0x00A8(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Number;                                            // 0x00B0(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x7];                                       // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x00C0(0x0018)()
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x00D8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00F0(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0130(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0170(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0180(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0198(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_wallclock_C_LookAt) == 0x000008, "Wrong alignment on Prop_wallclock_C_LookAt");
static_assert(sizeof(Prop_wallclock_C_LookAt) == 0x0001A8, "Wrong size on Prop_wallclock_C_LookAt");
static_assert(offsetof(Prop_wallclock_C_LookAt, Player) == 0x000000, "Member 'Prop_wallclock_C_LookAt::Player' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_LookAt, Param_Hit) == 0x000008, "Member 'Prop_wallclock_C_LookAt::Param_Hit' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_LookAt, Return) == 0x000090, "Member 'Prop_wallclock_C_LookAt::Return' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_LookAt, Text) == 0x000098, "Member 'Prop_wallclock_C_LookAt::Text' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_LookAt, boundObjectReplace) == 0x0000A8, "Member 'Prop_wallclock_C_LookAt::boundObjectReplace' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_LookAt, Number) == 0x0000B0, "Member 'Prop_wallclock_C_LookAt::Number' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_LookAt, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x0000B8, "Member 'Prop_wallclock_C_LookAt::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_LookAt, CallFunc_Conv_IntToText_ReturnValue) == 0x0000C0, "Member 'Prop_wallclock_C_LookAt::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_LookAt, CallFunc_Conv_IntToText_ReturnValue_1) == 0x0000D8, "Member 'Prop_wallclock_C_LookAt::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_LookAt, K2Node_MakeStruct_FormatArgumentData) == 0x0000F0, "Member 'Prop_wallclock_C_LookAt::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_LookAt, K2Node_MakeStruct_FormatArgumentData_1) == 0x000130, "Member 'Prop_wallclock_C_LookAt::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_LookAt, K2Node_MakeArray_Array) == 0x000170, "Member 'Prop_wallclock_C_LookAt::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_LookAt, CallFunc_Format_ReturnValue) == 0x000180, "Member 'Prop_wallclock_C_LookAt::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_wallclock_C_LookAt, CallFunc_Conv_TextToString_ReturnValue) == 0x000198, "Member 'Prop_wallclock_C_LookAt::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

