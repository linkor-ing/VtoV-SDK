#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_poster

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_poster.prop_poster_C
// 0x0018 (0x0380 - 0x0368)
class AProp_poster_C : public AProp_C
{
public:
	uint8                                         Pad_39E9[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_poster_C;                      // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Type;                                              // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         Index_Prop_poster_C;                               // 0x0374(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_poster(int32 EntryPoint);
	void ReceiveBeginPlay();
	void Put();
	void SetTex();
	void SettingsApplied(const struct FStruct_settings& Settings);
	void GamemodeBeginPlay();
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void UserConstructionScript();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_poster_C">();
	}
	static class AProp_poster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_poster_C>();
	}
};
static_assert(alignof(AProp_poster_C) == 0x000008, "Wrong alignment on AProp_poster_C");
static_assert(sizeof(AProp_poster_C) == 0x000380, "Wrong size on AProp_poster_C");
static_assert(offsetof(AProp_poster_C, UberGraphFrame_Prop_poster_C) == 0x000368, "Member 'AProp_poster_C::UberGraphFrame_Prop_poster_C' has a wrong offset!");
static_assert(offsetof(AProp_poster_C, Type) == 0x000370, "Member 'AProp_poster_C::Type' has a wrong offset!");
static_assert(offsetof(AProp_poster_C, Index_Prop_poster_C) == 0x000374, "Member 'AProp_poster_C::Index_Prop_poster_C' has a wrong offset!");
static_assert(offsetof(AProp_poster_C, Dynmat) == 0x000378, "Member 'AProp_poster_C::Dynmat' has a wrong offset!");

}

