#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_ariralPillow_sus

#include "Basic.hpp"

#include "Prop_ariralPillow_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_ariralPillow_sus.prop_ariralPillow_sus_C
// 0x0020 (0x03A0 - 0x0380)
class AProp_ariralPillow_sus_C final : public AProp_ariralPillow_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_ariralPillow_sus_C;            // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPhysicsConstraintComponent*            Nocoll;                                            // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor_0;                                      // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_ariralPillow_sus(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_ariralPillow_sus_C">();
	}
	static class AProp_ariralPillow_sus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_ariralPillow_sus_C>();
	}
};
static_assert(alignof(AProp_ariralPillow_sus_C) == 0x000008, "Wrong alignment on AProp_ariralPillow_sus_C");
static_assert(sizeof(AProp_ariralPillow_sus_C) == 0x0003A0, "Wrong size on AProp_ariralPillow_sus_C");
static_assert(offsetof(AProp_ariralPillow_sus_C, UberGraphFrame_Prop_ariralPillow_sus_C) == 0x000380, "Member 'AProp_ariralPillow_sus_C::UberGraphFrame_Prop_ariralPillow_sus_C' has a wrong offset!");
static_assert(offsetof(AProp_ariralPillow_sus_C, Nocoll) == 0x000388, "Member 'AProp_ariralPillow_sus_C::Nocoll' has a wrong offset!");
static_assert(offsetof(AProp_ariralPillow_sus_C, ChildActor_0) == 0x000390, "Member 'AProp_ariralPillow_sus_C::ChildActor_0' has a wrong offset!");
static_assert(offsetof(AProp_ariralPillow_sus_C, Audio) == 0x000398, "Member 'AProp_ariralPillow_sus_C::Audio' has a wrong offset!");

}

