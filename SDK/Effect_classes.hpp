#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Effect

#include "Basic.hpp"

#include "Actor_save_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass effect.effect_C
// 0x0000 (0x0248 - 0x0248)
class AEffect_C : public AActor_save_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"effect_C">();
	}
	static class AEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEffect_C>();
	}
};
static_assert(alignof(AEffect_C) == 0x000008, "Wrong alignment on AEffect_C");
static_assert(sizeof(AEffect_C) == 0x000248, "Wrong size on AEffect_C");

}

