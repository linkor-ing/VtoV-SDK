#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MadnessCombatMaster

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass madnessCombatMaster.madnessCombatMaster_C
// 0x0030 (0x0250 - 0x0220)
class AMadnessCombatMaster_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        MC_music;                                          // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Spwn;                                              // 0x0238(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_23C[0x4];                                      // 0x023C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUmg_madnessCombat_C*                   Killcount;                                         // 0x0240(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Points;                                            // 0x0248(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_madnessCombatMaster(int32 EntryPoint);
	void Killed();
	void BndEvt__madnessCombatMaster_MC_music_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void SpawnGrunt();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"madnessCombatMaster_C">();
	}
	static class AMadnessCombatMaster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AMadnessCombatMaster_C>();
	}
};
static_assert(alignof(AMadnessCombatMaster_C) == 0x000008, "Wrong alignment on AMadnessCombatMaster_C");
static_assert(sizeof(AMadnessCombatMaster_C) == 0x000250, "Wrong size on AMadnessCombatMaster_C");
static_assert(offsetof(AMadnessCombatMaster_C, UberGraphFrame) == 0x000220, "Member 'AMadnessCombatMaster_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AMadnessCombatMaster_C, MC_music) == 0x000228, "Member 'AMadnessCombatMaster_C::MC_music' has a wrong offset!");
static_assert(offsetof(AMadnessCombatMaster_C, DefaultSceneRoot) == 0x000230, "Member 'AMadnessCombatMaster_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AMadnessCombatMaster_C, Spwn) == 0x000238, "Member 'AMadnessCombatMaster_C::Spwn' has a wrong offset!");
static_assert(offsetof(AMadnessCombatMaster_C, Killcount) == 0x000240, "Member 'AMadnessCombatMaster_C::Killcount' has a wrong offset!");
static_assert(offsetof(AMadnessCombatMaster_C, Points) == 0x000248, "Member 'AMadnessCombatMaster_C::Points' has a wrong offset!");

}
