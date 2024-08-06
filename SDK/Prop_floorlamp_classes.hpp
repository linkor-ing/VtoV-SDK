#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_floorlamp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_floorlamp.prop_floorlamp_C
// 0x0018 (0x0390 - 0x0378)
class AProp_floorlamp_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_floorlamp_C;                   // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_floorlamp(int32 EntryPoint);
	void Upd();
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, Enum_interactionActions Action);
	void GamemodeBeginPlay();
	void ReceiveBeginPlay();
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void UserConstructionScript();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_floorlamp_C">();
	}
	static class AProp_floorlamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_floorlamp_C>();
	}
};
static_assert(alignof(AProp_floorlamp_C) == 0x000008, "Wrong alignment on AProp_floorlamp_C");
static_assert(sizeof(AProp_floorlamp_C) == 0x000390, "Wrong size on AProp_floorlamp_C");
static_assert(offsetof(AProp_floorlamp_C, UberGraphFrame_Prop_floorlamp_C) == 0x000378, "Member 'AProp_floorlamp_C::UberGraphFrame_Prop_floorlamp_C' has a wrong offset!");
static_assert(offsetof(AProp_floorlamp_C, PointLight) == 0x000380, "Member 'AProp_floorlamp_C::PointLight' has a wrong offset!");
static_assert(offsetof(AProp_floorlamp_C, Active) == 0x000388, "Member 'AProp_floorlamp_C::Active' has a wrong offset!");

}

