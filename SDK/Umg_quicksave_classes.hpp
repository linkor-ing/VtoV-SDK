#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_quicksave

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_quicksave.umg_quicksave_C
// 0x0010 (0x0270 - 0x0260)
class UUmg_quicksave_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         A;                                                 // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_umg_quicksave(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_quicksave_C">();
	}
	static class UUmg_quicksave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_quicksave_C>();
	}
};
static_assert(alignof(UUmg_quicksave_C) == 0x000008, "Wrong alignment on UUmg_quicksave_C");
static_assert(sizeof(UUmg_quicksave_C) == 0x000270, "Wrong size on UUmg_quicksave_C");
static_assert(offsetof(UUmg_quicksave_C, UberGraphFrame) == 0x000260, "Member 'UUmg_quicksave_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_quicksave_C, A) == 0x000268, "Member 'UUmg_quicksave_C::A' has a wrong offset!");

}

