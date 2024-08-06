#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WaterFloatMaster

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass waterFloatMaster.waterFloatMaster_C
// 0x0110 (0x0330 - 0x0220)
class AWaterFloatMaster_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         ActorsInWater;                                     // 0x0230(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ARiverFlow_C*>                   RiverFlows;                                        // 0x0240(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<float>                                 ActorsDepth;                                       // 0x0250(0x0010)(Edit, BlueprintVisible)
	TArray<class AActor*>                         Repeats;                                           // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                         Rivers;                                            // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274[0x4];                                      // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  OriginInside;                                      // 0x0278(0x0010)(Edit, BlueprintVisible)
	TArray<bool>                                  OriginComp;                                        // 0x0288(0x0010)(Edit, BlueprintVisible)
	TArray<class AWaterVolume_C*>                 AllVolumes;                                        // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<bool>                                  ObjOriginsPrev;                                    // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<bool>                                  ObjOrigins;                                        // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         InsideVolume;                                      // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Iters;                                             // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                     boxTransforms;                                     // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 ActorsBoyoancy;                                    // 0x02E0(0x0010)(Edit, BlueprintVisible)
	TArray<class USplineComponent*>               RiverSplines;                                      // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<float>                                 RiverRadiusIn;                                     // 0x0300(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 RiverRadiusOut;                                    // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                 RiversForce;                                       // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_waterFloatMaster(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void GamemodeBeginPlay();
	void TexturePickerApply(class UUmg_texturePicker_C* Picker, class UTexture2D* Texture, int32 Param_Index);
	void ApplyColor(const struct FLinearColor& Color);
	void PropRenderer_finishProps();
	void GamemodeMakeKeys();
	void AnyKey(const struct FKey& Key, bool Pressed);
	void GamemodePreLoad();
	void Unfocused();
	void SettingsApplied(const struct FStruct_settings& Settings);
	void Unfoc();
	void StuffUpgraded(class AMainGamemode_C* GameMode);
	void SignalSaved();
	void SignalDeleted();
	void bo(class AActor* Target, float Depth, int32 Ind);
	void AddObj(const float& Depth, const class AActor*& Obj, bool* Param_Repeats);
	void RemoveObj(const class AActor*& Find, bool* Param_Repeats);
	void DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"waterFloatMaster_C">();
	}
	static class AWaterFloatMaster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWaterFloatMaster_C>();
	}
};
static_assert(alignof(AWaterFloatMaster_C) == 0x000008, "Wrong alignment on AWaterFloatMaster_C");
static_assert(sizeof(AWaterFloatMaster_C) == 0x000330, "Wrong size on AWaterFloatMaster_C");
static_assert(offsetof(AWaterFloatMaster_C, UberGraphFrame) == 0x000220, "Member 'AWaterFloatMaster_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, DefaultSceneRoot) == 0x000228, "Member 'AWaterFloatMaster_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, ActorsInWater) == 0x000230, "Member 'AWaterFloatMaster_C::ActorsInWater' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, RiverFlows) == 0x000240, "Member 'AWaterFloatMaster_C::RiverFlows' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, ActorsDepth) == 0x000250, "Member 'AWaterFloatMaster_C::ActorsDepth' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, Repeats) == 0x000260, "Member 'AWaterFloatMaster_C::Repeats' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, Rivers) == 0x000270, "Member 'AWaterFloatMaster_C::Rivers' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, OriginInside) == 0x000278, "Member 'AWaterFloatMaster_C::OriginInside' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, OriginComp) == 0x000288, "Member 'AWaterFloatMaster_C::OriginComp' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, AllVolumes) == 0x000298, "Member 'AWaterFloatMaster_C::AllVolumes' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, ObjOriginsPrev) == 0x0002A8, "Member 'AWaterFloatMaster_C::ObjOriginsPrev' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, ObjOrigins) == 0x0002B8, "Member 'AWaterFloatMaster_C::ObjOrigins' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, InsideVolume) == 0x0002C8, "Member 'AWaterFloatMaster_C::InsideVolume' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, Iters) == 0x0002CC, "Member 'AWaterFloatMaster_C::Iters' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, boxTransforms) == 0x0002D0, "Member 'AWaterFloatMaster_C::boxTransforms' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, ActorsBoyoancy) == 0x0002E0, "Member 'AWaterFloatMaster_C::ActorsBoyoancy' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, RiverSplines) == 0x0002F0, "Member 'AWaterFloatMaster_C::RiverSplines' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, RiverRadiusIn) == 0x000300, "Member 'AWaterFloatMaster_C::RiverRadiusIn' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, RiverRadiusOut) == 0x000310, "Member 'AWaterFloatMaster_C::RiverRadiusOut' has a wrong offset!");
static_assert(offsetof(AWaterFloatMaster_C, RiversForce) == 0x000320, "Member 'AWaterFloatMaster_C::RiversForce' has a wrong offset!");

}
