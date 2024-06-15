#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TheEvil

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass theEvil.theEvil_C
// 0x0018 (0x0380 - 0x0368)
class ATheEvil_C final : public AProp_C
{
public:
	uint8                                         Pad_375C[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_TheEvil_C;                          // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0378(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x037C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          Force;                                             // 0x037D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_theEvil(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void CheckForEvil(bool* Evil);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"theEvil_C">();
	}
	static class ATheEvil_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATheEvil_C>();
	}
};
static_assert(alignof(ATheEvil_C) == 0x000008, "Wrong alignment on ATheEvil_C");
static_assert(sizeof(ATheEvil_C) == 0x000380, "Wrong size on ATheEvil_C");
static_assert(offsetof(ATheEvil_C, UberGraphFrame_TheEvil_C) == 0x000368, "Member 'ATheEvil_C::UberGraphFrame_TheEvil_C' has a wrong offset!");
static_assert(offsetof(ATheEvil_C, PostProcess) == 0x000370, "Member 'ATheEvil_C::PostProcess' has a wrong offset!");
static_assert(offsetof(ATheEvil_C, Time) == 0x000378, "Member 'ATheEvil_C::Time' has a wrong offset!");
static_assert(offsetof(ATheEvil_C, Active) == 0x00037C, "Member 'ATheEvil_C::Active' has a wrong offset!");
static_assert(offsetof(ATheEvil_C, Force) == 0x00037D, "Member 'ATheEvil_C::Force' has a wrong offset!");

}

