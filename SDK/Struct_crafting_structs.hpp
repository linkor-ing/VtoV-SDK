#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_crafting

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct struct_crafting.struct_crafting
// 0x0040 (0x0040 - 0x0000)
struct FStruct_crafting final
{
public:
	TArray<class FString>                         Ingredients_4_403E56644866154088F5C3A4F2E20B55;    // 0x0000(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         CraftTags_13_2B5AE4B5413DE35324A9FA9BCF9C31C8;     // 0x0010(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         Result_6_893C01EE4438C4AAF7E917954BB7F448;         // 0x0020(0x0010)(Edit, BlueprintVisible)
	class FString                                 blueprint_9_1946A61745B0008C0F2F268F1D73DB38;      // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_crafting) == 0x000008, "Wrong alignment on FStruct_crafting");
static_assert(sizeof(FStruct_crafting) == 0x000040, "Wrong size on FStruct_crafting");
static_assert(offsetof(FStruct_crafting, Ingredients_4_403E56644866154088F5C3A4F2E20B55) == 0x000000, "Member 'FStruct_crafting::Ingredients_4_403E56644866154088F5C3A4F2E20B55' has a wrong offset!");
static_assert(offsetof(FStruct_crafting, CraftTags_13_2B5AE4B5413DE35324A9FA9BCF9C31C8) == 0x000010, "Member 'FStruct_crafting::CraftTags_13_2B5AE4B5413DE35324A9FA9BCF9C31C8' has a wrong offset!");
static_assert(offsetof(FStruct_crafting, Result_6_893C01EE4438C4AAF7E917954BB7F448) == 0x000020, "Member 'FStruct_crafting::Result_6_893C01EE4438C4AAF7E917954BB7F448' has a wrong offset!");
static_assert(offsetof(FStruct_crafting, blueprint_9_1946A61745B0008C0F2F268F1D73DB38) == 0x000030, "Member 'FStruct_crafting::blueprint_9_1946A61745B0008C0F2F268F1D73DB38' has a wrong offset!");

}
