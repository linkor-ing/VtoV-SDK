#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LogFence

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass logFence.logFence_C
// 0x0070 (0x0290 - 0x0220)
class ALogFence_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UHierarchicalInstancedStaticMeshComponent* NavmeshCollision;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* Log_4;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* LogFence_4;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* Log_3;                                             // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* LogFence_3;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* Log_2;                                             // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* LogFence_2;                                        // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* Log_1;                                             // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHierarchicalInstancedStaticMeshComponent* LogFence_1;                                        // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Di;                                                // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Offset;                                            // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Weight;                                            // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Gen();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_logFence(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"logFence_C">();
	}
	static class ALogFence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALogFence_C>();
	}
};
static_assert(alignof(ALogFence_C) == 0x000008, "Wrong alignment on ALogFence_C");
static_assert(sizeof(ALogFence_C) == 0x000290, "Wrong size on ALogFence_C");
static_assert(offsetof(ALogFence_C, UberGraphFrame) == 0x000220, "Member 'ALogFence_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALogFence_C, NavmeshCollision) == 0x000228, "Member 'ALogFence_C::NavmeshCollision' has a wrong offset!");
static_assert(offsetof(ALogFence_C, Log_4) == 0x000230, "Member 'ALogFence_C::Log_4' has a wrong offset!");
static_assert(offsetof(ALogFence_C, LogFence_4) == 0x000238, "Member 'ALogFence_C::LogFence_4' has a wrong offset!");
static_assert(offsetof(ALogFence_C, Log_3) == 0x000240, "Member 'ALogFence_C::Log_3' has a wrong offset!");
static_assert(offsetof(ALogFence_C, LogFence_3) == 0x000248, "Member 'ALogFence_C::LogFence_3' has a wrong offset!");
static_assert(offsetof(ALogFence_C, Log_2) == 0x000250, "Member 'ALogFence_C::Log_2' has a wrong offset!");
static_assert(offsetof(ALogFence_C, LogFence_2) == 0x000258, "Member 'ALogFence_C::LogFence_2' has a wrong offset!");
static_assert(offsetof(ALogFence_C, Spline) == 0x000260, "Member 'ALogFence_C::Spline' has a wrong offset!");
static_assert(offsetof(ALogFence_C, Log_1) == 0x000268, "Member 'ALogFence_C::Log_1' has a wrong offset!");
static_assert(offsetof(ALogFence_C, LogFence_1) == 0x000270, "Member 'ALogFence_C::LogFence_1' has a wrong offset!");
static_assert(offsetof(ALogFence_C, DefaultSceneRoot) == 0x000278, "Member 'ALogFence_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ALogFence_C, Di) == 0x000280, "Member 'ALogFence_C::Di' has a wrong offset!");
static_assert(offsetof(ALogFence_C, Offset) == 0x000284, "Member 'ALogFence_C::Offset' has a wrong offset!");
static_assert(offsetof(ALogFence_C, Weight) == 0x000288, "Member 'ALogFence_C::Weight' has a wrong offset!");

}

