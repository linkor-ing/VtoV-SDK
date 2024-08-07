#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Kitchen

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass kitchen.kitchen_C
// 0x0080 (0x02A0 - 0x0220)
class AKitchen_C final : public AActor
{
public:
	class UChildActorComponent*                   Shelvesdoor2;                                      // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            ShelvesDoorH2;                                     // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Shelvesdoor1;                                      // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            ShelvesDoorH1;                                     // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            ShelvesDoorH0;                                     // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Shelvesdoor0;                                      // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Counterdoor2;                                      // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            CounterDoorH2;                                     // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Counterdoor1;                                      // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            CounterDoorH1;                                     // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Counterdoor0;                                      // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            CounterDoorH0;                                     // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   KitchenCounter;                                    // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   KitchenFlooring;                                   // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   KitchenShelves;                                    // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"kitchen_C">();
	}
	static class AKitchen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKitchen_C>();
	}
};
static_assert(alignof(AKitchen_C) == 0x000008, "Wrong alignment on AKitchen_C");
static_assert(sizeof(AKitchen_C) == 0x0002A0, "Wrong size on AKitchen_C");
static_assert(offsetof(AKitchen_C, Shelvesdoor2) == 0x000220, "Member 'AKitchen_C::Shelvesdoor2' has a wrong offset!");
static_assert(offsetof(AKitchen_C, ShelvesDoorH2) == 0x000228, "Member 'AKitchen_C::ShelvesDoorH2' has a wrong offset!");
static_assert(offsetof(AKitchen_C, Shelvesdoor1) == 0x000230, "Member 'AKitchen_C::Shelvesdoor1' has a wrong offset!");
static_assert(offsetof(AKitchen_C, ShelvesDoorH1) == 0x000238, "Member 'AKitchen_C::ShelvesDoorH1' has a wrong offset!");
static_assert(offsetof(AKitchen_C, ShelvesDoorH0) == 0x000240, "Member 'AKitchen_C::ShelvesDoorH0' has a wrong offset!");
static_assert(offsetof(AKitchen_C, Shelvesdoor0) == 0x000248, "Member 'AKitchen_C::Shelvesdoor0' has a wrong offset!");
static_assert(offsetof(AKitchen_C, Counterdoor2) == 0x000250, "Member 'AKitchen_C::Counterdoor2' has a wrong offset!");
static_assert(offsetof(AKitchen_C, CounterDoorH2) == 0x000258, "Member 'AKitchen_C::CounterDoorH2' has a wrong offset!");
static_assert(offsetof(AKitchen_C, Counterdoor1) == 0x000260, "Member 'AKitchen_C::Counterdoor1' has a wrong offset!");
static_assert(offsetof(AKitchen_C, CounterDoorH1) == 0x000268, "Member 'AKitchen_C::CounterDoorH1' has a wrong offset!");
static_assert(offsetof(AKitchen_C, Counterdoor0) == 0x000270, "Member 'AKitchen_C::Counterdoor0' has a wrong offset!");
static_assert(offsetof(AKitchen_C, CounterDoorH0) == 0x000278, "Member 'AKitchen_C::CounterDoorH0' has a wrong offset!");
static_assert(offsetof(AKitchen_C, KitchenCounter) == 0x000280, "Member 'AKitchen_C::KitchenCounter' has a wrong offset!");
static_assert(offsetof(AKitchen_C, KitchenFlooring) == 0x000288, "Member 'AKitchen_C::KitchenFlooring' has a wrong offset!");
static_assert(offsetof(AKitchen_C, KitchenShelves) == 0x000290, "Member 'AKitchen_C::KitchenShelves' has a wrong offset!");
static_assert(offsetof(AKitchen_C, DefaultSceneRoot) == 0x000298, "Member 'AKitchen_C::DefaultSceneRoot' has a wrong offset!");

}

