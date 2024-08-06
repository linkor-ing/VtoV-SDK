#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ragdoll

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ragdoll.ragdoll_C
// 0x0018 (0x0238 - 0x0220)
class ARagdoll_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UComp_physicsImpact_C*                  PhysicsImpact;                                     // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ragdoll(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ragdoll_C">();
	}
	static class ARagdoll_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARagdoll_C>();
	}
};
static_assert(alignof(ARagdoll_C) == 0x000008, "Wrong alignment on ARagdoll_C");
static_assert(sizeof(ARagdoll_C) == 0x000238, "Wrong size on ARagdoll_C");
static_assert(offsetof(ARagdoll_C, UberGraphFrame) == 0x000220, "Member 'ARagdoll_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARagdoll_C, PhysicsImpact) == 0x000228, "Member 'ARagdoll_C::PhysicsImpact' has a wrong offset!");
static_assert(offsetof(ARagdoll_C, SkeletalMesh) == 0x000230, "Member 'ARagdoll_C::SkeletalMesh' has a wrong offset!");

}

