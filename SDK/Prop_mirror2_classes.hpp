#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_mirror2

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_mirror2.prop_mirror2_C
// 0x0020 (0x0398 - 0x0378)
class AProp_mirror2_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_mirror2_C;                     // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   L;                                                 // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            PhysicsConstraint;                                 // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   M;                                                 // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_mirror2(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_mirror2_C">();
	}
	static class AProp_mirror2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_mirror2_C>();
	}
};
static_assert(alignof(AProp_mirror2_C) == 0x000008, "Wrong alignment on AProp_mirror2_C");
static_assert(sizeof(AProp_mirror2_C) == 0x000398, "Wrong size on AProp_mirror2_C");
static_assert(offsetof(AProp_mirror2_C, UberGraphFrame_Prop_mirror2_C) == 0x000378, "Member 'AProp_mirror2_C::UberGraphFrame_Prop_mirror2_C' has a wrong offset!");
static_assert(offsetof(AProp_mirror2_C, L) == 0x000380, "Member 'AProp_mirror2_C::L' has a wrong offset!");
static_assert(offsetof(AProp_mirror2_C, PhysicsConstraint) == 0x000388, "Member 'AProp_mirror2_C::PhysicsConstraint' has a wrong offset!");
static_assert(offsetof(AProp_mirror2_C, M) == 0x000390, "Member 'AProp_mirror2_C::M' has a wrong offset!");

}

