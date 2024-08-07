#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TriggerBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass triggerBase.triggerBase_C
// 0x0068 (0x0288 - 0x0220)
class ATriggerBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Objects;                                           // 0x0230(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class FString>                         Objects_keys;                                      // 0x0240(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 IDs;                                               // 0x0250(0x0010)(Edit, BlueprintVisible)
	class FString                                 Key;                                               // 0x0260(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       Routes;                                            // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IgnoreSave;                                        // 0x0280(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_triggerBase(int32 EntryPoint);
	void RunTrigger(class AActor* Param_Owner, int32 Param_Index);
	void SetActiveTrigger(class AActor* SentFrom, bool Active);
	void CordUnplugged(class ACord_C* Cord, class ACordSocket_C* Socket);
	void CordPlugged(class ACord_C* Cord, class ACordSocket_C* Socket);
	void Set_ignoreSave_trigger(bool NewParam);
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
	void PlayerHandAnyKey(class AMainPlayer_C* Player, const struct FKey& Param_Key, bool Pressed);
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
	void PhysPreDestroyed();
	void PhysDestroyed();
	void SetKey(const class FString& Param_Key);
	void AddDamage(class AActor* Actor, float Damage, const struct FHitResult& Hit, const struct FVector& Impact, bool SkipSetting);
	void SetPropProps(bool Static, bool Frozen, bool Active);
	void Virus(bool Activate);
	void Eaten();
	void LeaveWaterOrigin(class AWaterVolume_C* Water);
	void EnterWaterOrigin(class AWaterVolume_C* Water);
	void LeaveWater(class AWaterVolume_C* Water);
	void EnterWater(class AWaterVolume_C* Water);
	void ImpactDamage(float Damage, const struct FHitResult& Hit, class AActor* Actor, const struct FVector& Impact);
	void TexturePickerApply(class UUmg_texturePicker_C* Picker, class UTexture2D* Texture, int32 Param_Index);
	void ApplyColor(const struct FLinearColor& Color);
	void PropRenderer_finishProps();
	void GamemodeMakeKeys();
	void AnyKey(const struct FKey& Param_Key, bool Pressed);
	void GamemodePreLoad();
	void Unfocused();
	void SettingsApplied(const struct FStruct_settings& Settings);
	void Unfoc();
	void StuffUpgraded(class AMainGamemode_C* GameMode);
	void GamemodeBeginPlay();
	void SignalSaved();
	void SignalDeleted();
	void UserConstructionScript();
	void RunAll(int32 AllIndex);
	void ShowConnections(bool Enable);
	void GetTriggerData(struct FStruct_triggerSave* Data);
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);
	void IgnoreSave_trigger(bool* Ignore);
	void GatherDataFromKeyT(bool* Gather);
	void GetKey(class FString* Param_Key);
	void ToolboxFix(class AProp_toolbox_C* Toolbox, bool* Return);
	void CanBeUsedHold(bool* Return);
	void ProcessKeys(bool* Return);
	void GetOnlyKey(class FString* Param_Key);
	void SetPath(const TArray<struct FVector>& Path, bool* Return);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);
	void GascanFuel(class AProp_gascan_C* Gascan, bool* Fueled);
	void SkipRadial(bool* Skip);
	void GetPriceMultiplier(float* PriceMult);
	void DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"triggerBase_C">();
	}
	static class ATriggerBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATriggerBase_C>();
	}
};
static_assert(alignof(ATriggerBase_C) == 0x000008, "Wrong alignment on ATriggerBase_C");
static_assert(sizeof(ATriggerBase_C) == 0x000288, "Wrong size on ATriggerBase_C");
static_assert(offsetof(ATriggerBase_C, UberGraphFrame) == 0x000220, "Member 'ATriggerBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATriggerBase_C, Billboard) == 0x000228, "Member 'ATriggerBase_C::Billboard' has a wrong offset!");
static_assert(offsetof(ATriggerBase_C, Objects) == 0x000230, "Member 'ATriggerBase_C::Objects' has a wrong offset!");
static_assert(offsetof(ATriggerBase_C, Objects_keys) == 0x000240, "Member 'ATriggerBase_C::Objects_keys' has a wrong offset!");
static_assert(offsetof(ATriggerBase_C, IDs) == 0x000250, "Member 'ATriggerBase_C::IDs' has a wrong offset!");
static_assert(offsetof(ATriggerBase_C, Key) == 0x000260, "Member 'ATriggerBase_C::Key' has a wrong offset!");
static_assert(offsetof(ATriggerBase_C, Routes) == 0x000270, "Member 'ATriggerBase_C::Routes' has a wrong offset!");
static_assert(offsetof(ATriggerBase_C, IgnoreSave) == 0x000280, "Member 'ATriggerBase_C::IgnoreSave' has a wrong offset!");

}

