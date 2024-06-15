#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Notify_kerfurStep

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass notify_kerfurStep.notify_kerfurStep_C
// 0x0000 (0x0038 - 0x0038)
class UNotify_kerfurStep_C final : public UAnimNotify
{
public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"notify_kerfurStep_C">();
	}
	static class UNotify_kerfurStep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNotify_kerfurStep_C>();
	}
};
static_assert(alignof(UNotify_kerfurStep_C) == 0x000008, "Wrong alignment on UNotify_kerfurStep_C");
static_assert(sizeof(UNotify_kerfurStep_C) == 0x000038, "Wrong size on UNotify_kerfurStep_C");

}

