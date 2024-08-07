#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Effect_ariralVaccine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Actor_save_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass effect_ariralVaccine.effect_ariralVaccine_C
// 0x0018 (0x0260 - 0x0248)
class AEffect_ariralVaccine_C final : public AActor_save_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Effect_ariralVaccine_C;             // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         Alpha;                                             // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2EA9[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUmg_ariralVaccine_C*                   Widget;                                            // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_effect_ariralVaccine(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"effect_ariralVaccine_C">();
	}
	static class AEffect_ariralVaccine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEffect_ariralVaccine_C>();
	}
};
static_assert(alignof(AEffect_ariralVaccine_C) == 0x000008, "Wrong alignment on AEffect_ariralVaccine_C");
static_assert(sizeof(AEffect_ariralVaccine_C) == 0x000260, "Wrong size on AEffect_ariralVaccine_C");
static_assert(offsetof(AEffect_ariralVaccine_C, UberGraphFrame_Effect_ariralVaccine_C) == 0x000248, "Member 'AEffect_ariralVaccine_C::UberGraphFrame_Effect_ariralVaccine_C' has a wrong offset!");
static_assert(offsetof(AEffect_ariralVaccine_C, Alpha) == 0x000250, "Member 'AEffect_ariralVaccine_C::Alpha' has a wrong offset!");
static_assert(offsetof(AEffect_ariralVaccine_C, Widget) == 0x000258, "Member 'AEffect_ariralVaccine_C::Widget' has a wrong offset!");

}

