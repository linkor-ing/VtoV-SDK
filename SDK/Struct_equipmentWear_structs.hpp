#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_equipmentWear

#include "Basic.hpp"

#include "Struct_equipment_structs.hpp"


namespace SDK
{

// UserDefinedStruct struct_equipmentWear.struct_equipmentWear
// 0x0100 (0x0100 - 0x0000)
struct FStruct_equipmentWear final
{
public:
	struct FStruct_equipment                      Data_8_7CAB8627473D5A4CCD0A20B7541551ED;           // 0x0000(0x00F0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         Type_5_06FC60D749467A442672089A8900E93A;           // 0x00F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_equipmentWear) == 0x000010, "Wrong alignment on FStruct_equipmentWear");
static_assert(sizeof(FStruct_equipmentWear) == 0x000100, "Wrong size on FStruct_equipmentWear");
static_assert(offsetof(FStruct_equipmentWear, Data_8_7CAB8627473D5A4CCD0A20B7541551ED) == 0x000000, "Member 'FStruct_equipmentWear::Data_8_7CAB8627473D5A4CCD0A20B7541551ED' has a wrong offset!");
static_assert(offsetof(FStruct_equipmentWear, Type_5_06FC60D749467A442672089A8900E93A) == 0x0000F0, "Member 'FStruct_equipmentWear::Type_5_06FC60D749467A442672089A8900E93A' has a wrong offset!");

}
