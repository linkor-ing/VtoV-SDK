#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_flag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_flag.prop_flag_C
// 0x0028 (0x0390 - 0x0368)
class AProp_flag_C : public AProp_C
{
public:
	uint8                                         Pad_3AE9[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_flag_C;                        // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVelocityStuck_C*                       VelocityStuck;                                     // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Flag;                                              // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Index_Prop_flag_C;                                 // 0x0388(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_flag(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);
	void ReceiveBeginPlay();
	void SetTex();
	void SettingsApplied(const struct FStruct_settings& Settings);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_flag_C">();
	}
	static class AProp_flag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_flag_C>();
	}
};
static_assert(alignof(AProp_flag_C) == 0x000008, "Wrong alignment on AProp_flag_C");
static_assert(sizeof(AProp_flag_C) == 0x000390, "Wrong size on AProp_flag_C");
static_assert(offsetof(AProp_flag_C, UberGraphFrame_Prop_flag_C) == 0x000368, "Member 'AProp_flag_C::UberGraphFrame_Prop_flag_C' has a wrong offset!");
static_assert(offsetof(AProp_flag_C, VelocityStuck) == 0x000370, "Member 'AProp_flag_C::VelocityStuck' has a wrong offset!");
static_assert(offsetof(AProp_flag_C, Flag) == 0x000378, "Member 'AProp_flag_C::Flag' has a wrong offset!");
static_assert(offsetof(AProp_flag_C, Dynmat) == 0x000380, "Member 'AProp_flag_C::Dynmat' has a wrong offset!");
static_assert(offsetof(AProp_flag_C, Index_Prop_flag_C) == 0x000388, "Member 'AProp_flag_C::Index_Prop_flag_C' has a wrong offset!");

}
