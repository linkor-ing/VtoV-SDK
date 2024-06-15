#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_ubaitBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_ubaitBox.prop_ubaitBox_C
// 0x0018 (0x0380 - 0x0368)
class AProp_ubaitBox_C : public AProp_C
{
public:
	uint8                                         Pad_3A22[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_ubaitBox_C;                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         Type;                                              // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_ubaitBox(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_ubaitBox_C">();
	}
	static class AProp_ubaitBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_ubaitBox_C>();
	}
};
static_assert(alignof(AProp_ubaitBox_C) == 0x000008, "Wrong alignment on AProp_ubaitBox_C");
static_assert(sizeof(AProp_ubaitBox_C) == 0x000380, "Wrong size on AProp_ubaitBox_C");
static_assert(offsetof(AProp_ubaitBox_C, UberGraphFrame_Prop_ubaitBox_C) == 0x000368, "Member 'AProp_ubaitBox_C::UberGraphFrame_Prop_ubaitBox_C' has a wrong offset!");
static_assert(offsetof(AProp_ubaitBox_C, Billboard) == 0x000370, "Member 'AProp_ubaitBox_C::Billboard' has a wrong offset!");
static_assert(offsetof(AProp_ubaitBox_C, Type) == 0x000378, "Member 'AProp_ubaitBox_C::Type' has a wrong offset!");

}
