#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_passlock

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_passlock.umg_passlock_C
// 0x0060 (0x02C0 - 0x0260)
class UUmg_passlock_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_82;                                         // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EditableTextBox_91;                                // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_82;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_222;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_nums;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Pass;                                              // 0x0290(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Password;                                          // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class APasswordLock_C*                        Passlock;                                          // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Done;                                              // 0x02B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          In;                                                // 0x02B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_umg_passlock(int32 EntryPoint);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	void En();
	void BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void Construct();
	void Exit();
	void BndEvt__EditableTextBox_91_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void Quit();
	void Input(int32 Num);
	void Init(const class FString& Param_Password);
	void Upd();
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_passlock_C">();
	}
	static class UUmg_passlock_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_passlock_C>();
	}
};
static_assert(alignof(UUmg_passlock_C) == 0x000008, "Wrong alignment on UUmg_passlock_C");
static_assert(sizeof(UUmg_passlock_C) == 0x0002C0, "Wrong size on UUmg_passlock_C");
static_assert(offsetof(UUmg_passlock_C, UberGraphFrame) == 0x000260, "Member 'UUmg_passlock_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_passlock_C, Button_82) == 0x000268, "Member 'UUmg_passlock_C::Button_82' has a wrong offset!");
static_assert(offsetof(UUmg_passlock_C, EditableTextBox_91) == 0x000270, "Member 'UUmg_passlock_C::EditableTextBox_91' has a wrong offset!");
static_assert(offsetof(UUmg_passlock_C, Image_82) == 0x000278, "Member 'UUmg_passlock_C::Image_82' has a wrong offset!");
static_assert(offsetof(UUmg_passlock_C, Image_222) == 0x000280, "Member 'UUmg_passlock_C::Image_222' has a wrong offset!");
static_assert(offsetof(UUmg_passlock_C, Txt_nums) == 0x000288, "Member 'UUmg_passlock_C::Txt_nums' has a wrong offset!");
static_assert(offsetof(UUmg_passlock_C, Pass) == 0x000290, "Member 'UUmg_passlock_C::Pass' has a wrong offset!");
static_assert(offsetof(UUmg_passlock_C, Password) == 0x0002A0, "Member 'UUmg_passlock_C::Password' has a wrong offset!");
static_assert(offsetof(UUmg_passlock_C, Passlock) == 0x0002B0, "Member 'UUmg_passlock_C::Passlock' has a wrong offset!");
static_assert(offsetof(UUmg_passlock_C, Done) == 0x0002B8, "Member 'UUmg_passlock_C::Done' has a wrong offset!");
static_assert(offsetof(UUmg_passlock_C, In) == 0x0002B9, "Member 'UUmg_passlock_C::In' has a wrong offset!");

}
