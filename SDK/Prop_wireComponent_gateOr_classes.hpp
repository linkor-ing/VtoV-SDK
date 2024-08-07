#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_gateOr

#include "Basic.hpp"

#include "Prop_wireComponent_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wireComponent_gateOr.prop_wireComponent_gateOr_C
// 0x0040 (0x03B0 - 0x0370)
class AProp_wireComponent_gateOr_C final : public AProp_wireComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_wireComponent_gateOr_C;        // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AWire_C*>                        Wires;                                             // 0x0380(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AWire_C*>                        Passed;                                            // 0x0390(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class AWire_C*                                PassTo;                                            // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          T;                                                 // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_wireComponent_gateOr(int32 EntryPoint);
	void WirePass(class AWire_C* Wire);
	void WireDisconnected(class AWire_C* Wire, bool Side);
	void WireConnected(class AWire_C* Wire, bool Side);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wireComponent_gateOr_C">();
	}
	static class AProp_wireComponent_gateOr_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wireComponent_gateOr_C>();
	}
};
static_assert(alignof(AProp_wireComponent_gateOr_C) == 0x000008, "Wrong alignment on AProp_wireComponent_gateOr_C");
static_assert(sizeof(AProp_wireComponent_gateOr_C) == 0x0003B0, "Wrong size on AProp_wireComponent_gateOr_C");
static_assert(offsetof(AProp_wireComponent_gateOr_C, UberGraphFrame_Prop_wireComponent_gateOr_C) == 0x000370, "Member 'AProp_wireComponent_gateOr_C::UberGraphFrame_Prop_wireComponent_gateOr_C' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_gateOr_C, Billboard) == 0x000378, "Member 'AProp_wireComponent_gateOr_C::Billboard' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_gateOr_C, Wires) == 0x000380, "Member 'AProp_wireComponent_gateOr_C::Wires' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_gateOr_C, Passed) == 0x000390, "Member 'AProp_wireComponent_gateOr_C::Passed' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_gateOr_C, PassTo) == 0x0003A0, "Member 'AProp_wireComponent_gateOr_C::PassTo' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_gateOr_C, T) == 0x0003A8, "Member 'AProp_wireComponent_gateOr_C::T' has a wrong offset!");

}

