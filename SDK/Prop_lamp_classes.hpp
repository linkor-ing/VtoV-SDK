#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_lamp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_lamp.prop_lamp_C
// 0x0018 (0x0380 - 0x0368)
class AProp_lamp_C final : public AProp_C
{
public:
	uint8                                         Pad_382E[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_lamp_C;                        // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0378(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_382F[0x3];                                     // 0x0379(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Fuel;                                              // 0x037C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_lamp(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);
	void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Param_Hit);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Upd();
	void GamemodeBeginPlay();
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void UserConstructionScript();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_lamp_C">();
	}
	static class AProp_lamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_lamp_C>();
	}
};
static_assert(alignof(AProp_lamp_C) == 0x000008, "Wrong alignment on AProp_lamp_C");
static_assert(sizeof(AProp_lamp_C) == 0x000380, "Wrong size on AProp_lamp_C");
static_assert(offsetof(AProp_lamp_C, UberGraphFrame_Prop_lamp_C) == 0x000368, "Member 'AProp_lamp_C::UberGraphFrame_Prop_lamp_C' has a wrong offset!");
static_assert(offsetof(AProp_lamp_C, PointLight) == 0x000370, "Member 'AProp_lamp_C::PointLight' has a wrong offset!");
static_assert(offsetof(AProp_lamp_C, Active) == 0x000378, "Member 'AProp_lamp_C::Active' has a wrong offset!");
static_assert(offsetof(AProp_lamp_C, Fuel) == 0x00037C, "Member 'AProp_lamp_C::Fuel' has a wrong offset!");

}
