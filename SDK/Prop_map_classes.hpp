#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_map

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_map.prop_map_C
// 0x0020 (0x0388 - 0x0368)
class AProp_map_C final : public AProp_C
{
public:
	uint8                                         Pad_3CD2[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_map_C;                         // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class URectLightComponent*                    RectLight;                                         // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget;                                            // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUmg_minimap_C*                         Minimap;                                           // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_map(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnCompleted_26407029439BD8B1D2873EAE3E829D0A(class FName NotifyName);
	void OnBlendOut_26407029439BD8B1D2873EAE3E829D0A(class FName NotifyName);
	void OnInterrupted_26407029439BD8B1D2873EAE3E829D0A(class FName NotifyName);
	void OnNotifyBegin_26407029439BD8B1D2873EAE3E829D0A(class FName NotifyName);
	void OnNotifyEnd_26407029439BD8B1D2873EAE3E829D0A(class FName NotifyName);
	void OnCompleted_1BF788334BE9A102B33746BB6D4880F8(class FName NotifyName);
	void OnBlendOut_1BF788334BE9A102B33746BB6D4880F8(class FName NotifyName);
	void OnInterrupted_1BF788334BE9A102B33746BB6D4880F8(class FName NotifyName);
	void OnNotifyBegin_1BF788334BE9A102B33746BB6D4880F8(class FName NotifyName);
	void OnNotifyEnd_1BF788334BE9A102B33746BB6D4880F8(class FName NotifyName);
	void PlayerHandRelease_RMB(class AMainPlayer_C* Player);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_map_C">();
	}
	static class AProp_map_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_map_C>();
	}
};
static_assert(alignof(AProp_map_C) == 0x000008, "Wrong alignment on AProp_map_C");
static_assert(sizeof(AProp_map_C) == 0x000388, "Wrong size on AProp_map_C");
static_assert(offsetof(AProp_map_C, UberGraphFrame_Prop_map_C) == 0x000368, "Member 'AProp_map_C::UberGraphFrame_Prop_map_C' has a wrong offset!");
static_assert(offsetof(AProp_map_C, RectLight) == 0x000370, "Member 'AProp_map_C::RectLight' has a wrong offset!");
static_assert(offsetof(AProp_map_C, Widget) == 0x000378, "Member 'AProp_map_C::Widget' has a wrong offset!");
static_assert(offsetof(AProp_map_C, Minimap) == 0x000380, "Member 'AProp_map_C::Minimap' has a wrong offset!");

}

