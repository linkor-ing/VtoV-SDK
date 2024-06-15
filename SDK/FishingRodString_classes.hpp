#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FishingRodString

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass fishingRodString.fishingRodString_C
// 0x0100 (0x0320 - 0x0220)
class AFishingRodString_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   baitMesh;                                          // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            buoy2hook;                                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        CBuoyToHook;                                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            Con1;                                              // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    buoyEnd;                                           // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        CEndToBuoy;                                        // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Hook;                                              // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   buoy;                                              // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Root;                                              // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    HookEnd;                                           // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Vel;                                               // 0x0278(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_21F4[0x4];                                     // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 Catched;                                           // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, float>                      Drop;                                              // 0x0290(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPrimitiveComponent*                    buoyComp;                                          // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    HookComp;                                          // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_fishingRod_C*                     Rod;                                               // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            A;                                                 // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    C;                                                 // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Chance;                                            // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Luck;                                              // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                   bait;                                              // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         Eat;                                               // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_fishingRodString(int32 EntryPoint);
	void Dest(class AActor* DestroyedActor);
	void RestoreString();
	void ReceiveDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void SetLength(float Len);
	void SetHookLoc();
	void DebugRandom(int32 LastIndex, float Exponent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"fishingRodString_C">();
	}
	static class AFishingRodString_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFishingRodString_C>();
	}
};
static_assert(alignof(AFishingRodString_C) == 0x000008, "Wrong alignment on AFishingRodString_C");
static_assert(sizeof(AFishingRodString_C) == 0x000320, "Wrong size on AFishingRodString_C");
static_assert(offsetof(AFishingRodString_C, UberGraphFrame) == 0x000220, "Member 'AFishingRodString_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, baitMesh) == 0x000228, "Member 'AFishingRodString_C::baitMesh' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, buoy2hook) == 0x000230, "Member 'AFishingRodString_C::buoy2hook' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, CBuoyToHook) == 0x000238, "Member 'AFishingRodString_C::CBuoyToHook' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, Con1) == 0x000240, "Member 'AFishingRodString_C::Con1' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, buoyEnd) == 0x000248, "Member 'AFishingRodString_C::buoyEnd' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, CEndToBuoy) == 0x000250, "Member 'AFishingRodString_C::CEndToBuoy' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, Hook) == 0x000258, "Member 'AFishingRodString_C::Hook' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, buoy) == 0x000260, "Member 'AFishingRodString_C::buoy' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, Root) == 0x000268, "Member 'AFishingRodString_C::Root' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, HookEnd) == 0x000270, "Member 'AFishingRodString_C::HookEnd' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, Vel) == 0x000278, "Member 'AFishingRodString_C::Vel' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, Catched) == 0x000288, "Member 'AFishingRodString_C::Catched' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, Drop) == 0x000290, "Member 'AFishingRodString_C::Drop' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, buoyComp) == 0x0002E0, "Member 'AFishingRodString_C::buoyComp' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, HookComp) == 0x0002E8, "Member 'AFishingRodString_C::HookComp' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, Rod) == 0x0002F0, "Member 'AFishingRodString_C::Rod' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, A) == 0x0002F8, "Member 'AFishingRodString_C::A' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, C) == 0x000300, "Member 'AFishingRodString_C::C' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, Chance) == 0x000308, "Member 'AFishingRodString_C::Chance' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, Luck) == 0x00030C, "Member 'AFishingRodString_C::Luck' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, bait) == 0x000310, "Member 'AFishingRodString_C::bait' has a wrong offset!");
static_assert(offsetof(AFishingRodString_C, Eat) == 0x000318, "Member 'AFishingRodString_C::Eat' has a wrong offset!");

}
