#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_toiletPaperRoll

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_toiletPaperRoll.prop_toiletPaperRoll_C
// 0x0010 (0x0378 - 0x0368)
class AProp_toiletPaperRoll_C final : public AProp_C
{
public:
	uint8                                         Pad_3A43[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_toiletPaperRoll_C;             // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Sheets;                                            // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_toiletPaperRoll(int32 EntryPoint);
	void Player_use(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_toiletPaperRoll_C">();
	}
	static class AProp_toiletPaperRoll_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_toiletPaperRoll_C>();
	}
};
static_assert(alignof(AProp_toiletPaperRoll_C) == 0x000008, "Wrong alignment on AProp_toiletPaperRoll_C");
static_assert(sizeof(AProp_toiletPaperRoll_C) == 0x000378, "Wrong size on AProp_toiletPaperRoll_C");
static_assert(offsetof(AProp_toiletPaperRoll_C, UberGraphFrame_Prop_toiletPaperRoll_C) == 0x000368, "Member 'AProp_toiletPaperRoll_C::UberGraphFrame_Prop_toiletPaperRoll_C' has a wrong offset!");
static_assert(offsetof(AProp_toiletPaperRoll_C, Sheets) == 0x000370, "Member 'AProp_toiletPaperRoll_C::Sheets' has a wrong offset!");

}
