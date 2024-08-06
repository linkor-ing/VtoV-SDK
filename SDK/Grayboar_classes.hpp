#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Grayboar

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass grayboar.grayboar_C
// 0x0120 (0x0498 - 0x0378)
class AGrayboar_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Grayboar_C;                         // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UComp_radarPoint_C*                     Comp_radarPoint;                                   // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        MoveForce;                                         // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Eyes;                                              // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio_loop_turn;                                   // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio_loop_velocity;                               // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio_attack;                                      // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio_roar;                                        // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio_idle;                                        // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       biteZone;                                          // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       biteInitZone;                                      // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       SeeZone;                                           // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Forward;                                           // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Hover4;                                            // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Hover3;                                            // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Hover2;                                            // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Hover1;                                            // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AGrayboarPawn_C*                        Pawn;                                              // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MovementVector;                                    // 0x0418(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_424[0x4];                                      // 0x0424(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UGrayboar_Skeleton_AnimBlueprint_C*     Anim;                                              // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpeedMultDir;                                      // 0x0434(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Target;                                            // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpeedMultiplier;                                   // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Ind;                                               // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CurrPoint;                                         // 0x0448(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                NextPoint;                                         // 0x0454(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MovementForce;                                     // 0x0460(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsMoving;                                          // 0x046C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanForget;                                         // 0x046D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          biting;                                            // 0x046E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_46F[0x1];                                      // 0x046F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 biteActor;                                         // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FuckedUp;                                          // 0x0478(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Roaring;                                           // 0x0479(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_47A[0x2];                                      // 0x047A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Health;                                            // 0x047C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Dying;                                             // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_481[0x3];                                      // 0x0481(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                MovementForceVector;                               // 0x0484(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEvent;                                           // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DamagedAnim;                                       // 0x0491(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_grayboar(int32 EntryPoint);
	void BndEvt__grayboar_seeZone_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__grayboar_seeZone_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__grayboar_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Param_Hit);
	void Damaged(float Sub, bool SkipAnim);
	void Dest(class AActor* DestroyedActor);
	void BndEvt__grayboar_audio_idle_K2Node_ComponentBoundEvent_2_OnAudioFinished__DelegateSignature();
	void Detected();
	void BndEvt__grayboar_biteZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void Saw();
	void SenseUpdate();
	void UpdMov(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void Move();
	void ReceiveTick(float DeltaSeconds);
	void OnCompleted_F2D44BFA4340ED84016CA19643B74736(class FName NotifyName);
	void OnBlendOut_F2D44BFA4340ED84016CA19643B74736(class FName NotifyName);
	void OnInterrupted_F2D44BFA4340ED84016CA19643B74736(class FName NotifyName);
	void OnNotifyBegin_F2D44BFA4340ED84016CA19643B74736(class FName NotifyName);
	void OnNotifyEnd_F2D44BFA4340ED84016CA19643B74736(class FName NotifyName);
	void OnCompleted_090C71314C99233380DE7DB1B5D207C6(class FName NotifyName);
	void OnBlendOut_090C71314C99233380DE7DB1B5D207C6(class FName NotifyName);
	void OnInterrupted_090C71314C99233380DE7DB1B5D207C6(class FName NotifyName);
	void OnNotifyBegin_090C71314C99233380DE7DB1B5D207C6(class FName NotifyName);
	void OnNotifyEnd_090C71314C99233380DE7DB1B5D207C6(class FName NotifyName);
	void OnCompleted_FEF3E3834EA127D483B3218D367A2A58(class FName NotifyName);
	void OnBlendOut_FEF3E3834EA127D483B3218D367A2A58(class FName NotifyName);
	void OnInterrupted_FEF3E3834EA127D483B3218D367A2A58(class FName NotifyName);
	void OnNotifyBegin_FEF3E3834EA127D483B3218D367A2A58(class FName NotifyName);
	void OnNotifyEnd_FEF3E3834EA127D483B3218D367A2A58(class FName NotifyName);
	void OnCompleted_81CD6F744AFBDCC27F8D8E9F469E3058(class FName NotifyName);
	void OnBlendOut_81CD6F744AFBDCC27F8D8E9F469E3058(class FName NotifyName);
	void OnInterrupted_81CD6F744AFBDCC27F8D8E9F469E3058(class FName NotifyName);
	void OnNotifyBegin_81CD6F744AFBDCC27F8D8E9F469E3058(class FName NotifyName);
	void OnNotifyEnd_81CD6F744AFBDCC27F8D8E9F469E3058(class FName NotifyName);
	void FireDamage(float Damage);
	void AddDamage(class AActor* Actor, float Damage, const struct FHitResult& Param_Hit, const struct FVector& Impact, bool SkipSetting);
	void OnSuccess_A3A052A345DBC150524C9C9E2195C293(EPathFollowingResult MovementResult);
	void OnFail_A3A052A345DBC150524C9C9E2195C293(EPathFollowingResult MovementResult);
	struct FVector MakeMovementVector();
	void SensePawn();
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void Exploded(float Damage, const struct FVector& Location);
	void ReceivedPhyiscsDamage(float Damage, const struct FHitResult& Hot);
	void ImpactDamage(float Damage, const struct FHitResult& Param_Hit, class AActor* Actor, const struct FVector& Impact);
	void UserConstructionScript();
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"grayboar_C">();
	}
	static class AGrayboar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGrayboar_C>();
	}
};
static_assert(alignof(AGrayboar_C) == 0x000008, "Wrong alignment on AGrayboar_C");
static_assert(sizeof(AGrayboar_C) == 0x000498, "Wrong size on AGrayboar_C");
static_assert(offsetof(AGrayboar_C, UberGraphFrame_Grayboar_C) == 0x000378, "Member 'AGrayboar_C::UberGraphFrame_Grayboar_C' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Comp_radarPoint) == 0x000380, "Member 'AGrayboar_C::Comp_radarPoint' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, MoveForce) == 0x000388, "Member 'AGrayboar_C::MoveForce' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Eyes) == 0x000390, "Member 'AGrayboar_C::Eyes' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Audio_loop_turn) == 0x000398, "Member 'AGrayboar_C::Audio_loop_turn' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Audio_loop_velocity) == 0x0003A0, "Member 'AGrayboar_C::Audio_loop_velocity' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Audio_attack) == 0x0003A8, "Member 'AGrayboar_C::Audio_attack' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Audio_roar) == 0x0003B0, "Member 'AGrayboar_C::Audio_roar' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Audio_idle) == 0x0003B8, "Member 'AGrayboar_C::Audio_idle' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, biteZone) == 0x0003C0, "Member 'AGrayboar_C::biteZone' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, biteInitZone) == 0x0003C8, "Member 'AGrayboar_C::biteInitZone' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, SeeZone) == 0x0003D0, "Member 'AGrayboar_C::SeeZone' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Forward) == 0x0003D8, "Member 'AGrayboar_C::Forward' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, SkeletalMesh) == 0x0003E0, "Member 'AGrayboar_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, PointLight) == 0x0003E8, "Member 'AGrayboar_C::PointLight' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Hover4) == 0x0003F0, "Member 'AGrayboar_C::Hover4' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Hover3) == 0x0003F8, "Member 'AGrayboar_C::Hover3' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Hover2) == 0x000400, "Member 'AGrayboar_C::Hover2' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Hover1) == 0x000408, "Member 'AGrayboar_C::Hover1' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Pawn) == 0x000410, "Member 'AGrayboar_C::Pawn' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, MovementVector) == 0x000418, "Member 'AGrayboar_C::MovementVector' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Anim) == 0x000428, "Member 'AGrayboar_C::Anim' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Speed) == 0x000430, "Member 'AGrayboar_C::Speed' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, SpeedMultDir) == 0x000434, "Member 'AGrayboar_C::SpeedMultDir' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Target) == 0x000438, "Member 'AGrayboar_C::Target' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, SpeedMultiplier) == 0x000440, "Member 'AGrayboar_C::SpeedMultiplier' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Ind) == 0x000444, "Member 'AGrayboar_C::Ind' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, CurrPoint) == 0x000448, "Member 'AGrayboar_C::CurrPoint' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, NextPoint) == 0x000454, "Member 'AGrayboar_C::NextPoint' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, MovementForce) == 0x000460, "Member 'AGrayboar_C::MovementForce' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, IsMoving) == 0x00046C, "Member 'AGrayboar_C::IsMoving' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, CanForget) == 0x00046D, "Member 'AGrayboar_C::CanForget' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, biting) == 0x00046E, "Member 'AGrayboar_C::biting' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, biteActor) == 0x000470, "Member 'AGrayboar_C::biteActor' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, FuckedUp) == 0x000478, "Member 'AGrayboar_C::FuckedUp' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Roaring) == 0x000479, "Member 'AGrayboar_C::Roaring' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Health) == 0x00047C, "Member 'AGrayboar_C::Health' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, Dying) == 0x000480, "Member 'AGrayboar_C::Dying' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, MovementForceVector) == 0x000484, "Member 'AGrayboar_C::MovementForceVector' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, IsEvent) == 0x000490, "Member 'AGrayboar_C::IsEvent' has a wrong offset!");
static_assert(offsetof(AGrayboar_C, DamagedAnim) == 0x000491, "Member 'AGrayboar_C::DamagedAnim' has a wrong offset!");

}

