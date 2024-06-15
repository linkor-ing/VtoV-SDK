#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_fishbait

#include "Basic.hpp"

#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_fishbait.prop_fishbait_C
// 0x0008 (0x0370 - 0x0368)
class AProp_fishbait_C : public AProp_C
{
public:
	uint8                                         Pad_2DD5[0x3];                                     // 0x0361(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Exponent;                                          // 0x0364(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Eat;                                               // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Lure;                                              // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_fishbait_C">();
	}
	static class AProp_fishbait_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_fishbait_C>();
	}
};
static_assert(alignof(AProp_fishbait_C) == 0x000008, "Wrong alignment on AProp_fishbait_C");
static_assert(sizeof(AProp_fishbait_C) == 0x000370, "Wrong size on AProp_fishbait_C");
static_assert(offsetof(AProp_fishbait_C, Exponent) == 0x000364, "Member 'AProp_fishbait_C::Exponent' has a wrong offset!");
static_assert(offsetof(AProp_fishbait_C, Eat) == 0x000368, "Member 'AProp_fishbait_C::Eat' has a wrong offset!");
static_assert(offsetof(AProp_fishbait_C, Lure) == 0x00036C, "Member 'AProp_fishbait_C::Lure' has a wrong offset!");

}
