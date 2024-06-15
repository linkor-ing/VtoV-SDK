#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LlamaSoul

#include "Basic.hpp"

#include "Actor_save_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass llamaSoul.llamaSoul_C
// 0x0000 (0x0248 - 0x0248)
class ALlamaSoul_C final : public AActor_save_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"llamaSoul_C">();
	}
	static class ALlamaSoul_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALlamaSoul_C>();
	}
};
static_assert(alignof(ALlamaSoul_C) == 0x000008, "Wrong alignment on ALlamaSoul_C");
static_assert(sizeof(ALlamaSoul_C) == 0x000248, "Wrong size on ALlamaSoul_C");

}

