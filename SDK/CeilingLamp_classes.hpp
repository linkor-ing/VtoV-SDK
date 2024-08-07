#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CeilingLamp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ceilingLamp.ceilingLamp_C
// 0x0030 (0x02B8 - 0x0288)
class ACeilingLamp_C : public ATriggerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_CeilingLamp_C;                      // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3024[0x3];                                     // 0x02A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Power;                                             // 0x02A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasPower;                                          // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3025[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Radius;                                            // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Strength;                                          // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ceilingLamp(int32 EntryPoint);
	void Off();
	void PowerChanged(bool Active_calc, bool Active_downl, bool Active_coords, bool Active_play, bool Active_light);
	void ReceiveBeginPlay();
	void Toggle();
	void Deactivate(bool Param_HasPower);
	void SetVis();
	void Solar();
	void SetActive(bool Param_IsActive);
	void Upd();
	void GamemodeBeginPlay();
	void UserConstructionScript();
	void LoadTriggerData(const struct FStruct_triggerSave& Data, bool* Return);
	void GetTriggerData(struct FStruct_triggerSave* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ceilingLamp_C">();
	}
	static class ACeilingLamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACeilingLamp_C>();
	}
};
static_assert(alignof(ACeilingLamp_C) == 0x000008, "Wrong alignment on ACeilingLamp_C");
static_assert(sizeof(ACeilingLamp_C) == 0x0002B8, "Wrong size on ACeilingLamp_C");
static_assert(offsetof(ACeilingLamp_C, UberGraphFrame_CeilingLamp_C) == 0x000288, "Member 'ACeilingLamp_C::UberGraphFrame_CeilingLamp_C' has a wrong offset!");
static_assert(offsetof(ACeilingLamp_C, PointLight) == 0x000290, "Member 'ACeilingLamp_C::PointLight' has a wrong offset!");
static_assert(offsetof(ACeilingLamp_C, Mesh) == 0x000298, "Member 'ACeilingLamp_C::Mesh' has a wrong offset!");
static_assert(offsetof(ACeilingLamp_C, IsActive) == 0x0002A0, "Member 'ACeilingLamp_C::IsActive' has a wrong offset!");
static_assert(offsetof(ACeilingLamp_C, Power) == 0x0002A4, "Member 'ACeilingLamp_C::Power' has a wrong offset!");
static_assert(offsetof(ACeilingLamp_C, HasPower) == 0x0002A8, "Member 'ACeilingLamp_C::HasPower' has a wrong offset!");
static_assert(offsetof(ACeilingLamp_C, Radius) == 0x0002AC, "Member 'ACeilingLamp_C::Radius' has a wrong offset!");
static_assert(offsetof(ACeilingLamp_C, Strength) == 0x0002B0, "Member 'ACeilingLamp_C::Strength' has a wrong offset!");

}

