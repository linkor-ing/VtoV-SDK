#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RigVM

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function RigVM.RigVM.AddRigVMFunction
// 0x0018 (0x0018 - 0x0000)
struct RigVM_AddRigVMFunction final
{
public:
	class UScriptStruct*                          InRigVMStruct;                                     // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   InMethodName;                                      // 0x0008(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(RigVM_AddRigVMFunction) == 0x000008, "Wrong alignment on RigVM_AddRigVMFunction");
static_assert(sizeof(RigVM_AddRigVMFunction) == 0x000018, "Wrong size on RigVM_AddRigVMFunction");
static_assert(offsetof(RigVM_AddRigVMFunction, InRigVMStruct) == 0x000000, "Member 'RigVM_AddRigVMFunction::InRigVMStruct' has a wrong offset!");
static_assert(offsetof(RigVM_AddRigVMFunction, InMethodName) == 0x000008, "Member 'RigVM_AddRigVMFunction::InMethodName' has a wrong offset!");
static_assert(offsetof(RigVM_AddRigVMFunction, ReturnValue) == 0x000010, "Member 'RigVM_AddRigVMFunction::ReturnValue' has a wrong offset!");

// Function RigVM.RigVM.Execute
// 0x000C (0x000C - 0x0000)
struct RigVM_Execute final
{
public:
	class FName                                   InEntryName;                                       // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(RigVM_Execute) == 0x000004, "Wrong alignment on RigVM_Execute");
static_assert(sizeof(RigVM_Execute) == 0x00000C, "Wrong size on RigVM_Execute");
static_assert(offsetof(RigVM_Execute, InEntryName) == 0x000000, "Member 'RigVM_Execute::InEntryName' has a wrong offset!");
static_assert(offsetof(RigVM_Execute, ReturnValue) == 0x000008, "Member 'RigVM_Execute::ReturnValue' has a wrong offset!");

// Function RigVM.RigVM.GetParameterValueBool
// 0x0010 (0x0010 - 0x0000)
struct RigVM_GetParameterValueBool final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x000C(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(RigVM_GetParameterValueBool) == 0x000004, "Wrong alignment on RigVM_GetParameterValueBool");
static_assert(sizeof(RigVM_GetParameterValueBool) == 0x000010, "Wrong size on RigVM_GetParameterValueBool");
static_assert(offsetof(RigVM_GetParameterValueBool, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueBool::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueBool, InArrayIndex) == 0x000008, "Member 'RigVM_GetParameterValueBool::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueBool, ReturnValue) == 0x00000C, "Member 'RigVM_GetParameterValueBool::ReturnValue' has a wrong offset!");

// Function RigVM.RigVM.GetParameterValueFloat
// 0x0010 (0x0010 - 0x0000)
struct RigVM_GetParameterValueFloat final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ReturnValue;                                       // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_GetParameterValueFloat) == 0x000004, "Wrong alignment on RigVM_GetParameterValueFloat");
static_assert(sizeof(RigVM_GetParameterValueFloat) == 0x000010, "Wrong size on RigVM_GetParameterValueFloat");
static_assert(offsetof(RigVM_GetParameterValueFloat, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueFloat::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueFloat, InArrayIndex) == 0x000008, "Member 'RigVM_GetParameterValueFloat::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueFloat, ReturnValue) == 0x00000C, "Member 'RigVM_GetParameterValueFloat::ReturnValue' has a wrong offset!");

// Function RigVM.RigVM.GetParameterValueInt
// 0x0010 (0x0010 - 0x0000)
struct RigVM_GetParameterValueInt final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x000C(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_GetParameterValueInt) == 0x000004, "Wrong alignment on RigVM_GetParameterValueInt");
static_assert(sizeof(RigVM_GetParameterValueInt) == 0x000010, "Wrong size on RigVM_GetParameterValueInt");
static_assert(offsetof(RigVM_GetParameterValueInt, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueInt::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueInt, InArrayIndex) == 0x000008, "Member 'RigVM_GetParameterValueInt::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueInt, ReturnValue) == 0x00000C, "Member 'RigVM_GetParameterValueInt::ReturnValue' has a wrong offset!");

// Function RigVM.RigVM.GetParameterValueName
// 0x0014 (0x0014 - 0x0000)
struct RigVM_GetParameterValueName final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ReturnValue;                                       // 0x000C(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_GetParameterValueName) == 0x000004, "Wrong alignment on RigVM_GetParameterValueName");
static_assert(sizeof(RigVM_GetParameterValueName) == 0x000014, "Wrong size on RigVM_GetParameterValueName");
static_assert(offsetof(RigVM_GetParameterValueName, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueName::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueName, InArrayIndex) == 0x000008, "Member 'RigVM_GetParameterValueName::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueName, ReturnValue) == 0x00000C, "Member 'RigVM_GetParameterValueName::ReturnValue' has a wrong offset!");

// Function RigVM.RigVM.GetParameterValueQuat
// 0x0020 (0x0020 - 0x0000)
struct RigVM_GetParameterValueQuat final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_GetParameterValueQuat) == 0x000010, "Wrong alignment on RigVM_GetParameterValueQuat");
static_assert(sizeof(RigVM_GetParameterValueQuat) == 0x000020, "Wrong size on RigVM_GetParameterValueQuat");
static_assert(offsetof(RigVM_GetParameterValueQuat, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueQuat::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueQuat, InArrayIndex) == 0x000008, "Member 'RigVM_GetParameterValueQuat::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueQuat, ReturnValue) == 0x000010, "Member 'RigVM_GetParameterValueQuat::ReturnValue' has a wrong offset!");

// Function RigVM.RigVM.GetParameterValueString
// 0x0020 (0x0020 - 0x0000)
struct RigVM_GetParameterValueString final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_GetParameterValueString) == 0x000008, "Wrong alignment on RigVM_GetParameterValueString");
static_assert(sizeof(RigVM_GetParameterValueString) == 0x000020, "Wrong size on RigVM_GetParameterValueString");
static_assert(offsetof(RigVM_GetParameterValueString, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueString::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueString, InArrayIndex) == 0x000008, "Member 'RigVM_GetParameterValueString::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueString, ReturnValue) == 0x000010, "Member 'RigVM_GetParameterValueString::ReturnValue' has a wrong offset!");

// Function RigVM.RigVM.GetParameterValueTransform
// 0x0040 (0x0040 - 0x0000)
struct RigVM_GetParameterValueTransform final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             ReturnValue;                                       // 0x0010(0x0030)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_GetParameterValueTransform) == 0x000010, "Wrong alignment on RigVM_GetParameterValueTransform");
static_assert(sizeof(RigVM_GetParameterValueTransform) == 0x000040, "Wrong size on RigVM_GetParameterValueTransform");
static_assert(offsetof(RigVM_GetParameterValueTransform, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueTransform::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueTransform, InArrayIndex) == 0x000008, "Member 'RigVM_GetParameterValueTransform::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueTransform, ReturnValue) == 0x000010, "Member 'RigVM_GetParameterValueTransform::ReturnValue' has a wrong offset!");

// Function RigVM.RigVM.GetParameterValueVector
// 0x0018 (0x0018 - 0x0000)
struct RigVM_GetParameterValueVector final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                ReturnValue;                                       // 0x000C(0x000C)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_GetParameterValueVector) == 0x000004, "Wrong alignment on RigVM_GetParameterValueVector");
static_assert(sizeof(RigVM_GetParameterValueVector) == 0x000018, "Wrong size on RigVM_GetParameterValueVector");
static_assert(offsetof(RigVM_GetParameterValueVector, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueVector::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueVector, InArrayIndex) == 0x000008, "Member 'RigVM_GetParameterValueVector::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueVector, ReturnValue) == 0x00000C, "Member 'RigVM_GetParameterValueVector::ReturnValue' has a wrong offset!");

// Function RigVM.RigVM.GetParameterValueVector2D
// 0x0014 (0x0014 - 0x0000)
struct RigVM_GetParameterValueVector2D final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              ReturnValue;                                       // 0x000C(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_GetParameterValueVector2D) == 0x000004, "Wrong alignment on RigVM_GetParameterValueVector2D");
static_assert(sizeof(RigVM_GetParameterValueVector2D) == 0x000014, "Wrong size on RigVM_GetParameterValueVector2D");
static_assert(offsetof(RigVM_GetParameterValueVector2D, InParameterName) == 0x000000, "Member 'RigVM_GetParameterValueVector2D::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueVector2D, InArrayIndex) == 0x000008, "Member 'RigVM_GetParameterValueVector2D::InArrayIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterValueVector2D, ReturnValue) == 0x00000C, "Member 'RigVM_GetParameterValueVector2D::ReturnValue' has a wrong offset!");

// Function RigVM.RigVM.SetParameterValueBool
// 0x0010 (0x0010 - 0x0000)
struct RigVM_SetParameterValueBool final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          InValue;                                           // 0x0008(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InArrayIndex;                                      // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_SetParameterValueBool) == 0x000004, "Wrong alignment on RigVM_SetParameterValueBool");
static_assert(sizeof(RigVM_SetParameterValueBool) == 0x000010, "Wrong size on RigVM_SetParameterValueBool");
static_assert(offsetof(RigVM_SetParameterValueBool, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueBool::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueBool, InValue) == 0x000008, "Member 'RigVM_SetParameterValueBool::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueBool, InArrayIndex) == 0x00000C, "Member 'RigVM_SetParameterValueBool::InArrayIndex' has a wrong offset!");

// Function RigVM.RigVM.SetParameterValueFloat
// 0x0010 (0x0010 - 0x0000)
struct RigVM_SetParameterValueFloat final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         InValue;                                           // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_SetParameterValueFloat) == 0x000004, "Wrong alignment on RigVM_SetParameterValueFloat");
static_assert(sizeof(RigVM_SetParameterValueFloat) == 0x000010, "Wrong size on RigVM_SetParameterValueFloat");
static_assert(offsetof(RigVM_SetParameterValueFloat, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueFloat::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueFloat, InValue) == 0x000008, "Member 'RigVM_SetParameterValueFloat::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueFloat, InArrayIndex) == 0x00000C, "Member 'RigVM_SetParameterValueFloat::InArrayIndex' has a wrong offset!");

// Function RigVM.RigVM.SetParameterValueInt
// 0x0010 (0x0010 - 0x0000)
struct RigVM_SetParameterValueInt final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InValue;                                           // 0x0008(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x000C(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_SetParameterValueInt) == 0x000004, "Wrong alignment on RigVM_SetParameterValueInt");
static_assert(sizeof(RigVM_SetParameterValueInt) == 0x000010, "Wrong size on RigVM_SetParameterValueInt");
static_assert(offsetof(RigVM_SetParameterValueInt, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueInt::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueInt, InValue) == 0x000008, "Member 'RigVM_SetParameterValueInt::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueInt, InArrayIndex) == 0x00000C, "Member 'RigVM_SetParameterValueInt::InArrayIndex' has a wrong offset!");

// Function RigVM.RigVM.SetParameterValueName
// 0x0014 (0x0014 - 0x0000)
struct RigVM_SetParameterValueName final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   InValue;                                           // 0x0008(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_SetParameterValueName) == 0x000004, "Wrong alignment on RigVM_SetParameterValueName");
static_assert(sizeof(RigVM_SetParameterValueName) == 0x000014, "Wrong size on RigVM_SetParameterValueName");
static_assert(offsetof(RigVM_SetParameterValueName, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueName::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueName, InValue) == 0x000008, "Member 'RigVM_SetParameterValueName::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueName, InArrayIndex) == 0x000010, "Member 'RigVM_SetParameterValueName::InArrayIndex' has a wrong offset!");

// Function RigVM.RigVM.SetParameterValueQuat
// 0x0030 (0x0030 - 0x0000)
struct RigVM_SetParameterValueQuat final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FQuat                                  InValue;                                           // 0x0010(0x0010)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0xC];                                       // 0x0024(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(RigVM_SetParameterValueQuat) == 0x000010, "Wrong alignment on RigVM_SetParameterValueQuat");
static_assert(sizeof(RigVM_SetParameterValueQuat) == 0x000030, "Wrong size on RigVM_SetParameterValueQuat");
static_assert(offsetof(RigVM_SetParameterValueQuat, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueQuat::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueQuat, InValue) == 0x000010, "Member 'RigVM_SetParameterValueQuat::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueQuat, InArrayIndex) == 0x000020, "Member 'RigVM_SetParameterValueQuat::InArrayIndex' has a wrong offset!");

// Function RigVM.RigVM.SetParameterValueString
// 0x0020 (0x0020 - 0x0000)
struct RigVM_SetParameterValueString final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InValue;                                           // 0x0008(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0018(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(RigVM_SetParameterValueString) == 0x000008, "Wrong alignment on RigVM_SetParameterValueString");
static_assert(sizeof(RigVM_SetParameterValueString) == 0x000020, "Wrong size on RigVM_SetParameterValueString");
static_assert(offsetof(RigVM_SetParameterValueString, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueString::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueString, InValue) == 0x000008, "Member 'RigVM_SetParameterValueString::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueString, InArrayIndex) == 0x000018, "Member 'RigVM_SetParameterValueString::InArrayIndex' has a wrong offset!");

// Function RigVM.RigVM.SetParameterValueTransform
// 0x0050 (0x0050 - 0x0000)
struct RigVM_SetParameterValueTransform final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             InValue;                                           // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0040(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_44[0xC];                                       // 0x0044(0x000C)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(RigVM_SetParameterValueTransform) == 0x000010, "Wrong alignment on RigVM_SetParameterValueTransform");
static_assert(sizeof(RigVM_SetParameterValueTransform) == 0x000050, "Wrong size on RigVM_SetParameterValueTransform");
static_assert(offsetof(RigVM_SetParameterValueTransform, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueTransform::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueTransform, InValue) == 0x000010, "Member 'RigVM_SetParameterValueTransform::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueTransform, InArrayIndex) == 0x000040, "Member 'RigVM_SetParameterValueTransform::InArrayIndex' has a wrong offset!");

// Function RigVM.RigVM.SetParameterValueVector
// 0x0018 (0x0018 - 0x0000)
struct RigVM_SetParameterValueVector final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                InValue;                                           // 0x0008(0x000C)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0014(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_SetParameterValueVector) == 0x000004, "Wrong alignment on RigVM_SetParameterValueVector");
static_assert(sizeof(RigVM_SetParameterValueVector) == 0x000018, "Wrong size on RigVM_SetParameterValueVector");
static_assert(offsetof(RigVM_SetParameterValueVector, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueVector::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueVector, InValue) == 0x000008, "Member 'RigVM_SetParameterValueVector::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueVector, InArrayIndex) == 0x000014, "Member 'RigVM_SetParameterValueVector::InArrayIndex' has a wrong offset!");

// Function RigVM.RigVM.SetParameterValueVector2D
// 0x0014 (0x0014 - 0x0000)
struct RigVM_SetParameterValueVector2D final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                              InValue;                                           // 0x0008(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         InArrayIndex;                                      // 0x0010(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_SetParameterValueVector2D) == 0x000004, "Wrong alignment on RigVM_SetParameterValueVector2D");
static_assert(sizeof(RigVM_SetParameterValueVector2D) == 0x000014, "Wrong size on RigVM_SetParameterValueVector2D");
static_assert(offsetof(RigVM_SetParameterValueVector2D, InParameterName) == 0x000000, "Member 'RigVM_SetParameterValueVector2D::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueVector2D, InValue) == 0x000008, "Member 'RigVM_SetParameterValueVector2D::InValue' has a wrong offset!");
static_assert(offsetof(RigVM_SetParameterValueVector2D, InArrayIndex) == 0x000010, "Member 'RigVM_SetParameterValueVector2D::InArrayIndex' has a wrong offset!");

// Function RigVM.RigVM.GetParameterArraySize
// 0x000C (0x000C - 0x0000)
struct RigVM_GetParameterArraySize final
{
public:
	class FName                                   InParameterName;                                   // 0x0000(0x0008)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_GetParameterArraySize) == 0x000004, "Wrong alignment on RigVM_GetParameterArraySize");
static_assert(sizeof(RigVM_GetParameterArraySize) == 0x00000C, "Wrong size on RigVM_GetParameterArraySize");
static_assert(offsetof(RigVM_GetParameterArraySize, InParameterName) == 0x000000, "Member 'RigVM_GetParameterArraySize::InParameterName' has a wrong offset!");
static_assert(offsetof(RigVM_GetParameterArraySize, ReturnValue) == 0x000008, "Member 'RigVM_GetParameterArraySize::ReturnValue' has a wrong offset!");

// Function RigVM.RigVM.GetRigVMFunctionName
// 0x0018 (0x0018 - 0x0000)
struct RigVM_GetRigVMFunctionName final
{
public:
	int32                                         InFunctionIndex;                                   // 0x0000(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ReturnValue;                                       // 0x0008(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(RigVM_GetRigVMFunctionName) == 0x000008, "Wrong alignment on RigVM_GetRigVMFunctionName");
static_assert(sizeof(RigVM_GetRigVMFunctionName) == 0x000018, "Wrong size on RigVM_GetRigVMFunctionName");
static_assert(offsetof(RigVM_GetRigVMFunctionName, InFunctionIndex) == 0x000000, "Member 'RigVM_GetRigVMFunctionName::InFunctionIndex' has a wrong offset!");
static_assert(offsetof(RigVM_GetRigVMFunctionName, ReturnValue) == 0x000008, "Member 'RigVM_GetRigVMFunctionName::ReturnValue' has a wrong offset!");

}

