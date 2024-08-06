#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wisp_b

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Enum_interactionActions_structs.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass wisp_b.wisp_b_C
// 0x0090 (0x0550 - 0x04C0)
class AWisp_b_C final : public ACharacter
{
public:
	uint8                                         Pad_4B8[0x8];                                      // 0x04B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Eff_wisp;                                          // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            PhysicsConstraint;                                 // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Coll;                                              // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Base;                                              // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPnormal_C*                             Pnormal;                                           // 0x04E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio1;                                            // 0x04F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UComp_radarPoint_C*                     RadarPoint;                                        // 0x0500(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNavigationInvokerComponent*            NavigationInvoker;                                 // 0x0508(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Arg;                                               // 0x0510(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0518(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         A_a_EFD38E2C4F57FED0AA706CB80FA79380;              // 0x0520(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            A__Direction_EFD38E2C4F57FED0AA706CB80FA79380;     // 0x0524(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_525[0x3];                                      // 0x0525(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     A;                                                 // 0x0528(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ime;                                               // 0x0530(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Disappearing;                                      // 0x0534(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_535[0x3];                                      // 0x0535(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      Obj;                                               // 0x0538(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          Landed;                                            // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_wisp_b(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, Enum_interactionActions Action);
	void OnLanded(const struct FHitResult& Hit);
	void ImpactDamage(float Damage, const struct FHitResult& Hit, class AActor* Actor, const struct FVector& Impact);
	void ReceiveTick(float DeltaSeconds);
	void Dir(bool Condition);
	void ReceiveBeginPlay();
	void PlayerR(class AMainPlayer_C* Player);
	void PlayerHold(class AMainPlayer_C* Player);
	void PlayerUnequip(class AMainPlayer_C* Player);
	void UpdateStrAgl();
	void DamageByPlayer(class AMainPlayer_C* Player, const struct FHitResult& Hit, float Damage);
	void Thrown(class AMainPlayer_C* Player);
	void broken_fire();
	void broken();
	void SendName(class FName Param_Name);
	void Kicked(bool Kick);
	void Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void DriveDetached();
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
	void ReceivedPhyiscsDamage(float Damage, const struct FHitResult& Hot);
	void Microwave();
	void Ignite(float Fuel);
	void FireDamage(float Damage);
	void SteppedOn(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void Unhook();
	void DigUp();
	void PhysPreDestroyed();
	void PhysDestroyed();
	void SetKey(const class FString& Key);
	void AddDamage(class AActor* Actor, float Damage, const struct FHitResult& Hit, const struct FVector& Impact, bool SkipSetting);
	void SetPropProps(bool Static, bool Frozen, bool Active);
	void Virus(bool Activate);
	void Eaten();
	void LeaveWaterOrigin(class AWaterVolume_C* Water);
	void EnterWaterOrigin(class AWaterVolume_C* Water);
	void LeaveWater(class AWaterVolume_C* Water);
	void EnterWater(class AWaterVolume_C* Water);
	void OnSuccess_DEFB4DE441E9C21ECE835CA322E706B9(EPathFollowingResult MovementResult);
	void OnFail_DEFB4DE441E9C21ECE835CA322E706B9(EPathFollowingResult MovementResult);
	void A__UpdateFunc();
	void A__FinishedFunc();
	void UserConstructionScript();
	void CanBePutInContainer(bool* Return);
	void AsProp(class AProp_C** Return);
	void CanPickup(bool* Return);
	void NoRespawn(bool Param_NoRespawn, bool* Return);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void IsButtonUsed(bool* Failed);
	void LandedOn(class AMainPlayer_C* Player, bool* IgnoreFallDamage);
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
		return StaticBPGeneratedClassImpl<"wisp_b_C">();
	}
	static class AWisp_b_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWisp_b_C>();
	}
};
static_assert(alignof(AWisp_b_C) == 0x000010, "Wrong alignment on AWisp_b_C");
static_assert(sizeof(AWisp_b_C) == 0x000550, "Wrong size on AWisp_b_C");
static_assert(offsetof(AWisp_b_C, UberGraphFrame) == 0x0004C0, "Member 'AWisp_b_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, Eff_wisp) == 0x0004C8, "Member 'AWisp_b_C::Eff_wisp' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, PhysicsConstraint) == 0x0004D0, "Member 'AWisp_b_C::PhysicsConstraint' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, Coll) == 0x0004D8, "Member 'AWisp_b_C::Coll' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, Base) == 0x0004E0, "Member 'AWisp_b_C::Base' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, Pnormal) == 0x0004E8, "Member 'AWisp_b_C::Pnormal' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, Audio1) == 0x0004F0, "Member 'AWisp_b_C::Audio1' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, Audio) == 0x0004F8, "Member 'AWisp_b_C::Audio' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, RadarPoint) == 0x000500, "Member 'AWisp_b_C::RadarPoint' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, NavigationInvoker) == 0x000508, "Member 'AWisp_b_C::NavigationInvoker' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, Arg) == 0x000510, "Member 'AWisp_b_C::Arg' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, PointLight) == 0x000518, "Member 'AWisp_b_C::PointLight' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, A_a_EFD38E2C4F57FED0AA706CB80FA79380) == 0x000520, "Member 'AWisp_b_C::A_a_EFD38E2C4F57FED0AA706CB80FA79380' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, A__Direction_EFD38E2C4F57FED0AA706CB80FA79380) == 0x000524, "Member 'AWisp_b_C::A__Direction_EFD38E2C4F57FED0AA706CB80FA79380' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, A) == 0x000528, "Member 'AWisp_b_C::A' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, Ime) == 0x000530, "Member 'AWisp_b_C::Ime' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, Disappearing) == 0x000534, "Member 'AWisp_b_C::Disappearing' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, Obj) == 0x000538, "Member 'AWisp_b_C::Obj' has a wrong offset!");
static_assert(offsetof(AWisp_b_C, Landed) == 0x000548, "Member 'AWisp_b_C::Landed' has a wrong offset!");

}

