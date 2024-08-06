#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_wireComponent_laserReceiver

#include "Basic.hpp"

#include "Prop_wireComponent_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_wireComponent_laserReceiver.prop_wireComponent_laserReceiver_C
// 0x0010 (0x0390 - 0x0380)
class AProp_wireComponent_laserReceiver_C final : public AProp_wireComponent_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_wireComponent_laserReceiver_C; // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AWire_C*                                Wire;                                              // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_wireComponent_laserReceiver(int32 EntryPoint);
	void WirePass(class AWire_C* Param_Wire);
	void WireDisconnected(class AWire_C* Param_Wire, bool Side);
	void WireConnected(class AWire_C* Param_Wire, bool Side);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_wireComponent_laserReceiver_C">();
	}
	static class AProp_wireComponent_laserReceiver_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_wireComponent_laserReceiver_C>();
	}
};
static_assert(alignof(AProp_wireComponent_laserReceiver_C) == 0x000008, "Wrong alignment on AProp_wireComponent_laserReceiver_C");
static_assert(sizeof(AProp_wireComponent_laserReceiver_C) == 0x000390, "Wrong size on AProp_wireComponent_laserReceiver_C");
static_assert(offsetof(AProp_wireComponent_laserReceiver_C, UberGraphFrame_Prop_wireComponent_laserReceiver_C) == 0x000380, "Member 'AProp_wireComponent_laserReceiver_C::UberGraphFrame_Prop_wireComponent_laserReceiver_C' has a wrong offset!");
static_assert(offsetof(AProp_wireComponent_laserReceiver_C, Wire) == 0x000388, "Member 'AProp_wireComponent_laserReceiver_C::Wire' has a wrong offset!");

}

