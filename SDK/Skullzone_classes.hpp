#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Skullzone

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass skullzone.skullzone_C
// 0x00F8 (0x0318 - 0x0220)
class ASkullzone_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sphere1;                                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPnormal_C*                             Pnormal;                                           // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio1;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Damping;                                           // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Dest;                                              // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadialForceComponent*                  RadialForce;                                       // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_hellPortal;                                    // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Void_v_12D912E448AF5BE90E04FF8020AE130F;           // 0x0278(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Void_depth_12D912E448AF5BE90E04FF8020AE130F;       // 0x027C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Void__Direction_12D912E448AF5BE90E04FF8020AE130F;  // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_281[0x7];                                      // 0x0281(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Void;                                              // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         A_depth_2F2EE584408E61835839C8ABC841375A;          // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         A_rad_2F2EE584408E61835839C8ABC841375A;            // 0x0294(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            A__Direction_2F2EE584408E61835839C8ABC841375A;     // 0x0298(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299[0x7];                                      // 0x0299(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     A;                                                 // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AProp_sskull_C*>                 Skulls;                                            // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Actrs;                                             // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<float>                                 Damps;                                             // 0x02D0(0x0010)(Edit, BlueprintVisible)
	TArray<class UPrimitiveComponent*>            Comps;                                             // 0x02E0(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FVector>                        Vecs;                                              // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Active;                                            // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_301[0x3];                                      // 0x0301(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Al;                                                // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                         Args;                                              // 0x0308(0x0010)(Edit, BlueprintVisible)

public:
	void GatherSkulls(bool* Return);
	void A__FinishedFunc();
	void A__UpdateFunc();
	void Void__FinishedFunc();
	void Void__UpdateFunc();
	void Void__deac__EventFunc();
	void Void__ac__EventFunc();
	void ReceiveBeginPlay();
	void BndEvt__damping_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__damping_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__dest_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Activate();
	void bhole();
	void SuccIn();
	void ExecuteUbergraph_skullzone(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"skullzone_C">();
	}
	static class ASkullzone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASkullzone_C>();
	}
};
static_assert(alignof(ASkullzone_C) == 0x000008, "Wrong alignment on ASkullzone_C");
static_assert(sizeof(ASkullzone_C) == 0x000318, "Wrong size on ASkullzone_C");
static_assert(offsetof(ASkullzone_C, UberGraphFrame) == 0x000220, "Member 'ASkullzone_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Sphere1) == 0x000228, "Member 'ASkullzone_C::Sphere1' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Pnormal) == 0x000230, "Member 'ASkullzone_C::Pnormal' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Audio1) == 0x000238, "Member 'ASkullzone_C::Audio1' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Damping) == 0x000240, "Member 'ASkullzone_C::Damping' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Dest) == 0x000248, "Member 'ASkullzone_C::Dest' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, RadialForce) == 0x000250, "Member 'ASkullzone_C::RadialForce' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Eff_hellPortal) == 0x000258, "Member 'ASkullzone_C::Eff_hellPortal' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Decal) == 0x000260, "Member 'ASkullzone_C::Decal' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Sphere) == 0x000268, "Member 'ASkullzone_C::Sphere' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, DefaultSceneRoot) == 0x000270, "Member 'ASkullzone_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Void_v_12D912E448AF5BE90E04FF8020AE130F) == 0x000278, "Member 'ASkullzone_C::Void_v_12D912E448AF5BE90E04FF8020AE130F' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Void_depth_12D912E448AF5BE90E04FF8020AE130F) == 0x00027C, "Member 'ASkullzone_C::Void_depth_12D912E448AF5BE90E04FF8020AE130F' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Void__Direction_12D912E448AF5BE90E04FF8020AE130F) == 0x000280, "Member 'ASkullzone_C::Void__Direction_12D912E448AF5BE90E04FF8020AE130F' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Void) == 0x000288, "Member 'ASkullzone_C::Void' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, A_depth_2F2EE584408E61835839C8ABC841375A) == 0x000290, "Member 'ASkullzone_C::A_depth_2F2EE584408E61835839C8ABC841375A' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, A_rad_2F2EE584408E61835839C8ABC841375A) == 0x000294, "Member 'ASkullzone_C::A_rad_2F2EE584408E61835839C8ABC841375A' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, A__Direction_2F2EE584408E61835839C8ABC841375A) == 0x000298, "Member 'ASkullzone_C::A__Direction_2F2EE584408E61835839C8ABC841375A' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, A) == 0x0002A0, "Member 'ASkullzone_C::A' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Skulls) == 0x0002A8, "Member 'ASkullzone_C::Skulls' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Dynmat) == 0x0002B8, "Member 'ASkullzone_C::Dynmat' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Actrs) == 0x0002C0, "Member 'ASkullzone_C::Actrs' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Damps) == 0x0002D0, "Member 'ASkullzone_C::Damps' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Comps) == 0x0002E0, "Member 'ASkullzone_C::Comps' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Vecs) == 0x0002F0, "Member 'ASkullzone_C::Vecs' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Active) == 0x000300, "Member 'ASkullzone_C::Active' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Al) == 0x000304, "Member 'ASkullzone_C::Al' has a wrong offset!");
static_assert(offsetof(ASkullzone_C, Args) == 0x000308, "Member 'ASkullzone_C::Args' has a wrong offset!");

}
