#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_stats

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Struct_signal_data1_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_stats.umg_stats_C
// 0x0398 (0x05F8 - 0x0260)
class UUmg_stats_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                button_exit;                                       // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_gloss;                                      // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_gloss_1;                                    // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button_reset;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_sigAud;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_sigLvl0;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_sigLvl1;                                    // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_sigLvl2;                                    // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_sigLvl3;                                    // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_sigObj;                                     // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                button_stats;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              CheckBox_gloss;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                              CheckBox_stats;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_302;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_signal;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_curs;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             SignalsList;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_beatenDreams;                                 // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_daysTotal;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_distanceDriven;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_distanceWalked;                               // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_falls;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_foodEaten;                                    // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_itemsBought;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_objectsDest;                                  // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_pointsSpent;                                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_reports;                                      // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_saveCount;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_serversRepaired;                              // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_signalsFound;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_signalsProcessed;                             // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_sleepTime;                                    // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_steps;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_successfulReports;                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_toiletUses;                                   // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_totalDreams;                                  // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_totalJumps;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_totalPlaytime;                                // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_totalPoints;                                  // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUmg_statsSlot_C*                       Stat_treasuresFound;                               // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             StatsList;                                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher;                                          // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_sigName;                                       // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_sigPrice;                                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_sigSize;                                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_sigUnique;                                     // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_text;                                          // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUmg_statsSlot_C*>               Slots;                                             // 0x03E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FStruct_signal_data1                   DataSig;                                           // 0x03F0(0x01D0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         SigView;                                           // 0x05C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C4[0x4];                                      // 0x05C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USoundBase*                             Sound;                                             // 0x05C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Aud;                                               // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUmg_statsGlossSlot_C*>          GlossSlots;                                        // 0x05D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UUmg_statsGlossSlot_C*                  GlossSlot;                                         // 0x05E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ChStats;                                           // 0x05F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          ChGloss;                                           // 0x05F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_umg_stats(int32 EntryPoint);
	void BndEvt__umg_stats_button_gloss_1_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__umg_stats_CheckBox_gloss_K2Node_ComponentBoundEvent_12_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__umg_stats_CheckBox_stats_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__umg_stats_Button_reset_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void Pb(const class USoundWave* PlayingSoundWave, const float PlaybackPercent);
	void BndEvt__umg_stats_button_sigObj_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__umg_stats_button_sigLvl3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__umg_stats_button_sigLvl2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__umg_stats_button_sigLvl1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__umg_stats_button_sigLvl0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__umg_stats_button_Stats_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__umg_stats_button_gloss_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__umg_stats_aud_K2Node_ComponentBoundEvent_2_OnAudioFinished__DelegateSignature();
	void BndEvt__umg_stats_button_sigAud_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Resume();
	void BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetIndex(int32 Param_Index);
	void Upd();
	void SetStat(int32 Param_Index, float Stat);
	void SetSigGloss(class UUmg_statsGlossSlot_C* Param_Slot);
	void UpdSigGloss();
	void GenGloss();
	void RemoveGloss();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_stats_C">();
	}
	static class UUmg_stats_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_stats_C>();
	}
};
static_assert(alignof(UUmg_stats_C) == 0x000008, "Wrong alignment on UUmg_stats_C");
static_assert(sizeof(UUmg_stats_C) == 0x0005F8, "Wrong size on UUmg_stats_C");
static_assert(offsetof(UUmg_stats_C, UberGraphFrame) == 0x000260, "Member 'UUmg_stats_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, button_exit) == 0x000268, "Member 'UUmg_stats_C::button_exit' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, button_gloss) == 0x000270, "Member 'UUmg_stats_C::button_gloss' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, button_gloss_1) == 0x000278, "Member 'UUmg_stats_C::button_gloss_1' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Button_reset) == 0x000280, "Member 'UUmg_stats_C::Button_reset' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, button_sigAud) == 0x000288, "Member 'UUmg_stats_C::button_sigAud' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, button_sigLvl0) == 0x000290, "Member 'UUmg_stats_C::button_sigLvl0' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, button_sigLvl1) == 0x000298, "Member 'UUmg_stats_C::button_sigLvl1' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, button_sigLvl2) == 0x0002A0, "Member 'UUmg_stats_C::button_sigLvl2' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, button_sigLvl3) == 0x0002A8, "Member 'UUmg_stats_C::button_sigLvl3' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, button_sigObj) == 0x0002B0, "Member 'UUmg_stats_C::button_sigObj' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, button_stats) == 0x0002B8, "Member 'UUmg_stats_C::button_stats' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, CheckBox_gloss) == 0x0002C0, "Member 'UUmg_stats_C::CheckBox_gloss' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, CheckBox_stats) == 0x0002C8, "Member 'UUmg_stats_C::CheckBox_stats' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Image_302) == 0x0002D0, "Member 'UUmg_stats_C::Image_302' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Image_signal) == 0x0002D8, "Member 'UUmg_stats_C::Image_signal' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Img_curs) == 0x0002E0, "Member 'UUmg_stats_C::Img_curs' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, SignalsList) == 0x0002E8, "Member 'UUmg_stats_C::SignalsList' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_beatenDreams) == 0x0002F0, "Member 'UUmg_stats_C::Stat_beatenDreams' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_daysTotal) == 0x0002F8, "Member 'UUmg_stats_C::Stat_daysTotal' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_distanceDriven) == 0x000300, "Member 'UUmg_stats_C::Stat_distanceDriven' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_distanceWalked) == 0x000308, "Member 'UUmg_stats_C::Stat_distanceWalked' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_falls) == 0x000310, "Member 'UUmg_stats_C::Stat_falls' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_foodEaten) == 0x000318, "Member 'UUmg_stats_C::Stat_foodEaten' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_itemsBought) == 0x000320, "Member 'UUmg_stats_C::Stat_itemsBought' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_objectsDest) == 0x000328, "Member 'UUmg_stats_C::Stat_objectsDest' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_pointsSpent) == 0x000330, "Member 'UUmg_stats_C::Stat_pointsSpent' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_reports) == 0x000338, "Member 'UUmg_stats_C::Stat_reports' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_saveCount) == 0x000340, "Member 'UUmg_stats_C::Stat_saveCount' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_serversRepaired) == 0x000348, "Member 'UUmg_stats_C::Stat_serversRepaired' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_signalsFound) == 0x000350, "Member 'UUmg_stats_C::Stat_signalsFound' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_signalsProcessed) == 0x000358, "Member 'UUmg_stats_C::Stat_signalsProcessed' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_sleepTime) == 0x000360, "Member 'UUmg_stats_C::Stat_sleepTime' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_steps) == 0x000368, "Member 'UUmg_stats_C::Stat_steps' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_successfulReports) == 0x000370, "Member 'UUmg_stats_C::Stat_successfulReports' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_toiletUses) == 0x000378, "Member 'UUmg_stats_C::Stat_toiletUses' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_totalDreams) == 0x000380, "Member 'UUmg_stats_C::Stat_totalDreams' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_totalJumps) == 0x000388, "Member 'UUmg_stats_C::Stat_totalJumps' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_totalPlaytime) == 0x000390, "Member 'UUmg_stats_C::Stat_totalPlaytime' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_totalPoints) == 0x000398, "Member 'UUmg_stats_C::Stat_totalPoints' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Stat_treasuresFound) == 0x0003A0, "Member 'UUmg_stats_C::Stat_treasuresFound' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, StatsList) == 0x0003A8, "Member 'UUmg_stats_C::StatsList' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Switcher) == 0x0003B0, "Member 'UUmg_stats_C::Switcher' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Txt_sigName) == 0x0003B8, "Member 'UUmg_stats_C::Txt_sigName' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Txt_sigPrice) == 0x0003C0, "Member 'UUmg_stats_C::Txt_sigPrice' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Txt_sigSize) == 0x0003C8, "Member 'UUmg_stats_C::Txt_sigSize' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Txt_sigUnique) == 0x0003D0, "Member 'UUmg_stats_C::Txt_sigUnique' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Txt_text) == 0x0003D8, "Member 'UUmg_stats_C::Txt_text' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Slots) == 0x0003E0, "Member 'UUmg_stats_C::Slots' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, DataSig) == 0x0003F0, "Member 'UUmg_stats_C::DataSig' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, SigView) == 0x0005C0, "Member 'UUmg_stats_C::SigView' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Sound) == 0x0005C8, "Member 'UUmg_stats_C::Sound' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, Aud) == 0x0005D0, "Member 'UUmg_stats_C::Aud' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, GlossSlots) == 0x0005D8, "Member 'UUmg_stats_C::GlossSlots' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, GlossSlot) == 0x0005E8, "Member 'UUmg_stats_C::GlossSlot' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, ChStats) == 0x0005F0, "Member 'UUmg_stats_C::ChStats' has a wrong offset!");
static_assert(offsetof(UUmg_stats_C, ChGloss) == 0x0005F1, "Member 'UUmg_stats_C::ChGloss' has a wrong offset!");

}

