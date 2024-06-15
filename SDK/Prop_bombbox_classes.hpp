#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_bombbox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_bombbox.prop_bombbox_C
// 0x0010 (0x0378 - 0x0368)
class AProp_bombbox_C final : public AProp_C
{
public:
	uint8                                         Pad_3E32[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_bombbox_C;                     // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Exp;                                               // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_bombbox(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_bombbox_C">();
	}
	static class AProp_bombbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_bombbox_C>();
	}
};
static_assert(alignof(AProp_bombbox_C) == 0x000008, "Wrong alignment on AProp_bombbox_C");
static_assert(sizeof(AProp_bombbox_C) == 0x000378, "Wrong size on AProp_bombbox_C");
static_assert(offsetof(AProp_bombbox_C, UberGraphFrame_Prop_bombbox_C) == 0x000368, "Member 'AProp_bombbox_C::UberGraphFrame_Prop_bombbox_C' has a wrong offset!");
static_assert(offsetof(AProp_bombbox_C, Exp) == 0x000370, "Member 'AProp_bombbox_C::Exp' has a wrong offset!");

}

