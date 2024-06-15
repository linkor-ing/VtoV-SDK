#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_kerfurOmega_keith

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_kerfurOmega_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_kerfurOmega_keith.prop_kerfurOmega_keith_C
// 0x0008 (0x0388 - 0x0380)
class AProp_kerfurOmega_keith_C final : public AProp_kerfurOmega_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_kerfurOmega_keith_C;           // 0x0380(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_kerfurOmega_keith(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_kerfurOmega_keith_C">();
	}
	static class AProp_kerfurOmega_keith_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_kerfurOmega_keith_C>();
	}
};
static_assert(alignof(AProp_kerfurOmega_keith_C) == 0x000008, "Wrong alignment on AProp_kerfurOmega_keith_C");
static_assert(sizeof(AProp_kerfurOmega_keith_C) == 0x000388, "Wrong size on AProp_kerfurOmega_keith_C");
static_assert(offsetof(AProp_kerfurOmega_keith_C, UberGraphFrame_Prop_kerfurOmega_keith_C) == 0x000380, "Member 'AProp_kerfurOmega_keith_C::UberGraphFrame_Prop_kerfurOmega_keith_C' has a wrong offset!");

}

