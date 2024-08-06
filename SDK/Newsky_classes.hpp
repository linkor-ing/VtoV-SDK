#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Newsky

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass newsky.newsky_C
// 0x00B8 (0x02D8 - 0x0220)
class ANewsky_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   M1;                                                // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   M3;                                                // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   M2;                                                // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0240(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Sky;                                               // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        StarRot;                                           // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Dir;                                               // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Alpha;                                             // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26C[0x4];                                      // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0270(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      Sky_bottom;                                        // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      Sky_top;                                           // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      Sky_clouds;                                        // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                      Sun;                                               // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADirectionalLight*                      Moonlight;                                         // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SunHidden;                                         // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A1[0x7];                                      // 0x02A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveLinearColor*                      Sun_col;                                           // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SunIntensityMult;                                  // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Suncolor;                                          // 0x02B4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MoonIntensityMult;                                 // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MoonPhase_mirror;                                  // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MoonPhase_normal;                                  // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Eye;                                               // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_newsky(int32 EntryPoint);
	void SetMoonPhase();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Tp();
	void UserConstructionScript();
	void Upd();
	void Init();
	void SkyVisibility(bool bNewHidden);
	void SetSunIntensity();
	void SetEye(bool Param_Eye);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"newsky_C">();
	}
	static class ANewsky_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ANewsky_C>();
	}
};
static_assert(alignof(ANewsky_C) == 0x000008, "Wrong alignment on ANewsky_C");
static_assert(sizeof(ANewsky_C) == 0x0002D8, "Wrong size on ANewsky_C");
static_assert(offsetof(ANewsky_C, UberGraphFrame) == 0x000220, "Member 'ANewsky_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ANewsky_C, M1) == 0x000228, "Member 'ANewsky_C::M1' has a wrong offset!");
static_assert(offsetof(ANewsky_C, M3) == 0x000230, "Member 'ANewsky_C::M3' has a wrong offset!");
static_assert(offsetof(ANewsky_C, M2) == 0x000238, "Member 'ANewsky_C::M2' has a wrong offset!");
static_assert(offsetof(ANewsky_C, Billboard) == 0x000240, "Member 'ANewsky_C::Billboard' has a wrong offset!");
static_assert(offsetof(ANewsky_C, Sky) == 0x000248, "Member 'ANewsky_C::Sky' has a wrong offset!");
static_assert(offsetof(ANewsky_C, StarRot) == 0x000250, "Member 'ANewsky_C::StarRot' has a wrong offset!");
static_assert(offsetof(ANewsky_C, Dir) == 0x000258, "Member 'ANewsky_C::Dir' has a wrong offset!");
static_assert(offsetof(ANewsky_C, DefaultSceneRoot) == 0x000260, "Member 'ANewsky_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ANewsky_C, Alpha) == 0x000268, "Member 'ANewsky_C::Alpha' has a wrong offset!");
static_assert(offsetof(ANewsky_C, Dynmat) == 0x000270, "Member 'ANewsky_C::Dynmat' has a wrong offset!");
static_assert(offsetof(ANewsky_C, Sky_bottom) == 0x000278, "Member 'ANewsky_C::Sky_bottom' has a wrong offset!");
static_assert(offsetof(ANewsky_C, Sky_top) == 0x000280, "Member 'ANewsky_C::Sky_top' has a wrong offset!");
static_assert(offsetof(ANewsky_C, Sky_clouds) == 0x000288, "Member 'ANewsky_C::Sky_clouds' has a wrong offset!");
static_assert(offsetof(ANewsky_C, Sun) == 0x000290, "Member 'ANewsky_C::Sun' has a wrong offset!");
static_assert(offsetof(ANewsky_C, Moonlight) == 0x000298, "Member 'ANewsky_C::Moonlight' has a wrong offset!");
static_assert(offsetof(ANewsky_C, SunHidden) == 0x0002A0, "Member 'ANewsky_C::SunHidden' has a wrong offset!");
static_assert(offsetof(ANewsky_C, Sun_col) == 0x0002A8, "Member 'ANewsky_C::Sun_col' has a wrong offset!");
static_assert(offsetof(ANewsky_C, SunIntensityMult) == 0x0002B0, "Member 'ANewsky_C::SunIntensityMult' has a wrong offset!");
static_assert(offsetof(ANewsky_C, Suncolor) == 0x0002B4, "Member 'ANewsky_C::Suncolor' has a wrong offset!");
static_assert(offsetof(ANewsky_C, MoonIntensityMult) == 0x0002C4, "Member 'ANewsky_C::MoonIntensityMult' has a wrong offset!");
static_assert(offsetof(ANewsky_C, MoonPhase_mirror) == 0x0002C8, "Member 'ANewsky_C::MoonPhase_mirror' has a wrong offset!");
static_assert(offsetof(ANewsky_C, MoonPhase_normal) == 0x0002CC, "Member 'ANewsky_C::MoonPhase_normal' has a wrong offset!");
static_assert(offsetof(ANewsky_C, Eye) == 0x0002D0, "Member 'ANewsky_C::Eye' has a wrong offset!");

}

