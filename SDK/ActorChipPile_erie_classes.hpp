#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActorChipPile_erie

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "ActorChipPile_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass actorChipPile_erie.actorChipPile_erie_C
// 0x0030 (0x0298 - 0x0268)
class AActorChipPile_erie_C final : public AActorChipPile_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ActorChipPile_erie_C;               // 0x0268(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   StaticMesh3;                                       // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Restore_a_D7C57A11417438D289D9119C159440E8;        // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Restore__Direction_D7C57A11417438D289D9119C159440E8; // 0x027C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27D[0x3];                                      // 0x027D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Restore;                                           // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                S;                                                 // 0x0288(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_actorChipPile_erie(int32 EntryPoint);
	void Restore__b__EventFunc();
	void Restore__UpdateFunc();
	void Restore__FinishedFunc();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"actorChipPile_erie_C">();
	}
	static class AActorChipPile_erie_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AActorChipPile_erie_C>();
	}
};
static_assert(alignof(AActorChipPile_erie_C) == 0x000008, "Wrong alignment on AActorChipPile_erie_C");
static_assert(sizeof(AActorChipPile_erie_C) == 0x000298, "Wrong size on AActorChipPile_erie_C");
static_assert(offsetof(AActorChipPile_erie_C, UberGraphFrame_ActorChipPile_erie_C) == 0x000268, "Member 'AActorChipPile_erie_C::UberGraphFrame_ActorChipPile_erie_C' has a wrong offset!");
static_assert(offsetof(AActorChipPile_erie_C, StaticMesh3) == 0x000270, "Member 'AActorChipPile_erie_C::StaticMesh3' has a wrong offset!");
static_assert(offsetof(AActorChipPile_erie_C, Restore_a_D7C57A11417438D289D9119C159440E8) == 0x000278, "Member 'AActorChipPile_erie_C::Restore_a_D7C57A11417438D289D9119C159440E8' has a wrong offset!");
static_assert(offsetof(AActorChipPile_erie_C, Restore__Direction_D7C57A11417438D289D9119C159440E8) == 0x00027C, "Member 'AActorChipPile_erie_C::Restore__Direction_D7C57A11417438D289D9119C159440E8' has a wrong offset!");
static_assert(offsetof(AActorChipPile_erie_C, Restore) == 0x000280, "Member 'AActorChipPile_erie_C::Restore' has a wrong offset!");
static_assert(offsetof(AActorChipPile_erie_C, S) == 0x000288, "Member 'AActorChipPile_erie_C::S' has a wrong offset!");

}

