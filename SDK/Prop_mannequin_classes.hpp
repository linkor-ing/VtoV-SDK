#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_mannequin

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_mannequin.prop_mannequin_C
// 0x0008 (0x0370 - 0x0368)
class AProp_mannequin_C : public AProp_C
{
public:
	uint8                                         Pad_3AC3[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_mannequin_C;                   // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_mannequin(int32 EntryPoint);
	void ReceiveDestroyed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_mannequin_C">();
	}
	static class AProp_mannequin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_mannequin_C>();
	}
};
static_assert(alignof(AProp_mannequin_C) == 0x000008, "Wrong alignment on AProp_mannequin_C");
static_assert(sizeof(AProp_mannequin_C) == 0x000370, "Wrong size on AProp_mannequin_C");
static_assert(offsetof(AProp_mannequin_C, UberGraphFrame_Prop_mannequin_C) == 0x000368, "Member 'AProp_mannequin_C::UberGraphFrame_Prop_mannequin_C' has a wrong offset!");

}

