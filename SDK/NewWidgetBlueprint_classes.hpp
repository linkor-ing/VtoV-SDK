#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewWidgetBlueprint

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NewWidgetBlueprint.NewWidgetBlueprint_C
// 0x0010 (0x0270 - 0x0260)
class UNewWidgetBlueprint_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Image_0;                                           // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NewWidgetBlueprint(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NewWidgetBlueprint_C">();
	}
	static class UNewWidgetBlueprint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNewWidgetBlueprint_C>();
	}
};
static_assert(alignof(UNewWidgetBlueprint_C) == 0x000008, "Wrong alignment on UNewWidgetBlueprint_C");
static_assert(sizeof(UNewWidgetBlueprint_C) == 0x000270, "Wrong size on UNewWidgetBlueprint_C");
static_assert(offsetof(UNewWidgetBlueprint_C, UberGraphFrame) == 0x000260, "Member 'UNewWidgetBlueprint_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNewWidgetBlueprint_C, Image_0) == 0x000268, "Member 'UNewWidgetBlueprint_C::Image_0' has a wrong offset!");

}

