#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_food_cheese_c

#include "Basic.hpp"

#include "Prop_food_cheese_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_food_cheese_c.prop_food_cheese_c_C
// 0x0008 (0x03C8 - 0x03C0)
class AProp_food_cheese_c_C final : public AProp_food_cheese_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_food_cheese_c_C;               // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_food_cheese_c(int32 EntryPoint);
	void SliceCheese();
	void Slice(bool Clean);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_food_cheese_c_C">();
	}
	static class AProp_food_cheese_c_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_food_cheese_c_C>();
	}
};
static_assert(alignof(AProp_food_cheese_c_C) == 0x000008, "Wrong alignment on AProp_food_cheese_c_C");
static_assert(sizeof(AProp_food_cheese_c_C) == 0x0003C8, "Wrong size on AProp_food_cheese_c_C");
static_assert(offsetof(AProp_food_cheese_c_C, UberGraphFrame_Prop_food_cheese_c_C) == 0x0003C0, "Member 'AProp_food_cheese_c_C::UberGraphFrame_Prop_food_cheese_c_C' has a wrong offset!");

}

