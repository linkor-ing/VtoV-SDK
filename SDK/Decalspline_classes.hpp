#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Decalspline

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass decalspline.decalspline_C
// 0x0028 (0x0248 - 0x0220)
class ADecalspline_C final : public AActor
{
public:
	class USplineComponent*                       Spline;                                            // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     RoadMaterial;                                      // 0x0230(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Road_Material_Instance;                            // 0x0238(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Width;                                             // 0x0240(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"decalspline_C">();
	}
	static class ADecalspline_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADecalspline_C>();
	}
};
static_assert(alignof(ADecalspline_C) == 0x000008, "Wrong alignment on ADecalspline_C");
static_assert(sizeof(ADecalspline_C) == 0x000248, "Wrong size on ADecalspline_C");
static_assert(offsetof(ADecalspline_C, Spline) == 0x000220, "Member 'ADecalspline_C::Spline' has a wrong offset!");
static_assert(offsetof(ADecalspline_C, Scene) == 0x000228, "Member 'ADecalspline_C::Scene' has a wrong offset!");
static_assert(offsetof(ADecalspline_C, RoadMaterial) == 0x000230, "Member 'ADecalspline_C::RoadMaterial' has a wrong offset!");
static_assert(offsetof(ADecalspline_C, Road_Material_Instance) == 0x000238, "Member 'ADecalspline_C::Road_Material_Instance' has a wrong offset!");
static_assert(offsetof(ADecalspline_C, Width) == 0x000240, "Member 'ADecalspline_C::Width' has a wrong offset!");

}
