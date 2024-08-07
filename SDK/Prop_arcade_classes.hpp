#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_arcade

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_arcade.prop_arcade_C
// 0x0078 (0x03F0 - 0x0378)
class AProp_arcade_C final : public AProp_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_arcade_C;                      // 0x0378(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URectLightComponent*                    RectLight;                                         // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                       Widget;                                            // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Stand;                                             // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Axis;                                              // 0x03A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Cam;                                               // 0x03B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Screen;                                            // 0x03B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Rt;                                                // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EObjectTypeQuery>                      Obj;                                               // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AMg_invaders_C*                         Inv;                                               // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUi_arcade_invaders_C*                  ScrWidge;                                          // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_arcade(int32 EntryPoint);
	void beep(class USoundBase* Sound, float Volume, float Pitch);
	void MakeDelegate();
	void Ini();
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, Enum_interactionActions Action);
	void ReceiveBeginPlay();
	void GamemodePreLoad();
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace, uint8* Number);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay, uint8* Number);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_arcade_C">();
	}
	static class AProp_arcade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_arcade_C>();
	}
};
static_assert(alignof(AProp_arcade_C) == 0x000008, "Wrong alignment on AProp_arcade_C");
static_assert(sizeof(AProp_arcade_C) == 0x0003F0, "Wrong size on AProp_arcade_C");
static_assert(offsetof(AProp_arcade_C, UberGraphFrame_Prop_arcade_C) == 0x000378, "Member 'AProp_arcade_C::UberGraphFrame_Prop_arcade_C' has a wrong offset!");
static_assert(offsetof(AProp_arcade_C, Box) == 0x000380, "Member 'AProp_arcade_C::Box' has a wrong offset!");
static_assert(offsetof(AProp_arcade_C, Audio) == 0x000388, "Member 'AProp_arcade_C::Audio' has a wrong offset!");
static_assert(offsetof(AProp_arcade_C, RectLight) == 0x000390, "Member 'AProp_arcade_C::RectLight' has a wrong offset!");
static_assert(offsetof(AProp_arcade_C, Widget) == 0x000398, "Member 'AProp_arcade_C::Widget' has a wrong offset!");
static_assert(offsetof(AProp_arcade_C, Stand) == 0x0003A0, "Member 'AProp_arcade_C::Stand' has a wrong offset!");
static_assert(offsetof(AProp_arcade_C, Axis) == 0x0003A8, "Member 'AProp_arcade_C::Axis' has a wrong offset!");
static_assert(offsetof(AProp_arcade_C, Cam) == 0x0003B0, "Member 'AProp_arcade_C::Cam' has a wrong offset!");
static_assert(offsetof(AProp_arcade_C, Screen) == 0x0003B8, "Member 'AProp_arcade_C::Screen' has a wrong offset!");
static_assert(offsetof(AProp_arcade_C, Dynmat) == 0x0003C0, "Member 'AProp_arcade_C::Dynmat' has a wrong offset!");
static_assert(offsetof(AProp_arcade_C, Rt) == 0x0003C8, "Member 'AProp_arcade_C::Rt' has a wrong offset!");
static_assert(offsetof(AProp_arcade_C, Obj) == 0x0003D0, "Member 'AProp_arcade_C::Obj' has a wrong offset!");
static_assert(offsetof(AProp_arcade_C, Inv) == 0x0003E0, "Member 'AProp_arcade_C::Inv' has a wrong offset!");
static_assert(offsetof(AProp_arcade_C, ScrWidge) == 0x0003E8, "Member 'AProp_arcade_C::ScrWidge' has a wrong offset!");

}

