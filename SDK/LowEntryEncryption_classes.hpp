#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LowEntryEncryption

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class LowEntryEncryption.LowEntryEncryptionAesFastEngine
// 0x0058 (0x0080 - 0x0028)
class ULowEntryEncryptionAesFastEngine final : public UObject
{
public:
	int32                                         ROUNDS;                                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x24];                                      // 0x002C(0x0024)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         C0;                                                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C1;                                                // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C2;                                                // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C3;                                                // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C0store1;                                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C1store1;                                          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C2store1;                                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C3store1;                                          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C0store2;                                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C1store2;                                          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C2store2;                                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C3store2;                                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LowEntryEncryptionAesFastEngine">();
	}
	static class ULowEntryEncryptionAesFastEngine* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULowEntryEncryptionAesFastEngine>();
	}
};
static_assert(alignof(ULowEntryEncryptionAesFastEngine) == 0x000008, "Wrong alignment on ULowEntryEncryptionAesFastEngine");
static_assert(sizeof(ULowEntryEncryptionAesFastEngine) == 0x000080, "Wrong size on ULowEntryEncryptionAesFastEngine");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine, ROUNDS) == 0x000028, "Member 'ULowEntryEncryptionAesFastEngine::ROUNDS' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine, C0) == 0x000050, "Member 'ULowEntryEncryptionAesFastEngine::C0' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine, C1) == 0x000054, "Member 'ULowEntryEncryptionAesFastEngine::C1' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine, C2) == 0x000058, "Member 'ULowEntryEncryptionAesFastEngine::C2' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine, C3) == 0x00005C, "Member 'ULowEntryEncryptionAesFastEngine::C3' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine, C0store1) == 0x000060, "Member 'ULowEntryEncryptionAesFastEngine::C0store1' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine, C1store1) == 0x000064, "Member 'ULowEntryEncryptionAesFastEngine::C1store1' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine, C2store1) == 0x000068, "Member 'ULowEntryEncryptionAesFastEngine::C2store1' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine, C3store1) == 0x00006C, "Member 'ULowEntryEncryptionAesFastEngine::C3store1' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine, C0store2) == 0x000070, "Member 'ULowEntryEncryptionAesFastEngine::C0store2' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine, C1store2) == 0x000074, "Member 'ULowEntryEncryptionAesFastEngine::C1store2' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine, C2store2) == 0x000078, "Member 'ULowEntryEncryptionAesFastEngine::C2store2' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine, C3store2) == 0x00007C, "Member 'ULowEntryEncryptionAesFastEngine::C3store2' has a wrong offset!");

// Class LowEntryEncryption.LowEntryEncryptionAesFastEngine1D
// 0x0058 (0x0080 - 0x0028)
class ULowEntryEncryptionAesFastEngine1D final : public UObject
{
public:
	int32                                         ROUNDS;                                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 EW;                                                // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                 DW;                                                // 0x0040(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                         C0;                                                // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C1;                                                // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C2;                                                // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C3;                                                // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C0store1;                                          // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C1store1;                                          // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C2store1;                                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C3store1;                                          // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C0store2;                                          // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C1store2;                                          // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C2store2;                                          // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         C3store2;                                          // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LowEntryEncryptionAesFastEngine1D">();
	}
	static class ULowEntryEncryptionAesFastEngine1D* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULowEntryEncryptionAesFastEngine1D>();
	}
};
static_assert(alignof(ULowEntryEncryptionAesFastEngine1D) == 0x000008, "Wrong alignment on ULowEntryEncryptionAesFastEngine1D");
static_assert(sizeof(ULowEntryEncryptionAesFastEngine1D) == 0x000080, "Wrong size on ULowEntryEncryptionAesFastEngine1D");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, ROUNDS) == 0x000028, "Member 'ULowEntryEncryptionAesFastEngine1D::ROUNDS' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, EW) == 0x000030, "Member 'ULowEntryEncryptionAesFastEngine1D::EW' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, DW) == 0x000040, "Member 'ULowEntryEncryptionAesFastEngine1D::DW' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, C0) == 0x000050, "Member 'ULowEntryEncryptionAesFastEngine1D::C0' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, C1) == 0x000054, "Member 'ULowEntryEncryptionAesFastEngine1D::C1' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, C2) == 0x000058, "Member 'ULowEntryEncryptionAesFastEngine1D::C2' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, C3) == 0x00005C, "Member 'ULowEntryEncryptionAesFastEngine1D::C3' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, C0store1) == 0x000060, "Member 'ULowEntryEncryptionAesFastEngine1D::C0store1' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, C1store1) == 0x000064, "Member 'ULowEntryEncryptionAesFastEngine1D::C1store1' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, C2store1) == 0x000068, "Member 'ULowEntryEncryptionAesFastEngine1D::C2store1' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, C3store1) == 0x00006C, "Member 'ULowEntryEncryptionAesFastEngine1D::C3store1' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, C0store2) == 0x000070, "Member 'ULowEntryEncryptionAesFastEngine1D::C0store2' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, C1store2) == 0x000074, "Member 'ULowEntryEncryptionAesFastEngine1D::C1store2' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, C2store2) == 0x000078, "Member 'ULowEntryEncryptionAesFastEngine1D::C2store2' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesFastEngine1D, C3store2) == 0x00007C, "Member 'ULowEntryEncryptionAesFastEngine1D::C3store2' has a wrong offset!");

