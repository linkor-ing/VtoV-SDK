#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_potatoCooked

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_food_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_food_potatoCooked.prop_food_potatoCooked_C
// 0x0008 (0x03C8 - 0x03C0)
class AProp_food_potatoCooked_C final : public AProp_food_C
{
public:
	uint8                                         Pad_3F3F[0x4];                                     // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_food_potatoCooked_C;           // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_food_potatoCooked(int32 EntryPoint);
	void Slice(bool Clean);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_food_potatoCooked_C">();
	}
	static class AProp_food_potatoCooked_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_food_potatoCooked_C>();
	}
};
static_assert(alignof(AProp_food_potatoCooked_C) == 0x000008, "Wrong alignment on AProp_food_potatoCooked_C");
static_assert(sizeof(AProp_food_potatoCooked_C) == 0x0003C8, "Wrong size on AProp_food_potatoCooked_C");
static_assert(offsetof(AProp_food_potatoCooked_C, UberGraphFrame_Prop_food_potatoCooked_C) == 0x0003C0, "Member 'AProp_food_potatoCooked_C::UberGraphFrame_Prop_food_potatoCooked_C' has a wrong offset!");

}
