#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_kerfurDrip

#include "Basic.hpp"

#include "Enum_kerfurDripType_structs.hpp"


namespace SDK
{

// UserDefinedStruct struct_kerfurDrip.struct_kerfurDrip
// 0x0018 (0x0018 - 0x0000)
struct FStruct_kerfurDrip final
{
public:
	class UStaticMesh*                            DripMesh_2_0BECAD8D458D85CD1786BDA1D90C894B;       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DripBone_5_1DFCA8714E61582B52460E8DE622A2B4;       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_kerfurDripType                           Type_8_D8CCF30E439D901AD132CC84D93D1756;           // 0x0010(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_kerfurDrip) == 0x000008, "Wrong alignment on FStruct_kerfurDrip");
static_assert(sizeof(FStruct_kerfurDrip) == 0x000018, "Wrong size on FStruct_kerfurDrip");
static_assert(offsetof(FStruct_kerfurDrip, DripMesh_2_0BECAD8D458D85CD1786BDA1D90C894B) == 0x000000, "Member 'FStruct_kerfurDrip::DripMesh_2_0BECAD8D458D85CD1786BDA1D90C894B' has a wrong offset!");
static_assert(offsetof(FStruct_kerfurDrip, DripBone_5_1DFCA8714E61582B52460E8DE622A2B4) == 0x000008, "Member 'FStruct_kerfurDrip::DripBone_5_1DFCA8714E61582B52460E8DE622A2B4' has a wrong offset!");
static_assert(offsetof(FStruct_kerfurDrip, Type_8_D8CCF30E439D901AD132CC84D93D1756) == 0x000010, "Member 'FStruct_kerfurDrip::Type_8_D8CCF30E439D901AD132CC84D93D1756' has a wrong offset!");

}

