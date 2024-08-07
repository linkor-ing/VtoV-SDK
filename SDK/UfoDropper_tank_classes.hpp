#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UfoDropper_tank

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UfoDropper_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ufoDropper_tank.ufoDropper_tank_C
// 0x0008 (0x02C0 - 0x02B8)
class AUfoDropper_tank_C final : public AUfoDropper_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UfoDropper_tank_C;                  // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_ufoDropper_tank(int32 EntryPoint);
	void Activated();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ufoDropper_tank_C">();
	}
	static class AUfoDropper_tank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUfoDropper_tank_C>();
	}
};
static_assert(alignof(AUfoDropper_tank_C) == 0x000008, "Wrong alignment on AUfoDropper_tank_C");
static_assert(sizeof(AUfoDropper_tank_C) == 0x0002C0, "Wrong size on AUfoDropper_tank_C");
static_assert(offsetof(AUfoDropper_tank_C, UberGraphFrame_UfoDropper_tank_C) == 0x0002B8, "Member 'AUfoDropper_tank_C::UberGraphFrame_UfoDropper_tank_C' has a wrong offset!");

}

