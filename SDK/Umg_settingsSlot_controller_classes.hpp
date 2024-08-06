#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_settingsSlot_controller

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "Enum_difficulty_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_settingsSlot_controller.umg_settingsSlot_controller_C
// 0x0030 (0x0290 - 0x0260)
class UUmg_settingsSlot_controller_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UComboBoxString*                        ComboBoxString_103;                                // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_name;                                         // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_settings_C*                        Parent;                                            // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<Enum_difficulty>                       E;                                                 // 0x0280(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_umg_settingsSlot_controller(int32 EntryPoint);
	void BndEvt__ComboBoxString_103_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void Upd();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_settingsSlot_controller_C">();
	}
	static class UUmg_settingsSlot_controller_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_settingsSlot_controller_C>();
	}
};
static_assert(alignof(UUmg_settingsSlot_controller_C) == 0x000008, "Wrong alignment on UUmg_settingsSlot_controller_C");
static_assert(sizeof(UUmg_settingsSlot_controller_C) == 0x000290, "Wrong size on UUmg_settingsSlot_controller_C");
static_assert(offsetof(UUmg_settingsSlot_controller_C, UberGraphFrame) == 0x000260, "Member 'UUmg_settingsSlot_controller_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_settingsSlot_controller_C, ComboBoxString_103) == 0x000268, "Member 'UUmg_settingsSlot_controller_C::ComboBoxString_103' has a wrong offset!");
static_assert(offsetof(UUmg_settingsSlot_controller_C, Text_name) == 0x000270, "Member 'UUmg_settingsSlot_controller_C::Text_name' has a wrong offset!");
static_assert(offsetof(UUmg_settingsSlot_controller_C, Parent) == 0x000278, "Member 'UUmg_settingsSlot_controller_C::Parent' has a wrong offset!");
static_assert(offsetof(UUmg_settingsSlot_controller_C, E) == 0x000280, "Member 'UUmg_settingsSlot_controller_C::E' has a wrong offset!");

}

