#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_argw

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_argw.prop_argw_C
// 0x0020 (0x0388 - 0x0368)
class AProp_argw_C final : public AProp_C
{
public:
	uint8                                         Pad_38C3[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_argw_C;                        // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat_0;                                          // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat_1;                                          // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_prop_argw(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void Setmats();
	void PropRenderer_finishProps();
	void GamemodeBeginPlay();
	void UserConstructionScript();
	void Init();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_argw_C">();
	}
	static class AProp_argw_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_argw_C>();
	}
};
static_assert(alignof(AProp_argw_C) == 0x000008, "Wrong alignment on AProp_argw_C");
static_assert(sizeof(AProp_argw_C) == 0x000388, "Wrong size on AProp_argw_C");
static_assert(offsetof(AProp_argw_C, UberGraphFrame_Prop_argw_C) == 0x000368, "Member 'AProp_argw_C::UberGraphFrame_Prop_argw_C' has a wrong offset!");
static_assert(offsetof(AProp_argw_C, PointLight) == 0x000370, "Member 'AProp_argw_C::PointLight' has a wrong offset!");
static_assert(offsetof(AProp_argw_C, Dynmat_0) == 0x000378, "Member 'AProp_argw_C::Dynmat_0' has a wrong offset!");
static_assert(offsetof(AProp_argw_C, Dynmat_1) == 0x000380, "Member 'AProp_argw_C::Dynmat_1' has a wrong offset!");

}