// Class LowEntryEncryption.LowEntryEncryptionAesKey
// 0x0030 (0x0058 - 0x0028)
class ULowEntryEncryptionAesKey final : public UObject
{
public:
	int32                                         ROUNDS;                                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EncryptionWSet;                                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D[0x13];                                      // 0x002D(0x0013)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          DecryptionWSet;                                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x17];                                      // 0x0041(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LowEntryEncryptionAesKey">();
	}
	static class ULowEntryEncryptionAesKey* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULowEntryEncryptionAesKey>();
	}
};
static_assert(alignof(ULowEntryEncryptionAesKey) == 0x000008, "Wrong alignment on ULowEntryEncryptionAesKey");
static_assert(sizeof(ULowEntryEncryptionAesKey) == 0x000058, "Wrong size on ULowEntryEncryptionAesKey");
static_assert(offsetof(ULowEntryEncryptionAesKey, ROUNDS) == 0x000028, "Member 'ULowEntryEncryptionAesKey::ROUNDS' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesKey, EncryptionWSet) == 0x00002C, "Member 'ULowEntryEncryptionAesKey::EncryptionWSet' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesKey, DecryptionWSet) == 0x000040, "Member 'ULowEntryEncryptionAesKey::DecryptionWSet' has a wrong offset!");

// Class LowEntryEncryption.LowEntryEncryptionAesKey1D
// 0x0030 (0x0058 - 0x0028)
class ULowEntryEncryptionAesKey1D final : public UObject
{
public:
	int32                                         ROUNDS;                                            // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          EncryptionWSet;                                    // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 EncryptionW;                                       // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          DecryptionWSet;                                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 DecryptionW;                                       // 0x0048(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LowEntryEncryptionAesKey1D">();
	}
	static class ULowEntryEncryptionAesKey1D* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULowEntryEncryptionAesKey1D>();
	}
};
static_assert(alignof(ULowEntryEncryptionAesKey1D) == 0x000008, "Wrong alignment on ULowEntryEncryptionAesKey1D");
static_assert(sizeof(ULowEntryEncryptionAesKey1D) == 0x000058, "Wrong size on ULowEntryEncryptionAesKey1D");
static_assert(offsetof(ULowEntryEncryptionAesKey1D, ROUNDS) == 0x000028, "Member 'ULowEntryEncryptionAesKey1D::ROUNDS' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesKey1D, EncryptionWSet) == 0x00002C, "Member 'ULowEntryEncryptionAesKey1D::EncryptionWSet' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesKey1D, EncryptionW) == 0x000030, "Member 'ULowEntryEncryptionAesKey1D::EncryptionW' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesKey1D, DecryptionWSet) == 0x000040, "Member 'ULowEntryEncryptionAesKey1D::DecryptionWSet' has a wrong offset!");
static_assert(offsetof(ULowEntryEncryptionAesKey1D, DecryptionW) == 0x000048, "Member 'ULowEntryEncryptionAesKey1D::DecryptionW' has a wrong offset!");

