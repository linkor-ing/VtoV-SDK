#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NailProjectile

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass nailProjectile.nailProjectile_C
// 0x0038 (0x0258 - 0x0220)
class ANailProjectile_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Coll;                                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Lastloc;                                           // 0x0238(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Force;                                             // 0x0244(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                 NailType;                                          // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_nailProjectile(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"nailProjectile_C">();
	}
	static class ANailProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANailProjectile_C>();
	}
};
static_assert(alignof(ANailProjectile_C) == 0x000008, "Wrong alignment on ANailProjectile_C");
static_assert(sizeof(ANailProjectile_C) == 0x000258, "Wrong size on ANailProjectile_C");
static_assert(offsetof(ANailProjectile_C, UberGraphFrame) == 0x000220, "Member 'ANailProjectile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ANailProjectile_C, Coll) == 0x000228, "Member 'ANailProjectile_C::Coll' has a wrong offset!");
static_assert(offsetof(ANailProjectile_C, StaticMesh) == 0x000230, "Member 'ANailProjectile_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ANailProjectile_C, Lastloc) == 0x000238, "Member 'ANailProjectile_C::Lastloc' has a wrong offset!");
static_assert(offsetof(ANailProjectile_C, Force) == 0x000244, "Member 'ANailProjectile_C::Force' has a wrong offset!");
static_assert(offsetof(ANailProjectile_C, NailType) == 0x000250, "Member 'ANailProjectile_C::NailType' has a wrong offset!");

}
