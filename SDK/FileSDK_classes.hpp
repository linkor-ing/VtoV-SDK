#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FileSDK

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "FileSDK_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class FileSDK.FileSDKBPLibrary
// 0x0000 (0x0028 - 0x0028)
class UFileSDKBPLibrary final : public UBlueprintFunctionLibrary
{
public:
	static bool CopyDirectory(const class FString& Source, const class FString& Destination, const TDelegate<void(int32 KilobytesWritten, int32 TotalKilobytes)>& ProgressCallback, bool OverwriteDestination, int32 ChunkSizeInKilobytes);
	static void CopyDirectoryAsync(const class FString& Source, const class FString& Destination, const TDelegate<void(int32 KilobytesWritten, int32 TotalKilobytes)>& ProgressCallback, bool OverwriteDestination, int32 ChunkSizeInKilobytes);
	static bool CopyFile(const class FString& Source, const class FString& Destination, const TDelegate<void(int32 KilobytesWritten, int32 TotalKilobytes)>& ProgressCallback, const struct FFileSDKDelegatePreInfo& PreInfo, int32 ChunkSizeInKilobytes, bool OverwriteDestination);
	static void CopyFileAsync(const class FString& Source, const class FString& Destination, const TDelegate<void(int32 KilobytesWritten, int32 TotalKilobytes)>& ProgressCallback, const struct FFileSDKDelegatePreInfo& PreInfo, int32 ChunkSizeInKilobytes);
	static bool CreateDirectory(const class FString& DirectoryName, bool CreateDirectoryTree);
	static void CreateFile(const class FString& Filename, bool ClearContentsIfExists, bool CreateDirectoryTree);
	static bool DeleteDirectory(const class FString& DirectoryName, bool Recursive);
	static bool DeleteFile(const class FString& Filename);
	static class FString GetCurrentUserHomeDirectory();
	static class FString GetCurrentUsername();
	static TArray<struct FFileSDKFileInfo> GetDirectoryContentsWithFileInfo(const class FString& Directory, bool SearchSubfolders);
	static class FString GetEnvironmentVariable(const class FString& VariableName);
	static void GetFileOrDirectoryInfo(const class FString& Path, struct FFileSDKFileInfo* Info);
	static TArray<class FString> GetFilesFromDirectory(const class FString& DirectoryToSearch, const class FString& FilterFilesWithExtension, bool SearchSubfolders, EFileSDKFileType FileType);
	static class UFileSDKFileReader* OpenFileReader(const class FString& Filename, bool OpenInBinaryMode);
	static bool ReadBytesFromFile(const class FString& Filename, TArray<uint8>* Content);
	static bool ReadLinesFromFile(const class FString& Filename, TSubclassOf<class UFileSDKLineReader> LineReader, TArray<class FString>* Lines);
	static bool ReadStringFromFile(const class FString& Filename, class FString* Content);
	static bool RenameFileOrDirectory(const class FString& Source, const class FString& Destination);
	static bool WriteBytesToFile(const class FString& Filename, const TArray<uint8>& Content);
	static bool WriteStringToFile(const class FString& Filename, const class FString& Content, bool Append, EFileSDKEncodingOptions Encoding);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FileSDKBPLibrary">();
	}
	static class UFileSDKBPLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFileSDKBPLibrary>();
	}
};
static_assert(alignof(UFileSDKBPLibrary) == 0x000008, "Wrong alignment on UFileSDKBPLibrary");
static_assert(sizeof(UFileSDKBPLibrary) == 0x000028, "Wrong size on UFileSDKBPLibrary");

// Class FileSDK.FileSDKCopyFileAsync
// 0x0048 (0x0078 - 0x0030)
class UFileSDKCopyFileAsync final : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_             Completed;                                         // 0x0030(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_C4C[0x38];                                     // 0x0040(0x0038)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UFileSDKCopyFileAsync* CopyFileAsync(class UObject* WorldContextObject, const class FString& Source, const class FString& Destination, const TDelegate<void(int32 KilobytesWritten, int32 TotalKilobytes)>& ProgressCallback, bool OverwriteDestination, int32 ChunkSizeInKilobytes);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FileSDKCopyFileAsync">();
	}
	static class UFileSDKCopyFileAsync* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFileSDKCopyFileAsync>();
	}
};
static_assert(alignof(UFileSDKCopyFileAsync) == 0x000008, "Wrong alignment on UFileSDKCopyFileAsync");
static_assert(sizeof(UFileSDKCopyFileAsync) == 0x000078, "Wrong size on UFileSDKCopyFileAsync");
static_assert(offsetof(UFileSDKCopyFileAsync, Completed) == 0x000030, "Member 'UFileSDKCopyFileAsync::Completed' has a wrong offset!");

// Class FileSDK.FileSDKFileReader
// 0x0020 (0x0048 - 0x0028)
class UFileSDKFileReader final : public UObject
{
public:
	class FString                                 Filename;                                          // 0x0028(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          BinaryMode;                                        // 0x0038(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_C4E[0xF];                                      // 0x0039(0x000F)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Close();
	bool IsGood();
	int32 ReadBytes(int32 Num, TArray<uint8>* Content);
	int32 ReadBytesToEnd(TArray<uint8>* Content);
	int32 ReadString(int32 Num, class FString* Content);
	int32 ReadStringToEnd(class FString* Content);
	bool SeekFilePosition(EFileSDKFileAnchor Anchor, int32 Offset);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FileSDKFileReader">();
	}
	static class UFileSDKFileReader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFileSDKFileReader>();
	}
};
static_assert(alignof(UFileSDKFileReader) == 0x000008, "Wrong alignment on UFileSDKFileReader");
static_assert(sizeof(UFileSDKFileReader) == 0x000048, "Wrong size on UFileSDKFileReader");
static_assert(offsetof(UFileSDKFileReader, Filename) == 0x000028, "Member 'UFileSDKFileReader::Filename' has a wrong offset!");
static_assert(offsetof(UFileSDKFileReader, BinaryMode) == 0x000038, "Member 'UFileSDKFileReader::BinaryMode' has a wrong offset!");

// Class FileSDK.FileSDKLineReader
// 0x0000 (0x0028 - 0x0028)
class UFileSDKLineReader final : public UObject
{
public:
	bool FilterLine(const class FString& Line);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"FileSDKLineReader">();
	}
	static class UFileSDKLineReader* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFileSDKLineReader>();
	}
};
static_assert(alignof(UFileSDKLineReader) == 0x000008, "Wrong alignment on UFileSDKLineReader");
static_assert(sizeof(UFileSDKLineReader) == 0x000028, "Wrong size on UFileSDKLineReader");

}
