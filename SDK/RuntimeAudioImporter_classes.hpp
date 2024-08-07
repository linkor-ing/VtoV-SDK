#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RuntimeAudioImporter

#include "Basic.hpp"

#include "RuntimeAudioImporter_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class RuntimeAudioImporter.ImportedSoundWave
// 0x0050 (0x0410 - 0x03C0)
class alignas(0x10) UImportedSoundWave final : public USoundWaveProcedural
{
public:
	int32                                         SamplingRate;                                      // 0x03C0(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3C4[0x4];                                      // 0x03C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnAudioPlaybackFinished;                           // 0x03C8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnGeneratePCMData;                                 // 0x03D8(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_3E8[0x4];                                      // 0x03E8(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrentNumOfFrames;                                // 0x03EC(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPCMStruct                             PCMBufferInfo;                                     // 0x03F0(0x0018)(NativeAccessSpecifierPublic)
	uint8                                         Pad_408[0x8];                                      // 0x0408(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	float GetDuration();
	bool IsPlaybackFinished();
	void ReleaseMemory();
	bool RewindPlaybackTime(const float PlaybackTime);

	float GetDurationConst() const;
	float GetPlaybackPercentage() const;
	float GetPlaybackTime() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ImportedSoundWave">();
	}
	static class UImportedSoundWave* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImportedSoundWave>();
	}
};
static_assert(alignof(UImportedSoundWave) == 0x000010, "Wrong alignment on UImportedSoundWave");
static_assert(sizeof(UImportedSoundWave) == 0x000410, "Wrong size on UImportedSoundWave");
static_assert(offsetof(UImportedSoundWave, SamplingRate) == 0x0003C0, "Member 'UImportedSoundWave::SamplingRate' has a wrong offset!");
static_assert(offsetof(UImportedSoundWave, OnAudioPlaybackFinished) == 0x0003C8, "Member 'UImportedSoundWave::OnAudioPlaybackFinished' has a wrong offset!");
static_assert(offsetof(UImportedSoundWave, OnGeneratePCMData) == 0x0003D8, "Member 'UImportedSoundWave::OnGeneratePCMData' has a wrong offset!");
static_assert(offsetof(UImportedSoundWave, CurrentNumOfFrames) == 0x0003EC, "Member 'UImportedSoundWave::CurrentNumOfFrames' has a wrong offset!");
static_assert(offsetof(UImportedSoundWave, PCMBufferInfo) == 0x0003F0, "Member 'UImportedSoundWave::PCMBufferInfo' has a wrong offset!");

// Class RuntimeAudioImporter.PreImportedSoundAsset
// 0x0018 (0x0040 - 0x0028)
class UPreImportedSoundAsset final : public UObject
{
public:
	TArray<uint8>                                 AudioDataArray;                                    // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	EAudioFormat                                  AudioFormat;                                       // 0x0038(0x0001)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"PreImportedSoundAsset">();
	}
	static class UPreImportedSoundAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPreImportedSoundAsset>();
	}
};
static_assert(alignof(UPreImportedSoundAsset) == 0x000008, "Wrong alignment on UPreImportedSoundAsset");
static_assert(sizeof(UPreImportedSoundAsset) == 0x000040, "Wrong size on UPreImportedSoundAsset");
static_assert(offsetof(UPreImportedSoundAsset, AudioDataArray) == 0x000028, "Member 'UPreImportedSoundAsset::AudioDataArray' has a wrong offset!");
static_assert(offsetof(UPreImportedSoundAsset, AudioFormat) == 0x000038, "Member 'UPreImportedSoundAsset::AudioFormat' has a wrong offset!");

// Class RuntimeAudioImporter.RuntimeAudioImporterLibrary
// 0x0020 (0x0048 - 0x0028)
class URuntimeAudioImporterLibrary final : public UObject
{
public:
	FMulticastInlineDelegateProperty_             OnProgress;                                        // 0x0028(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_             OnResult;                                          // 0x0038(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

public:
	static class FString ConvertSecondsToString(int32 Seconds);
	static class URuntimeAudioImporterLibrary* CreateRuntimeAudioImporter();
	static bool ExportSoundWaveToBuffer(class UImportedSoundWave* ImporterSoundWave, TArray<uint8>* AudioData, EAudioFormat AudioFormat, uint8 Quality);
	static bool ExportSoundWaveToFile(class UImportedSoundWave* ImporterSoundWave, const class FString& SavePath, EAudioFormat AudioFormat, uint8 Quality);
	static EAudioFormat GetAudioFormat(const class FString& FilePath);
	static EAudioFormat GetAudioFormatAdvanced(const TArray<uint8>& AudioData);
	static void TranscodeRAWDataFromBuffer(const TArray<uint8>& RAWData_From, ERAWAudioFormat FormatFrom, TArray<uint8>* RAWData_To, ERAWAudioFormat FormatTo);
	static bool TranscodeRAWDataFromFile(const class FString& FilePathFrom, ERAWAudioFormat FormatFrom, const class FString& FilePathTo, ERAWAudioFormat FormatTo);

	void CompressSoundWave(class UImportedSoundWave* ImportedSoundWaveRef, TDelegate<void(bool bSuccess, class USoundWave* SoundWaveRef)> OnCompressedResult, const struct FCompressedSoundWaveInfo& CompressedSoundWaveInfo, uint8 Quality, bool bFillCompressedBuffer, bool bFillPCMBuffer, bool bFillRAWWaveBuffer);
	void ImportAudioFromBuffer(const TArray<uint8>& AudioData, EAudioFormat Format);
	void ImportAudioFromFile(const class FString& FilePath, EAudioFormat Format);
	void ImportAudioFromPreImportedSound(class UPreImportedSoundAsset* PreImportedSoundAssetRef);
	void ImportAudioFromRAWBuffer(const TArray<uint8>& RAWBuffer, ERAWAudioFormat Format, int32 SampleRate, int32 NumOfChannels);
	void ImportAudioFromRAWFile(const class FString& FilePath, ERAWAudioFormat Format, int32 SampleRate, int32 NumOfChannels);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"RuntimeAudioImporterLibrary">();
	}
	static class URuntimeAudioImporterLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<URuntimeAudioImporterLibrary>();
	}
};
static_assert(alignof(URuntimeAudioImporterLibrary) == 0x000008, "Wrong alignment on URuntimeAudioImporterLibrary");
static_assert(sizeof(URuntimeAudioImporterLibrary) == 0x000048, "Wrong size on URuntimeAudioImporterLibrary");
static_assert(offsetof(URuntimeAudioImporterLibrary, OnProgress) == 0x000028, "Member 'URuntimeAudioImporterLibrary::OnProgress' has a wrong offset!");
static_assert(offsetof(URuntimeAudioImporterLibrary, OnResult) == 0x000038, "Member 'URuntimeAudioImporterLibrary::OnResult' has a wrong offset!");

}

