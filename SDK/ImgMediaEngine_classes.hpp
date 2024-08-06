#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ImgMediaEngine

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class ImgMediaEngine.ImgMediaPlaybackComponent
// 0x0028 (0x00D8 - 0x00B0)
class UImgMediaPlaybackComponent final : public UActorComponent
{
public:
	float                                         Width;                                             // 0x00B0(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LODBias;                                           // 0x00B4(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_B8[0x20];                                      // 0x00B8(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImgMediaPlaybackComponent">();
	}
	static class UImgMediaPlaybackComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImgMediaPlaybackComponent>();
	}
};
static_assert(alignof(UImgMediaPlaybackComponent) == 0x000008, "Wrong alignment on UImgMediaPlaybackComponent");
static_assert(sizeof(UImgMediaPlaybackComponent) == 0x0000D8, "Wrong size on UImgMediaPlaybackComponent");
static_assert(offsetof(UImgMediaPlaybackComponent, Width) == 0x0000B0, "Member 'UImgMediaPlaybackComponent::Width' has a wrong offset!");
static_assert(offsetof(UImgMediaPlaybackComponent, LODBias) == 0x0000B4, "Member 'UImgMediaPlaybackComponent::LODBias' has a wrong offset!");

}

