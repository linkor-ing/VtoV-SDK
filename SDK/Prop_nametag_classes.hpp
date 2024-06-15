#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_nametag

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_nametag.prop_nametag_C
// 0x0018 (0x0380 - 0x0368)
class AProp_nametag_C final : public AProp_C
{
public:
	uint8                                         Pad_3818[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_nametag_C;                     // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FString                                 Tag;                                               // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_nametag(int32 EntryPoint);
	void PlayerHandUse_RMB(class AMainPlayer_C* Player);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_nametag_C">();
	}
	static class AProp_nametag_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_nametag_C>();
	}
};
static_assert(alignof(AProp_nametag_C) == 0x000008, "Wrong alignment on AProp_nametag_C");
static_assert(sizeof(AProp_nametag_C) == 0x000380, "Wrong size on AProp_nametag_C");
static_assert(offsetof(AProp_nametag_C, UberGraphFrame_Prop_nametag_C) == 0x000368, "Member 'AProp_nametag_C::UberGraphFrame_Prop_nametag_C' has a wrong offset!");
static_assert(offsetof(AProp_nametag_C, Tag) == 0x000370, "Member 'AProp_nametag_C::Tag' has a wrong offset!");

}
