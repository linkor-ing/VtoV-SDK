#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Nail_super

#include "Basic.hpp"

#include "Nail_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass nail_super.nail_super_C
// 0x0010 (0x0390 - 0x0380)
class ANail_super_C final : public ANail_C
{
public:
	uint8                                         Pad_374[0x4];                                      // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPrimitiveComponent*                    Comp_A_0;                                          // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Comb_B_0;                                          // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"nail_super_C">();
	}
	static class ANail_super_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANail_super_C>();
	}
};
static_assert(alignof(ANail_super_C) == 0x000010, "Wrong alignment on ANail_super_C");
static_assert(sizeof(ANail_super_C) == 0x000390, "Wrong size on ANail_super_C");
static_assert(offsetof(ANail_super_C, Comp_A_0) == 0x000378, "Member 'ANail_super_C::Comp_A_0' has a wrong offset!");
static_assert(offsetof(ANail_super_C, Comb_B_0) == 0x000380, "Member 'ANail_super_C::Comb_B_0' has a wrong offset!");

}

