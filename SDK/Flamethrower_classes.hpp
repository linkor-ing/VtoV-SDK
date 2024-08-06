#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Flamethrower

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass flamethrower.flamethrower_C
// 0x0048 (0x0268 - 0x0220)
class AFlamethrower_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Fire;                                              // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_flamethrower;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Loop;                                              // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Ignores;                                           // 0x0248(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          IsActive;                                          // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_259[0x3];                                      // 0x0259(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Time;                                              // 0x025C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Spread;                                            // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Distance;                                          // 0x0264(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_flamethrower(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void Activate(bool bNewActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"flamethrower_C">();
	}
	static class AFlamethrower_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFlamethrower_C>();
	}
};
static_assert(alignof(AFlamethrower_C) == 0x000008, "Wrong alignment on AFlamethrower_C");
static_assert(sizeof(AFlamethrower_C) == 0x000268, "Wrong size on AFlamethrower_C");
static_assert(offsetof(AFlamethrower_C, UberGraphFrame) == 0x000220, "Member 'AFlamethrower_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFlamethrower_C, Fire) == 0x000228, "Member 'AFlamethrower_C::Fire' has a wrong offset!");
static_assert(offsetof(AFlamethrower_C, Eff_flamethrower) == 0x000230, "Member 'AFlamethrower_C::Eff_flamethrower' has a wrong offset!");
static_assert(offsetof(AFlamethrower_C, Loop) == 0x000238, "Member 'AFlamethrower_C::Loop' has a wrong offset!");
static_assert(offsetof(AFlamethrower_C, Arrow) == 0x000240, "Member 'AFlamethrower_C::Arrow' has a wrong offset!");
static_assert(offsetof(AFlamethrower_C, Ignores) == 0x000248, "Member 'AFlamethrower_C::Ignores' has a wrong offset!");
static_assert(offsetof(AFlamethrower_C, IsActive) == 0x000258, "Member 'AFlamethrower_C::IsActive' has a wrong offset!");
static_assert(offsetof(AFlamethrower_C, Time) == 0x00025C, "Member 'AFlamethrower_C::Time' has a wrong offset!");
static_assert(offsetof(AFlamethrower_C, Spread) == 0x000260, "Member 'AFlamethrower_C::Spread' has a wrong offset!");
static_assert(offsetof(AFlamethrower_C, Distance) == 0x000264, "Member 'AFlamethrower_C::Distance' has a wrong offset!");

}

