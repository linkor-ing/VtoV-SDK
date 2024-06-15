#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NametagComponent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass nametagComponent.nametagComponent_C
// 0x0030 (0x00E0 - 0x00B0)
class UNametagComponent_C final : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AProp_C*                                Prop;                                              // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUmg_hovertextNametag_C*                Widget;                                            // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SphereColl;                                        // 0x00C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 Owner;                                             // 0x00D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component;                                         // 0x00D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_nametagComponent(int32 EntryPoint);
	void Dest(class AActor* DestroyedActor);
	void EndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void Overlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"nametagComponent_C">();
	}
	static class UNametagComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNametagComponent_C>();
	}
};
static_assert(alignof(UNametagComponent_C) == 0x000008, "Wrong alignment on UNametagComponent_C");
static_assert(sizeof(UNametagComponent_C) == 0x0000E0, "Wrong size on UNametagComponent_C");
static_assert(offsetof(UNametagComponent_C, UberGraphFrame) == 0x0000B0, "Member 'UNametagComponent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNametagComponent_C, Prop) == 0x0000B8, "Member 'UNametagComponent_C::Prop' has a wrong offset!");
static_assert(offsetof(UNametagComponent_C, Widget) == 0x0000C0, "Member 'UNametagComponent_C::Widget' has a wrong offset!");
static_assert(offsetof(UNametagComponent_C, SphereColl) == 0x0000C8, "Member 'UNametagComponent_C::SphereColl' has a wrong offset!");
static_assert(offsetof(UNametagComponent_C, Owner) == 0x0000D0, "Member 'UNametagComponent_C::Owner' has a wrong offset!");
static_assert(offsetof(UNametagComponent_C, Component) == 0x0000D8, "Member 'UNametagComponent_C::Component' has a wrong offset!");

}

