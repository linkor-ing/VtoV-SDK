#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Fridge

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass fridge.fridge_C
// 0x0060 (0x0520 - 0x04C0)
class AFridge_C final : public ACharacter
{
public:
	uint8                                         Pad_4B8[0x8];                                      // 0x04B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialBillboardComponent*            bill;                                              // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Ro;                                                // 0x04D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Rend;                                              // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             NewVar_0;                                          // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 NewVar_1;                                          // 0x04F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FVector                                InBounds;                                          // 0x0500(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Elepor;                                            // 0x050C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Offs;                                              // 0x0510(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Process;                                           // 0x0514(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_515[0x3];                                      // 0x0515(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         H;                                                 // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Escaped;                                           // 0x051C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void R(struct FVector* Param_Elepor);
	void G();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_fridge(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"fridge_C">();
	}
	static class AFridge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AFridge_C>();
	}
};
static_assert(alignof(AFridge_C) == 0x000010, "Wrong alignment on AFridge_C");
static_assert(sizeof(AFridge_C) == 0x000520, "Wrong size on AFridge_C");
static_assert(offsetof(AFridge_C, UberGraphFrame) == 0x0004C0, "Member 'AFridge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AFridge_C, bill) == 0x0004C8, "Member 'AFridge_C::bill' has a wrong offset!");
static_assert(offsetof(AFridge_C, Decal) == 0x0004D0, "Member 'AFridge_C::Decal' has a wrong offset!");
static_assert(offsetof(AFridge_C, Ro) == 0x0004D8, "Member 'AFridge_C::Ro' has a wrong offset!");
static_assert(offsetof(AFridge_C, Rend) == 0x0004E0, "Member 'AFridge_C::Rend' has a wrong offset!");
static_assert(offsetof(AFridge_C, NewVar_0) == 0x0004E8, "Member 'AFridge_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(AFridge_C, NewVar_1) == 0x0004F0, "Member 'AFridge_C::NewVar_1' has a wrong offset!");
static_assert(offsetof(AFridge_C, InBounds) == 0x000500, "Member 'AFridge_C::InBounds' has a wrong offset!");
static_assert(offsetof(AFridge_C, Elepor) == 0x00050C, "Member 'AFridge_C::Elepor' has a wrong offset!");
static_assert(offsetof(AFridge_C, Offs) == 0x000510, "Member 'AFridge_C::Offs' has a wrong offset!");
static_assert(offsetof(AFridge_C, Process) == 0x000514, "Member 'AFridge_C::Process' has a wrong offset!");
static_assert(offsetof(AFridge_C, H) == 0x000518, "Member 'AFridge_C::H' has a wrong offset!");
static_assert(offsetof(AFridge_C, Escaped) == 0x00051C, "Member 'AFridge_C::Escaped' has a wrong offset!");

}

