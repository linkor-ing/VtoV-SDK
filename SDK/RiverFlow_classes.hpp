#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RiverFlow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass riverFlow.riverFlow_C
// 0x0048 (0x0268 - 0x0220)
class ARiverFlow_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Rad_in;                                            // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Rad_out;                                           // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Water_river;                                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USplineComponent*                       Spline;                                            // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Force;                                             // 0x0258(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Radius_out;                                        // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Radius_in;                                         // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DebugRadius;                                       // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_riverFlow(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"riverFlow_C">();
	}
	static class ARiverFlow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARiverFlow_C>();
	}
};
static_assert(alignof(ARiverFlow_C) == 0x000008, "Wrong alignment on ARiverFlow_C");
static_assert(sizeof(ARiverFlow_C) == 0x000268, "Wrong size on ARiverFlow_C");
static_assert(offsetof(ARiverFlow_C, UberGraphFrame) == 0x000220, "Member 'ARiverFlow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ARiverFlow_C, Rad_in) == 0x000228, "Member 'ARiverFlow_C::Rad_in' has a wrong offset!");
static_assert(offsetof(ARiverFlow_C, Rad_out) == 0x000230, "Member 'ARiverFlow_C::Rad_out' has a wrong offset!");
static_assert(offsetof(ARiverFlow_C, Water_river) == 0x000238, "Member 'ARiverFlow_C::Water_river' has a wrong offset!");
static_assert(offsetof(ARiverFlow_C, Billboard) == 0x000240, "Member 'ARiverFlow_C::Billboard' has a wrong offset!");
static_assert(offsetof(ARiverFlow_C, Spline) == 0x000248, "Member 'ARiverFlow_C::Spline' has a wrong offset!");
static_assert(offsetof(ARiverFlow_C, DefaultSceneRoot) == 0x000250, "Member 'ARiverFlow_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ARiverFlow_C, Force) == 0x000258, "Member 'ARiverFlow_C::Force' has a wrong offset!");
static_assert(offsetof(ARiverFlow_C, Radius_out) == 0x00025C, "Member 'ARiverFlow_C::Radius_out' has a wrong offset!");
static_assert(offsetof(ARiverFlow_C, Radius_in) == 0x000260, "Member 'ARiverFlow_C::Radius_in' has a wrong offset!");
static_assert(offsetof(ARiverFlow_C, DebugRadius) == 0x000264, "Member 'ARiverFlow_C::DebugRadius' has a wrong offset!");

}
