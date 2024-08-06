#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint6

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NewBlueprint6.NewBlueprint6_C
// 0x0050 (0x0270 - 0x0220)
class ANewBlueprint6_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPnormal_C*                             Pnormal;                                           // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProceduralMeshComponent*               ProceduralMesh;                                    // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        Vs;                                                // 0x0248(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 Ts;                                                // 0x0258(0x0010)(Edit, BlueprintVisible)
	float                                         Ime;                                               // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          NewVar_0;                                          // 0x026C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_NewBlueprint6(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewBlueprint6_C">();
	}
	static class ANewBlueprint6_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANewBlueprint6_C>();
	}
};
static_assert(alignof(ANewBlueprint6_C) == 0x000008, "Wrong alignment on ANewBlueprint6_C");
static_assert(sizeof(ANewBlueprint6_C) == 0x000270, "Wrong size on ANewBlueprint6_C");
static_assert(offsetof(ANewBlueprint6_C, UberGraphFrame) == 0x000220, "Member 'ANewBlueprint6_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ANewBlueprint6_C, Sphere) == 0x000228, "Member 'ANewBlueprint6_C::Sphere' has a wrong offset!");
static_assert(offsetof(ANewBlueprint6_C, Pnormal) == 0x000230, "Member 'ANewBlueprint6_C::Pnormal' has a wrong offset!");
static_assert(offsetof(ANewBlueprint6_C, ProceduralMesh) == 0x000238, "Member 'ANewBlueprint6_C::ProceduralMesh' has a wrong offset!");
static_assert(offsetof(ANewBlueprint6_C, DefaultSceneRoot) == 0x000240, "Member 'ANewBlueprint6_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ANewBlueprint6_C, Vs) == 0x000248, "Member 'ANewBlueprint6_C::Vs' has a wrong offset!");
static_assert(offsetof(ANewBlueprint6_C, Ts) == 0x000258, "Member 'ANewBlueprint6_C::Ts' has a wrong offset!");
static_assert(offsetof(ANewBlueprint6_C, Ime) == 0x000268, "Member 'ANewBlueprint6_C::Ime' has a wrong offset!");
static_assert(offsetof(ANewBlueprint6_C, NewVar_0) == 0x00026C, "Member 'ANewBlueprint6_C::NewVar_0' has a wrong offset!");

}

