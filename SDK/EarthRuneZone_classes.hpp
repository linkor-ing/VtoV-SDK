#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EarthRuneZone

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass earthRuneZone.earthRuneZone_C
// 0x0010 (0x0230 - 0x0220)
class AEarthRuneZone_C final : public AActor
{
public:
	class UCapsuleComponent*                      Capsule;                                           // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"earthRuneZone_C">();
	}
	static class AEarthRuneZone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEarthRuneZone_C>();
	}
};
static_assert(alignof(AEarthRuneZone_C) == 0x000008, "Wrong alignment on AEarthRuneZone_C");
static_assert(sizeof(AEarthRuneZone_C) == 0x000230, "Wrong size on AEarthRuneZone_C");
static_assert(offsetof(AEarthRuneZone_C, Capsule) == 0x000220, "Member 'AEarthRuneZone_C::Capsule' has a wrong offset!");
static_assert(offsetof(AEarthRuneZone_C, DefaultSceneRoot) == 0x000228, "Member 'AEarthRuneZone_C::DefaultSceneRoot' has a wrong offset!");

}

