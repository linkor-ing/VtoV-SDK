#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_balloon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_balloon.prop_balloon_C
// 0x0040 (0x03A8 - 0x0368)
class AProp_balloon_C final : public AProp_C
{
public:
	uint8                                         Pad_1E4C[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_balloon_C;                     // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            PhysicsConstraint;                                 // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        Cable;                                             // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Force;                                             // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ANail_C*                                Nail;                                              // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 NailKey;                                           // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_balloon(int32 EntryPoint);
	void SetNail(class ANail_C* Param_Nail);
	void Dess(class AActor* DestroyedActor);
	void MakeDes();
	void ReceiveTick(float DeltaSeconds);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void ProcessKeys(bool* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_balloon_C">();
	}
	static class AProp_balloon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_balloon_C>();
	}
};
static_assert(alignof(AProp_balloon_C) == 0x000008, "Wrong alignment on AProp_balloon_C");
static_assert(sizeof(AProp_balloon_C) == 0x0003A8, "Wrong size on AProp_balloon_C");
static_assert(offsetof(AProp_balloon_C, UberGraphFrame_Prop_balloon_C) == 0x000368, "Member 'AProp_balloon_C::UberGraphFrame_Prop_balloon_C' has a wrong offset!");
static_assert(offsetof(AProp_balloon_C, Audio) == 0x000370, "Member 'AProp_balloon_C::Audio' has a wrong offset!");
static_assert(offsetof(AProp_balloon_C, PhysicsConstraint) == 0x000378, "Member 'AProp_balloon_C::PhysicsConstraint' has a wrong offset!");
static_assert(offsetof(AProp_balloon_C, Cable) == 0x000380, "Member 'AProp_balloon_C::Cable' has a wrong offset!");
static_assert(offsetof(AProp_balloon_C, Force) == 0x000388, "Member 'AProp_balloon_C::Force' has a wrong offset!");
static_assert(offsetof(AProp_balloon_C, Nail) == 0x000390, "Member 'AProp_balloon_C::Nail' has a wrong offset!");
static_assert(offsetof(AProp_balloon_C, NailKey) == 0x000398, "Member 'AProp_balloon_C::NailKey' has a wrong offset!");

}

