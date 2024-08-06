#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PiramidTest

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass piramidTest.piramidTest_C
// 0x0210 (0x06D0 - 0x04C0)
class APiramidTest_C final : public ACharacter
{
public:
	uint8                                         Pad_4B8[0x8];                                      // 0x04B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USpringArmComponent*                    SpringArm;                                         // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Look1;                                             // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    P_L;                                               // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    P_R;                                               // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_cons_L;                                        // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_cons_R;                                        // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Look;                                              // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Looking;                                           // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Norm;                                              // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_far3;                                         // 0x0518(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_close3;                                       // 0x0520(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_sfar3;                                        // 0x0528(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_med3;                                         // 0x0530(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_far2;                                         // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_close2;                                       // 0x0540(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_sfar2;                                        // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_med2;                                         // 0x0550(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_far1;                                         // 0x0558(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_close1;                                       // 0x0560(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_sfar1;                                        // 0x0568(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Step_med1;                                         // 0x0570(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_radarPoint_C*                     RadarPoint;                                        // 0x0578(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        PiramidPing;                                       // 0x0580(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraShakeSourceComponent*            CameraShakeSource;                                 // 0x0588(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   SubPawn;                                           // 0x0590(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Walk;                                              // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    S3;                                                // 0x05A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    S2;                                                // 0x05A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    S1;                                                // 0x05B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x05B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x05C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_a_5CD855F54912ED339A9E648F17BAE783;     // 0x05C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_5CD855F54912ED339A9E648F17BAE783; // 0x05CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5CD[0x3];                                      // 0x05CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x05D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SuckIn_a_BE0C84274D262315A2CB12A9A932A465;         // 0x05D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            SuckIn__Direction_BE0C84274D262315A2CB12A9A932A465; // 0x05DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5DD[0x3];                                      // 0x05DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     SuckIn;                                            // 0x05E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         beamAlpha_a_FF1C88634EB22B9FFF965FBEF2EF752C;      // 0x05E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            beamAlpha__Direction_FF1C88634EB22B9FFF965FBEF2EF752C; // 0x05EC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5ED[0x3];                                      // 0x05ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     beamAlpha;                                         // 0x05F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Spd_a_ECDF042B410EC775B61DA499366FF31C;            // 0x05F8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Spd__Direction_ECDF042B410EC775B61DA499366FF31C;   // 0x05FC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5FD[0x3];                                      // 0x05FD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Spd;                                               // 0x0600(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Loc;                                               // 0x0608(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_614[0x4];                                      // 0x0614(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPiramid_sk_prot_Skeleton_AnimBlueprint_C* Anim;                                              // 0x0618(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APiramidSubpawn_C*                      PiramidSubpawn;                                    // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WalkPoint;                                         // 0x0628(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TurnSpeed;                                         // 0x0634(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                WalkToPoint;                                       // 0x0638(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Point;                                             // 0x0644(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          OutOfNav;                                          // 0x0648(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_649[0x3];                                      // 0x0649(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Lk;                                                // 0x064C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Lk_t;                                              // 0x0658(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FinishedPath;                                      // 0x0664(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_665[0x3];                                      // 0x0665(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FRotator                               VelrotTarget;                                      // 0x0668(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_674[0x4];                                      // 0x0674(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AKillerwisp_C*                          Target;                                            // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Gathering;                                         // 0x0680(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_681[0x7];                                      // 0x0681(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AKillerwisp_C*                          GatherWisp;                                        // 0x0688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVectorSpringState                     Spr;                                               // 0x0690(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         P;                                                 // 0x06A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Suc;                                               // 0x06AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APiramidSpawner_C*                      Spawner;                                           // 0x06B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Left;                                              // 0x06B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          AboutTo;                                           // 0x06B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6BA[0x2];                                      // 0x06BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFloatSpringState                      Spring;                                            // 0x06BC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          WispGathered;                                      // 0x06C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_piramidTest(int32 EntryPoint);
	void ReceiveDestroyed();
	void Turning();
	void WalkRand();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnCompleted_CDC4E739476A6D90F257518D997A9229(class FName NotifyName);
	void OnBlendOut_CDC4E739476A6D90F257518D997A9229(class FName NotifyName);
	void OnInterrupted_CDC4E739476A6D90F257518D997A9229(class FName NotifyName);
	void OnNotifyBegin_CDC4E739476A6D90F257518D997A9229(class FName NotifyName);
	void OnNotifyEnd_CDC4E739476A6D90F257518D997A9229(class FName NotifyName);
	void OnSuccess_4F701AC8453DAFAEB7A7C7B1B96D6849(EPathFollowingResult MovementResult);
	void OnFail_4F701AC8453DAFAEB7A7C7B1B96D6849(EPathFollowingResult MovementResult);
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void SuckIn__UpdateFunc();
	void SuckIn__FinishedFunc();
	void beamAlpha__UpdateFunc();
	void beamAlpha__FinishedFunc();
	void Spd__UpdateFunc();
	void Spd__FinishedFunc();
	void Notif(int32 Selection);
	void ScanForWisps(class AKillerwisp_C** AsKillerwisp);
	struct FVector SpringVec1();
	bool boolDist1();
	bool IsInside();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"piramidTest_C">();
	}
	static class APiramidTest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APiramidTest_C>();
	}
};
static_assert(alignof(APiramidTest_C) == 0x000010, "Wrong alignment on APiramidTest_C");
static_assert(sizeof(APiramidTest_C) == 0x0006D0, "Wrong size on APiramidTest_C");
static_assert(offsetof(APiramidTest_C, UberGraphFrame) == 0x0004C0, "Member 'APiramidTest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, SpringArm) == 0x0004C8, "Member 'APiramidTest_C::SpringArm' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Look1) == 0x0004D0, "Member 'APiramidTest_C::Look1' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, P_L) == 0x0004D8, "Member 'APiramidTest_C::P_L' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, P_R) == 0x0004E0, "Member 'APiramidTest_C::P_R' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Eff_cons_L) == 0x0004E8, "Member 'APiramidTest_C::Eff_cons_L' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Eff_cons_R) == 0x0004F0, "Member 'APiramidTest_C::Eff_cons_R' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Look) == 0x0004F8, "Member 'APiramidTest_C::Look' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Looking) == 0x000500, "Member 'APiramidTest_C::Looking' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Billboard) == 0x000508, "Member 'APiramidTest_C::Billboard' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Norm) == 0x000510, "Member 'APiramidTest_C::Norm' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Step_far3) == 0x000518, "Member 'APiramidTest_C::Step_far3' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Step_close3) == 0x000520, "Member 'APiramidTest_C::Step_close3' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Step_sfar3) == 0x000528, "Member 'APiramidTest_C::Step_sfar3' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Step_med3) == 0x000530, "Member 'APiramidTest_C::Step_med3' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Step_far2) == 0x000538, "Member 'APiramidTest_C::Step_far2' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Step_close2) == 0x000540, "Member 'APiramidTest_C::Step_close2' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Step_sfar2) == 0x000548, "Member 'APiramidTest_C::Step_sfar2' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Step_med2) == 0x000550, "Member 'APiramidTest_C::Step_med2' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Step_far1) == 0x000558, "Member 'APiramidTest_C::Step_far1' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Step_close1) == 0x000560, "Member 'APiramidTest_C::Step_close1' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Step_sfar1) == 0x000568, "Member 'APiramidTest_C::Step_sfar1' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Step_med1) == 0x000570, "Member 'APiramidTest_C::Step_med1' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, RadarPoint) == 0x000578, "Member 'APiramidTest_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, PiramidPing) == 0x000580, "Member 'APiramidTest_C::PiramidPing' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, CameraShakeSource) == 0x000588, "Member 'APiramidTest_C::CameraShakeSource' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, SubPawn) == 0x000590, "Member 'APiramidTest_C::SubPawn' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Walk) == 0x000598, "Member 'APiramidTest_C::Walk' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, S3) == 0x0005A0, "Member 'APiramidTest_C::S3' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, S2) == 0x0005A8, "Member 'APiramidTest_C::S2' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, S1) == 0x0005B0, "Member 'APiramidTest_C::S1' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, SpotLight) == 0x0005B8, "Member 'APiramidTest_C::SpotLight' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, PointLight) == 0x0005C0, "Member 'APiramidTest_C::PointLight' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Timeline_0_a_5CD855F54912ED339A9E648F17BAE783) == 0x0005C8, "Member 'APiramidTest_C::Timeline_0_a_5CD855F54912ED339A9E648F17BAE783' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Timeline_0__Direction_5CD855F54912ED339A9E648F17BAE783) == 0x0005CC, "Member 'APiramidTest_C::Timeline_0__Direction_5CD855F54912ED339A9E648F17BAE783' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Timeline_0) == 0x0005D0, "Member 'APiramidTest_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, SuckIn_a_BE0C84274D262315A2CB12A9A932A465) == 0x0005D8, "Member 'APiramidTest_C::SuckIn_a_BE0C84274D262315A2CB12A9A932A465' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, SuckIn__Direction_BE0C84274D262315A2CB12A9A932A465) == 0x0005DC, "Member 'APiramidTest_C::SuckIn__Direction_BE0C84274D262315A2CB12A9A932A465' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, SuckIn) == 0x0005E0, "Member 'APiramidTest_C::SuckIn' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, beamAlpha_a_FF1C88634EB22B9FFF965FBEF2EF752C) == 0x0005E8, "Member 'APiramidTest_C::beamAlpha_a_FF1C88634EB22B9FFF965FBEF2EF752C' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, beamAlpha__Direction_FF1C88634EB22B9FFF965FBEF2EF752C) == 0x0005EC, "Member 'APiramidTest_C::beamAlpha__Direction_FF1C88634EB22B9FFF965FBEF2EF752C' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, beamAlpha) == 0x0005F0, "Member 'APiramidTest_C::beamAlpha' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Spd_a_ECDF042B410EC775B61DA499366FF31C) == 0x0005F8, "Member 'APiramidTest_C::Spd_a_ECDF042B410EC775B61DA499366FF31C' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Spd__Direction_ECDF042B410EC775B61DA499366FF31C) == 0x0005FC, "Member 'APiramidTest_C::Spd__Direction_ECDF042B410EC775B61DA499366FF31C' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Spd) == 0x000600, "Member 'APiramidTest_C::Spd' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Loc) == 0x000608, "Member 'APiramidTest_C::Loc' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Anim) == 0x000618, "Member 'APiramidTest_C::Anim' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, PiramidSubpawn) == 0x000620, "Member 'APiramidTest_C::PiramidSubpawn' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, WalkPoint) == 0x000628, "Member 'APiramidTest_C::WalkPoint' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, TurnSpeed) == 0x000634, "Member 'APiramidTest_C::TurnSpeed' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, WalkToPoint) == 0x000638, "Member 'APiramidTest_C::WalkToPoint' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Point) == 0x000644, "Member 'APiramidTest_C::Point' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, OutOfNav) == 0x000648, "Member 'APiramidTest_C::OutOfNav' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Lk) == 0x00064C, "Member 'APiramidTest_C::Lk' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Lk_t) == 0x000658, "Member 'APiramidTest_C::Lk_t' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, FinishedPath) == 0x000664, "Member 'APiramidTest_C::FinishedPath' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, VelrotTarget) == 0x000668, "Member 'APiramidTest_C::VelrotTarget' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Target) == 0x000678, "Member 'APiramidTest_C::Target' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Gathering) == 0x000680, "Member 'APiramidTest_C::Gathering' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, GatherWisp) == 0x000688, "Member 'APiramidTest_C::GatherWisp' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Spr) == 0x000690, "Member 'APiramidTest_C::Spr' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, P) == 0x0006A8, "Member 'APiramidTest_C::P' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Suc) == 0x0006AC, "Member 'APiramidTest_C::Suc' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Spawner) == 0x0006B0, "Member 'APiramidTest_C::Spawner' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Left) == 0x0006B8, "Member 'APiramidTest_C::Left' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, AboutTo) == 0x0006B9, "Member 'APiramidTest_C::AboutTo' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, Spring) == 0x0006BC, "Member 'APiramidTest_C::Spring' has a wrong offset!");
static_assert(offsetof(APiramidTest_C, WispGathered) == 0x0006C4, "Member 'APiramidTest_C::WispGathered' has a wrong offset!");

}

