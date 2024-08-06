#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UfoDreamer

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Actor_save_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ufoDreamer.ufoDreamer_C
// 0x0008 (0x0250 - 0x0248)
class AUfoDreamer_C final : public AActor_save_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_UfoDreamer_C;                       // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_ufoDreamer(int32 EntryPoint);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ufoDreamer_C">();
	}
	static class AUfoDreamer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AUfoDreamer_C>();
	}
};
static_assert(alignof(AUfoDreamer_C) == 0x000008, "Wrong alignment on AUfoDreamer_C");
static_assert(sizeof(AUfoDreamer_C) == 0x000250, "Wrong size on AUfoDreamer_C");
static_assert(offsetof(AUfoDreamer_C, UberGraphFrame_UfoDreamer_C) == 0x000248, "Member 'AUfoDreamer_C::UberGraphFrame_UfoDreamer_C' has a wrong offset!");

}

