#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_coords

#include "Basic.hpp"

#include "Struct_signal_spawn_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_coords.umg_coords_C
// 0x0108 (0x0368 - 0x0260)
class UUmg_coords_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           Canvas_spaceSigns;                                 // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_245;                                   // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_10;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_11;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_40;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_78;                                          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ping;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_activated;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                           Rettbox_space;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_cld;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_log;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_X;                                            // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Y;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_114;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ASpaceRenderer_C*                       Renderer;                                          // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Log_num;                                           // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3061[0x4];                                     // 0x02EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LogText;                                           // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         Ping;                                              // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3062[0x4];                                     // 0x0304(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dynmat_ping;                                       // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPing;                                            // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3063[0x3];                                     // 0x0311(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_signal_spawn                   SignalData;                                        // 0x0314(0x002C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3064[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APanel_coords_C*                        Panel;                                             // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PingSize;                                          // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Searchtime;                                        // 0x0354(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APanel_coords_tutor2_C*                 Tutor;                                             // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxCooldown;                                       // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_coords(int32 EntryPoint);
	void Unfocused();
	void StuffUpgraded(class AMainGamemode_C* GameMode);
	void FormDownload();
	void Process();
	void GamemodeBeginPlay();
	void UseSearch();
	void Unfoc();
	void SettingsApplied(const struct FStruct_settings& Settings);
	void PowerChanged(bool Active_calc, bool Active_downl, bool Active_coords, bool Active_play, bool Active_light);
	void SignalDeleted();
	void DishesStop();
	void GamemodePreLoad();
	void SignalSaved();
	void AnyKey(const struct FKey& Key, bool Pressed);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void ApplyColor(const struct FLinearColor& Color);
	void PropRenderer_finishProps();
	void GamemodeMakeKeys();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void UpdateText();
	void WriteToLog(const class FString& Text);
	void SetLoc(const struct FVector2D& InPosition);
	struct FVector2D NormCoords();
	void SpawnDirs();
	void InitTutor(class APanel_coords_tutor2_C* Param_Panel);
	void DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_coords_C">();
	}
	static class UUmg_coords_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_coords_C>();
	}
};
static_assert(alignof(UUmg_coords_C) == 0x000008, "Wrong alignment on UUmg_coords_C");
static_assert(sizeof(UUmg_coords_C) == 0x000368, "Wrong size on UUmg_coords_C");
static_assert(offsetof(UUmg_coords_C, UberGraphFrame) == 0x000260, "Member 'UUmg_coords_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Canvas_spaceSigns) == 0x000268, "Member 'UUmg_coords_C::Canvas_spaceSigns' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, CanvasPanel_245) == 0x000270, "Member 'UUmg_coords_C::CanvasPanel_245' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Image_10) == 0x000278, "Member 'UUmg_coords_C::Image_10' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Image_11) == 0x000280, "Member 'UUmg_coords_C::Image_11' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Image_40) == 0x000288, "Member 'UUmg_coords_C::Image_40' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Image_78) == 0x000290, "Member 'UUmg_coords_C::Image_78' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Image_ping) == 0x000298, "Member 'UUmg_coords_C::Image_ping' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Img_activated) == 0x0002A0, "Member 'UUmg_coords_C::Img_activated' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Rettbox_space) == 0x0002A8, "Member 'UUmg_coords_C::Rettbox_space' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Text_cld) == 0x0002B0, "Member 'UUmg_coords_C::Text_cld' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Text_log) == 0x0002B8, "Member 'UUmg_coords_C::Text_log' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Text_X) == 0x0002C0, "Member 'UUmg_coords_C::Text_X' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Text_Y) == 0x0002C8, "Member 'UUmg_coords_C::Text_Y' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, WidgetSwitcher_114) == 0x0002D0, "Member 'UUmg_coords_C::WidgetSwitcher_114' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Dynmat) == 0x0002D8, "Member 'UUmg_coords_C::Dynmat' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Renderer) == 0x0002E0, "Member 'UUmg_coords_C::Renderer' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Log_num) == 0x0002E8, "Member 'UUmg_coords_C::Log_num' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, LogText) == 0x0002F0, "Member 'UUmg_coords_C::LogText' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Ping) == 0x000300, "Member 'UUmg_coords_C::Ping' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Dynmat_ping) == 0x000308, "Member 'UUmg_coords_C::Dynmat_ping' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, IsPing) == 0x000310, "Member 'UUmg_coords_C::IsPing' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, SignalData) == 0x000314, "Member 'UUmg_coords_C::SignalData' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Active) == 0x000340, "Member 'UUmg_coords_C::Active' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Panel) == 0x000348, "Member 'UUmg_coords_C::Panel' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, PingSize) == 0x000350, "Member 'UUmg_coords_C::PingSize' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Searchtime) == 0x000354, "Member 'UUmg_coords_C::Searchtime' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, Tutor) == 0x000358, "Member 'UUmg_coords_C::Tutor' has a wrong offset!");
static_assert(offsetof(UUmg_coords_C, MaxCooldown) == 0x000360, "Member 'UUmg_coords_C::MaxCooldown' has a wrong offset!");

}
