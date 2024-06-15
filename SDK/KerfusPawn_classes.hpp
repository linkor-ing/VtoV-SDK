#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KerfusPawn

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass kerfusPawn.kerfusPawn_C
// 0x0010 (0x0290 - 0x0280)
class AKerfusPawn_C final : public APawn
{
public:
	class UFloatingPawnMovement*                  FloatingPawnMovement;                              // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"kerfusPawn_C">();
	}
	static class AKerfusPawn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKerfusPawn_C>();
	}
};
static_assert(alignof(AKerfusPawn_C) == 0x000008, "Wrong alignment on AKerfusPawn_C");
static_assert(sizeof(AKerfusPawn_C) == 0x000290, "Wrong size on AKerfusPawn_C");
static_assert(offsetof(AKerfusPawn_C, FloatingPawnMovement) == 0x000280, "Member 'AKerfusPawn_C::FloatingPawnMovement' has a wrong offset!");
static_assert(offsetof(AKerfusPawn_C, DefaultSceneRoot) == 0x000288, "Member 'AKerfusPawn_C::DefaultSceneRoot' has a wrong offset!");

}
