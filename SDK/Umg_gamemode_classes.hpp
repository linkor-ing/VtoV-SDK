#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_gamemode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Struct_settings_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_gamemode.umg_gamemode_C
// 0x0190 (0x03F0 - 0x0260)
class UUmg_gamemode_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                button_exit;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_g_ambience;                                 // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_g_halloween;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_g_infinite;                                 // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_g_sandbox;                                  // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_g_solar;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_g_storyMode;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_g_tutor;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_302;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Tex_desc;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USave_main_C*                           Sav;                                               // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUmg_settingsSlot_C*>            Sliders;                                           // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUmg_settingsSlot_C*>            V_slots;                                           // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UUmg_settingsSlot_C*>            S_slots;                                           // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FStruct_settings                       SettingsCopy;                                      // 0x02F0(0x00F0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FText>                           Desc;                                              // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_umg_gamemode(int32 EntryPoint);
	void BndEvt__umg_gamemode_button_g_solar_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__umg_gamemode_button_g_solar_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__umg_gamemode_button_g_sandbox_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__umg_gamemode_button_g_ambience_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__umg_gamemode_button_g_infinite_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__umg_gamemode_button_g_storyMode_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__umg_gamemode_button_g_tutor_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__umg_gamemode_button_g_halloween_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__umg_gamemode_button_g_ambience_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__button_g_halloween_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__button_g_sandbox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void GamemodeBeginPlay();
	void BndEvt__button_g_infinite_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__button_g_storyMode_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__button_g_tutor_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void TexturePickerApply(class UUmg_texturePicker_C* Picker, class UTexture2D* Texture, int32 Param_Index);
	void ApplyColor(const struct FLinearColor& Color);
	void PropRenderer_finishProps();
	void GamemodeMakeKeys();
	void AnyKey(const struct FKey& Key, bool Pressed);
	void GamemodePreLoad();
	void Unfocused();
	void SettingsApplied(const struct FStruct_settings& Settings);
	void Unfoc();
	void StuffUpgraded(class AMainGamemode_C* GameMode);
	void SignalSaved();
	void SignalDeleted();
	void SetDesc(int32 Param_Index);
	void DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_gamemode_C">();
	}
	static class UUmg_gamemode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_gamemode_C>();
	}
};
static_assert(alignof(UUmg_gamemode_C) == 0x000008, "Wrong alignment on UUmg_gamemode_C");
static_assert(sizeof(UUmg_gamemode_C) == 0x0003F0, "Wrong size on UUmg_gamemode_C");
static_assert(offsetof(UUmg_gamemode_C, UberGraphFrame) == 0x000260, "Member 'UUmg_gamemode_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, button_exit) == 0x000268, "Member 'UUmg_gamemode_C::button_exit' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, button_g_ambience) == 0x000270, "Member 'UUmg_gamemode_C::button_g_ambience' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, button_g_halloween) == 0x000278, "Member 'UUmg_gamemode_C::button_g_halloween' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, button_g_infinite) == 0x000280, "Member 'UUmg_gamemode_C::button_g_infinite' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, button_g_sandbox) == 0x000288, "Member 'UUmg_gamemode_C::button_g_sandbox' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, button_g_solar) == 0x000290, "Member 'UUmg_gamemode_C::button_g_solar' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, button_g_storyMode) == 0x000298, "Member 'UUmg_gamemode_C::button_g_storyMode' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, button_g_tutor) == 0x0002A0, "Member 'UUmg_gamemode_C::button_g_tutor' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, Image_302) == 0x0002A8, "Member 'UUmg_gamemode_C::Image_302' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, Tex_desc) == 0x0002B0, "Member 'UUmg_gamemode_C::Tex_desc' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, Sav) == 0x0002B8, "Member 'UUmg_gamemode_C::Sav' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, Sliders) == 0x0002C0, "Member 'UUmg_gamemode_C::Sliders' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, V_slots) == 0x0002D0, "Member 'UUmg_gamemode_C::V_slots' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, S_slots) == 0x0002E0, "Member 'UUmg_gamemode_C::S_slots' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, SettingsCopy) == 0x0002F0, "Member 'UUmg_gamemode_C::SettingsCopy' has a wrong offset!");
static_assert(offsetof(UUmg_gamemode_C, Desc) == 0x0003E0, "Member 'UUmg_gamemode_C::Desc' has a wrong offset!");

}

