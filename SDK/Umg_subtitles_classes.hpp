#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_subtitles

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_subtitles.umg_subtitles_C
// 0x0008 (0x0268 - 0x0260)
class UUmg_subtitles_C final : public UUserWidget
{
public:
	class UVerticalBox*                           List;                                              // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_subtitles_C">();
	}
	static class UUmg_subtitles_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_subtitles_C>();
	}
};
static_assert(alignof(UUmg_subtitles_C) == 0x000008, "Wrong alignment on UUmg_subtitles_C");
static_assert(sizeof(UUmg_subtitles_C) == 0x000268, "Wrong size on UUmg_subtitles_C");
static_assert(offsetof(UUmg_subtitles_C, List) == 0x000260, "Member 'UUmg_subtitles_C::List' has a wrong offset!");

}

