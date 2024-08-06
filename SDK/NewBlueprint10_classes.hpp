#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint10

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NewBlueprint10.NewBlueprint10_C
// 0x0040 (0x0260 - 0x0220)
class ANewBlueprint10_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Prot_satellite_dish;                               // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Prot_satellite_rotat;                              // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Prot_satellite_base;                               // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USvtarget_C*                            Svtarget;                                          // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar_0;                                          // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ReceiveBeginPlay();
	void ExecuteUbergraph_NewBlueprint10(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewBlueprint10_C">();
	}
	static class ANewBlueprint10_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANewBlueprint10_C>();
	}
};
static_assert(alignof(ANewBlueprint10_C) == 0x000008, "Wrong alignment on ANewBlueprint10_C");
static_assert(sizeof(ANewBlueprint10_C) == 0x000260, "Wrong size on ANewBlueprint10_C");
static_assert(offsetof(ANewBlueprint10_C, UberGraphFrame) == 0x000220, "Member 'ANewBlueprint10_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ANewBlueprint10_C, Prot_satellite_dish) == 0x000228, "Member 'ANewBlueprint10_C::Prot_satellite_dish' has a wrong offset!");
static_assert(offsetof(ANewBlueprint10_C, Prot_satellite_rotat) == 0x000230, "Member 'ANewBlueprint10_C::Prot_satellite_rotat' has a wrong offset!");
static_assert(offsetof(ANewBlueprint10_C, Prot_satellite_base) == 0x000238, "Member 'ANewBlueprint10_C::Prot_satellite_base' has a wrong offset!");
static_assert(offsetof(ANewBlueprint10_C, Svtarget) == 0x000240, "Member 'ANewBlueprint10_C::Svtarget' has a wrong offset!");
static_assert(offsetof(ANewBlueprint10_C, Cube) == 0x000248, "Member 'ANewBlueprint10_C::Cube' has a wrong offset!");
static_assert(offsetof(ANewBlueprint10_C, DefaultSceneRoot) == 0x000250, "Member 'ANewBlueprint10_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ANewBlueprint10_C, NewVar_0) == 0x000258, "Member 'ANewBlueprint10_C::NewVar_0' has a wrong offset!");

}
