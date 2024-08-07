#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_inventorySlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_inventorySlot.umg_inventorySlot_C
// 0x0040 (0x02A0 - 0x0260)
class UUmg_inventorySlot_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button_100;                                        // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img;                                               // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         Index_Umg_inventorySlot_C;                         // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Name_Umg_inventorySlot_C;                          // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUmg_inventory_C*                       Parent;                                            // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_inventorySlot(int32 EntryPoint);
	void BndEvt__Button_100_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Set(const class FString& Param_Name);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_inventorySlot_C">();
	}
	static class UUmg_inventorySlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_inventorySlot_C>();
	}
};
static_assert(alignof(UUmg_inventorySlot_C) == 0x000008, "Wrong alignment on UUmg_inventorySlot_C");
static_assert(sizeof(UUmg_inventorySlot_C) == 0x0002A0, "Wrong size on UUmg_inventorySlot_C");
static_assert(offsetof(UUmg_inventorySlot_C, UberGraphFrame) == 0x000260, "Member 'UUmg_inventorySlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_inventorySlot_C, Button_100) == 0x000268, "Member 'UUmg_inventorySlot_C::Button_100' has a wrong offset!");
static_assert(offsetof(UUmg_inventorySlot_C, Img) == 0x000270, "Member 'UUmg_inventorySlot_C::Img' has a wrong offset!");
static_assert(offsetof(UUmg_inventorySlot_C, Index_Umg_inventorySlot_C) == 0x000278, "Member 'UUmg_inventorySlot_C::Index_Umg_inventorySlot_C' has a wrong offset!");
static_assert(offsetof(UUmg_inventorySlot_C, Dynmat) == 0x000280, "Member 'UUmg_inventorySlot_C::Dynmat' has a wrong offset!");
static_assert(offsetof(UUmg_inventorySlot_C, Name_Umg_inventorySlot_C) == 0x000288, "Member 'UUmg_inventorySlot_C::Name_Umg_inventorySlot_C' has a wrong offset!");
static_assert(offsetof(UUmg_inventorySlot_C, Parent) == 0x000298, "Member 'UUmg_inventorySlot_C::Parent' has a wrong offset!");

}
