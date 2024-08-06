#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_goose

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_goose.prop_goose_C
// 0x0008 (0x0380 - 0x0378)
class AProp_goose_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_goose_C;                       // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_goose(int32 EntryPoint);
	void AddDamage(class AActor* Actor, float Damage, const struct FHitResult& Param_Hit, const struct FVector& Impact, bool SkipSetting);
	void broken();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_goose_C">();
	}
	static class AProp_goose_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_goose_C>();
	}
};
static_assert(alignof(AProp_goose_C) == 0x000008, "Wrong alignment on AProp_goose_C");
static_assert(sizeof(AProp_goose_C) == 0x000380, "Wrong size on AProp_goose_C");
static_assert(offsetof(AProp_goose_C, UberGraphFrame_Prop_goose_C) == 0x000378, "Member 'AProp_goose_C::UberGraphFrame_Prop_goose_C' has a wrong offset!");

}

