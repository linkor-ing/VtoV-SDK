#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DroneConsole

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass droneConsole.droneConsole_C
// 0x0048 (0x0268 - 0x0220)
class ADroneConsole_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Viewbox;                                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Door;                                              // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    DoorAx;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         A_a_A5238F134FEEE97667C295BEC6B473C1;              // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            A__Direction_A5238F134FEEE97667C295BEC6B473C1;     // 0x024C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24D[0x3];                                      // 0x024D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     A;                                                 // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Opened;                                            // 0x0258(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_259[0x7];                                      // 0x0259(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ADrone_C*                               Drone;                                             // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetPriceMultiplier(float* PriceMult);
	void SkipRadial(bool* Skip);
	void GascanFuel(class AProp_gascan_C* Gascan, bool* Fueled);
	void ToolboxFix(class AProp_toolbox_C* Toolbox, bool* Return);
	void GetKey(class FString* Key);
	void CanBeUsedHold(bool* Return);
	void ProcessKeys(bool* Return);
	void GetOnlyKey(class FString* Key);
	void SetPath(const TArray<struct FVector>& Path, bool* Return);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);
	void LandedOn(class AMainPlayer_C* Player, bool* IgnoreFallDamage);
	void IsButtonUsed(bool* Failed);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void NoRespawn(bool Param_NoRespawn, bool* Return);
	void CanPickup(bool* Return);
	void AsProp(class AProp_C** Return);
	void CanBePutInContainer(bool* Return);
	void A__FinishedFunc();
	void A__UpdateFunc();
	void ImpactDamage(float Damage, const struct FHitResult& Hit, class AActor* Actor, const struct FVector& Impact);
	void EnterWater(class AWaterVolume_C* Water);
	void LeaveWater(class AWaterVolume_C* Water);
	void EnterWaterOrigin(class AWaterVolume_C* Water);
	void LeaveWaterOrigin(class AWaterVolume_C* Water);
	void Eaten();
	void Virus(bool Activate);
	void SetPropProps(bool Static, bool Frozen, bool Active);
	void AddDamage(class AActor* Actor, float Damage, const struct FHitResult& Hit, const struct FVector& Impact, bool SkipSetting);
	void SetKey(const class FString& Key);
	void PhysDestroyed();
	void PhysPreDestroyed();
	void DigUp();
	void Unhook();
	void SteppedOn(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void FireDamage(float Damage);
	void Ignite(float Fuel);
	void Microwave();
	void ReceivedPhyiscsDamage(float Damage, const struct FHitResult& Hot);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);
	void Exploded(float Damage, const struct FVector& Location);
	void ExtinguishFire();
	void PlayerHandRelease_RMB(class AMainPlayer_C* Player);
	void PlayerHandRelease_LMB(class AMainPlayer_C* Player);
	void PlayerHandMouseWheel(class AMainPlayer_C* Player, float WheelDelta);
	void PlayerHandMouse(class AMainPlayer_C* Player, const struct FVector2D& Mouse);
	void PlayerHandAnyKey(class AMainPlayer_C* Player, const struct FKey& Key, bool Pressed);
	void MicrowaveElec();
	void AddTemperature(float Temperature);
	void AccumulateTemperature(float Temperature, float Speed);
	void ActionName(class AMainPlayer_C* Player, const struct FHitResult& Hit, const class FString& Param_Name);
	void Stepped(float Volume);
	void PlayerLookAway(class AMainPlayer_C* Player);
	void ReachedByExplosion(const struct FVector& Location, float Damage);
	void bitten();
	void Slice(bool Clean);
	void PlayerUsedOn(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void AttemptIgnite();
	void Hooked(class AHook_C* Hook);
	void Crafted();
	void CleanSponge(float Clean, class AMainPlayer_C* Player);
	void HookTension(class AHook_C* Hook);
	void DriveDetached();
	void Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void Kicked(bool Kick);
	void SendName(class FName Param_Name);
	void broken();
	void broken_fire();
	void Thrown(class AMainPlayer_C* Player);
	void DamageByPlayer(class AMainPlayer_C* Player, const struct FHitResult& Hit, float Damage);
	void UpdateStrAgl();
	void PlayerUnequip(class AMainPlayer_C* Player);
	void PlayerHold(class AMainPlayer_C* Player);
	void PlayerR(class AMainPlayer_C* Player);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, Enum_interactionActions Action);
	void ExecuteUbergraph_droneConsole(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"droneConsole_C">();
	}
	static class ADroneConsole_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADroneConsole_C>();
	}
};
static_assert(alignof(ADroneConsole_C) == 0x000008, "Wrong alignment on ADroneConsole_C");
static_assert(sizeof(ADroneConsole_C) == 0x000268, "Wrong size on ADroneConsole_C");
static_assert(offsetof(ADroneConsole_C, UberGraphFrame) == 0x000220, "Member 'ADroneConsole_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADroneConsole_C, Viewbox) == 0x000228, "Member 'ADroneConsole_C::Viewbox' has a wrong offset!");
static_assert(offsetof(ADroneConsole_C, Door) == 0x000230, "Member 'ADroneConsole_C::Door' has a wrong offset!");
static_assert(offsetof(ADroneConsole_C, DoorAx) == 0x000238, "Member 'ADroneConsole_C::DoorAx' has a wrong offset!");
static_assert(offsetof(ADroneConsole_C, StaticMesh) == 0x000240, "Member 'ADroneConsole_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ADroneConsole_C, A_a_A5238F134FEEE97667C295BEC6B473C1) == 0x000248, "Member 'ADroneConsole_C::A_a_A5238F134FEEE97667C295BEC6B473C1' has a wrong offset!");
static_assert(offsetof(ADroneConsole_C, A__Direction_A5238F134FEEE97667C295BEC6B473C1) == 0x00024C, "Member 'ADroneConsole_C::A__Direction_A5238F134FEEE97667C295BEC6B473C1' has a wrong offset!");
static_assert(offsetof(ADroneConsole_C, A) == 0x000250, "Member 'ADroneConsole_C::A' has a wrong offset!");
static_assert(offsetof(ADroneConsole_C, Opened) == 0x000258, "Member 'ADroneConsole_C::Opened' has a wrong offset!");
static_assert(offsetof(ADroneConsole_C, Drone) == 0x000260, "Member 'ADroneConsole_C::Drone' has a wrong offset!");

}

