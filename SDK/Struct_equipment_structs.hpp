#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_equipment

#include "Basic.hpp"

#include "Struct_propDynamic_structs.hpp"
#include "Struct_save_structs.hpp"


namespace SDK
{

// UserDefinedStruct struct_equipment.struct_equipment
// 0x00F0 (0x00F0 - 0x0000)
struct FStruct_equipment final
{
public:
	struct FStruct_propDynamic                    Prop_2_B741ADA44441078D77808785087F23AE;           // 0x0000(0x0028)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                         Pad_28[0x8];                                       // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_save                           Data_5_C195F69242C9AE793196B582EDDDFC9A;           // 0x0030(0x00C0)(Edit, BlueprintVisible, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_equipment) == 0x000010, "Wrong alignment on FStruct_equipment");
static_assert(sizeof(FStruct_equipment) == 0x0000F0, "Wrong size on FStruct_equipment");
static_assert(offsetof(FStruct_equipment, Prop_2_B741ADA44441078D77808785087F23AE) == 0x000000, "Member 'FStruct_equipment::Prop_2_B741ADA44441078D77808785087F23AE' has a wrong offset!");
static_assert(offsetof(FStruct_equipment, Data_5_C195F69242C9AE793196B582EDDDFC9A) == 0x000030, "Member 'FStruct_equipment::Data_5_C195F69242C9AE793196B582EDDDFC9A' has a wrong offset!");

}
