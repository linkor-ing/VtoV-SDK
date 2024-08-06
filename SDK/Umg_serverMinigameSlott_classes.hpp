#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_serverMinigameSlott

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_serverMinigameSlott.umg_serverMinigameSlott_C
// 0x0068 (0x02C8 - 0x0260)
class UUmg_serverMinigameSlott_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Answ;                                              // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_nums;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_59;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_prob;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUmg_serverMinigameNumber_C*>    Slots;                                             // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class FString>                         Prob;                                              // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Sol;                                               // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2B4[0x4];                                      // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUmg_serverMinigame_C*                  Owner;                                             // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Num;                                               // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_serverMinigameSlott(int32 EntryPoint);
	void Construct();
	void SetActive(int32 Param_Index);
	void MakeProb(int32* Output_Get);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_serverMinigameSlott_C">();
	}
	static class UUmg_serverMinigameSlott_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_serverMinigameSlott_C>();
	}
};
static_assert(alignof(UUmg_serverMinigameSlott_C) == 0x000008, "Wrong alignment on UUmg_serverMinigameSlott_C");
static_assert(sizeof(UUmg_serverMinigameSlott_C) == 0x0002C8, "Wrong size on UUmg_serverMinigameSlott_C");
static_assert(offsetof(UUmg_serverMinigameSlott_C, UberGraphFrame) == 0x000260, "Member 'UUmg_serverMinigameSlott_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigameSlott_C, Answ) == 0x000268, "Member 'UUmg_serverMinigameSlott_C::Answ' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigameSlott_C, HorizontalBox_nums) == 0x000270, "Member 'UUmg_serverMinigameSlott_C::HorizontalBox_nums' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigameSlott_C, Image) == 0x000278, "Member 'UUmg_serverMinigameSlott_C::Image' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigameSlott_C, Image_59) == 0x000280, "Member 'UUmg_serverMinigameSlott_C::Image_59' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigameSlott_C, Text_prob) == 0x000288, "Member 'UUmg_serverMinigameSlott_C::Text_prob' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigameSlott_C, Slots) == 0x000290, "Member 'UUmg_serverMinigameSlott_C::Slots' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigameSlott_C, Prob) == 0x0002A0, "Member 'UUmg_serverMinigameSlott_C::Prob' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigameSlott_C, Sol) == 0x0002B0, "Member 'UUmg_serverMinigameSlott_C::Sol' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigameSlott_C, Owner) == 0x0002B8, "Member 'UUmg_serverMinigameSlott_C::Owner' has a wrong offset!");
static_assert(offsetof(UUmg_serverMinigameSlott_C, Num) == 0x0002C0, "Member 'UUmg_serverMinigameSlott_C::Num' has a wrong offset!");

}

