#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_photo

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_photo.prop_photo_C
// 0x0020 (0x0388 - 0x0368)
class AProp_photo_C final : public AProp_C
{
public:
	uint8                                         Pad_2E1E[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_photo_C;                       // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Index_Prop_photo_C;                                // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2E1F[0x4];                                     // 0x0374(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OriginalIndex;                                     // 0x0380(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_photo(int32 EntryPoint);
	void ReceiveBeginPlay();
	void LoadImage();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_photo_C">();
	}
	static class AProp_photo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_photo_C>();
	}
};
static_assert(alignof(AProp_photo_C) == 0x000008, "Wrong alignment on AProp_photo_C");
static_assert(sizeof(AProp_photo_C) == 0x000388, "Wrong size on AProp_photo_C");
static_assert(offsetof(AProp_photo_C, UberGraphFrame_Prop_photo_C) == 0x000368, "Member 'AProp_photo_C::UberGraphFrame_Prop_photo_C' has a wrong offset!");
static_assert(offsetof(AProp_photo_C, Index_Prop_photo_C) == 0x000370, "Member 'AProp_photo_C::Index_Prop_photo_C' has a wrong offset!");
static_assert(offsetof(AProp_photo_C, Dynmat) == 0x000378, "Member 'AProp_photo_C::Dynmat' has a wrong offset!");
static_assert(offsetof(AProp_photo_C, OriginalIndex) == 0x000380, "Member 'AProp_photo_C::OriginalIndex' has a wrong offset!");

}

