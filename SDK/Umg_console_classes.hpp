#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_console

#include "Basic.hpp"

#include "Struct_signal_spawn_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_console.umg_console_C
// 0x0198 (0x03F8 - 0x0260)
class UUmg_console_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                       EditableTextBox;                                   // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_78;                                          // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_118;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_activated;                                     // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_vis;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         Richtxt_consoleLog;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Tex_consoleName;                                   // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_command;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           Vertbox_log;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ASpaceRenderer_C*                       Renderer;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Log_num;                                           // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2BC[0x4];                                      // 0x02BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LogText;                                           // 0x02C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         Ping;                                              // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D4[0x4];                                      // 0x02D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dynmat_ping;                                       // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsPing;                                            // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E1[0x3];                                      // 0x02E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_signal_spawn                   SignalData;                                        // 0x02E4(0x002C)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Command;                                           // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 ConsoleLine;                                       // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Name_Umg_console_C;                                // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Processing;                                        // 0x0341(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_342[0x6];                                      // 0x0342(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AServerBox_C*>                   PingingServers;                                    // 0x0348(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AServerBox_C*                           ActiveServer;                                      // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADish_C*                                Dish;                                              // 0x0360(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         I;                                                 // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Timer;                                             // 0x036C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APanel_SATconsole_C*                    Panel;                                             // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Argus;                                             // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Floppa;                                            // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 Sogga;                                             // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 bingus;                                            // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         CalI;                                              // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CalIng;                                            // 0x03BC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3BD[0x3];                                      // 0x03BD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APanel_SATconsole_tutorial3_C*          Tutor;                                             // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Fren;                                              // 0x03C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsIn;                                              // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          PR;                                                // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          E;                                                 // 0x03DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3DB[0x5];                                      // 0x03DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class ADish_C*                                ActiveDish;                                        // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Scrollmode;                                        // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3E9[0x7];                                      // 0x03E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APanel_SATconsole_C*                    Used;                                              // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_console(int32 EntryPoint);
	void BndEvt__umg_console_EditableTextBox_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void Adrwewr();
	void AnyKey(const struct FKey& Key, bool Pressed);
	void BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void SettingsApplied(const struct FStruct_settings& Settings);
	void BndEvt__EditableTextBox_15_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void SignalDeleted();
	void SignalSaved();
	void Construct();
	void StuffUpgraded(class AMainGamemode_C* GameMode);
	void CalAll();
	void GetCals();
	void CalibratteDish(const class FString& InputPin);
	void SetSErverTarget(const class FString& B);
	void PingSingleServer(const class FString& B);
	void PingServers();
	void GamemodeBeginPlay();
	void PowerChanged(bool Active_calc, bool Active_downl, bool Active_coords, bool Active_play, bool Active_light);
	void Unfoc();
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void TexturePickerApply(class UUmg_texturePicker_C* Picker, class UTexture2D* Texture, int32 Param_Index);
	void ApplyColor(const struct FLinearColor& Color);
	void PropRenderer_finishProps();
	void GamemodeMakeKeys();
	void GamemodePreLoad();
	void Unfocused();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void Convert(const class FText& InputPin, class FString* Value);
	void Init(const class FString& Param_Name, bool Hide, class ADish_C* Param_Dish);
	void TypeSymbol(const class FString& Symbol);
	void EnterCommand(const class FString& C);
	void FixLog();
	void WriteToLog(const class FString& B);
	void FindServer(const class FString& B, bool* Return, class AActor** Server);
	void FindDish(const class FString& B, bool* Return, class ADish_C** Param_Dish);
	void SetTickOff(const bool Param_Tick);
	void Upd();
	void Enter();
	void OnKeyDown_0(const struct FKey& Key1);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_console_C">();
	}
	static class UUmg_console_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_console_C>();
	}
};
static_assert(alignof(UUmg_console_C) == 0x000008, "Wrong alignment on UUmg_console_C");
static_assert(sizeof(UUmg_console_C) == 0x0003F8, "Wrong size on UUmg_console_C");
static_assert(offsetof(UUmg_console_C, UberGraphFrame) == 0x000260, "Member 'UUmg_console_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, EditableTextBox) == 0x000268, "Member 'UUmg_console_C::EditableTextBox' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Image_78) == 0x000270, "Member 'UUmg_console_C::Image_78' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Image_118) == 0x000278, "Member 'UUmg_console_C::Image_118' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Img_activated) == 0x000280, "Member 'UUmg_console_C::Img_activated' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Img_vis) == 0x000288, "Member 'UUmg_console_C::Img_vis' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Richtxt_consoleLog) == 0x000290, "Member 'UUmg_console_C::Richtxt_consoleLog' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Tex_consoleName) == 0x000298, "Member 'UUmg_console_C::Tex_consoleName' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Text_command) == 0x0002A0, "Member 'UUmg_console_C::Text_command' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Vertbox_log) == 0x0002A8, "Member 'UUmg_console_C::Vertbox_log' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Renderer) == 0x0002B0, "Member 'UUmg_console_C::Renderer' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Log_num) == 0x0002B8, "Member 'UUmg_console_C::Log_num' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, LogText) == 0x0002C0, "Member 'UUmg_console_C::LogText' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Ping) == 0x0002D0, "Member 'UUmg_console_C::Ping' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Dynmat_ping) == 0x0002D8, "Member 'UUmg_console_C::Dynmat_ping' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, IsPing) == 0x0002E0, "Member 'UUmg_console_C::IsPing' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, SignalData) == 0x0002E4, "Member 'UUmg_console_C::SignalData' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Command) == 0x000310, "Member 'UUmg_console_C::Command' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, ConsoleLine) == 0x000320, "Member 'UUmg_console_C::ConsoleLine' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Name_Umg_console_C) == 0x000330, "Member 'UUmg_console_C::Name_Umg_console_C' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Active) == 0x000340, "Member 'UUmg_console_C::Active' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Processing) == 0x000341, "Member 'UUmg_console_C::Processing' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, PingingServers) == 0x000348, "Member 'UUmg_console_C::PingingServers' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, ActiveServer) == 0x000358, "Member 'UUmg_console_C::ActiveServer' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Dish) == 0x000360, "Member 'UUmg_console_C::Dish' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, I) == 0x000368, "Member 'UUmg_console_C::I' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Timer) == 0x00036C, "Member 'UUmg_console_C::Timer' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Panel) == 0x000370, "Member 'UUmg_console_C::Panel' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Argus) == 0x000378, "Member 'UUmg_console_C::Argus' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Floppa) == 0x000388, "Member 'UUmg_console_C::Floppa' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Sogga) == 0x000398, "Member 'UUmg_console_C::Sogga' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, bingus) == 0x0003A8, "Member 'UUmg_console_C::bingus' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, CalI) == 0x0003B8, "Member 'UUmg_console_C::CalI' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, CalIng) == 0x0003BC, "Member 'UUmg_console_C::CalIng' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Tutor) == 0x0003C0, "Member 'UUmg_console_C::Tutor' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Fren) == 0x0003C8, "Member 'UUmg_console_C::Fren' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, IsIn) == 0x0003D8, "Member 'UUmg_console_C::IsIn' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, PR) == 0x0003D9, "Member 'UUmg_console_C::PR' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, E) == 0x0003DA, "Member 'UUmg_console_C::E' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, ActiveDish) == 0x0003E0, "Member 'UUmg_console_C::ActiveDish' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Scrollmode) == 0x0003E8, "Member 'UUmg_console_C::Scrollmode' has a wrong offset!");
static_assert(offsetof(UUmg_console_C, Used) == 0x0003F0, "Member 'UUmg_console_C::Used' has a wrong offset!");

}

