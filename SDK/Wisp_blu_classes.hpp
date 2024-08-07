#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wisp_blu

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass wisp_blu.wisp_blu_C
// 0x00A0 (0x0560 - 0x04C0)
class AWisp_blu_C final : public ACharacter
{
public:
	uint8                                         Pad_4B8[0x8];                                      // 0x04B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                       Dooropener;                                        // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Gravigun_object_hold_loop;                         // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       AgravSphere;                                       // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_radarPoint_C*                     RadarPoint;                                        // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNavigationInvokerComponent*            NavigationInvoker;                                 // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Arg;                                               // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Eff_wisp;                                          // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         A_a_50C6CF2542B4E11CA28F81B02D4E443B;              // 0x0508(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            A__Direction_50C6CF2542B4E11CA28F81B02D4E443B;     // 0x050C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_50D[0x3];                                      // 0x050D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     A;                                                 // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ime;                                               // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Disappearing;                                      // 0x051C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_51D[0x3];                                      // 0x051D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      Obj;                                               // 0x0520(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Landed;                                            // 0x0530(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_531[0x3];                                      // 0x0531(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Last;                                              // 0x0534(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  Pawn;                                              // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Consume;                                           // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_549[0x7];                                      // 0x0549(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         Objs;                                              // 0x0550(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_wisp_blu(int32 EntryPoint);
	void ImpactDamage(float Damage, const struct FHitResult& Hit, class AActor* Actor, const struct FVector& Impact);
	void LeaveWater(class AWaterVolume_C* Water);
	void EnterWaterOrigin(class AWaterVolume_C* Water);
	void LeaveWaterOrigin(class AWaterVolume_C* Water);
	void Eaten();
	void Virus(bool Activate);
	void BndEvt__wisp_blu_agravSphere_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void BndEvt__wisp_blu_agravSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__wisp_red_dooropener_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void EnterWater(class AWaterVolume_C* Water);
	void SetPropProps(bool Static, bool Frozen, bool Active);
	void AddDamage(class AActor* Actor, float Damage, const struct FHitResult& Hit, const struct FVector& Impact, bool SkipSetting);
	void SetKey(const class FString& Key);
	void PhysDestroyed();
	void PhysPreDestroyed();
	void ReceiveTick(float DeltaSeconds);
	void Dir(bool Condition);
	void ReceiveBeginPlay();
	void HookTension(class AHook_C* Hook);
	void CleanSponge(float Clean, class AMainPlayer_C* Player);
	void Crafted();
	void Hooked(class AHook_C* Hook);
	void AttemptIgnite();
	void PlayerUsedOn(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void Slice(bool Clean);
	void bitten();
	void ReachedByExplosion(const struct FVector& Location, float Damage);
	void PlayerLookAway(class AMainPlayer_C* Player);
	void Stepped(float Volume);
	void ActionName(class AMainPlayer_C* Player, const struct FHitResult& Hit, const class FString& Param_Name);
	void AccumulateTemperature(float Temperature, float Speed);
	void AddTemperature(float Temperature);
	void MicrowaveElec();
	void PlayerHandAnyKey(class AMainPlayer_C* Player, const struct FKey& Key, bool Pressed);
	void PlayerHandMouse(class AMainPlayer_C* Player, const struct FVector2D& Mouse);
	void PlayerHandMouseWheel(class AMainPlayer_C* Player, float WheelDelta);
	void PlayerHandRelease_LMB(class AMainPlayer_C* Player);
	void PlayerHandRelease_RMB(class AMainPlayer_C* Player);
	void ExtinguishFire();
	void Exploded(float Damage, const struct FVector& Location);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, Enum_interactionActions Action);
	void ReceivedPhyiscsDamage(float Damage, const struct FHitResult& Hot);
	void Microwave();
	void Ignite(float Fuel);
	void FireDamage(float Damage);
	void SteppedOn(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void Unhook();
	void DigUp();
	void OnSuccess_DFDA4EBB4B7ACE8B399BA387C4523C25(EPathFollowingResult MovementResult);
	void OnFail_DFDA4EBB4B7ACE8B399BA387C4523C25(EPathFollowingResult MovementResult);
	void A__UpdateFunc();
	void A__FinishedFunc();
	void UserConstructionScript();
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);
	void SetPath(const TArray<struct FVector>& Path, bool* Return);
	void GetOnlyKey(class FString* Key);
	void ProcessKeys(bool* Return);
	void CanBeUsedHold(bool* Return);
	void GetKey(class FString* Key);
	void ToolboxFix(class AProp_toolbox_C* Toolbox, bool* Return);
	void GascanFuel(class AProp_gascan_C* Gascan, bool* Fueled);
	void SkipRadial(bool* Skip);
	void GetPriceMultiplier(float* PriceMult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"wisp_blu_C">();
	}
	static class AWisp_blu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWisp_blu_C>();
	}
};
static_assert(alignof(AWisp_blu_C) == 0x000010, "Wrong alignment on AWisp_blu_C");
static_assert(sizeof(AWisp_blu_C) == 0x000560, "Wrong size on AWisp_blu_C");
static_assert(offsetof(AWisp_blu_C, UberGraphFrame) == 0x0004C0, "Member 'AWisp_blu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, Dooropener) == 0x0004C8, "Member 'AWisp_blu_C::Dooropener' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, Gravigun_object_hold_loop) == 0x0004D0, "Member 'AWisp_blu_C::Gravigun_object_hold_loop' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, AgravSphere) == 0x0004D8, "Member 'AWisp_blu_C::AgravSphere' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, RadarPoint) == 0x0004E0, "Member 'AWisp_blu_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, NavigationInvoker) == 0x0004E8, "Member 'AWisp_blu_C::NavigationInvoker' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, Arg) == 0x0004F0, "Member 'AWisp_blu_C::Arg' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, PointLight) == 0x0004F8, "Member 'AWisp_blu_C::PointLight' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, Eff_wisp) == 0x000500, "Member 'AWisp_blu_C::Eff_wisp' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, A_a_50C6CF2542B4E11CA28F81B02D4E443B) == 0x000508, "Member 'AWisp_blu_C::A_a_50C6CF2542B4E11CA28F81B02D4E443B' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, A__Direction_50C6CF2542B4E11CA28F81B02D4E443B) == 0x00050C, "Member 'AWisp_blu_C::A__Direction_50C6CF2542B4E11CA28F81B02D4E443B' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, A) == 0x000510, "Member 'AWisp_blu_C::A' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, Ime) == 0x000518, "Member 'AWisp_blu_C::Ime' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, Disappearing) == 0x00051C, "Member 'AWisp_blu_C::Disappearing' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, Obj) == 0x000520, "Member 'AWisp_blu_C::Obj' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, Landed) == 0x000530, "Member 'AWisp_blu_C::Landed' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, Last) == 0x000534, "Member 'AWisp_blu_C::Last' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, Pawn) == 0x000540, "Member 'AWisp_blu_C::Pawn' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, Consume) == 0x000548, "Member 'AWisp_blu_C::Consume' has a wrong offset!");
static_assert(offsetof(AWisp_blu_C, Objs) == 0x000550, "Member 'AWisp_blu_C::Objs' has a wrong offset!");

}

