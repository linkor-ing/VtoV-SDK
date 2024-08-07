#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_fishingRod

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_fishingRod.prop_fishingRod_C
// 0x00A0 (0x0408 - 0x0368)
class AProp_fishingRod_C final : public AProp_C
{
public:
	uint8                                         Pad_F52[0x7];                                      // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_fishingRod_C;                  // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    End;                                               // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        C10;                                               // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        C9;                                                // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        C8;                                                // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        C7;                                                // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        C6;                                                // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        C5;                                                // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        C4;                                                // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        C3;                                                // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        C2;                                                // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCableComponent*                        C1;                                                // 0x03C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Test_a_B974BC7D4C129A0EC588759150B6DF4B;           // 0x03C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            Test__Direction_B974BC7D4C129A0EC588759150B6DF4B;  // 0x03CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F53[0x3];                                      // 0x03CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     Test;                                              // 0x03D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFishingRodString_C*                    String;                                            // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Length;                                            // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F54[0x4];                                      // 0x03E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMainPlayer_C*                          Player;                                            // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   bait;                                              // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Luck;                                              // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Eat;                                               // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Lure;                                              // 0x0400(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_fishingRod(int32 EntryPoint);
	void Unbind();
	void bind();
	void Up();
	void Down();
	void ReceiveDestroyed();
	void ScrollDown();
	void ScrollUp();
	void Test__UpdateFunc();
	void Test__FinishedFunc();
	void Upd();
	void PlayerHandUse_LMB(class AMainPlayer_C* Param_Player);
	void PlayerHandUse_RMB(class AMainPlayer_C* Param_Player);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_fishingRod_C">();
	}
	static class AProp_fishingRod_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_fishingRod_C>();
	}
};
static_assert(alignof(AProp_fishingRod_C) == 0x000008, "Wrong alignment on AProp_fishingRod_C");
static_assert(sizeof(AProp_fishingRod_C) == 0x000408, "Wrong size on AProp_fishingRod_C");
static_assert(offsetof(AProp_fishingRod_C, UberGraphFrame_Prop_fishingRod_C) == 0x000368, "Member 'AProp_fishingRod_C::UberGraphFrame_Prop_fishingRod_C' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, End) == 0x000370, "Member 'AProp_fishingRod_C::End' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, C10) == 0x000378, "Member 'AProp_fishingRod_C::C10' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, C9) == 0x000380, "Member 'AProp_fishingRod_C::C9' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, C8) == 0x000388, "Member 'AProp_fishingRod_C::C8' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, C7) == 0x000390, "Member 'AProp_fishingRod_C::C7' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, C6) == 0x000398, "Member 'AProp_fishingRod_C::C6' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, C5) == 0x0003A0, "Member 'AProp_fishingRod_C::C5' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, C4) == 0x0003A8, "Member 'AProp_fishingRod_C::C4' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, C3) == 0x0003B0, "Member 'AProp_fishingRod_C::C3' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, C2) == 0x0003B8, "Member 'AProp_fishingRod_C::C2' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, C1) == 0x0003C0, "Member 'AProp_fishingRod_C::C1' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, Test_a_B974BC7D4C129A0EC588759150B6DF4B) == 0x0003C8, "Member 'AProp_fishingRod_C::Test_a_B974BC7D4C129A0EC588759150B6DF4B' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, Test__Direction_B974BC7D4C129A0EC588759150B6DF4B) == 0x0003CC, "Member 'AProp_fishingRod_C::Test__Direction_B974BC7D4C129A0EC588759150B6DF4B' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, Test) == 0x0003D0, "Member 'AProp_fishingRod_C::Test' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, String) == 0x0003D8, "Member 'AProp_fishingRod_C::String' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, Length) == 0x0003E0, "Member 'AProp_fishingRod_C::Length' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, Player) == 0x0003E8, "Member 'AProp_fishingRod_C::Player' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, bait) == 0x0003F0, "Member 'AProp_fishingRod_C::bait' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, Luck) == 0x0003F8, "Member 'AProp_fishingRod_C::Luck' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, Eat) == 0x0003FC, "Member 'AProp_fishingRod_C::Eat' has a wrong offset!");
static_assert(offsetof(AProp_fishingRod_C, Lure) == 0x000400, "Member 'AProp_fishingRod_C::Lure' has a wrong offset!");

}

