#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomMeshComponent

#include "Basic.hpp"

#include "CustomMeshComponent_structs.hpp"


namespace SDK::Params
{

// Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles
// 0x0010 (0x0010 - 0x0000)
struct CustomMeshComponent_AddCustomMeshTriangles final
{
public:
	TArray<struct FCustomMeshTriangle>            Triangles;                                         // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(CustomMeshComponent_AddCustomMeshTriangles) == 0x000008, "Wrong alignment on CustomMeshComponent_AddCustomMeshTriangles");
static_assert(sizeof(CustomMeshComponent_AddCustomMeshTriangles) == 0x000010, "Wrong size on CustomMeshComponent_AddCustomMeshTriangles");
static_assert(offsetof(CustomMeshComponent_AddCustomMeshTriangles, Triangles) == 0x000000, "Member 'CustomMeshComponent_AddCustomMeshTriangles::Triangles' has a wrong offset!");

// Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles
// 0x0018 (0x0018 - 0x0000)
struct CustomMeshComponent_SetCustomMeshTriangles final
{
public:
	TArray<struct FCustomMeshTriangle>            Triangles;                                         // 0x0000(0x0010)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1931[0x7];                                     // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(CustomMeshComponent_SetCustomMeshTriangles) == 0x000008, "Wrong alignment on CustomMeshComponent_SetCustomMeshTriangles");
static_assert(sizeof(CustomMeshComponent_SetCustomMeshTriangles) == 0x000018, "Wrong size on CustomMeshComponent_SetCustomMeshTriangles");
static_assert(offsetof(CustomMeshComponent_SetCustomMeshTriangles, Triangles) == 0x000000, "Member 'CustomMeshComponent_SetCustomMeshTriangles::Triangles' has a wrong offset!");
static_assert(offsetof(CustomMeshComponent_SetCustomMeshTriangles, ReturnValue) == 0x000010, "Member 'CustomMeshComponent_SetCustomMeshTriangles::ReturnValue' has a wrong offset!");

}

