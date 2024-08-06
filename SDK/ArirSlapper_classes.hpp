#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArirSlapper

#include "Basic.hpp"

#include "ArirFollower_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass arirSlapper.arirSlapper_C
// 0x0030 (0x0650 - 0x0620)
class AArirSlapper_C final : public AArirFollower_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_ArirSlapper_C;                      // 0x0618(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 StolenThing;                                       // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                                PlaceReturn;                                       // 0x0628(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_634[0x4];                                      // 0x0634(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 StolenThing_key;                                   // 0x0638(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_arirSlapper(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Finished();
	void GetTriggerData(struct FStruct_triggerSave* Data);
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);
	void ProcessKeys(bool* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"arirSlapper_C">();
	}
	static class AArirSlapper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AArirSlapper_C>();
	}
};
static_assert(alignof(AArirSlapper_C) == 0x000010, "Wrong alignment on AArirSlapper_C");
static_assert(sizeof(AArirSlapper_C) == 0x000650, "Wrong size on AArirSlapper_C");
static_assert(offsetof(AArirSlapper_C, UberGraphFrame_ArirSlapper_C) == 0x000618, "Member 'AArirSlapper_C::UberGraphFrame_ArirSlapper_C' has a wrong offset!");
static_assert(offsetof(AArirSlapper_C, StolenThing) == 0x000620, "Member 'AArirSlapper_C::StolenThing' has a wrong offset!");
static_assert(offsetof(AArirSlapper_C, PlaceReturn) == 0x000628, "Member 'AArirSlapper_C::PlaceReturn' has a wrong offset!");
static_assert(offsetof(AArirSlapper_C, StolenThing_key) == 0x000638, "Member 'AArirSlapper_C::StolenThing_key' has a wrong offset!");

}

