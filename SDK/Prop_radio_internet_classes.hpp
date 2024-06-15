#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_radio_internet

#include "Basic.hpp"

#include "Struct_tv_structs.hpp"
#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_playlist_structs.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_radio_internet.prop_radio_internet_C
// 0x0060 (0x03C8 - 0x0368)
class AProp_radio_internet_C final : public AProp_C
{
public:
	uint8                                         Pad_3A87[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_radio_internet_C;              // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMediaSoundComponent*                   MediaSound;                                        // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMediaPlayer*                           MediaPlayer;                                       // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_tv                             Data;                                              // 0x0380(0x0028)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         PlayIndex;                                         // 0x03A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A88[0x4];                                     // 0x03AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 Indexes;                                           // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	Enum_playlist                                 PlayMode;                                          // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PausePlayer;                                       // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_prop_radio_internet(int32 EntryPoint);
	void Fin();
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);
	void OpenLink(const struct FStruct_tv& Param_Data, bool Param_PausePlayer);
	void Opened(const class FString& OpenedUrl);
	void ReceiveBeginPlay();
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_radio_internet_C">();
	}
	static class AProp_radio_internet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_radio_internet_C>();
	}
};
static_assert(alignof(AProp_radio_internet_C) == 0x000008, "Wrong alignment on AProp_radio_internet_C");
static_assert(sizeof(AProp_radio_internet_C) == 0x0003C8, "Wrong size on AProp_radio_internet_C");
static_assert(offsetof(AProp_radio_internet_C, UberGraphFrame_Prop_radio_internet_C) == 0x000368, "Member 'AProp_radio_internet_C::UberGraphFrame_Prop_radio_internet_C' has a wrong offset!");
static_assert(offsetof(AProp_radio_internet_C, MediaSound) == 0x000370, "Member 'AProp_radio_internet_C::MediaSound' has a wrong offset!");
static_assert(offsetof(AProp_radio_internet_C, MediaPlayer) == 0x000378, "Member 'AProp_radio_internet_C::MediaPlayer' has a wrong offset!");
static_assert(offsetof(AProp_radio_internet_C, Data) == 0x000380, "Member 'AProp_radio_internet_C::Data' has a wrong offset!");
static_assert(offsetof(AProp_radio_internet_C, PlayIndex) == 0x0003A8, "Member 'AProp_radio_internet_C::PlayIndex' has a wrong offset!");
static_assert(offsetof(AProp_radio_internet_C, Indexes) == 0x0003B0, "Member 'AProp_radio_internet_C::Indexes' has a wrong offset!");
static_assert(offsetof(AProp_radio_internet_C, PlayMode) == 0x0003C0, "Member 'AProp_radio_internet_C::PlayMode' has a wrong offset!");
static_assert(offsetof(AProp_radio_internet_C, PausePlayer) == 0x0003C1, "Member 'AProp_radio_internet_C::PausePlayer' has a wrong offset!");

}
