#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_thiccfus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_thiccfus.prop_thiccfus_C
// 0x0010 (0x0378 - 0x0368)
class AProp_thiccfus_C final : public AProp_C
{
public:
	uint8                                         Pad_3D00[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_thiccfus_C;                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Mushrooms;                                         // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_thiccfus(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_thiccfus_C">();
	}
	static class AProp_thiccfus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_thiccfus_C>();
	}
};
static_assert(alignof(AProp_thiccfus_C) == 0x000008, "Wrong alignment on AProp_thiccfus_C");
static_assert(sizeof(AProp_thiccfus_C) == 0x000378, "Wrong size on AProp_thiccfus_C");
static_assert(offsetof(AProp_thiccfus_C, UberGraphFrame_Prop_thiccfus_C) == 0x000368, "Member 'AProp_thiccfus_C::UberGraphFrame_Prop_thiccfus_C' has a wrong offset!");
static_assert(offsetof(AProp_thiccfus_C, Mushrooms) == 0x000370, "Member 'AProp_thiccfus_C::Mushrooms' has a wrong offset!");

}

