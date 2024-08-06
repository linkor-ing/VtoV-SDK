#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dish_Child

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Dish_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass dish_Child.dish_Child_C
// 0x0080 (0x0440 - 0x03C0)
class ADish_Child_C final : public ADish_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Dish_Child_C;                       // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube3;                                             // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ChildActor;                                        // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube2;                                             // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Bounds;                                            // 0x03E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Ladder;                                            // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube1;                                             // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall7;                                             // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall6;                                             // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall5;                                             // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall3;                                             // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall2;                                             // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall1;                                             // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard1;                                        // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class NewBlueprint3_0::ANewBlueprint3_C*      R;                                                 // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWaterVolume_C*                         W;                                                 // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_dish_Child(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"dish_Child_C">();
	}
	static class ADish_Child_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADish_Child_C>();
	}
};
static_assert(alignof(ADish_Child_C) == 0x000008, "Wrong alignment on ADish_Child_C");
static_assert(sizeof(ADish_Child_C) == 0x000440, "Wrong size on ADish_Child_C");
static_assert(offsetof(ADish_Child_C, UberGraphFrame_Dish_Child_C) == 0x0003C0, "Member 'ADish_Child_C::UberGraphFrame_Dish_Child_C' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, Cube3) == 0x0003C8, "Member 'ADish_Child_C::Cube3' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, ChildActor) == 0x0003D0, "Member 'ADish_Child_C::ChildActor' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, Cube2) == 0x0003D8, "Member 'ADish_Child_C::Cube2' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, Bounds) == 0x0003E0, "Member 'ADish_Child_C::Bounds' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, Ladder) == 0x0003E8, "Member 'ADish_Child_C::Ladder' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, Cube1) == 0x0003F0, "Member 'ADish_Child_C::Cube1' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, Wall7) == 0x0003F8, "Member 'ADish_Child_C::Wall7' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, Wall6) == 0x000400, "Member 'ADish_Child_C::Wall6' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, Wall5) == 0x000408, "Member 'ADish_Child_C::Wall5' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, Wall3) == 0x000410, "Member 'ADish_Child_C::Wall3' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, Wall2) == 0x000418, "Member 'ADish_Child_C::Wall2' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, Wall1) == 0x000420, "Member 'ADish_Child_C::Wall1' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, Billboard1) == 0x000428, "Member 'ADish_Child_C::Billboard1' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, R) == 0x000430, "Member 'ADish_Child_C::R' has a wrong offset!");
static_assert(offsetof(ADish_Child_C, W) == 0x000438, "Member 'ADish_Child_C::W' has a wrong offset!");

}
