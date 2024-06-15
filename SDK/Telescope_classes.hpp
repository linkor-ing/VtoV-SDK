#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Telescope

#include "Basic.hpp"

#include "Enum_interactionActions_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass telescope.telescope_C
// 0x0128 (0x0348 - 0x0220)
class ATelescope_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   Pluto;                                             // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Neptune;                                           // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Uranus;                                            // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Saturn;                                            // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Jupiter;                                           // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Venus;                                             // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Mercury;                                           // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   back;                                              // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Mars;                                              // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Moon;                                              // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Objects;                                           // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*               Cam;                                               // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    CamAxis;                                           // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Roo;                                               // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Telescope;                                         // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Rt;                                                // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUmg_telescope_C*                       Widget;                                            // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarsStruct_build_Skeleton_AnimBlueprint_C* Anim;                                              // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Looking;                                           // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25F8[0x3];                                     // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Rot;                                               // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         buildStatus_1;                                     // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         buildStatus_2;                                     // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         buildStatus_3;                                     // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25F9[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dynmat_deco;                                       // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat_lights_1;                                   // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat_lights_2;                                   // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat_body;                                       // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Fast;                                              // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Reset;                                             // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25FA[0x2];                                     // 0x0302(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         A;                                                 // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         B;                                                 // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Move_up;                                           // 0x030C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Move_right;                                        // 0x030D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Move_zoomIn;                                       // 0x030E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25FB[0x1];                                     // 0x030F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Rot_Z;                                             // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rot_Y;                                             // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rot_zoom;                                          // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Move_down;                                         // 0x031C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Move_left;                                         // 0x031D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Move_zoomOut;                                      // 0x031E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25FC[0x1];                                     // 0x031F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                Speed;                                             // 0x0320(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25FD[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATelescopeMars_C*                       O_mars;                                            // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATelescope_moon_C*                      O_moon;                                            // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_telescope(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, int32 Param_Index, Enum_interactionActions Action);
	void ImpactDamage(float Damage, const struct FHitResult& Hit, class AActor* Actor, const struct FVector& Impact);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void UpdateStrAgl();
	void DamageByPlayer(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void Thrown(class AMainPlayer_C* Player);
	void broken_fire();
	void broken();
	void SendName(class FName Param_Name);
	void Kicked(bool Kick);
	void Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void DriveDetached();
	void Hooked(class AHook_C* Hook);
	void AttemptIgnite();
	void PlayerUsedOn(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void Slice(bool Clean);
	void bitten();
	void ReachedByExplosion(const struct FVector& Location, float Damage);
	void PlayerLookAway(class AMainPlayer_C* Player);
	void Stepped(float Volume);
	void ActionName(class AMainPlayer_C* Player, const struct FHitResult& Hit, const class FString& Param_Name);
	void AccumulateTemperature(float Temperature, float Param_Speed);
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
	void ReceivedPhyiscsDamage();
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
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace);
	void IsButtonUsed(bool* Failed);
	void NoRespawn(bool Param_NoRespawn, bool* Return);
	void CanPickup(bool* Return);
	void AsProp(class AProp_C** Return);
	void CanBePutInContainer(bool* Return);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);
	void SetPath(const TArray<struct FVector>& Path, bool* Return);
	void GetOnlyKey(class FString* Key);
	void ProcessKeys(bool* Return);
	void CanBeUsedHold(bool* Return);
	void GetKey(class FString* Key);
	void ToolboxFix(class AProp_toolbox_C* Toolbox, bool* Return);
	void GascanFuel(class AProp_gascan_C* Gascan, bool* Fueled);
	void SkipRadial(bool* Skip);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"telescope_C">();
	}
	static class ATelescope_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATelescope_C>();
	}
};
static_assert(alignof(ATelescope_C) == 0x000008, "Wrong alignment on ATelescope_C");
static_assert(sizeof(ATelescope_C) == 0x000348, "Wrong size on ATelescope_C");
static_assert(offsetof(ATelescope_C, UberGraphFrame) == 0x000220, "Member 'ATelescope_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Pluto) == 0x000228, "Member 'ATelescope_C::Pluto' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Neptune) == 0x000230, "Member 'ATelescope_C::Neptune' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Uranus) == 0x000238, "Member 'ATelescope_C::Uranus' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Saturn) == 0x000240, "Member 'ATelescope_C::Saturn' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Jupiter) == 0x000248, "Member 'ATelescope_C::Jupiter' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Venus) == 0x000250, "Member 'ATelescope_C::Venus' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Mercury) == 0x000258, "Member 'ATelescope_C::Mercury' has a wrong offset!");
static_assert(offsetof(ATelescope_C, back) == 0x000260, "Member 'ATelescope_C::back' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Mars) == 0x000268, "Member 'ATelescope_C::Mars' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Moon) == 0x000270, "Member 'ATelescope_C::Moon' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Objects) == 0x000278, "Member 'ATelescope_C::Objects' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Cam) == 0x000280, "Member 'ATelescope_C::Cam' has a wrong offset!");
static_assert(offsetof(ATelescope_C, PointLight) == 0x000288, "Member 'ATelescope_C::PointLight' has a wrong offset!");
static_assert(offsetof(ATelescope_C, CamAxis) == 0x000290, "Member 'ATelescope_C::CamAxis' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Roo) == 0x000298, "Member 'ATelescope_C::Roo' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Telescope) == 0x0002A0, "Member 'ATelescope_C::Telescope' has a wrong offset!");
static_assert(offsetof(ATelescope_C, DefaultSceneRoot) == 0x0002A8, "Member 'ATelescope_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Rt) == 0x0002B0, "Member 'ATelescope_C::Rt' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Widget) == 0x0002B8, "Member 'ATelescope_C::Widget' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Anim) == 0x0002C0, "Member 'ATelescope_C::Anim' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Looking) == 0x0002C8, "Member 'ATelescope_C::Looking' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Rot) == 0x0002CC, "Member 'ATelescope_C::Rot' has a wrong offset!");
static_assert(offsetof(ATelescope_C, buildStatus_1) == 0x0002D0, "Member 'ATelescope_C::buildStatus_1' has a wrong offset!");
static_assert(offsetof(ATelescope_C, buildStatus_2) == 0x0002D4, "Member 'ATelescope_C::buildStatus_2' has a wrong offset!");
static_assert(offsetof(ATelescope_C, buildStatus_3) == 0x0002D8, "Member 'ATelescope_C::buildStatus_3' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Dynmat_deco) == 0x0002E0, "Member 'ATelescope_C::Dynmat_deco' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Dynmat_lights_1) == 0x0002E8, "Member 'ATelescope_C::Dynmat_lights_1' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Dynmat_lights_2) == 0x0002F0, "Member 'ATelescope_C::Dynmat_lights_2' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Dynmat_body) == 0x0002F8, "Member 'ATelescope_C::Dynmat_body' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Fast) == 0x000300, "Member 'ATelescope_C::Fast' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Reset) == 0x000301, "Member 'ATelescope_C::Reset' has a wrong offset!");
static_assert(offsetof(ATelescope_C, A) == 0x000304, "Member 'ATelescope_C::A' has a wrong offset!");
static_assert(offsetof(ATelescope_C, B) == 0x000308, "Member 'ATelescope_C::B' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Move_up) == 0x00030C, "Member 'ATelescope_C::Move_up' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Move_right) == 0x00030D, "Member 'ATelescope_C::Move_right' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Move_zoomIn) == 0x00030E, "Member 'ATelescope_C::Move_zoomIn' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Rot_Z) == 0x000310, "Member 'ATelescope_C::Rot_Z' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Rot_Y) == 0x000314, "Member 'ATelescope_C::Rot_Y' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Rot_zoom) == 0x000318, "Member 'ATelescope_C::Rot_zoom' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Move_down) == 0x00031C, "Member 'ATelescope_C::Move_down' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Move_left) == 0x00031D, "Member 'ATelescope_C::Move_left' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Move_zoomOut) == 0x00031E, "Member 'ATelescope_C::Move_zoomOut' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Speed) == 0x000320, "Member 'ATelescope_C::Speed' has a wrong offset!");
static_assert(offsetof(ATelescope_C, O_mars) == 0x000330, "Member 'ATelescope_C::O_mars' has a wrong offset!");
static_assert(offsetof(ATelescope_C, O_moon) == 0x000338, "Member 'ATelescope_C::O_moon' has a wrong offset!");
static_assert(offsetof(ATelescope_C, Dynmat) == 0x000340, "Member 'ATelescope_C::Dynmat' has a wrong offset!");

}
