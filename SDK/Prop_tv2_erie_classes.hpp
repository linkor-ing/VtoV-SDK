#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_tv2_erie

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_tv2_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_tv2_erie.prop_tv2_erie_C
// 0x0010 (0x0430 - 0x0420)
class AProp_tv2_erie_C final : public AProp_tv2_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_tv2_erie_C;                    // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_tv2_erie(int32 EntryPoint);
	void MatChanged();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_tv2_erie_C">();
	}
	static class AProp_tv2_erie_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_tv2_erie_C>();
	}
};
static_assert(alignof(AProp_tv2_erie_C) == 0x000008, "Wrong alignment on AProp_tv2_erie_C");
static_assert(sizeof(AProp_tv2_erie_C) == 0x000430, "Wrong size on AProp_tv2_erie_C");
static_assert(offsetof(AProp_tv2_erie_C, UberGraphFrame_Prop_tv2_erie_C) == 0x000420, "Member 'AProp_tv2_erie_C::UberGraphFrame_Prop_tv2_erie_C' has a wrong offset!");
static_assert(offsetof(AProp_tv2_erie_C, SkeletalMesh) == 0x000428, "Member 'AProp_tv2_erie_C::SkeletalMesh' has a wrong offset!");

}

