#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlueprintFileUtils

#include "Basic.hpp"


namespace SDK::Params
{

// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.CopyFile
// 0x0028 (0x0028 - 0x0000)
struct BlueprintFileUtilsBPLibrary_CopyFile final
{
public:
	class FString                                 DestFilename;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SrcFilename;                                       // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReplace;                                          // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEvenIfReadOnly;                                   // 0x0021(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0022(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintFileUtilsBPLibrary_CopyFile) == 0x000008, "Wrong alignment on BlueprintFileUtilsBPLibrary_CopyFile");
static_assert(sizeof(BlueprintFileUtilsBPLibrary_CopyFile) == 0x000028, "Wrong size on BlueprintFileUtilsBPLibrary_CopyFile");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_CopyFile, DestFilename) == 0x000000, "Member 'BlueprintFileUtilsBPLibrary_CopyFile::DestFilename' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_CopyFile, SrcFilename) == 0x000010, "Member 'BlueprintFileUtilsBPLibrary_CopyFile::SrcFilename' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_CopyFile, bReplace) == 0x000020, "Member 'BlueprintFileUtilsBPLibrary_CopyFile::bReplace' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_CopyFile, bEvenIfReadOnly) == 0x000021, "Member 'BlueprintFileUtilsBPLibrary_CopyFile::bEvenIfReadOnly' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_CopyFile, ReturnValue) == 0x000022, "Member 'BlueprintFileUtilsBPLibrary_CopyFile::ReturnValue' has a wrong offset!");

// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteDirectory
// 0x0018 (0x0018 - 0x0000)
struct BlueprintFileUtilsBPLibrary_DeleteDirectory final
{
public:
	class FString                                 Directory;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMustExist;                                        // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDeleteRecursively;                                // 0x0011(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0012(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintFileUtilsBPLibrary_DeleteDirectory) == 0x000008, "Wrong alignment on BlueprintFileUtilsBPLibrary_DeleteDirectory");
static_assert(sizeof(BlueprintFileUtilsBPLibrary_DeleteDirectory) == 0x000018, "Wrong size on BlueprintFileUtilsBPLibrary_DeleteDirectory");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_DeleteDirectory, Directory) == 0x000000, "Member 'BlueprintFileUtilsBPLibrary_DeleteDirectory::Directory' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_DeleteDirectory, bMustExist) == 0x000010, "Member 'BlueprintFileUtilsBPLibrary_DeleteDirectory::bMustExist' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_DeleteDirectory, bDeleteRecursively) == 0x000011, "Member 'BlueprintFileUtilsBPLibrary_DeleteDirectory::bDeleteRecursively' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_DeleteDirectory, ReturnValue) == 0x000012, "Member 'BlueprintFileUtilsBPLibrary_DeleteDirectory::ReturnValue' has a wrong offset!");

// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.DeleteFile
// 0x0018 (0x0018 - 0x0000)
struct BlueprintFileUtilsBPLibrary_DeleteFile final
{
public:
	class FString                                 Filename;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bMustExist;                                        // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEvenIfReadOnly;                                   // 0x0011(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0012(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13[0x5];                                       // 0x0013(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintFileUtilsBPLibrary_DeleteFile) == 0x000008, "Wrong alignment on BlueprintFileUtilsBPLibrary_DeleteFile");
static_assert(sizeof(BlueprintFileUtilsBPLibrary_DeleteFile) == 0x000018, "Wrong size on BlueprintFileUtilsBPLibrary_DeleteFile");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_DeleteFile, Filename) == 0x000000, "Member 'BlueprintFileUtilsBPLibrary_DeleteFile::Filename' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_DeleteFile, bMustExist) == 0x000010, "Member 'BlueprintFileUtilsBPLibrary_DeleteFile::bMustExist' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_DeleteFile, bEvenIfReadOnly) == 0x000011, "Member 'BlueprintFileUtilsBPLibrary_DeleteFile::bEvenIfReadOnly' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_DeleteFile, ReturnValue) == 0x000012, "Member 'BlueprintFileUtilsBPLibrary_DeleteFile::ReturnValue' has a wrong offset!");

// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.directoryExists
// 0x0018 (0x0018 - 0x0000)
struct BlueprintFileUtilsBPLibrary_DirectoryExists final
{
public:
	class FString                                 Directory;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintFileUtilsBPLibrary_DirectoryExists) == 0x000008, "Wrong alignment on BlueprintFileUtilsBPLibrary_DirectoryExists");
static_assert(sizeof(BlueprintFileUtilsBPLibrary_DirectoryExists) == 0x000018, "Wrong size on BlueprintFileUtilsBPLibrary_DirectoryExists");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_DirectoryExists, Directory) == 0x000000, "Member 'BlueprintFileUtilsBPLibrary_DirectoryExists::Directory' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_DirectoryExists, ReturnValue) == 0x000010, "Member 'BlueprintFileUtilsBPLibrary_DirectoryExists::ReturnValue' has a wrong offset!");

// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.fileExists
// 0x0018 (0x0018 - 0x0000)
struct BlueprintFileUtilsBPLibrary_FileExists final
{
public:
	class FString                                 Filename;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintFileUtilsBPLibrary_FileExists) == 0x000008, "Wrong alignment on BlueprintFileUtilsBPLibrary_FileExists");
static_assert(sizeof(BlueprintFileUtilsBPLibrary_FileExists) == 0x000018, "Wrong size on BlueprintFileUtilsBPLibrary_FileExists");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_FileExists, Filename) == 0x000000, "Member 'BlueprintFileUtilsBPLibrary_FileExists::Filename' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_FileExists, ReturnValue) == 0x000010, "Member 'BlueprintFileUtilsBPLibrary_FileExists::ReturnValue' has a wrong offset!");

// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindFiles
// 0x0038 (0x0038 - 0x0000)
struct BlueprintFileUtilsBPLibrary_FindFiles final
{
public:
	class FString                                 Directory;                                         // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         FoundFiles;                                        // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 FileExtension;                                     // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintFileUtilsBPLibrary_FindFiles) == 0x000008, "Wrong alignment on BlueprintFileUtilsBPLibrary_FindFiles");
static_assert(sizeof(BlueprintFileUtilsBPLibrary_FindFiles) == 0x000038, "Wrong size on BlueprintFileUtilsBPLibrary_FindFiles");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_FindFiles, Directory) == 0x000000, "Member 'BlueprintFileUtilsBPLibrary_FindFiles::Directory' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_FindFiles, FoundFiles) == 0x000010, "Member 'BlueprintFileUtilsBPLibrary_FindFiles::FoundFiles' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_FindFiles, FileExtension) == 0x000020, "Member 'BlueprintFileUtilsBPLibrary_FindFiles::FileExtension' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_FindFiles, ReturnValue) == 0x000030, "Member 'BlueprintFileUtilsBPLibrary_FindFiles::ReturnValue' has a wrong offset!");

// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.FindRecursive
// 0x0038 (0x0038 - 0x0000)
struct BlueprintFileUtilsBPLibrary_FindRecursive final
{
public:
	class FString                                 StartDirectory;                                    // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                         FoundPaths;                                        // 0x0010(0x0010)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                 Wildcard;                                          // 0x0020(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFindFiles;                                        // 0x0030(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bFindDirectories;                                  // 0x0031(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0032(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_33[0x5];                                       // 0x0033(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintFileUtilsBPLibrary_FindRecursive) == 0x000008, "Wrong alignment on BlueprintFileUtilsBPLibrary_FindRecursive");
static_assert(sizeof(BlueprintFileUtilsBPLibrary_FindRecursive) == 0x000038, "Wrong size on BlueprintFileUtilsBPLibrary_FindRecursive");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_FindRecursive, StartDirectory) == 0x000000, "Member 'BlueprintFileUtilsBPLibrary_FindRecursive::StartDirectory' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_FindRecursive, FoundPaths) == 0x000010, "Member 'BlueprintFileUtilsBPLibrary_FindRecursive::FoundPaths' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_FindRecursive, Wildcard) == 0x000020, "Member 'BlueprintFileUtilsBPLibrary_FindRecursive::Wildcard' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_FindRecursive, bFindFiles) == 0x000030, "Member 'BlueprintFileUtilsBPLibrary_FindRecursive::bFindFiles' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_FindRecursive, bFindDirectories) == 0x000031, "Member 'BlueprintFileUtilsBPLibrary_FindRecursive::bFindDirectories' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_FindRecursive, ReturnValue) == 0x000032, "Member 'BlueprintFileUtilsBPLibrary_FindRecursive::ReturnValue' has a wrong offset!");

// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.GetUserDirectory
// 0x0010 (0x0010 - 0x0000)
struct BlueprintFileUtilsBPLibrary_GetUserDirectory final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(BlueprintFileUtilsBPLibrary_GetUserDirectory) == 0x000008, "Wrong alignment on BlueprintFileUtilsBPLibrary_GetUserDirectory");
static_assert(sizeof(BlueprintFileUtilsBPLibrary_GetUserDirectory) == 0x000010, "Wrong size on BlueprintFileUtilsBPLibrary_GetUserDirectory");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_GetUserDirectory, ReturnValue) == 0x000000, "Member 'BlueprintFileUtilsBPLibrary_GetUserDirectory::ReturnValue' has a wrong offset!");

// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.MakeDirectory
// 0x0018 (0x0018 - 0x0000)
struct BlueprintFileUtilsBPLibrary_MakeDirectory final
{
public:
	class FString                                 Path;                                              // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCreateTree;                                       // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintFileUtilsBPLibrary_MakeDirectory) == 0x000008, "Wrong alignment on BlueprintFileUtilsBPLibrary_MakeDirectory");
static_assert(sizeof(BlueprintFileUtilsBPLibrary_MakeDirectory) == 0x000018, "Wrong size on BlueprintFileUtilsBPLibrary_MakeDirectory");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_MakeDirectory, Path) == 0x000000, "Member 'BlueprintFileUtilsBPLibrary_MakeDirectory::Path' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_MakeDirectory, bCreateTree) == 0x000010, "Member 'BlueprintFileUtilsBPLibrary_MakeDirectory::bCreateTree' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_MakeDirectory, ReturnValue) == 0x000011, "Member 'BlueprintFileUtilsBPLibrary_MakeDirectory::ReturnValue' has a wrong offset!");

// Function BlueprintFileUtils.BlueprintFileUtilsBPLibrary.moveFile
// 0x0028 (0x0028 - 0x0000)
struct BlueprintFileUtilsBPLibrary_MoveFile final
{
public:
	class FString                                 DestFilename;                                      // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SrcFilename;                                       // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bReplace;                                          // 0x0020(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bEvenIfReadOnly;                                   // 0x0021(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0022(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_23[0x5];                                       // 0x0023(0x0005)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(BlueprintFileUtilsBPLibrary_MoveFile) == 0x000008, "Wrong alignment on BlueprintFileUtilsBPLibrary_MoveFile");
static_assert(sizeof(BlueprintFileUtilsBPLibrary_MoveFile) == 0x000028, "Wrong size on BlueprintFileUtilsBPLibrary_MoveFile");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_MoveFile, DestFilename) == 0x000000, "Member 'BlueprintFileUtilsBPLibrary_MoveFile::DestFilename' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_MoveFile, SrcFilename) == 0x000010, "Member 'BlueprintFileUtilsBPLibrary_MoveFile::SrcFilename' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_MoveFile, bReplace) == 0x000020, "Member 'BlueprintFileUtilsBPLibrary_MoveFile::bReplace' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_MoveFile, bEvenIfReadOnly) == 0x000021, "Member 'BlueprintFileUtilsBPLibrary_MoveFile::bEvenIfReadOnly' has a wrong offset!");
static_assert(offsetof(BlueprintFileUtilsBPLibrary_MoveFile, ReturnValue) == 0x000022, "Member 'BlueprintFileUtilsBPLibrary_MoveFile::ReturnValue' has a wrong offset!");

}

