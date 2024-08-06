#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dream_fill

#include "Basic.hpp"

#include "DreamBase_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass dream_fill.dream_fill_C
// 0x0098 (0x0308 - 0x0270)
class ADream_fill_C final : public ADreamBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Dream_fill_C;                       // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   Door3;                                             // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Door1;                                             // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Door2;                                             // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Door0;                                             // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Fill;                                              // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          Pills;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Doors;                                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Pillars;                                           // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane4;                                            // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane3;                                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane2;                                            // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane1;                                            // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Plane;                                             // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Aa_a_B7C18E4A493E565630B091AA87B0C5CC;             // 0x02E0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Aa__Direction_B7C18E4A493E565630B091AA87B0C5CC;    // 0x02E4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E5[0x3];                                      // 0x02E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Aa;                                                // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         A;                                                 // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2F4[0x4];                                      // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UChildActorComponent*>           B;                                                 // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_dream_fill(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Aa__UpdateFunc();
	void Aa__FinishedFunc();
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"dream_fill_C">();
	}
	static class ADream_fill_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADream_fill_C>();
	}
};
static_assert(alignof(ADream_fill_C) == 0x000008, "Wrong alignment on ADream_fill_C");
static_assert(sizeof(ADream_fill_C) == 0x000308, "Wrong size on ADream_fill_C");
static_assert(offsetof(ADream_fill_C, UberGraphFrame_Dream_fill_C) == 0x000270, "Member 'ADream_fill_C::UberGraphFrame_Dream_fill_C' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Door3) == 0x000278, "Member 'ADream_fill_C::Door3' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Door1) == 0x000280, "Member 'ADream_fill_C::Door1' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Door2) == 0x000288, "Member 'ADream_fill_C::Door2' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Door0) == 0x000290, "Member 'ADream_fill_C::Door0' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Fill) == 0x000298, "Member 'ADream_fill_C::Fill' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Pills) == 0x0002A0, "Member 'ADream_fill_C::Pills' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Doors) == 0x0002A8, "Member 'ADream_fill_C::Doors' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Pillars) == 0x0002B0, "Member 'ADream_fill_C::Pillars' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Plane4) == 0x0002B8, "Member 'ADream_fill_C::Plane4' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Plane3) == 0x0002C0, "Member 'ADream_fill_C::Plane3' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Plane2) == 0x0002C8, "Member 'ADream_fill_C::Plane2' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Plane1) == 0x0002D0, "Member 'ADream_fill_C::Plane1' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Plane) == 0x0002D8, "Member 'ADream_fill_C::Plane' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Aa_a_B7C18E4A493E565630B091AA87B0C5CC) == 0x0002E0, "Member 'ADream_fill_C::Aa_a_B7C18E4A493E565630B091AA87B0C5CC' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Aa__Direction_B7C18E4A493E565630B091AA87B0C5CC) == 0x0002E4, "Member 'ADream_fill_C::Aa__Direction_B7C18E4A493E565630B091AA87B0C5CC' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, Aa) == 0x0002E8, "Member 'ADream_fill_C::Aa' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, A) == 0x0002F0, "Member 'ADream_fill_C::A' has a wrong offset!");
static_assert(offsetof(ADream_fill_C, B) == 0x0002F8, "Member 'ADream_fill_C::B' has a wrong offset!");

}

