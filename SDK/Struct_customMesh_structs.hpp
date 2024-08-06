#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_customMesh

#include "Basic.hpp"

#include "Struct_mVector_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct struct_customMesh.struct_customMesh
// 0x0050 (0x0050 - 0x0000)
struct FStruct_customMesh final
{
public:
	TArray<struct FVector>                        Vertices_4_E82F1F91457B10553B737BBDE86E8B84;       // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 Triangles_7_F6BA3265428BD2DF23374A9E373F67CF;      // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<struct FVector>                        Normals_10_B0A8B5184289A942675DD9AE35E3FB22;       // 0x0020(0x0010)(Edit, BlueprintVisible)
	TArray<struct FVector2D>                      Uv_13_E11FFB564376D8ABF22A929A195A6B1F;            // 0x0030(0x0010)(Edit, BlueprintVisible)
	TArray<struct FStruct_mVector>                Coll_18_965663C44B93DE0825AEB384CA36E116;          // 0x0040(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FStruct_customMesh) == 0x000008, "Wrong alignment on FStruct_customMesh");
static_assert(sizeof(FStruct_customMesh) == 0x000050, "Wrong size on FStruct_customMesh");
static_assert(offsetof(FStruct_customMesh, Vertices_4_E82F1F91457B10553B737BBDE86E8B84) == 0x000000, "Member 'FStruct_customMesh::Vertices_4_E82F1F91457B10553B737BBDE86E8B84' has a wrong offset!");
static_assert(offsetof(FStruct_customMesh, Triangles_7_F6BA3265428BD2DF23374A9E373F67CF) == 0x000010, "Member 'FStruct_customMesh::Triangles_7_F6BA3265428BD2DF23374A9E373F67CF' has a wrong offset!");
static_assert(offsetof(FStruct_customMesh, Normals_10_B0A8B5184289A942675DD9AE35E3FB22) == 0x000020, "Member 'FStruct_customMesh::Normals_10_B0A8B5184289A942675DD9AE35E3FB22' has a wrong offset!");
static_assert(offsetof(FStruct_customMesh, Uv_13_E11FFB564376D8ABF22A929A195A6B1F) == 0x000030, "Member 'FStruct_customMesh::Uv_13_E11FFB564376D8ABF22A929A195A6B1F' has a wrong offset!");
static_assert(offsetof(FStruct_customMesh, Coll_18_965663C44B93DE0825AEB384CA36E116) == 0x000040, "Member 'FStruct_customMesh::Coll_18_965663C44B93DE0825AEB384CA36E116' has a wrong offset!");

}

