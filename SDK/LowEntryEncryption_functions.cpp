#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LowEntryEncryption

#include "Basic.hpp"

#include "LowEntryEncryption_classes.hpp"
#include "LowEntryEncryption_parameters.hpp"


namespace SDK
{

// Function LowEntryEncryption.LowEntryEncryptionLibrary.BytesToRsaPrivateKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryRsaPrivateKey*           PrivateKey                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           ByteArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                                   Param_Index                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Length                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryEncryptionLibrary::BytesToRsaPrivateKey(bool* Success, class ULowEntryRsaPrivateKey** PrivateKey, const TArray<uint8>& ByteArray, int32 Param_Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LowEntryEncryptionLibrary", "BytesToRsaPrivateKey");

	Params::LowEntryEncryptionLibrary_BytesToRsaPrivateKey Parms{};

	Parms.ByteArray = std::move(ByteArray);
	Parms.Param_Index = Param_Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (PrivateKey != nullptr)
		*PrivateKey = Parms.PrivateKey;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.BytesToRsaPublicKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryRsaPublicKey*            PublicKey                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           ByteArray                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                                   Param_Index                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Length                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryEncryptionLibrary::BytesToRsaPublicKey(bool* Success, class ULowEntryRsaPublicKey** PublicKey, const TArray<uint8>& ByteArray, int32 Param_Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LowEntryEncryptionLibrary", "BytesToRsaPublicKey");

	Params::LowEntryEncryptionLibrary_BytesToRsaPublicKey Parms{};

	Parms.ByteArray = std::move(ByteArray);
	Parms.Param_Index = Param_Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (PublicKey != nullptr)
		*PublicKey = Parms.PublicKey;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.DecryptAes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                           EncryptedData                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                           Key                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    AddedHash                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::DecryptAes(const TArray<uint8>& EncryptedData, const TArray<uint8>& Key, const bool AddedHash)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LowEntryEncryptionLibrary", "DecryptAes");

	Params::LowEntryEncryptionLibrary_DecryptAes Parms{};

	Parms.EncryptedData = std::move(EncryptedData);
	Parms.Key = std::move(Key);
	Parms.AddedHash = AddedHash;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.DecryptRsa
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                           EncryptedData                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryRsaPrivateKey*           PrivateKey                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::DecryptRsa(const TArray<uint8>& EncryptedData, class ULowEntryRsaPrivateKey* PrivateKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LowEntryEncryptionLibrary", "DecryptRsa");

	Params::LowEntryEncryptionLibrary_DecryptRsa Parms{};

	Parms.EncryptedData = std::move(EncryptedData);
	Parms.PrivateKey = PrivateKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.EncryptAes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                           Data                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                           Key                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                                    AddHash                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::EncryptAes(const TArray<uint8>& Data, const TArray<uint8>& Key, const bool AddHash)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LowEntryEncryptionLibrary", "EncryptAes");

	Params::LowEntryEncryptionLibrary_EncryptAes Parms{};

	Parms.Data = std::move(Data);
	Parms.Key = std::move(Key);
	Parms.AddHash = AddHash;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.EncryptRsa
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                           Data                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryRsaPublicKey*            PublicKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::EncryptRsa(const TArray<uint8>& Data, class ULowEntryRsaPublicKey* PublicKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LowEntryEncryptionLibrary", "EncryptRsa");

	Params::LowEntryEncryptionLibrary_EncryptRsa Parms{};

	Parms.Data = std::move(Data);
	Parms.PublicKey = PublicKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateKeysRsa
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULowEntryRsaPublicKey*            PublicKey                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryRsaPrivateKey*           PrivateKey                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   Bits                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryEncryptionLibrary::GenerateKeysRsa(class ULowEntryRsaPublicKey** PublicKey, class ULowEntryRsaPrivateKey** PrivateKey, const int32 Bits)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LowEntryEncryptionLibrary", "GenerateKeysRsa");

	Params::LowEntryEncryptionLibrary_GenerateKeysRsa Parms{};

	Parms.Bits = Bits;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	if (PublicKey != nullptr)
		*PublicKey = Parms.PublicKey;

	if (PrivateKey != nullptr)
		*PrivateKey = Parms.PrivateKey;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateSecureRandomBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   Length                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::GenerateSecureRandomBytes(const int32 Length)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LowEntryEncryptionLibrary", "GenerateSecureRandomBytes");

	Params::LowEntryEncryptionLibrary_GenerateSecureRandomBytes Parms{};

	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.GenerateSecureRandomBytesRandomLength
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                                   MinLength                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   MaxLength                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::GenerateSecureRandomBytesRandomLength(const int32 MinLength, const int32 MaxLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LowEntryEncryptionLibrary", "GenerateSecureRandomBytesRandomLength");

	Params::LowEntryEncryptionLibrary_GenerateSecureRandomBytesRandomLength Parms{};

	Parms.MinLength = MinLength;
	Parms.MaxLength = MaxLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.RsaPrivateKeyToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryRsaPrivateKey*           PrivateKey                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::RsaPrivateKeyToBytes(class ULowEntryRsaPrivateKey* PrivateKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LowEntryEncryptionLibrary", "RsaPrivateKeyToBytes");

	Params::LowEntryEncryptionLibrary_RsaPrivateKeyToBytes Parms{};

	Parms.PrivateKey = PrivateKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.RsaPublicKeyToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryRsaPublicKey*            PublicKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::RsaPublicKeyToBytes(class ULowEntryRsaPublicKey* PublicKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LowEntryEncryptionLibrary", "RsaPublicKeyToBytes");

	Params::LowEntryEncryptionLibrary_RsaPublicKeyToBytes Parms{};

	Parms.PublicKey = PublicKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.SignRsa
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                           Hash                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryRsaPrivateKey*           PrivateKey                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryEncryptionLibrary::SignRsa(const TArray<uint8>& Hash, class ULowEntryRsaPrivateKey* PrivateKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LowEntryEncryptionLibrary", "SignRsa");

	Params::LowEntryEncryptionLibrary_SignRsa Parms{};

	Parms.Hash = std::move(Hash);
	Parms.PrivateKey = PrivateKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LowEntryEncryption.LowEntryEncryptionLibrary.VerifySignatureRsa
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                           Signature                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                           ExpectedHash                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryRsaPublicKey*            PublicKey                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryEncryptionLibrary::VerifySignatureRsa(const TArray<uint8>& Signature, const TArray<uint8>& ExpectedHash, class ULowEntryRsaPublicKey* PublicKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LowEntryEncryptionLibrary", "VerifySignatureRsa");

	Params::LowEntryEncryptionLibrary_VerifySignatureRsa Parms{};

	Parms.Signature = std::move(Signature);
	Parms.ExpectedHash = std::move(ExpectedHash);
	Parms.PublicKey = PublicKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

