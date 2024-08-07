#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_mdetect

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_mdetect.prop_mdetect_C
// 0x0050 (0x03C8 - 0x0378)
class AProp_mdetect_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_mdetect_C;                     // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               Light1;                                            // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               Light;                                             // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Dir;                                               // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        DetectBeep;                                        // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x03A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A4[0x4];                                      // 0x03A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      Objs;                                              // 0x03A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Scan;                                              // 0x03B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Maxt;                                              // 0x03BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3C1[0x3];                                      // 0x03C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Powr;                                              // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_mdetect(int32 EntryPoint);
	void Closest(TArray<class AActor*>& Array, class AActor** Output, bool* Return);
	void Upd();
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, Enum_interactionActions Action);
	void ReceiveBeginPlay();
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_mdetect_C">();
	}
	static class AProp_mdetect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_mdetect_C>();
	}
};
static_assert(alignof(AProp_mdetect_C) == 0x000008, "Wrong alignment on AProp_mdetect_C");
static_assert(sizeof(AProp_mdetect_C) == 0x0003C8, "Wrong size on AProp_mdetect_C");
static_assert(offsetof(AProp_mdetect_C, UberGraphFrame_Prop_mdetect_C) == 0x000378, "Member 'AProp_mdetect_C::UberGraphFrame_Prop_mdetect_C' has a wrong offset!");
static_assert(offsetof(AProp_mdetect_C, Light1) == 0x000380, "Member 'AProp_mdetect_C::Light1' has a wrong offset!");
static_assert(offsetof(AProp_mdetect_C, Light) == 0x000388, "Member 'AProp_mdetect_C::Light' has a wrong offset!");
static_assert(offsetof(AProp_mdetect_C, Dir) == 0x000390, "Member 'AProp_mdetect_C::Dir' has a wrong offset!");
static_assert(offsetof(AProp_mdetect_C, DetectBeep) == 0x000398, "Member 'AProp_mdetect_C::DetectBeep' has a wrong offset!");
static_assert(offsetof(AProp_mdetect_C, Time) == 0x0003A0, "Member 'AProp_mdetect_C::Time' has a wrong offset!");
static_assert(offsetof(AProp_mdetect_C, Objs) == 0x0003A8, "Member 'AProp_mdetect_C::Objs' has a wrong offset!");
static_assert(offsetof(AProp_mdetect_C, Scan) == 0x0003B8, "Member 'AProp_mdetect_C::Scan' has a wrong offset!");
static_assert(offsetof(AProp_mdetect_C, Maxt) == 0x0003BC, "Member 'AProp_mdetect_C::Maxt' has a wrong offset!");
static_assert(offsetof(AProp_mdetect_C, Active) == 0x0003C0, "Member 'AProp_mdetect_C::Active' has a wrong offset!");
static_assert(offsetof(AProp_mdetect_C, Powr) == 0x0003C4, "Member 'AProp_mdetect_C::Powr' has a wrong offset!");

}

