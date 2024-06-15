#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChildPawn

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass childPawn.childPawn_C
// 0x0010 (0x0290 - 0x0280)
class AChildPawn_C final : public APawn
{
public:
	class UStaticMeshComponent*                   Sphere;                                            // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFloatingPawnMovement*                  FloatingPawnMovement;                              // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"childPawn_C">();
	}
	static class AChildPawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AChildPawn_C>();
	}
};
static_assert(alignof(AChildPawn_C) == 0x000008, "Wrong alignment on AChildPawn_C");
static_assert(sizeof(AChildPawn_C) == 0x000290, "Wrong size on AChildPawn_C");
static_assert(offsetof(AChildPawn_C, Sphere) == 0x000280, "Member 'AChildPawn_C::Sphere' has a wrong offset!");
static_assert(offsetof(AChildPawn_C, FloatingPawnMovement) == 0x000288, "Member 'AChildPawn_C::FloatingPawnMovement' has a wrong offset!");

}
