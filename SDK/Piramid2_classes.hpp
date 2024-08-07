#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Piramid2

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass piramid2.piramid2_C
// 0x01C8 (0x03E8 - 0x0220)
class APiramid2_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               EffPing;                                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               EffStomp_2;                                        // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               EffStomp_1;                                        // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               EffStomp_3;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadarPointComponent_C*                 RadarPoint;                                        // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    LookAt;                                            // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        LookDir;                                           // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    S2;                                                // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    P_L;                                               // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    P_R;                                               // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_cons_L;                                        // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_cons_R;                                        // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraShakeSourceComponent*            CameraShakeSource;                                 // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    S1;                                                // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    S3;                                                // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        PiramidPing;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_far3;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_close3;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_sfar3;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_med3;                                         // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_med2;                                         // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_far2;                                         // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_close2;                                       // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_sfar2;                                        // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_far1;                                         // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_close1;                                       // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_sfar1;                                        // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_med1;                                         // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Mesh;                                              // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        MovementVector;                                    // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_2_a_6EB357EC4165A0F1446A689D73F99FAF;     // 0x0340(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_2__Direction_6EB357EC4165A0F1446A689D73F99FAF; // 0x0344(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2431[0x3];                                     // 0x0345(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_2;                                        // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_1_a_3D36FA1C440809EE47C216BBA1FDB55F;     // 0x0350(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_1__Direction_3D36FA1C440809EE47C216BBA1FDB55F; // 0x0354(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2432[0x3];                                     // 0x0355(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_1;                                        // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_a_3924903B40A2EBE05EF8A4B26BDDD7D8;     // 0x0360(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_3924903B40A2EBE05EF8A4B26BDDD7D8; // 0x0364(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2433[0x3];                                     // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Mov_a_E610030647E148C24D167D943C31B122;            // 0x0370(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Mov__Direction_E610030647E148C24D167D943C31B122;   // 0x0374(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2434[0x3];                                     // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Mov;                                               // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPiramid_sk_prot_Skeleton_AnimBlueprint_C* Anim;                                              // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWalking;                                         // 0x038C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2435[0x3];                                     // 0x038D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                WalkSpot;                                          // 0x0390(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MultiplyWalk;                                      // 0x039C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 WalkActor;                                         // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AKillerwisp_C*                          WispTarget;                                        // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                RelLook;                                           // 0x03B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          WispGathered;                                      // 0x03BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Gathering;                                         // 0x03BD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2436[0x2];                                     // 0x03BE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         P;                                                 // 0x03C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Suc;                                               // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APiramidSpawner_C*                      Spawner;                                           // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AInstancedFoliageActor*                 Foliage;                                           // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Ignore;                                            // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_piramid2(int32 EntryPoint);
	void CustomEvent();
	void ReceiveDestroyed();
	void ChangeLook();
	void SeeWisps();
	void RandLoc();
	void CheckIfReached();
	void MoveAnim(bool Forward);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnCompleted_A01F082C4E4A49A74A14309C32B9B944(class FName NotifyName);
	void OnBlendOut_A01F082C4E4A49A74A14309C32B9B944(class FName NotifyName);
	void OnInterrupted_A01F082C4E4A49A74A14309C32B9B944(class FName NotifyName);
	void OnNotifyBegin_A01F082C4E4A49A74A14309C32B9B944(class FName NotifyName);
	void OnNotifyEnd_A01F082C4E4A49A74A14309C32B9B944(class FName NotifyName);
	void Timeline_2__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Mov__UpdateFunc();
	void Mov__FinishedFunc();
	void Step(int32 Selection);
	void WalkTo(const struct FVector& Param_WalkSpot, class AActor* Param_WalkActor, bool SkipProjection);
	struct FVector WalkSpotFunc();
	void ScanWisps(class AKillerwisp_C** AsKillerwisp);
	bool IsInside();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"piramid2_C">();
	}
	static class APiramid2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APiramid2_C>();
	}
};
static_assert(alignof(APiramid2_C) == 0x000008, "Wrong alignment on APiramid2_C");
static_assert(sizeof(APiramid2_C) == 0x0003E8, "Wrong size on APiramid2_C");
static_assert(offsetof(APiramid2_C, UberGraphFrame) == 0x000220, "Member 'APiramid2_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APiramid2_C, EffPing) == 0x000228, "Member 'APiramid2_C::EffPing' has a wrong offset!");
static_assert(offsetof(APiramid2_C, EffStomp_2) == 0x000230, "Member 'APiramid2_C::EffStomp_2' has a wrong offset!");
static_assert(offsetof(APiramid2_C, EffStomp_1) == 0x000238, "Member 'APiramid2_C::EffStomp_1' has a wrong offset!");
static_assert(offsetof(APiramid2_C, EffStomp_3) == 0x000240, "Member 'APiramid2_C::EffStomp_3' has a wrong offset!");
static_assert(offsetof(APiramid2_C, RadarPoint) == 0x000248, "Member 'APiramid2_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(APiramid2_C, LookAt) == 0x000250, "Member 'APiramid2_C::LookAt' has a wrong offset!");
static_assert(offsetof(APiramid2_C, LookDir) == 0x000258, "Member 'APiramid2_C::LookDir' has a wrong offset!");
static_assert(offsetof(APiramid2_C, S2) == 0x000260, "Member 'APiramid2_C::S2' has a wrong offset!");
static_assert(offsetof(APiramid2_C, P_L) == 0x000268, "Member 'APiramid2_C::P_L' has a wrong offset!");
static_assert(offsetof(APiramid2_C, P_R) == 0x000270, "Member 'APiramid2_C::P_R' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Eff_cons_L) == 0x000278, "Member 'APiramid2_C::Eff_cons_L' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Eff_cons_R) == 0x000280, "Member 'APiramid2_C::Eff_cons_R' has a wrong offset!");
static_assert(offsetof(APiramid2_C, CameraShakeSource) == 0x000288, "Member 'APiramid2_C::CameraShakeSource' has a wrong offset!");
static_assert(offsetof(APiramid2_C, S1) == 0x000290, "Member 'APiramid2_C::S1' has a wrong offset!");
static_assert(offsetof(APiramid2_C, S3) == 0x000298, "Member 'APiramid2_C::S3' has a wrong offset!");
static_assert(offsetof(APiramid2_C, PiramidPing) == 0x0002A0, "Member 'APiramid2_C::PiramidPing' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Step_far3) == 0x0002A8, "Member 'APiramid2_C::Step_far3' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Step_close3) == 0x0002B0, "Member 'APiramid2_C::Step_close3' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Step_sfar3) == 0x0002B8, "Member 'APiramid2_C::Step_sfar3' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Step_med3) == 0x0002C0, "Member 'APiramid2_C::Step_med3' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Step_med2) == 0x0002C8, "Member 'APiramid2_C::Step_med2' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Step_far2) == 0x0002D0, "Member 'APiramid2_C::Step_far2' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Step_close2) == 0x0002D8, "Member 'APiramid2_C::Step_close2' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Step_sfar2) == 0x0002E0, "Member 'APiramid2_C::Step_sfar2' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Step_far1) == 0x0002E8, "Member 'APiramid2_C::Step_far1' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Step_close1) == 0x0002F0, "Member 'APiramid2_C::Step_close1' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Step_sfar1) == 0x0002F8, "Member 'APiramid2_C::Step_sfar1' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Step_med1) == 0x000300, "Member 'APiramid2_C::Step_med1' has a wrong offset!");
static_assert(offsetof(APiramid2_C, PointLight) == 0x000308, "Member 'APiramid2_C::PointLight' has a wrong offset!");
static_assert(offsetof(APiramid2_C, SpotLight) == 0x000310, "Member 'APiramid2_C::SpotLight' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Mesh) == 0x000318, "Member 'APiramid2_C::Mesh' has a wrong offset!");
static_assert(offsetof(APiramid2_C, MovementVector) == 0x000320, "Member 'APiramid2_C::MovementVector' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Arrow) == 0x000328, "Member 'APiramid2_C::Arrow' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Sphere) == 0x000330, "Member 'APiramid2_C::Sphere' has a wrong offset!");
static_assert(offsetof(APiramid2_C, DefaultSceneRoot) == 0x000338, "Member 'APiramid2_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Timeline_2_a_6EB357EC4165A0F1446A689D73F99FAF) == 0x000340, "Member 'APiramid2_C::Timeline_2_a_6EB357EC4165A0F1446A689D73F99FAF' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Timeline_2__Direction_6EB357EC4165A0F1446A689D73F99FAF) == 0x000344, "Member 'APiramid2_C::Timeline_2__Direction_6EB357EC4165A0F1446A689D73F99FAF' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Timeline_2) == 0x000348, "Member 'APiramid2_C::Timeline_2' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Timeline_1_a_3D36FA1C440809EE47C216BBA1FDB55F) == 0x000350, "Member 'APiramid2_C::Timeline_1_a_3D36FA1C440809EE47C216BBA1FDB55F' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Timeline_1__Direction_3D36FA1C440809EE47C216BBA1FDB55F) == 0x000354, "Member 'APiramid2_C::Timeline_1__Direction_3D36FA1C440809EE47C216BBA1FDB55F' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Timeline_1) == 0x000358, "Member 'APiramid2_C::Timeline_1' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Timeline_0_a_3924903B40A2EBE05EF8A4B26BDDD7D8) == 0x000360, "Member 'APiramid2_C::Timeline_0_a_3924903B40A2EBE05EF8A4B26BDDD7D8' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Timeline_0__Direction_3924903B40A2EBE05EF8A4B26BDDD7D8) == 0x000364, "Member 'APiramid2_C::Timeline_0__Direction_3924903B40A2EBE05EF8A4B26BDDD7D8' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Timeline_0) == 0x000368, "Member 'APiramid2_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Mov_a_E610030647E148C24D167D943C31B122) == 0x000370, "Member 'APiramid2_C::Mov_a_E610030647E148C24D167D943C31B122' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Mov__Direction_E610030647E148C24D167D943C31B122) == 0x000374, "Member 'APiramid2_C::Mov__Direction_E610030647E148C24D167D943C31B122' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Mov) == 0x000378, "Member 'APiramid2_C::Mov' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Anim) == 0x000380, "Member 'APiramid2_C::Anim' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Speed) == 0x000388, "Member 'APiramid2_C::Speed' has a wrong offset!");
static_assert(offsetof(APiramid2_C, IsWalking) == 0x00038C, "Member 'APiramid2_C::IsWalking' has a wrong offset!");
static_assert(offsetof(APiramid2_C, WalkSpot) == 0x000390, "Member 'APiramid2_C::WalkSpot' has a wrong offset!");
static_assert(offsetof(APiramid2_C, MultiplyWalk) == 0x00039C, "Member 'APiramid2_C::MultiplyWalk' has a wrong offset!");
static_assert(offsetof(APiramid2_C, WalkActor) == 0x0003A0, "Member 'APiramid2_C::WalkActor' has a wrong offset!");
static_assert(offsetof(APiramid2_C, WispTarget) == 0x0003A8, "Member 'APiramid2_C::WispTarget' has a wrong offset!");
static_assert(offsetof(APiramid2_C, RelLook) == 0x0003B0, "Member 'APiramid2_C::RelLook' has a wrong offset!");
static_assert(offsetof(APiramid2_C, WispGathered) == 0x0003BC, "Member 'APiramid2_C::WispGathered' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Gathering) == 0x0003BD, "Member 'APiramid2_C::Gathering' has a wrong offset!");
static_assert(offsetof(APiramid2_C, P) == 0x0003C0, "Member 'APiramid2_C::P' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Suc) == 0x0003C4, "Member 'APiramid2_C::Suc' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Spawner) == 0x0003C8, "Member 'APiramid2_C::Spawner' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Foliage) == 0x0003D0, "Member 'APiramid2_C::Foliage' has a wrong offset!");
static_assert(offsetof(APiramid2_C, Ignore) == 0x0003D8, "Member 'APiramid2_C::Ignore' has a wrong offset!");

}

