#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CameraFlash

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass cameraFlash.cameraFlash_C
// 0x0010 (0x0230 - 0x0220)
class ACameraFlash_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                   PointLight;                                        // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_cameraFlash(int32 EntryPoint);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"cameraFlash_C">();
	}
	static class ACameraFlash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ACameraFlash_C>();
	}
};
static_assert(alignof(ACameraFlash_C) == 0x000008, "Wrong alignment on ACameraFlash_C");
static_assert(sizeof(ACameraFlash_C) == 0x000230, "Wrong size on ACameraFlash_C");
static_assert(offsetof(ACameraFlash_C, UberGraphFrame) == 0x000220, "Member 'ACameraFlash_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ACameraFlash_C, PointLight) == 0x000228, "Member 'ACameraFlash_C::PointLight' has a wrong offset!");

}

