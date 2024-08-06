#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_coingun

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_coingun.prop_coingun_C
// 0x0008 (0x0380 - 0x0378)
class AProp_coingun_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_coingun_C;                     // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_prop_coingun(int32 EntryPoint);
	void Sell(int32 Param_Index, class UPrimitiveComponent* Comp);
	struct FVector Rnd(class UStaticMeshComponent* InputPin, class UPrimitiveComponent* C);
	void PlayerHandUse_LMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_coingun_C">();
	}
	static class AProp_coingun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_coingun_C>();
	}
};
static_assert(alignof(AProp_coingun_C) == 0x000008, "Wrong alignment on AProp_coingun_C");
static_assert(sizeof(AProp_coingun_C) == 0x000380, "Wrong size on AProp_coingun_C");
static_assert(offsetof(AProp_coingun_C, UberGraphFrame_Prop_coingun_C) == 0x000378, "Member 'AProp_coingun_C::UberGraphFrame_Prop_coingun_C' has a wrong offset!");

}

