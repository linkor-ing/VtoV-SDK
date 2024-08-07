#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_switch

#include "Basic.hpp"

#include "Prop_wireComponent_classes.hpp"
#include "Engine_structs.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wireComponent_switch.prop_wireComponent_switch_C
// 0x0018 (0x0398 - 0x0380)
class AProp_wireComponent_switch_C final : public AProp_wireComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_wireComponent_switch_C;        // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_wireComponent_switch(int32 EntryPoint);
	void WirePass(class AWire_C* Wire);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, Enum_interactionActions Action);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wireComponent_switch_C">();
	}
	static class AProp_wireComponent_switch_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wireComponent_switch_C>();
	}
};
static_assert(alignof(AProp_wireComponent_switch_C) == 0x000008, "Wrong alignment on AProp_wireComponent_switch_C");
static_assert(sizeof(AProp_wireComponent_switch_C) == 0x000398, "Wrong size on AProp_wireComponent_switch_C");
static_assert(offsetof(AProp_wireComponent_switch_C, UberGraphFrame_Prop_wireComponent_switch_C) == 0x000380, "Member 'AProp_wireComponent_switch_C::UberGraphFrame_Prop_wireComponent_switch_C' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_switch_C, Billboard) == 0x000388, "Member 'AProp_wireComponent_switch_C::Billboard' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_switch_C, Active) == 0x000390, "Member 'AProp_wireComponent_switch_C::Active' has a wrong offset!");

}

