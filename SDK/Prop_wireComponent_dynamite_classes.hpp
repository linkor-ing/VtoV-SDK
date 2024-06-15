#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_dynamite

#include "Basic.hpp"

#include "Prop_wireComponent_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wireComponent_dynamite.prop_wireComponent_dynamite_C
// 0x0008 (0x0378 - 0x0370)
class AProp_wireComponent_dynamite_C final : public AProp_wireComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_wireComponent_dynamite_C;      // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_wireComponent_dynamite(int32 EntryPoint);
	void WirePass(class AWire_C* Wire);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wireComponent_dynamite_C">();
	}
	static class AProp_wireComponent_dynamite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wireComponent_dynamite_C>();
	}
};
static_assert(alignof(AProp_wireComponent_dynamite_C) == 0x000008, "Wrong alignment on AProp_wireComponent_dynamite_C");
static_assert(sizeof(AProp_wireComponent_dynamite_C) == 0x000378, "Wrong size on AProp_wireComponent_dynamite_C");
static_assert(offsetof(AProp_wireComponent_dynamite_C, UberGraphFrame_Prop_wireComponent_dynamite_C) == 0x000370, "Member 'AProp_wireComponent_dynamite_C::UberGraphFrame_Prop_wireComponent_dynamite_C' has a wrong offset!");

}
