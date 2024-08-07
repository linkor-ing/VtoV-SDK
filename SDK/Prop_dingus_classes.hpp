#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_dingus

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_food_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_dingus.prop_dingus_C
// 0x0040 (0x0400 - 0x03C0)
class AProp_dingus_C : public AProp_food_C
{
public:
	uint8                                         Pad_3F8B[0x4];                                     // 0x03BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_dingus_C;                      // 0x03C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Spk1;                                              // 0x03C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Ws1;                                               // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Spk;                                               // 0x03D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                         A;                                                 // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUsed;                                            // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F8C[0x3];                                     // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         B;                                                 // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Argemwell;                                         // 0x03EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F8D[0x3];                                     // 0x03ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UStaticMeshComponent*>           bs;                                                // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_prop_dingus(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);
	void ReceiveBeginPlay();
	void EnterWater(class AWaterVolume_C* Water);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace);
	void GetData(struct FStruct_save* Data);
	void LoadData(const struct FStruct_save& Data, bool* Return);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_dingus_C">();
	}
	static class AProp_dingus_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_dingus_C>();
	}
};
static_assert(alignof(AProp_dingus_C) == 0x000008, "Wrong alignment on AProp_dingus_C");
static_assert(sizeof(AProp_dingus_C) == 0x000400, "Wrong size on AProp_dingus_C");
static_assert(offsetof(AProp_dingus_C, UberGraphFrame_Prop_dingus_C) == 0x0003C0, "Member 'AProp_dingus_C::UberGraphFrame_Prop_dingus_C' has a wrong offset!");
static_assert(offsetof(AProp_dingus_C, Spk1) == 0x0003C8, "Member 'AProp_dingus_C::Spk1' has a wrong offset!");
static_assert(offsetof(AProp_dingus_C, Ws1) == 0x0003D0, "Member 'AProp_dingus_C::Ws1' has a wrong offset!");
static_assert(offsetof(AProp_dingus_C, Spk) == 0x0003D8, "Member 'AProp_dingus_C::Spk' has a wrong offset!");
static_assert(offsetof(AProp_dingus_C, A) == 0x0003E0, "Member 'AProp_dingus_C::A' has a wrong offset!");
static_assert(offsetof(AProp_dingus_C, IsUsed) == 0x0003E4, "Member 'AProp_dingus_C::IsUsed' has a wrong offset!");
static_assert(offsetof(AProp_dingus_C, B) == 0x0003E8, "Member 'AProp_dingus_C::B' has a wrong offset!");
static_assert(offsetof(AProp_dingus_C, Argemwell) == 0x0003EC, "Member 'AProp_dingus_C::Argemwell' has a wrong offset!");
static_assert(offsetof(AProp_dingus_C, bs) == 0x0003F0, "Member 'AProp_dingus_C::bs' has a wrong offset!");

}

