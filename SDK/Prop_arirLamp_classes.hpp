#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_arirLamp

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_arirLamp.prop_arirLamp_C
// 0x0050 (0x03B8 - 0x0368)
class AProp_arirLamp_C final : public AProp_C
{
public:
	uint8                                         Pad_1316[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_arirLamp_C;                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USlapperSummoner_C*                     SlapperSummoner;                                   // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            Two;                                               // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPhysicsConstraintComponent*            One;                                               // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   T;                                                 // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   B;                                                 // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         A_a_F21A7A9443089D5F8AEC7894EABF45F9;              // 0x03A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            A__Direction_F21A7A9443089D5F8AEC7894EABF45F9;     // 0x03A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1317[0x3];                                     // 0x03A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     A;                                                 // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Opened;                                            // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_arirLamp(int32 EntryPoint);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);
	void Inst();
	void ReceiveBeginPlay();
	void Open();
	void A__UpdateFunc();
	void A__FinishedFunc();
	void GamemodeBeginPlay();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_arirLamp_C">();
	}
	static class AProp_arirLamp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_arirLamp_C>();
	}
};
static_assert(alignof(AProp_arirLamp_C) == 0x000008, "Wrong alignment on AProp_arirLamp_C");
static_assert(sizeof(AProp_arirLamp_C) == 0x0003B8, "Wrong size on AProp_arirLamp_C");
static_assert(offsetof(AProp_arirLamp_C, UberGraphFrame_Prop_arirLamp_C) == 0x000368, "Member 'AProp_arirLamp_C::UberGraphFrame_Prop_arirLamp_C' has a wrong offset!");
static_assert(offsetof(AProp_arirLamp_C, SlapperSummoner) == 0x000370, "Member 'AProp_arirLamp_C::SlapperSummoner' has a wrong offset!");
static_assert(offsetof(AProp_arirLamp_C, Two) == 0x000378, "Member 'AProp_arirLamp_C::Two' has a wrong offset!");
static_assert(offsetof(AProp_arirLamp_C, One) == 0x000380, "Member 'AProp_arirLamp_C::One' has a wrong offset!");
static_assert(offsetof(AProp_arirLamp_C, PointLight) == 0x000388, "Member 'AProp_arirLamp_C::PointLight' has a wrong offset!");
static_assert(offsetof(AProp_arirLamp_C, T) == 0x000390, "Member 'AProp_arirLamp_C::T' has a wrong offset!");
static_assert(offsetof(AProp_arirLamp_C, B) == 0x000398, "Member 'AProp_arirLamp_C::B' has a wrong offset!");
static_assert(offsetof(AProp_arirLamp_C, A_a_F21A7A9443089D5F8AEC7894EABF45F9) == 0x0003A0, "Member 'AProp_arirLamp_C::A_a_F21A7A9443089D5F8AEC7894EABF45F9' has a wrong offset!");
static_assert(offsetof(AProp_arirLamp_C, A__Direction_F21A7A9443089D5F8AEC7894EABF45F9) == 0x0003A4, "Member 'AProp_arirLamp_C::A__Direction_F21A7A9443089D5F8AEC7894EABF45F9' has a wrong offset!");
static_assert(offsetof(AProp_arirLamp_C, A) == 0x0003A8, "Member 'AProp_arirLamp_C::A' has a wrong offset!");
static_assert(offsetof(AProp_arirLamp_C, Opened) == 0x0003B0, "Member 'AProp_arirLamp_C::Opened' has a wrong offset!");

}
