#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Effect_lsd

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass effect_lsd.effect_lsd_C
// 0x0070 (0x0290 - 0x0220)
class AEffect_lsd_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*               SceneCaptureComponent2D;                           // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         A;                                                 // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2589[0x4];                                     // 0x0244(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTextureRenderTarget2D*                 Rt;                                                // 0x0248(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M;                                                 // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_258A[0x4];                                     // 0x0254(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dynmat_rt;                                         // 0x0258(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Rt_d;                                              // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvas*                                C;                                                 // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDrawToRenderTargetContext             Co;                                                // 0x0270(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UMaterialInstanceDynamic*               D2;                                                // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Hues;                                              // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_effect_lsd(int32 EntryPoint);
	void SignalDeleted();
	void SignalSaved();
	void GamemodeBeginPlay();
	void SettingsApplied(const struct FStruct_settings& Settings);
	void StuffUpgraded(class AMainGamemode_C* GameMode);
	void Unfoc();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ApplyColor(const struct FLinearColor& Color);
	void PropRenderer_finishProps();
	void GamemodeMakeKeys();
	void AnyKey(const struct FKey& Key, bool Pressed);
	void GamemodePreLoad();
	void Unfocused();
	void SetRT();
	void DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"effect_lsd_C">();
	}
	static class AEffect_lsd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AEffect_lsd_C>();
	}
};
static_assert(alignof(AEffect_lsd_C) == 0x000008, "Wrong alignment on AEffect_lsd_C");
static_assert(sizeof(AEffect_lsd_C) == 0x000290, "Wrong size on AEffect_lsd_C");
static_assert(offsetof(AEffect_lsd_C, UberGraphFrame) == 0x000220, "Member 'AEffect_lsd_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AEffect_lsd_C, SceneCaptureComponent2D) == 0x000228, "Member 'AEffect_lsd_C::SceneCaptureComponent2D' has a wrong offset!");
static_assert(offsetof(AEffect_lsd_C, PostProcess) == 0x000230, "Member 'AEffect_lsd_C::PostProcess' has a wrong offset!");
static_assert(offsetof(AEffect_lsd_C, Dynmat) == 0x000238, "Member 'AEffect_lsd_C::Dynmat' has a wrong offset!");
static_assert(offsetof(AEffect_lsd_C, A) == 0x000240, "Member 'AEffect_lsd_C::A' has a wrong offset!");
static_assert(offsetof(AEffect_lsd_C, Rt) == 0x000248, "Member 'AEffect_lsd_C::Rt' has a wrong offset!");
static_assert(offsetof(AEffect_lsd_C, M) == 0x000250, "Member 'AEffect_lsd_C::M' has a wrong offset!");
static_assert(offsetof(AEffect_lsd_C, Dynmat_rt) == 0x000258, "Member 'AEffect_lsd_C::Dynmat_rt' has a wrong offset!");
static_assert(offsetof(AEffect_lsd_C, Rt_d) == 0x000260, "Member 'AEffect_lsd_C::Rt_d' has a wrong offset!");
static_assert(offsetof(AEffect_lsd_C, C) == 0x000268, "Member 'AEffect_lsd_C::C' has a wrong offset!");
static_assert(offsetof(AEffect_lsd_C, Co) == 0x000270, "Member 'AEffect_lsd_C::Co' has a wrong offset!");
static_assert(offsetof(AEffect_lsd_C, D2) == 0x000280, "Member 'AEffect_lsd_C::D2' has a wrong offset!");
static_assert(offsetof(AEffect_lsd_C, Hues) == 0x000288, "Member 'AEffect_lsd_C::Hues' has a wrong offset!");

}

