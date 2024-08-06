#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewBlueprint8

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass NewBlueprint8.NewBlueprint8_C
// 0x0060 (0x0280 - 0x0220)
class ANewBlueprint8_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UComp_radarPoint_C*                     RadarPoint;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPnormal_C*                             Pnormal;                                           // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProceduralMeshComponent*               ProceduralMesh;                                    // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NewVar_0;                                          // 0x0248(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_254[0x4];                                      // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVector>                        NewVar_1;                                          // 0x0258(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 NewVar_2;                                          // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          NewVar_3;                                          // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void Gen();
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_NewBlueprint8(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewBlueprint8_C">();
	}
	static class ANewBlueprint8_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANewBlueprint8_C>();
	}
};
static_assert(alignof(ANewBlueprint8_C) == 0x000008, "Wrong alignment on ANewBlueprint8_C");
static_assert(sizeof(ANewBlueprint8_C) == 0x000280, "Wrong size on ANewBlueprint8_C");
static_assert(offsetof(ANewBlueprint8_C, UberGraphFrame) == 0x000220, "Member 'ANewBlueprint8_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ANewBlueprint8_C, RadarPoint) == 0x000228, "Member 'ANewBlueprint8_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(ANewBlueprint8_C, Pnormal) == 0x000230, "Member 'ANewBlueprint8_C::Pnormal' has a wrong offset!");
static_assert(offsetof(ANewBlueprint8_C, ProceduralMesh) == 0x000238, "Member 'ANewBlueprint8_C::ProceduralMesh' has a wrong offset!");
static_assert(offsetof(ANewBlueprint8_C, DefaultSceneRoot) == 0x000240, "Member 'ANewBlueprint8_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ANewBlueprint8_C, NewVar_0) == 0x000248, "Member 'ANewBlueprint8_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ANewBlueprint8_C, NewVar_1) == 0x000258, "Member 'ANewBlueprint8_C::NewVar_1' has a wrong offset!");
static_assert(offsetof(ANewBlueprint8_C, NewVar_2) == 0x000268, "Member 'ANewBlueprint8_C::NewVar_2' has a wrong offset!");
static_assert(offsetof(ANewBlueprint8_C, NewVar_3) == 0x000278, "Member 'ANewBlueprint8_C::NewVar_3' has a wrong offset!");

}
