#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Dream_jump

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "DreamBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass dream_jump.dream_jump_C
// 0x00D0 (0x0340 - 0x0270)
class ADream_jump_C final : public ADreamBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Dream_jump_C;                       // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Cube8;                                             // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Door4;                                             // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube7;                                             // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube6;                                             // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Door3;                                             // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube5;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube4;                                             // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Door2;                                             // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube3;                                             // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube2;                                             // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Door1;                                             // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube1;                                             // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UInstancedStaticMeshComponent*          InstancedStaticMesh;                               // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cube;                                              // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Fill;                                              // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Door0;                                             // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    PillarsGen;                                        // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Pillars;                                           // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall4;                                             // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall3;                                             // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall2;                                             // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Wall1;                                             // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Walls;                                             // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         A;                                                 // 0x0338(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_dream_jump(int32 EntryPoint);
	void BndEvt__dream_climb_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveTick(float DeltaSeconds);
	void UserConstructionScript();
	void Gen();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"dream_jump_C">();
	}
	static class ADream_jump_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADream_jump_C>();
	}
};
static_assert(alignof(ADream_jump_C) == 0x000008, "Wrong alignment on ADream_jump_C");
static_assert(sizeof(ADream_jump_C) == 0x000340, "Wrong size on ADream_jump_C");
static_assert(offsetof(ADream_jump_C, UberGraphFrame_Dream_jump_C) == 0x000270, "Member 'ADream_jump_C::UberGraphFrame_Dream_jump_C' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Cube8) == 0x000278, "Member 'ADream_jump_C::Cube8' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Door4) == 0x000280, "Member 'ADream_jump_C::Door4' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Cube7) == 0x000288, "Member 'ADream_jump_C::Cube7' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Cube6) == 0x000290, "Member 'ADream_jump_C::Cube6' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Door3) == 0x000298, "Member 'ADream_jump_C::Door3' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Cube5) == 0x0002A0, "Member 'ADream_jump_C::Cube5' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Cube4) == 0x0002A8, "Member 'ADream_jump_C::Cube4' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Door2) == 0x0002B0, "Member 'ADream_jump_C::Door2' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Cube3) == 0x0002B8, "Member 'ADream_jump_C::Cube3' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Cube2) == 0x0002C0, "Member 'ADream_jump_C::Cube2' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Door1) == 0x0002C8, "Member 'ADream_jump_C::Door1' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Cube1) == 0x0002D0, "Member 'ADream_jump_C::Cube1' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, InstancedStaticMesh) == 0x0002D8, "Member 'ADream_jump_C::InstancedStaticMesh' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Cube) == 0x0002E0, "Member 'ADream_jump_C::Cube' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Box) == 0x0002E8, "Member 'ADream_jump_C::Box' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Fill) == 0x0002F0, "Member 'ADream_jump_C::Fill' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Door0) == 0x0002F8, "Member 'ADream_jump_C::Door0' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, PillarsGen) == 0x000300, "Member 'ADream_jump_C::PillarsGen' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Pillars) == 0x000308, "Member 'ADream_jump_C::Pillars' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Wall4) == 0x000310, "Member 'ADream_jump_C::Wall4' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Wall3) == 0x000318, "Member 'ADream_jump_C::Wall3' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Wall2) == 0x000320, "Member 'ADream_jump_C::Wall2' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Wall1) == 0x000328, "Member 'ADream_jump_C::Wall1' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, Walls) == 0x000330, "Member 'ADream_jump_C::Walls' has a wrong offset!");
static_assert(offsetof(ADream_jump_C, A) == 0x000338, "Member 'ADream_jump_C::A' has a wrong offset!");

}
