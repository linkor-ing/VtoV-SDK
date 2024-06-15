#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LightPropagationVolumeRuntime

#include "Basic.hpp"

#include "Renderer_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class LightPropagationVolumeRuntime.LightPropagationVolumeBlendable
// 0x0050 (0x0078 - 0x0028)
class ULightPropagationVolumeBlendable final : public UObject
{
public:
	uint8                                         Pad_16E8[0x8];                                     // 0x0028(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLightPropagationVolumeSettings        Settings;                                          // 0x0030(0x0040)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	float                                         BlendWeight;                                       // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_16E9[0x4];                                     // 0x0074(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LightPropagationVolumeBlendable">();
	}
	static class ULightPropagationVolumeBlendable* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULightPropagationVolumeBlendable>();
	}
};
static_assert(alignof(ULightPropagationVolumeBlendable) == 0x000008, "Wrong alignment on ULightPropagationVolumeBlendable");
static_assert(sizeof(ULightPropagationVolumeBlendable) == 0x000078, "Wrong size on ULightPropagationVolumeBlendable");
static_assert(offsetof(ULightPropagationVolumeBlendable, Settings) == 0x000030, "Member 'ULightPropagationVolumeBlendable::Settings' has a wrong offset!");
static_assert(offsetof(ULightPropagationVolumeBlendable, BlendWeight) == 0x000070, "Member 'ULightPropagationVolumeBlendable::BlendWeight' has a wrong offset!");

}

