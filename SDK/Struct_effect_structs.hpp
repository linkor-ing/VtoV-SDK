#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_effect

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct struct_effect.struct_effect
// 0x0028 (0x0028 - 0x0000)
struct FStruct_effect final
{
public:
	class FText                                   DisplayName_13_5F6BEBF64DC5A33A54F629BA31AF649C;   // 0x0000(0x0018)(Edit, BlueprintVisible)
	bool                                          Stackable_8_64267BAE468F725DE5D7698545DC9056;      // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UClass*                                 EffectActor_12_1194B4C34657F69537D523856080BD90;   // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_effect) == 0x000008, "Wrong alignment on FStruct_effect");
static_assert(sizeof(FStruct_effect) == 0x000028, "Wrong size on FStruct_effect");
static_assert(offsetof(FStruct_effect, DisplayName_13_5F6BEBF64DC5A33A54F629BA31AF649C) == 0x000000, "Member 'FStruct_effect::DisplayName_13_5F6BEBF64DC5A33A54F629BA31AF649C' has a wrong offset!");
static_assert(offsetof(FStruct_effect, Stackable_8_64267BAE468F725DE5D7698545DC9056) == 0x000018, "Member 'FStruct_effect::Stackable_8_64267BAE468F725DE5D7698545DC9056' has a wrong offset!");
static_assert(offsetof(FStruct_effect, EffectActor_12_1194B4C34657F69537D523856080BD90) == 0x000020, "Member 'FStruct_effect::EffectActor_12_1194B4C34657F69537D523856080BD90' has a wrong offset!");

}

