#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TentacleBall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass tentacleBall.tentacleBall_C
// 0x0110 (0x05D0 - 0x04C0)
class ATentacleBall_C : public ACharacter
{
public:
	uint8                                         Pad_299B[0x8];                                     // 0x04B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        TentacleBallTalk_Cue;                              // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Charging;                                          // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_tentacleBallShootWindup;                       // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URadarPointComponent_C*                 RadarPoint;                                        // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow1;                                            // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Loop;                                              // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight3;                                       // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight2;                                       // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight1;                                       // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                    SpotLight;                                         // 0x0518(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0520(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x0528(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         TalkLight_a_38C5231C4C139F7F4E6A59A6325E0599;      // 0x0530(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            TalkLight__Direction_38C5231C4C139F7F4E6A59A6325E0599; // 0x0534(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299C[0x3];                                     // 0x0535(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     TalkLight;                                         // 0x0538(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timeline_0_a_6E24E7B94934EAA7D765E79C57A60264;     // 0x0540(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Timeline_0__Direction_6E24E7B94934EAA7D765E79C57A60264; // 0x0544(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299D[0x3];                                     // 0x0545(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Timeline_0;                                        // 0x0548(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LookAtPlayer_a_CFB7EB1F4493740202865FB80020199F;   // 0x0550(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            LookAtPlayer__Direction_CFB7EB1F4493740202865FB80020199F; // 0x0554(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_299E[0x3];                                     // 0x0555(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     LookAtPlayer;                                      // 0x0558(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATentacleBallsFollower_C*               Follower;                                          // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsHostile;                                         // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_299F[0x7];                                     // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ATentacleBall_C*>                buddies;                                           // 0x0570(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                          Chasing;                                           // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29A0[0x7];                                     // 0x0581(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      Obj;                                               // 0x0588(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsAnim;                                            // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29A1[0x7];                                     // 0x0599(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTentacleBall_prot_Skeleton_AnimBlueprint1_C* Anim;                                              // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      Obj2;                                              // 0x05A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          CanTalk;                                           // 0x05B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29A2[0x3];                                     // 0x05B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ITalk;                                             // 0x05BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Ignores;                                           // 0x05C0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_tentacleBall(int32 EntryPoint);
	void LightTalk();
	void Repeat();
	void GoTalk();
	void BndEvt__tentacleBall_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ChargeSound();
	void LookAt(bool Forward);
	void Move();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void OnCompleted_115D36164FA4B85E4BD8FE90B855628C(class FName NotifyName);
	void OnBlendOut_115D36164FA4B85E4BD8FE90B855628C(class FName NotifyName);
	void OnInterrupted_115D36164FA4B85E4BD8FE90B855628C(class FName NotifyName);
	void OnNotifyBegin_115D36164FA4B85E4BD8FE90B855628C(class FName NotifyName);
	void OnNotifyEnd_115D36164FA4B85E4BD8FE90B855628C(class FName NotifyName);
	void OnSuccess_D541AF89420637D9FCDCE080F2CB30FD(EPathFollowingResult MovementResult);
	void OnFail_D541AF89420637D9FCDCE080F2CB30FD(EPathFollowingResult MovementResult);
	void OnSuccess_9784EC7B418509789CF5309C539A20EB(EPathFollowingResult MovementResult);
	void OnFail_9784EC7B418509789CF5309C539A20EB(EPathFollowingResult MovementResult);
	void OnSuccess_35AFE7064B8EDBCC44410888DB27517C(EPathFollowingResult MovementResult);
	void OnFail_35AFE7064B8EDBCC44410888DB27517C(EPathFollowingResult MovementResult);
	void TalkLight__UpdateFunc();
	void TalkLight__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void LookAtPlayer__UpdateFunc();
	void LookAtPlayer__FinishedFunc();
	void Step(const struct FVector& Location, bool Param_Step);
	void Unhostile();
	void SetBuddies(TArray<class ATentacleBall_C*>& Param_buddies);
	void Talk(int32 Param_ITalk);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"tentacleBall_C">();
	}
	static class ATentacleBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATentacleBall_C>();
	}
};
static_assert(alignof(ATentacleBall_C) == 0x000010, "Wrong alignment on ATentacleBall_C");
static_assert(sizeof(ATentacleBall_C) == 0x0005D0, "Wrong size on ATentacleBall_C");
static_assert(offsetof(ATentacleBall_C, UberGraphFrame) == 0x0004C0, "Member 'ATentacleBall_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, TentacleBallTalk_Cue) == 0x0004C8, "Member 'ATentacleBall_C::TentacleBallTalk_Cue' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, Sphere) == 0x0004D0, "Member 'ATentacleBall_C::Sphere' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, Charging) == 0x0004D8, "Member 'ATentacleBall_C::Charging' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, Eff_tentacleBallShootWindup) == 0x0004E0, "Member 'ATentacleBall_C::Eff_tentacleBallShootWindup' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, RadarPoint) == 0x0004E8, "Member 'ATentacleBall_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, Arrow1) == 0x0004F0, "Member 'ATentacleBall_C::Arrow1' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, Loop) == 0x0004F8, "Member 'ATentacleBall_C::Loop' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, PointLight3) == 0x000500, "Member 'ATentacleBall_C::PointLight3' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, PointLight2) == 0x000508, "Member 'ATentacleBall_C::PointLight2' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, PointLight1) == 0x000510, "Member 'ATentacleBall_C::PointLight1' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, SpotLight) == 0x000518, "Member 'ATentacleBall_C::SpotLight' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, PointLight) == 0x000520, "Member 'ATentacleBall_C::PointLight' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, SpringArm) == 0x000528, "Member 'ATentacleBall_C::SpringArm' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, TalkLight_a_38C5231C4C139F7F4E6A59A6325E0599) == 0x000530, "Member 'ATentacleBall_C::TalkLight_a_38C5231C4C139F7F4E6A59A6325E0599' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, TalkLight__Direction_38C5231C4C139F7F4E6A59A6325E0599) == 0x000534, "Member 'ATentacleBall_C::TalkLight__Direction_38C5231C4C139F7F4E6A59A6325E0599' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, TalkLight) == 0x000538, "Member 'ATentacleBall_C::TalkLight' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, Timeline_0_a_6E24E7B94934EAA7D765E79C57A60264) == 0x000540, "Member 'ATentacleBall_C::Timeline_0_a_6E24E7B94934EAA7D765E79C57A60264' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, Timeline_0__Direction_6E24E7B94934EAA7D765E79C57A60264) == 0x000544, "Member 'ATentacleBall_C::Timeline_0__Direction_6E24E7B94934EAA7D765E79C57A60264' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, Timeline_0) == 0x000548, "Member 'ATentacleBall_C::Timeline_0' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, LookAtPlayer_a_CFB7EB1F4493740202865FB80020199F) == 0x000550, "Member 'ATentacleBall_C::LookAtPlayer_a_CFB7EB1F4493740202865FB80020199F' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, LookAtPlayer__Direction_CFB7EB1F4493740202865FB80020199F) == 0x000554, "Member 'ATentacleBall_C::LookAtPlayer__Direction_CFB7EB1F4493740202865FB80020199F' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, LookAtPlayer) == 0x000558, "Member 'ATentacleBall_C::LookAtPlayer' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, Follower) == 0x000560, "Member 'ATentacleBall_C::Follower' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, IsHostile) == 0x000568, "Member 'ATentacleBall_C::IsHostile' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, buddies) == 0x000570, "Member 'ATentacleBall_C::buddies' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, Chasing) == 0x000580, "Member 'ATentacleBall_C::Chasing' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, Obj) == 0x000588, "Member 'ATentacleBall_C::Obj' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, IsAnim) == 0x000598, "Member 'ATentacleBall_C::IsAnim' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, Anim) == 0x0005A0, "Member 'ATentacleBall_C::Anim' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, Obj2) == 0x0005A8, "Member 'ATentacleBall_C::Obj2' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, CanTalk) == 0x0005B8, "Member 'ATentacleBall_C::CanTalk' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, ITalk) == 0x0005BC, "Member 'ATentacleBall_C::ITalk' has a wrong offset!");
static_assert(offsetof(ATentacleBall_C, Ignores) == 0x0005C0, "Member 'ATentacleBall_C::Ignores' has a wrong offset!");

}

