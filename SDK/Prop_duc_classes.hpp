#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_duc

#include "Basic.hpp"

#include "Enum_interactionActions_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_duc.prop_duc_C
// 0x0028 (0x0390 - 0x0368)
class AProp_duc_C final : public AProp_C
{
public:
	uint8                                         Pad_4311[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_duc_C;                         // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Qwak;                                              // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Extent;                                            // 0x0378(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Orig;                                              // 0x0384(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);
	void ExecuteUbergraph_prop_duc(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_duc_C">();
	}
	static class AProp_duc_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_duc_C>();
	}
};
static_assert(alignof(AProp_duc_C) == 0x000008, "Wrong alignment on AProp_duc_C");
static_assert(sizeof(AProp_duc_C) == 0x000390, "Wrong size on AProp_duc_C");
static_assert(offsetof(AProp_duc_C, UberGraphFrame_Prop_duc_C) == 0x000368, "Member 'AProp_duc_C::UberGraphFrame_Prop_duc_C' has a wrong offset!");
static_assert(offsetof(AProp_duc_C, Qwak) == 0x000370, "Member 'AProp_duc_C::Qwak' has a wrong offset!");
static_assert(offsetof(AProp_duc_C, Extent) == 0x000378, "Member 'AProp_duc_C::Extent' has a wrong offset!");
static_assert(offsetof(AProp_duc_C, Orig) == 0x000384, "Member 'AProp_duc_C::Orig' has a wrong offset!");

}

