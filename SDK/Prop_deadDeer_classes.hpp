#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_deadDeer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_food_poison_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_deadDeer.prop_deadDeer_C
// 0x0020 (0x0400 - 0x03E0)
class AProp_deadDeer_C final : public AProp_food_poison_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_deadDeer_C;                    // 0x03E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Flies_Cue;                                         // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_radarPoint_C*                     RadarPoint;                                        // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ADeer_ded_C*                            DedDeer;                                           // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_deadDeer(int32 EntryPoint);
	void D(class AActor* DestroyedActor);
	void Eaten();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_deadDeer_C">();
	}
	static class AProp_deadDeer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_deadDeer_C>();
	}
};
static_assert(alignof(AProp_deadDeer_C) == 0x000008, "Wrong alignment on AProp_deadDeer_C");
static_assert(sizeof(AProp_deadDeer_C) == 0x000400, "Wrong size on AProp_deadDeer_C");
static_assert(offsetof(AProp_deadDeer_C, UberGraphFrame_Prop_deadDeer_C) == 0x0003E0, "Member 'AProp_deadDeer_C::UberGraphFrame_Prop_deadDeer_C' has a wrong offset!");
static_assert(offsetof(AProp_deadDeer_C, Flies_Cue) == 0x0003E8, "Member 'AProp_deadDeer_C::Flies_Cue' has a wrong offset!");
static_assert(offsetof(AProp_deadDeer_C, RadarPoint) == 0x0003F0, "Member 'AProp_deadDeer_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(AProp_deadDeer_C, DedDeer) == 0x0003F8, "Member 'AProp_deadDeer_C::DedDeer' has a wrong offset!");

}

