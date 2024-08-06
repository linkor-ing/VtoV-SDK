#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Wire

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Actor_save_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass wire.wire_C
// 0x0088 (0x02D0 - 0x0248)
class AWire_C final : public AActor_save_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Wire_C;                             // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCableComponent*                        Cable;                                             // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Coll_b;                                            // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Coll_a;                                            // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            PhysicsConstraint;                                 // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor_A;                                           // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Actor_B;                                           // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Key_A;                                             // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Key_B;                                             // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component_A;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                    Component_B;                                       // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWire_C*                                PassToWire;                                        // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 PassTo_key;                                        // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Passed;                                            // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_wire(int32 EntryPoint);
	void ReceiveDestroyed();
	void ResetPass();
	void DestB(class AActor* DestroyedActor);
	void DestA(class AActor* DestroyedActor);
	void DestPass(class AActor* DestroyedActor);
	void Init();
	void Pass();
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
	void Attach_a(const struct FHitResult& Hit, class AMainPlayer_C* Player);
	void Attach_b(const struct FHitResult& Hit, class AMainPlayer_C* Player);
	void CanBePutInContainer(bool* Return);
	void AsProp(class AProp_C** Return);
	void CanPickup(bool* Return);
	void NoRespawn(bool Param_NoRespawn, bool* Return);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void IsButtonUsed(bool* Failed);
	void LandedOn(class AMainPlayer_C* Player, bool* IgnoreFallDamage);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, Enum_interactionActions Action);
	void IgnoreSave(bool* Param_IgnoreSave);
	void SkipPreDelete(bool* Skip);
	void GascanFuel(class AProp_gascan_C* Gascan, bool* Fueled);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);
	void SetPath(const TArray<struct FVector>& Path, bool* Return);
	void GetOnlyKey(class FString* Param_Key);
	void ProcessKeys(bool* Return);
	void CanBeUsedHold(bool* Return);
	void GetKey(class FString* Param_Key);
	void ToolboxFix(class AProp_toolbox_C* Toolbox, bool* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"wire_C">();
	}
	static class AWire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWire_C>();
	}
};
static_assert(alignof(AWire_C) == 0x000008, "Wrong alignment on AWire_C");
static_assert(sizeof(AWire_C) == 0x0002D0, "Wrong size on AWire_C");
static_assert(offsetof(AWire_C, UberGraphFrame_Wire_C) == 0x000248, "Member 'AWire_C::UberGraphFrame_Wire_C' has a wrong offset!");
static_assert(offsetof(AWire_C, Cable) == 0x000250, "Member 'AWire_C::Cable' has a wrong offset!");
static_assert(offsetof(AWire_C, Coll_b) == 0x000258, "Member 'AWire_C::Coll_b' has a wrong offset!");
static_assert(offsetof(AWire_C, Coll_a) == 0x000260, "Member 'AWire_C::Coll_a' has a wrong offset!");
static_assert(offsetof(AWire_C, PhysicsConstraint) == 0x000268, "Member 'AWire_C::PhysicsConstraint' has a wrong offset!");
static_assert(offsetof(AWire_C, Actor_A) == 0x000270, "Member 'AWire_C::Actor_A' has a wrong offset!");
static_assert(offsetof(AWire_C, Actor_B) == 0x000278, "Member 'AWire_C::Actor_B' has a wrong offset!");
static_assert(offsetof(AWire_C, Key_A) == 0x000280, "Member 'AWire_C::Key_A' has a wrong offset!");
static_assert(offsetof(AWire_C, Key_B) == 0x000290, "Member 'AWire_C::Key_B' has a wrong offset!");
static_assert(offsetof(AWire_C, Component_A) == 0x0002A0, "Member 'AWire_C::Component_A' has a wrong offset!");
static_assert(offsetof(AWire_C, Component_B) == 0x0002A8, "Member 'AWire_C::Component_B' has a wrong offset!");
static_assert(offsetof(AWire_C, PassToWire) == 0x0002B0, "Member 'AWire_C::PassToWire' has a wrong offset!");
static_assert(offsetof(AWire_C, PassTo_key) == 0x0002B8, "Member 'AWire_C::PassTo_key' has a wrong offset!");
static_assert(offsetof(AWire_C, Passed) == 0x0002C8, "Member 'AWire_C::Passed' has a wrong offset!");

}

