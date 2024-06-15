#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KerfusFace

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass kerfusFace.kerfusFace_C
// 0x0040 (0x0260 - 0x0220)
class AKerfusFace_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Face;                                              // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane;                                             // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Rt;                                                // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0250(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Type;                                              // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_kerfusFace(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Gen(class UMaterialInstanceDynamic** Param_Dynmat);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"kerfusFace_C">();
	}
	static class AKerfusFace_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKerfusFace_C>();
	}
};
static_assert(alignof(AKerfusFace_C) == 0x000008, "Wrong alignment on AKerfusFace_C");
static_assert(sizeof(AKerfusFace_C) == 0x000260, "Wrong size on AKerfusFace_C");
static_assert(offsetof(AKerfusFace_C, UberGraphFrame) == 0x000220, "Member 'AKerfusFace_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AKerfusFace_C, SceneCaptureComponent2D) == 0x000228, "Member 'AKerfusFace_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(AKerfusFace_C, Face) == 0x000230, "Member 'AKerfusFace_C::Face' has a wrong offset!");
static_assert(offsetof(AKerfusFace_C, Plane) == 0x000238, "Member 'AKerfusFace_C::Plane' has a wrong offset!");
static_assert(offsetof(AKerfusFace_C, DefaultSceneRoot) == 0x000240, "Member 'AKerfusFace_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AKerfusFace_C, Rt) == 0x000248, "Member 'AKerfusFace_C::Rt' has a wrong offset!");
static_assert(offsetof(AKerfusFace_C, Dynmat) == 0x000250, "Member 'AKerfusFace_C::Dynmat' has a wrong offset!");
static_assert(offsetof(AKerfusFace_C, Type) == 0x000258, "Member 'AKerfusFace_C::Type' has a wrong offset!");

}

