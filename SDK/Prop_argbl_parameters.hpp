#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_argbl

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_argbl.prop_argbl_C.ExecuteUbergraph_prop_argbl
// 0x00C8 (0x00C8 - 0x0000)
struct Prop_argbl_C_ExecuteUbergraph_prop_argbl final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x0004(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue;        // 0x0010(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue;             // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue_1;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0048(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorForwardVector_ReturnValue_1;      // 0x0054(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                   CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0068(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0074(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x008C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Dot_VectorVector_ReturnValue_2;           // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SignOfFloat_ReturnValue;                  // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Abs_ReturnValue;                          // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_2;        // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_3;        // 0x00AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x00B0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue_1;           // 0x00BC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_argbl_C_ExecuteUbergraph_prop_argbl) == 0x000008, "Wrong alignment on Prop_argbl_C_ExecuteUbergraph_prop_argbl");
static_assert(sizeof(Prop_argbl_C_ExecuteUbergraph_prop_argbl) == 0x0000C8, "Wrong size on Prop_argbl_C_ExecuteUbergraph_prop_argbl");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, EntryPoint) == 0x000000, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::EntryPoint' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_GetActorRightVector_ReturnValue) == 0x000004, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_GetActorForwardVector_ReturnValue) == 0x000010, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_GetActorForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Dot_VectorVector_ReturnValue) == 0x00001C, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Dot_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Dot_VectorVector_ReturnValue_1) == 0x000020, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Dot_VectorVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000024, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000028, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00002C, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000038, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, K2Node_Event_DeltaSeconds) == 0x000044, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Add_VectorVector_ReturnValue) == 0x000048, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_GetActorForwardVector_ReturnValue_1) == 0x000054, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_GetActorForwardVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_GetPlayerCameraManager_ReturnValue) == 0x000060, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_GetPlayerCameraManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000068, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000074, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000080, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Normal_ReturnValue) == 0x00008C, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Dot_VectorVector_ReturnValue_2) == 0x000098, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Dot_VectorVector_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_SignOfFloat_ReturnValue) == 0x00009C, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_SignOfFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Abs_ReturnValue) == 0x0000A0, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Abs_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_MultiplyMultiply_FloatFloat_ReturnValue) == 0x0000A4, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_MultiplyMultiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Multiply_FloatFloat_ReturnValue_2) == 0x0000A8, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Multiply_FloatFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Multiply_FloatFloat_ReturnValue_3) == 0x0000AC, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Multiply_FloatFloat_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Multiply_VectorFloat_ReturnValue_2) == 0x0000B0, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Multiply_VectorFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_ExecuteUbergraph_prop_argbl, CallFunc_Add_VectorVector_ReturnValue_1) == 0x0000BC, "Member 'Prop_argbl_C_ExecuteUbergraph_prop_argbl::CallFunc_Add_VectorVector_ReturnValue_1' has a wrong offset!");

// Function prop_argbl.prop_argbl_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct Prop_argbl_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_argbl_C_ReceiveTick) == 0x000004, "Wrong alignment on Prop_argbl_C_ReceiveTick");
static_assert(sizeof(Prop_argbl_C_ReceiveTick) == 0x000004, "Wrong size on Prop_argbl_C_ReceiveTick");
static_assert(offsetof(Prop_argbl_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'Prop_argbl_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function prop_argbl.prop_argbl_C.setmats
// 0x0018 (0x0018 - 0x0000)
struct Prop_argbl_C_Setmats final
{
public:
	class AMainGamemode_C*                        CallFunc_getMainGamemode_AsMain_Gamemode;          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             CallFunc_Array_Get_Item_1;                         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_argbl_C_Setmats) == 0x000008, "Wrong alignment on Prop_argbl_C_Setmats");
static_assert(sizeof(Prop_argbl_C_Setmats) == 0x000018, "Wrong size on Prop_argbl_C_Setmats");
static_assert(offsetof(Prop_argbl_C_Setmats, CallFunc_getMainGamemode_AsMain_Gamemode) == 0x000000, "Member 'Prop_argbl_C_Setmats::CallFunc_getMainGamemode_AsMain_Gamemode' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_Setmats, CallFunc_Array_Get_Item) == 0x000008, "Member 'Prop_argbl_C_Setmats::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_Setmats, CallFunc_Array_Get_Item_1) == 0x000010, "Member 'Prop_argbl_C_Setmats::CallFunc_Array_Get_Item_1' has a wrong offset!");

// Function prop_argbl.prop_argbl_C.UserConstructionScript
// 0x0010 (0x0010 - 0x0000)
struct Prop_argbl_C_UserConstructionScript final
{
public:
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_argbl_C_UserConstructionScript) == 0x000008, "Wrong alignment on Prop_argbl_C_UserConstructionScript");
static_assert(sizeof(Prop_argbl_C_UserConstructionScript) == 0x000010, "Wrong size on Prop_argbl_C_UserConstructionScript");
static_assert(offsetof(Prop_argbl_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000000, "Member 'Prop_argbl_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_argbl_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue_1) == 0x000008, "Member 'Prop_argbl_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue_1' has a wrong offset!");

}

