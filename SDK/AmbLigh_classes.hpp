#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AmbLigh

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "TriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ambLigh.ambLigh_C
// 0x0018 (0x02A0 - 0x0288)
class AAmbLigh_C final : public ATriggerBase_C
{
public:
	class URectLightComponent*                    RectLight;                                         // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Size;                                              // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Intensity;                                         // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetActive(bool Active);
	void Upd();
	void UserConstructionScript();
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);
	void GetTriggerData(struct FStruct_triggerSave* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ambLigh_C">();
	}
	static class AAmbLigh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAmbLigh_C>();
	}
};
static_assert(alignof(AAmbLigh_C) == 0x000008, "Wrong alignment on AAmbLigh_C");
static_assert(sizeof(AAmbLigh_C) == 0x0002A0, "Wrong size on AAmbLigh_C");
static_assert(offsetof(AAmbLigh_C, RectLight) == 0x000288, "Member 'AAmbLigh_C::RectLight' has a wrong offset!");
static_assert(offsetof(AAmbLigh_C, Size) == 0x000290, "Member 'AAmbLigh_C::Size' has a wrong offset!");
static_assert(offsetof(AAmbLigh_C, Intensity) == 0x000298, "Member 'AAmbLigh_C::Intensity' has a wrong offset!");

}
