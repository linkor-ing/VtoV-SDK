#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_objectActionButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_objectActionButton.umg_objectActionButton_C
// 0x0070 (0x02D0 - 0x0260)
class UUmg_objectActionButton_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Img_hovertext;                                     // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_39;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_name;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_UI_C*                              Owner;                                             // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         ID;                                                // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_31FC[0x4];                                     // 0x028C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Name_Umg_objectActionButton_C;                     // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   Overlay;                                           // 0x02A0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                   FinalName;                                         // 0x02B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_umg_objectActionButton(int32 EntryPoint);
	void Construct();
	void Upd();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_objectActionButton_C">();
	}
	static class UUmg_objectActionButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_objectActionButton_C>();
	}
};
static_assert(alignof(UUmg_objectActionButton_C) == 0x000008, "Wrong alignment on UUmg_objectActionButton_C");
static_assert(sizeof(UUmg_objectActionButton_C) == 0x0002D0, "Wrong size on UUmg_objectActionButton_C");
static_assert(offsetof(UUmg_objectActionButton_C, UberGraphFrame) == 0x000260, "Member 'UUmg_objectActionButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_objectActionButton_C, Img_hovertext) == 0x000268, "Member 'UUmg_objectActionButton_C::Img_hovertext' has a wrong offset!");
static_assert(offsetof(UUmg_objectActionButton_C, TextBlock_39) == 0x000270, "Member 'UUmg_objectActionButton_C::TextBlock_39' has a wrong offset!");
static_assert(offsetof(UUmg_objectActionButton_C, TextBlock_name) == 0x000278, "Member 'UUmg_objectActionButton_C::TextBlock_name' has a wrong offset!");
static_assert(offsetof(UUmg_objectActionButton_C, Owner) == 0x000280, "Member 'UUmg_objectActionButton_C::Owner' has a wrong offset!");
static_assert(offsetof(UUmg_objectActionButton_C, ID) == 0x000288, "Member 'UUmg_objectActionButton_C::ID' has a wrong offset!");
static_assert(offsetof(UUmg_objectActionButton_C, Name_Umg_objectActionButton_C) == 0x000290, "Member 'UUmg_objectActionButton_C::Name_Umg_objectActionButton_C' has a wrong offset!");
static_assert(offsetof(UUmg_objectActionButton_C, Overlay) == 0x0002A0, "Member 'UUmg_objectActionButton_C::Overlay' has a wrong offset!");
static_assert(offsetof(UUmg_objectActionButton_C, FinalName) == 0x0002B8, "Member 'UUmg_objectActionButton_C::FinalName' has a wrong offset!");

}

