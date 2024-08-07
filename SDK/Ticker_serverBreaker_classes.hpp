#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_serverBreaker

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Ticker_base_classes.hpp"
#include "Enum_difficulty_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ticker_serverBreaker.ticker_serverBreaker_C
// 0x0008 (0x0240 - 0x0238)
class ATicker_serverBreaker_C final : public ATicker_base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Ticker_serverBreaker_C;             // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_ticker_serverBreaker(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ticker_serverBreaker_C">();
	}
	static class ATicker_serverBreaker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATicker_serverBreaker_C>();
	}
};
static_assert(alignof(ATicker_serverBreaker_C) == 0x000008, "Wrong alignment on ATicker_serverBreaker_C");
static_assert(sizeof(ATicker_serverBreaker_C) == 0x000240, "Wrong size on ATicker_serverBreaker_C");
static_assert(offsetof(ATicker_serverBreaker_C, UberGraphFrame_Ticker_serverBreaker_C) == 0x000238, "Member 'ATicker_serverBreaker_C::UberGraphFrame_Ticker_serverBreaker_C' has a wrong offset!");

}

