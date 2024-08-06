#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_langSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_langSlot.umg_langSlot_C
// 0x0058 (0x02B8 - 0x0260)
class UUmg_langSlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_90;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_v_res;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_179;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_sel;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_name;                                         // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Culture;                                           // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   Name_Umg_langSlot_C;                               // 0x02A0(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)

public:
	void ExecuteUbergraph_umg_langSlot(int32 EntryPoint);
	void BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_langSlot_C">();
	}
	static class UUmg_langSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_langSlot_C>();
	}
};
static_assert(alignof(UUmg_langSlot_C) == 0x000008, "Wrong alignment on UUmg_langSlot_C");
static_assert(sizeof(UUmg_langSlot_C) == 0x0002B8, "Wrong size on UUmg_langSlot_C");
static_assert(offsetof(UUmg_langSlot_C, UberGraphFrame) == 0x000260, "Member 'UUmg_langSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_langSlot_C, Button_90) == 0x000268, "Member 'UUmg_langSlot_C::Button_90' has a wrong offset!");
static_assert(offsetof(UUmg_langSlot_C, Canvas_v_res) == 0x000270, "Member 'UUmg_langSlot_C::Canvas_v_res' has a wrong offset!");
static_assert(offsetof(UUmg_langSlot_C, Image_179) == 0x000278, "Member 'UUmg_langSlot_C::Image_179' has a wrong offset!");
static_assert(offsetof(UUmg_langSlot_C, Img_sel) == 0x000280, "Member 'UUmg_langSlot_C::Img_sel' has a wrong offset!");
static_assert(offsetof(UUmg_langSlot_C, Text_name) == 0x000288, "Member 'UUmg_langSlot_C::Text_name' has a wrong offset!");
static_assert(offsetof(UUmg_langSlot_C, Culture) == 0x000290, "Member 'UUmg_langSlot_C::Culture' has a wrong offset!");
static_assert(offsetof(UUmg_langSlot_C, Name_Umg_langSlot_C) == 0x0002A0, "Member 'UUmg_langSlot_C::Name_Umg_langSlot_C' has a wrong offset!");

}

