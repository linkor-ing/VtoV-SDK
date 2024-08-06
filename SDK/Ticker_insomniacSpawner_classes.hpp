#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_insomniacSpawner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Ticker_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ticker_insomniacSpawner.ticker_insomniacSpawner_C
// 0x0008 (0x0240 - 0x0238)
class ATicker_insomniacSpawner_C final : public ATicker_base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Ticker_insomniacSpawner_C;          // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_ticker_insomniacSpawner(int32 EntryPoint);
	void InsomniacDest(class AActor* DestroyedActor);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ticker_insomniacSpawner_C">();
	}
	static class ATicker_insomniacSpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATicker_insomniacSpawner_C>();
	}
};
static_assert(alignof(ATicker_insomniacSpawner_C) == 0x000008, "Wrong alignment on ATicker_insomniacSpawner_C");
static_assert(sizeof(ATicker_insomniacSpawner_C) == 0x000240, "Wrong size on ATicker_insomniacSpawner_C");
static_assert(offsetof(ATicker_insomniacSpawner_C, UberGraphFrame_Ticker_insomniacSpawner_C) == 0x000238, "Member 'ATicker_insomniacSpawner_C::UberGraphFrame_Ticker_insomniacSpawner_C' has a wrong offset!");

}

