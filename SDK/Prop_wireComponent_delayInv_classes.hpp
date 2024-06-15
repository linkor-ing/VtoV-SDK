#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_delayInv

#include "Basic.hpp"

#include "Prop_wireComponent_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wireComponent_delayInv.prop_wireComponent_delayInv_C
// 0x0020 (0x0390 - 0x0370)
class AProp_wireComponent_delayInv_C final : public AProp_wireComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_wireComponent_delayInv_C;      // 0x0370(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Billboard;                                         // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3D4D[0x3];                                     // 0x0381(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Delay;                                             // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWire_C*                                PassTo;                                            // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_wireComponent_delayInv(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void WirePass(class AWire_C* Wire);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wireComponent_delayInv_C">();
	}
	static class AProp_wireComponent_delayInv_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wireComponent_delayInv_C>();
	}
};
static_assert(alignof(AProp_wireComponent_delayInv_C) == 0x000008, "Wrong alignment on AProp_wireComponent_delayInv_C");
static_assert(sizeof(AProp_wireComponent_delayInv_C) == 0x000390, "Wrong size on AProp_wireComponent_delayInv_C");
static_assert(offsetof(AProp_wireComponent_delayInv_C, UberGraphFrame_Prop_wireComponent_delayInv_C) == 0x000370, "Member 'AProp_wireComponent_delayInv_C::UberGraphFrame_Prop_wireComponent_delayInv_C' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_delayInv_C, Billboard) == 0x000378, "Member 'AProp_wireComponent_delayInv_C::Billboard' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_delayInv_C, Active) == 0x000380, "Member 'AProp_wireComponent_delayInv_C::Active' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_delayInv_C, Delay) == 0x000384, "Member 'AProp_wireComponent_delayInv_C::Delay' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_delayInv_C, PassTo) == 0x000388, "Member 'AProp_wireComponent_delayInv_C::PassTo' has a wrong offset!");

}

