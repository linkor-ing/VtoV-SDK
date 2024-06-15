#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ticker_foodHall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Ticker_base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ticker_foodHall.ticker_foodHall_C
// 0x0008 (0x0240 - 0x0238)
class ATicker_foodHall_C final : public ATicker_base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Ticker_foodHall_C;                  // 0x0238(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_ticker_foodHall(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ticker_foodHall_C">();
	}
	static class ATicker_foodHall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATicker_foodHall_C>();
	}
};
static_assert(alignof(ATicker_foodHall_C) == 0x000008, "Wrong alignment on ATicker_foodHall_C");
static_assert(sizeof(ATicker_foodHall_C) == 0x000240, "Wrong size on ATicker_foodHall_C");
static_assert(offsetof(ATicker_foodHall_C, UberGraphFrame_Ticker_foodHall_C) == 0x000238, "Member 'ATicker_foodHall_C::UberGraphFrame_Ticker_foodHall_C' has a wrong offset!");

}
