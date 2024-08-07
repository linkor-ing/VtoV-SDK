#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Reactor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass reactor.reactor_C
// 0x0070 (0x0290 - 0x0220)
class AReactor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube;                                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Rot;                                               // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Axis;                                              // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    RectLight1;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    RectLight;                                         // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               Cam;                                               // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Dir;                                               // 0x0268(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanMove;                                           // 0x0269(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1FB3[0x2];                                     // 0x026A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Targ;                                              // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        Locs;                                              // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UStaticMeshComponent*>           Rods;                                              // 0x0280(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_reactor(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	void Gen();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"reactor_C">();
	}
	static class AReactor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AReactor_C>();
	}
};
static_assert(alignof(AReactor_C) == 0x000008, "Wrong alignment on AReactor_C");
static_assert(sizeof(AReactor_C) == 0x000290, "Wrong size on AReactor_C");
static_assert(offsetof(AReactor_C, UberGraphFrame) == 0x000220, "Member 'AReactor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AReactor_C, Cube) == 0x000228, "Member 'AReactor_C::Cube' has a wrong offset!");
static_assert(offsetof(AReactor_C, Rot) == 0x000230, "Member 'AReactor_C::Rot' has a wrong offset!");
static_assert(offsetof(AReactor_C, Axis) == 0x000238, "Member 'AReactor_C::Axis' has a wrong offset!");
static_assert(offsetof(AReactor_C, RectLight1) == 0x000240, "Member 'AReactor_C::RectLight1' has a wrong offset!");
static_assert(offsetof(AReactor_C, RectLight) == 0x000248, "Member 'AReactor_C::RectLight' has a wrong offset!");
static_assert(offsetof(AReactor_C, Cam) == 0x000250, "Member 'AReactor_C::Cam' has a wrong offset!");
static_assert(offsetof(AReactor_C, StaticMesh) == 0x000258, "Member 'AReactor_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(AReactor_C, DefaultSceneRoot) == 0x000260, "Member 'AReactor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AReactor_C, Dir) == 0x000268, "Member 'AReactor_C::Dir' has a wrong offset!");
static_assert(offsetof(AReactor_C, CanMove) == 0x000269, "Member 'AReactor_C::CanMove' has a wrong offset!");
static_assert(offsetof(AReactor_C, Targ) == 0x00026C, "Member 'AReactor_C::Targ' has a wrong offset!");
static_assert(offsetof(AReactor_C, Locs) == 0x000270, "Member 'AReactor_C::Locs' has a wrong offset!");
static_assert(offsetof(AReactor_C, Rods) == 0x000280, "Member 'AReactor_C::Rods' has a wrong offset!");

}

