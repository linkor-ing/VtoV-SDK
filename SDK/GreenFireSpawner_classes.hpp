#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GreenFireSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Actor_save_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass greenFireSpawner.greenFireSpawner_C
// 0x0028 (0x0270 - 0x0248)
class AGreenFireSpawner_C final : public AActor_save_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GreenFireSpawner_C;                 // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sphere;                                            // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AGreenfire_C*                           Greenfire;                                         // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_greenFireSpawner(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"greenFireSpawner_C">();
	}
	static class AGreenFireSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGreenFireSpawner_C>();
	}
};
static_assert(alignof(AGreenFireSpawner_C) == 0x000008, "Wrong alignment on AGreenFireSpawner_C");
static_assert(sizeof(AGreenFireSpawner_C) == 0x000270, "Wrong size on AGreenFireSpawner_C");
static_assert(offsetof(AGreenFireSpawner_C, UberGraphFrame_GreenFireSpawner_C) == 0x000248, "Member 'AGreenFireSpawner_C::UberGraphFrame_GreenFireSpawner_C' has a wrong offset!");
static_assert(offsetof(AGreenFireSpawner_C, StaticMesh1) == 0x000250, "Member 'AGreenFireSpawner_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(AGreenFireSpawner_C, StaticMesh) == 0x000258, "Member 'AGreenFireSpawner_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AGreenFireSpawner_C, Sphere) == 0x000260, "Member 'AGreenFireSpawner_C::Sphere' has a wrong offset!");
static_assert(offsetof(AGreenFireSpawner_C, Greenfire) == 0x000268, "Member 'AGreenFireSpawner_C::Greenfire' has a wrong offset!");

}

