#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_coal_s

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_coal_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_coal_s.prop_coal_s_C
// 0x0008 (0x0388 - 0x0380)
class AProp_coal_s_C final : public AProp_coal_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_coal_s_C;                      // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_coal_s(int32 EntryPoint);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_coal_s_C">();
	}
	static class AProp_coal_s_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_coal_s_C>();
	}
};
static_assert(alignof(AProp_coal_s_C) == 0x000008, "Wrong alignment on AProp_coal_s_C");
static_assert(sizeof(AProp_coal_s_C) == 0x000388, "Wrong size on AProp_coal_s_C");
static_assert(offsetof(AProp_coal_s_C, UberGraphFrame_Prop_coal_s_C) == 0x000380, "Member 'AProp_coal_s_C::UberGraphFrame_Prop_coal_s_C' has a wrong offset!");

}
