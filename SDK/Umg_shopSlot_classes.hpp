#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_shopSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Struct_store_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_shopSlot.umg_shopSlot_C
// 0x00B8 (0x0318 - 0x0260)
class UUmg_shopSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                button_fav;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_hover;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img;                                               // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_item;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_price;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_size;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_laptop_C*                          Owner;                                             // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FStruct_store                          Data;                                              // 0x02A0(0x0050)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsAchievement;                                     // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_2F1[0x3];                                      // 0x02F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Name_Umg_shopSlot_C;                               // 0x02F4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2FC[0x4];                                      // 0x02FC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   DisplayName;                                       // 0x0300(0x0018)(Edit, BlueprintVisible)

public:
	void ExecuteUbergraph_umg_shopSlot(int32 EntryPoint);
	void BndEvt__umg_shopSlot_button_fav_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__umg_shopSlot_Button_hover_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__umg_shopSlot_Button_hover_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__umg_shopSlot_Button_hover_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void Filter(const class FText& Param_Name);
	void UpdFav(class USave_main_C* Target);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_shopSlot_C">();
	}
	static class UUmg_shopSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_shopSlot_C>();
	}
};
static_assert(alignof(UUmg_shopSlot_C) == 0x000008, "Wrong alignment on UUmg_shopSlot_C");
static_assert(sizeof(UUmg_shopSlot_C) == 0x000318, "Wrong size on UUmg_shopSlot_C");
static_assert(offsetof(UUmg_shopSlot_C, UberGraphFrame) == 0x000260, "Member 'UUmg_shopSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_shopSlot_C, button_fav) == 0x000268, "Member 'UUmg_shopSlot_C::button_fav' has a wrong offset!");
static_assert(offsetof(UUmg_shopSlot_C, Button_hover) == 0x000270, "Member 'UUmg_shopSlot_C::Button_hover' has a wrong offset!");
static_assert(offsetof(UUmg_shopSlot_C, Img) == 0x000278, "Member 'UUmg_shopSlot_C::Img' has a wrong offset!");
static_assert(offsetof(UUmg_shopSlot_C, Text_item) == 0x000280, "Member 'UUmg_shopSlot_C::Text_item' has a wrong offset!");
static_assert(offsetof(UUmg_shopSlot_C, Text_price) == 0x000288, "Member 'UUmg_shopSlot_C::Text_price' has a wrong offset!");
static_assert(offsetof(UUmg_shopSlot_C, Text_size) == 0x000290, "Member 'UUmg_shopSlot_C::Text_size' has a wrong offset!");
static_assert(offsetof(UUmg_shopSlot_C, Owner) == 0x000298, "Member 'UUmg_shopSlot_C::Owner' has a wrong offset!");
static_assert(offsetof(UUmg_shopSlot_C, Data) == 0x0002A0, "Member 'UUmg_shopSlot_C::Data' has a wrong offset!");
static_assert(offsetof(UUmg_shopSlot_C, IsAchievement) == 0x0002F0, "Member 'UUmg_shopSlot_C::IsAchievement' has a wrong offset!");
static_assert(offsetof(UUmg_shopSlot_C, Name_Umg_shopSlot_C) == 0x0002F4, "Member 'UUmg_shopSlot_C::Name_Umg_shopSlot_C' has a wrong offset!");
static_assert(offsetof(UUmg_shopSlot_C, DisplayName) == 0x000300, "Member 'UUmg_shopSlot_C::DisplayName' has a wrong offset!");

}
