#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheDoor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TheDoor.TheDoor_C
// 0x00C0 (0x02E0 - 0x0220)
class ATheDoor_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Sphere1;                                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    RectLight;                                         // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        SqueakSound;                                       // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        CloseSound;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        OpenSound;                                         // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door2_frame;                                       // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_radarPoint_C*                     RadarPoint;                                        // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPnormal_C*                             Pnormal;                                           // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CheckRender;                                       // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door1;                                             // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door;                                              // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Frame;                                             // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UPhysicalMaterial*>              Mats;                                              // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                Box;                                               // 0x02B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          A;                                                 // 0x02BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2BD[0x3];                                      // 0x02BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Alpha;                                             // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          MoveDir;                                           // 0x02C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C5[0x3];                                      // 0x02C5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Speed;                                             // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Closed;                                            // 0x02CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2CD[0x3];                                      // 0x02CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      Obj;                                               // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void Tp(bool* Return, struct FVector* Location, float* Angle);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__TheDoor_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Open();
	void ReceiveBeginPlay();
	void Close();
	void BndEvt__TheDoor_Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_TheDoor(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TheDoor_C">();
	}
	static class ATheDoor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATheDoor_C>();
	}
};
static_assert(alignof(ATheDoor_C) == 0x000008, "Wrong alignment on ATheDoor_C");
static_assert(sizeof(ATheDoor_C) == 0x0002E0, "Wrong size on ATheDoor_C");
static_assert(offsetof(ATheDoor_C, UberGraphFrame) == 0x000220, "Member 'ATheDoor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, Sphere1) == 0x000228, "Member 'ATheDoor_C::Sphere1' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, RectLight) == 0x000230, "Member 'ATheDoor_C::RectLight' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, SqueakSound) == 0x000238, "Member 'ATheDoor_C::SqueakSound' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, CloseSound) == 0x000240, "Member 'ATheDoor_C::CloseSound' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, OpenSound) == 0x000248, "Member 'ATheDoor_C::OpenSound' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, Sphere) == 0x000250, "Member 'ATheDoor_C::Sphere' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, Door2_frame) == 0x000258, "Member 'ATheDoor_C::Door2_frame' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, RadarPoint) == 0x000260, "Member 'ATheDoor_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, Pnormal) == 0x000268, "Member 'ATheDoor_C::Pnormal' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, CheckRender) == 0x000270, "Member 'ATheDoor_C::CheckRender' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, Billboard) == 0x000278, "Member 'ATheDoor_C::Billboard' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, Door1) == 0x000280, "Member 'ATheDoor_C::Door1' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, Door) == 0x000288, "Member 'ATheDoor_C::Door' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, Frame) == 0x000290, "Member 'ATheDoor_C::Frame' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, DefaultSceneRoot) == 0x000298, "Member 'ATheDoor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, Mats) == 0x0002A0, "Member 'ATheDoor_C::Mats' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, Box) == 0x0002B0, "Member 'ATheDoor_C::Box' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, A) == 0x0002BC, "Member 'ATheDoor_C::A' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, Alpha) == 0x0002C0, "Member 'ATheDoor_C::Alpha' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, MoveDir) == 0x0002C4, "Member 'ATheDoor_C::MoveDir' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, Speed) == 0x0002C8, "Member 'ATheDoor_C::Speed' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, Closed) == 0x0002CC, "Member 'ATheDoor_C::Closed' has a wrong offset!");
static_assert(offsetof(ATheDoor_C, Obj) == 0x0002D0, "Member 'ATheDoor_C::Obj' has a wrong offset!");

}