// Class LowEntryEncryption.LowEntryEncryptionLibrary
// 0x0000 (0x0028 - 0x0028)
class ULowEntryEncryptionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void BytesToRsaPrivateKey(bool* Success, class ULowEntryRsaPrivateKey** PrivateKey, const TArray<uint8>& ByteArray, int32 Param_Index, int32 Length);
	static void BytesToRsaPublicKey(bool* Success, class ULowEntryRsaPublicKey** PublicKey, const TArray<uint8>& ByteArray, int32 Param_Index, int32 Length);
	static TArray<uint8> DecryptAes(const TArray<uint8>& EncryptedData, const TArray<uint8>& Key, const bool AddedHash);
	static TArray<uint8> DecryptRsa(const TArray<uint8>& EncryptedData, class ULowEntryRsaPrivateKey* PrivateKey);
	static TArray<uint8> EncryptAes(const TArray<uint8>& Data, const TArray<uint8>& Key, const bool AddHash);
	static TArray<uint8> EncryptRsa(const TArray<uint8>& Data, class ULowEntryRsaPublicKey* PublicKey);
	static void GenerateKeysRsa(class ULowEntryRsaPublicKey** PublicKey, class ULowEntryRsaPrivateKey** PrivateKey, const int32 Bits);
	static TArray<uint8> GenerateSecureRandomBytes(const int32 Length);
	static TArray<uint8> GenerateSecureRandomBytesRandomLength(const int32 MinLength, const int32 MaxLength);
	static TArray<uint8> RsaPrivateKeyToBytes(class ULowEntryRsaPrivateKey* PrivateKey);
	static TArray<uint8> RsaPublicKeyToBytes(class ULowEntryRsaPublicKey* PublicKey);
	static TArray<uint8> SignRsa(const TArray<uint8>& Hash, class ULowEntryRsaPrivateKey* PrivateKey);
	static bool VerifySignatureRsa(const TArray<uint8>& Signature, const TArray<uint8>& ExpectedHash, class ULowEntryRsaPublicKey* PublicKey);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LowEntryEncryptionLibrary">();
	}
	static class ULowEntryEncryptionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULowEntryEncryptionLibrary>();
	}
};
static_assert(alignof(ULowEntryEncryptionLibrary) == 0x000008, "Wrong alignment on ULowEntryEncryptionLibrary");
static_assert(sizeof(ULowEntryEncryptionLibrary) == 0x000028, "Wrong size on ULowEntryEncryptionLibrary");

// Class LowEntryEncryption.LowEntryRsaKeys
// 0x0010 (0x0038 - 0x0028)
class ULowEntryRsaKeys final : public UObject
{
public:
	class ULowEntryRsaPublicKey*                  PublicKey;                                         // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULowEntryRsaPrivateKey*                 PrivateKey;                                        // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LowEntryRsaKeys">();
	}
	static class ULowEntryRsaKeys* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULowEntryRsaKeys>();
	}
};
static_assert(alignof(ULowEntryRsaKeys) == 0x000008, "Wrong alignment on ULowEntryRsaKeys");
static_assert(sizeof(ULowEntryRsaKeys) == 0x000038, "Wrong size on ULowEntryRsaKeys");
static_assert(offsetof(ULowEntryRsaKeys, PublicKey) == 0x000028, "Member 'ULowEntryRsaKeys::PublicKey' has a wrong offset!");
static_assert(offsetof(ULowEntryRsaKeys, PrivateKey) == 0x000030, "Member 'ULowEntryRsaKeys::PrivateKey' has a wrong offset!");

// Class LowEntryEncryption.LowEntryRsaPrivateKey
// 0x0070 (0x0098 - 0x0028)
class ULowEntryRsaPrivateKey final : public UObject
{
public:
	uint8                                         Pad_28[0x70];                                      // 0x0028(0x0070)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LowEntryRsaPrivateKey">();
	}
	static class ULowEntryRsaPrivateKey* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULowEntryRsaPrivateKey>();
	}
};
static_assert(alignof(ULowEntryRsaPrivateKey) == 0x000008, "Wrong alignment on ULowEntryRsaPrivateKey");
static_assert(sizeof(ULowEntryRsaPrivateKey) == 0x000098, "Wrong size on ULowEntryRsaPrivateKey");

// Class LowEntryEncryption.LowEntryRsaPublicKey
// 0x0020 (0x0048 - 0x0028)
class ULowEntryRsaPublicKey final : public UObject
{
public:
	uint8                                         Pad_28[0x20];                                      // 0x0028(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LowEntryRsaPublicKey">();
	}
	static class ULowEntryRsaPublicKey* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULowEntryRsaPublicKey>();
	}
};
static_assert(alignof(ULowEntryRsaPublicKey) == 0x000008, "Wrong alignment on ULowEntryRsaPublicKey");
static_assert(sizeof(ULowEntryRsaPublicKey) == 0x000048, "Wrong size on ULowEntryRsaPublicKey");

}

