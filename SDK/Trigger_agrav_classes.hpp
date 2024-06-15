#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Trigger_agrav

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TriggerBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass trigger_agrav.trigger_agrav_C
// 0x0090 (0x0318 - 0x0288)
class ATrigger_agrav_C final : public ATriggerBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Trigger_agrav_C;                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight1;                                       // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        ArirHover_Cue;                                     // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         b_a_DE080D9043B5FE98A3CAD9B8A5879F80;              // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            b__Direction_DE080D9043B5FE98A3CAD9B8A5879F80;     // 0x02B4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4323[0x3];                                     // 0x02B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     B;                                                 // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         Props;                                             // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AActor*                                 Prop;                                              // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Vel;                                               // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4324[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPrimitiveComponent*>            Comps;                                             // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UPrimitiveComponent*>            buf;                                               // 0x02F0(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	float                                         Aa;                                                // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ime;                                               // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat_0;                                          // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat_1;                                          // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Gaher();
	void b__FinishedFunc();
	void b__UpdateFunc();
	void RunTrigger(class AActor* Param_Owner, int32 Param_Index);
	void ReceiveBeginPlay();
	void Cloak(bool Forward);
	void ReceiveTick(float DeltaSeconds);
	void PhotoTaken();
	void ExecuteUbergraph_trigger_agrav(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"trigger_agrav_C">();
	}
	static class ATrigger_agrav_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATrigger_agrav_C>();
	}
};
static_assert(alignof(ATrigger_agrav_C) == 0x000008, "Wrong alignment on ATrigger_agrav_C");
static_assert(sizeof(ATrigger_agrav_C) == 0x000318, "Wrong size on ATrigger_agrav_C");
static_assert(offsetof(ATrigger_agrav_C, UberGraphFrame_Trigger_agrav_C) == 0x000288, "Member 'ATrigger_agrav_C::UberGraphFrame_Trigger_agrav_C' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, PointLight1) == 0x000290, "Member 'ATrigger_agrav_C::PointLight1' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, StaticMesh) == 0x000298, "Member 'ATrigger_agrav_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, PointLight) == 0x0002A0, "Member 'ATrigger_agrav_C::PointLight' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, ArirHover_Cue) == 0x0002A8, "Member 'ATrigger_agrav_C::ArirHover_Cue' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, b_a_DE080D9043B5FE98A3CAD9B8A5879F80) == 0x0002B0, "Member 'ATrigger_agrav_C::b_a_DE080D9043B5FE98A3CAD9B8A5879F80' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, b__Direction_DE080D9043B5FE98A3CAD9B8A5879F80) == 0x0002B4, "Member 'ATrigger_agrav_C::b__Direction_DE080D9043B5FE98A3CAD9B8A5879F80' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, B) == 0x0002B8, "Member 'ATrigger_agrav_C::B' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, Props) == 0x0002C0, "Member 'ATrigger_agrav_C::Props' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, Prop) == 0x0002D0, "Member 'ATrigger_agrav_C::Prop' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, Vel) == 0x0002D8, "Member 'ATrigger_agrav_C::Vel' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, Comps) == 0x0002E0, "Member 'ATrigger_agrav_C::Comps' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, buf) == 0x0002F0, "Member 'ATrigger_agrav_C::buf' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, Aa) == 0x000300, "Member 'ATrigger_agrav_C::Aa' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, Ime) == 0x000304, "Member 'ATrigger_agrav_C::Ime' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, Dynmat_0) == 0x000308, "Member 'ATrigger_agrav_C::Dynmat_0' has a wrong offset!");
static_assert(offsetof(ATrigger_agrav_C, Dynmat_1) == 0x000310, "Member 'ATrigger_agrav_C::Dynmat_1' has a wrong offset!");

}

