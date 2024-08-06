#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoundUtilities

#include "Basic.hpp"

#include "SoundUtilities_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class SoundUtilities.SoundSimple
// 0x0018 (0x0188 - 0x0170)
class USoundSimple final : public USoundBase
{
public:
	TArray<struct FSoundVariation>                Variations;                                        // 0x0170(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundWave*                             SoundWave;                                         // 0x0180(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundSimple">();
	}
	static class USoundSimple* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundSimple>();
	}
};
static_assert(alignof(USoundSimple) == 0x000008, "Wrong alignment on USoundSimple");
static_assert(sizeof(USoundSimple) == 0x000188, "Wrong size on USoundSimple");
static_assert(offsetof(USoundSimple, Variations) == 0x000170, "Member 'USoundSimple::Variations' has a wrong offset!");
static_assert(offsetof(USoundSimple, SoundWave) == 0x000180, "Member 'USoundSimple::SoundWave' has a wrong offset!");

// Class SoundUtilities.SoundUtilitiesBPFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class USoundUtilitiesBPFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static float ConvertDecibelsToLinear(const float InDecibels);
	static float ConvertLinearToDecibels(const float InLinear, const float InFloor);
	static float GetBandwidthFromQ(const float InQ);
	static float GetBeatTempo(float BeatsPerMinute, int32 BeatMultiplier, int32 DivisionsOfWholeNote);
	static float GetFrequencyFromMIDIPitch(const int32 MidiNote);
	static float GetFrequencyMultiplierFromSemitones(const float InPitchSemitones);
	static float GetGainFromMidiVelocity(int32 InVelocity);
	static float GetLinearFrequencyClamped(const float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange);
	static float GetLogFrequencyClamped(const float InValue, const struct FVector2D& InDomain, const struct FVector2D& InRange);
	static int32 GetMIDIPitchFromFrequency(const float Frequency);
	static float GetPitchScaleFromMIDIPitch(const int32 BaseMidiNote, const int32 TargetMidiNote);
	static float GetQFromBandwidth(const float InBandwidth);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"SoundUtilitiesBPFunctionLibrary">();
	}
	static class USoundUtilitiesBPFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoundUtilitiesBPFunctionLibrary>();
	}
};
static_assert(alignof(USoundUtilitiesBPFunctionLibrary) == 0x000008, "Wrong alignment on USoundUtilitiesBPFunctionLibrary");
static_assert(sizeof(USoundUtilitiesBPFunctionLibrary) == 0x000028, "Wrong size on USoundUtilitiesBPFunctionLibrary");

}
