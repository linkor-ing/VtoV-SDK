#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_craftTest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_craftTest.prop_craftTest_C
// 0x0018 (0x0390 - 0x0378)
class AProp_craftTest_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_craftTest_C;                   // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   Two;                                               // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   One;                                               // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_craftTest(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_craftTest_C">();
	}
	static class AProp_craftTest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_craftTest_C>();
	}
};
static_assert(alignof(AProp_craftTest_C) == 0x000008, "Wrong alignment on AProp_craftTest_C");
static_assert(sizeof(AProp_craftTest_C) == 0x000390, "Wrong size on AProp_craftTest_C");
static_assert(offsetof(AProp_craftTest_C, UberGraphFrame_Prop_craftTest_C) == 0x000378, "Member 'AProp_craftTest_C::UberGraphFrame_Prop_craftTest_C' has a wrong offset!");
static_assert(offsetof(AProp_craftTest_C, Two) == 0x000380, "Member 'AProp_craftTest_C::Two' has a wrong offset!");
static_assert(offsetof(AProp_craftTest_C, One) == 0x000388, "Member 'AProp_craftTest_C::One' has a wrong offset!");

}

