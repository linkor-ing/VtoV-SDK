#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: bed

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass bed.bed_C
// 0x0010 (0x0378 - 0x0368)
class Abed_C : public AProp_C
{
public:
	uint8                                         Pad_3A28[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_bed_C;                              // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          DropItem;                                          // 0x0370(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_bed(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);
	void IsButtonUsed(bool* Failed);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace);
	void NoRespawn(bool Param_NoRespawn, bool* Return);
	void CanPickup(bool* Return);
	void AsProp(class AProp_C** Return);
	void CanBePutInContainer(bool* Return);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"bed_C">();
	}
	static class Abed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Abed_C>();
	}
};
static_assert(alignof(Abed_C) == 0x000008, "Wrong alignment on Abed_C");
static_assert(sizeof(Abed_C) == 0x000378, "Wrong size on Abed_C");
static_assert(offsetof(Abed_C, UberGraphFrame_bed_C) == 0x000368, "Member 'Abed_C::UberGraphFrame_bed_C' has a wrong offset!");
static_assert(offsetof(Abed_C, DropItem) == 0x000370, "Member 'Abed_C::DropItem' has a wrong offset!");

}
