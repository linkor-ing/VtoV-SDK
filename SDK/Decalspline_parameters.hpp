#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Decalspline

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function decalspline.decalspline_C.UserConstructionScript
// 0x00F0 (0x00F0 - 0x0000)
struct Decalspline_C_UserConstructionScript final
{
public:
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Temp_struct_Variable;                              // 0x0020(0x0030)(ConstParm, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USplineMeshComponent*                   CallFunc_AddComponent_ReturnValue;                 // 0x0058(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetScaleAtSplinePoint_ReturnValue;        // 0x006C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetScaleAtSplinePoint_ReturnValue_1;      // 0x0078(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X;                            // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y;                            // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z;                            // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_X_1;                          // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Y_1;                          // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector_Z_1;                          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x009C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue_1;               // 0x00AC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTangentAtSplinePoint_ReturnValue;      // 0x00B4(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue;     // 0x00C0(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTangentAtSplinePoint_ReturnValue_1;    // 0x00CC(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetLocationAtSplinePoint_ReturnValue_1;   // 0x00D8(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumberOfSplinePoints_ReturnValue_1;    // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Decalspline_C_UserConstructionScript) == 0x000010, "Wrong alignment on Decalspline_C_UserConstructionScript");
static_assert(sizeof(Decalspline_C_UserConstructionScript) == 0x0000F0, "Wrong size on Decalspline_C_UserConstructionScript");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue) == 0x000000, "Member 'Decalspline_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000008, "Member 'Decalspline_C_UserConstructionScript::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue) == 0x000010, "Member 'Decalspline_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, Temp_int_Variable) == 0x000014, "Member 'Decalspline_C_UserConstructionScript::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, Temp_struct_Variable) == 0x000020, "Member 'Decalspline_C_UserConstructionScript::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000050, "Member 'Decalspline_C_UserConstructionScript::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_AddComponent_ReturnValue) == 0x000058, "Member 'Decalspline_C_UserConstructionScript::CallFunc_AddComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_EqualEqual_IntInt_ReturnValue_1) == 0x000060, "Member 'Decalspline_C_UserConstructionScript::CallFunc_EqualEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'Decalspline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_Add_IntInt_ReturnValue_1) == 0x000068, "Member 'Decalspline_C_UserConstructionScript::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_GetScaleAtSplinePoint_ReturnValue) == 0x00006C, "Member 'Decalspline_C_UserConstructionScript::CallFunc_GetScaleAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_GetScaleAtSplinePoint_ReturnValue_1) == 0x000078, "Member 'Decalspline_C_UserConstructionScript::CallFunc_GetScaleAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_BreakVector_X) == 0x000084, "Member 'Decalspline_C_UserConstructionScript::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_BreakVector_Y) == 0x000088, "Member 'Decalspline_C_UserConstructionScript::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_BreakVector_Z) == 0x00008C, "Member 'Decalspline_C_UserConstructionScript::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_BreakVector_X_1) == 0x000090, "Member 'Decalspline_C_UserConstructionScript::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_BreakVector_Y_1) == 0x000094, "Member 'Decalspline_C_UserConstructionScript::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_BreakVector_Z_1) == 0x000098, "Member 'Decalspline_C_UserConstructionScript::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x00009C, "Member 'Decalspline_C_UserConstructionScript::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x0000A0, "Member 'Decalspline_C_UserConstructionScript::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_MakeVector2D_ReturnValue) == 0x0000A4, "Member 'Decalspline_C_UserConstructionScript::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_MakeVector2D_ReturnValue_1) == 0x0000AC, "Member 'Decalspline_C_UserConstructionScript::CallFunc_MakeVector2D_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_GetTangentAtSplinePoint_ReturnValue) == 0x0000B4, "Member 'Decalspline_C_UserConstructionScript::CallFunc_GetTangentAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_GetLocationAtSplinePoint_ReturnValue) == 0x0000C0, "Member 'Decalspline_C_UserConstructionScript::CallFunc_GetLocationAtSplinePoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_GetTangentAtSplinePoint_ReturnValue_1) == 0x0000CC, "Member 'Decalspline_C_UserConstructionScript::CallFunc_GetTangentAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_GetLocationAtSplinePoint_ReturnValue_1) == 0x0000D8, "Member 'Decalspline_C_UserConstructionScript::CallFunc_GetLocationAtSplinePoint_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_GetNumberOfSplinePoints_ReturnValue_1) == 0x0000E4, "Member 'Decalspline_C_UserConstructionScript::CallFunc_GetNumberOfSplinePoints_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x0000E8, "Member 'Decalspline_C_UserConstructionScript::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Decalspline_C_UserConstructionScript, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000EC, "Member 'Decalspline_C_UserConstructionScript::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");

}

