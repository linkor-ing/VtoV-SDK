#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DidItHit

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "DidItHit_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class DidItHit.DitItHitActorComponent
// 0x0158 (0x0208 - 0x00B0)
class UDitItHitActorComponent final : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_             OnItemAdded;                                       // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                   MyStaticMeshComponent;                             // 0x00C0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                    MyPrimitive;                                       // 0x00C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                 MyActor;                                           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                           MySockets;                                         // 0x00D8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct FVector>             LastKnownSocketLocation;                           // 0x00E8(0x0050)(NativeAccessSpecifierPublic)
	bool                                          bHitSameSocketAtDifferentTimes;                    // 0x0138(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHitOtherSocketsAtSameTime;                        // 0x0139(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bHitOtherSocketsAtDifferentTime;                   // 0x013A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_13B[0x1];                                      // 0x013B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ModuloSkip;                                        // 0x013C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SkipStringFilter;                                  // 0x0140(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 InclusionStringFilter;                             // 0x0150(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         ModuloNumber;                                      // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_164[0x4];                                      // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FHitResult>                     HitArray;                                          // 0x0168(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                          CanTrace;                                          // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          UseKismet;                                         // 0x0179(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          TraceByChannelOrObjects;                           // 0x017A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_17B[0x1];                                      // 0x017B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                BoxHalfSize;                                       // 0x017C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                               BoxOrientation;                                    // 0x0188(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         CapsuleRadius;                                     // 0x0194(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         CapsuleHalfHeight;                                 // 0x0198(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         SphereRadius;                                      // 0x019C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EKismetTraceType                              MyKismetTraceType;                                 // 0x01A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ETraceTypeQuery                               MyTraceChannel;                                    // 0x01A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A2[0x6];                                      // 0x01A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EObjectTypeQuery>                      MyObjectTypesToHit;                                // 0x01A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ShouldTraceComplex;                                // 0x01B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         MyActorsToIgnore;                                  // 0x01C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                          ShouldIgnoreSelf;                                  // 0x01D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D1[0x3];                                      // 0x01D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MyDrawTime;                                        // 0x01D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MyTraceColor;                                      // 0x01D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           MyTraceHitColor;                                   // 0x01E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EDrawDebugTrace                               MyDrawDebugType;                                   // 0x01F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1F9[0x7];                                      // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                MyWorldContextObject;                              // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	void AddHitToHitArray(const TArray<struct FHitResult>& HitArrayToAdd);
	void ClearHitArray();
	void ClearSocketLocationMap();
	void GetPrimaryComponent(class AActor* ActorTarget);
	void GetSocket_t0();
	void GetSockets();
	void SetupVariables(class UPrimitiveComponent* MyPrimitiveTarget, class AActor* MyActorTarget);
	void ToggleTraceCheck(bool CanTraceInput);
	void UpdateLastSocketLocation();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DitItHitActorComponent">();
	}
	static class UDitItHitActorComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDitItHitActorComponent>();
	}
};
static_assert(alignof(UDitItHitActorComponent) == 0x000008, "Wrong alignment on UDitItHitActorComponent");
static_assert(sizeof(UDitItHitActorComponent) == 0x000208, "Wrong size on UDitItHitActorComponent");
static_assert(offsetof(UDitItHitActorComponent, OnItemAdded) == 0x0000B0, "Member 'UDitItHitActorComponent::OnItemAdded' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, MyStaticMeshComponent) == 0x0000C0, "Member 'UDitItHitActorComponent::MyStaticMeshComponent' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, MyPrimitive) == 0x0000C8, "Member 'UDitItHitActorComponent::MyPrimitive' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, MyActor) == 0x0000D0, "Member 'UDitItHitActorComponent::MyActor' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, MySockets) == 0x0000D8, "Member 'UDitItHitActorComponent::MySockets' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, LastKnownSocketLocation) == 0x0000E8, "Member 'UDitItHitActorComponent::LastKnownSocketLocation' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, bHitSameSocketAtDifferentTimes) == 0x000138, "Member 'UDitItHitActorComponent::bHitSameSocketAtDifferentTimes' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, bHitOtherSocketsAtSameTime) == 0x000139, "Member 'UDitItHitActorComponent::bHitOtherSocketsAtSameTime' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, bHitOtherSocketsAtDifferentTime) == 0x00013A, "Member 'UDitItHitActorComponent::bHitOtherSocketsAtDifferentTime' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, ModuloSkip) == 0x00013C, "Member 'UDitItHitActorComponent::ModuloSkip' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, SkipStringFilter) == 0x000140, "Member 'UDitItHitActorComponent::SkipStringFilter' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, InclusionStringFilter) == 0x000150, "Member 'UDitItHitActorComponent::InclusionStringFilter' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, ModuloNumber) == 0x000160, "Member 'UDitItHitActorComponent::ModuloNumber' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, HitArray) == 0x000168, "Member 'UDitItHitActorComponent::HitArray' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, CanTrace) == 0x000178, "Member 'UDitItHitActorComponent::CanTrace' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, UseKismet) == 0x000179, "Member 'UDitItHitActorComponent::UseKismet' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, TraceByChannelOrObjects) == 0x00017A, "Member 'UDitItHitActorComponent::TraceByChannelOrObjects' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, BoxHalfSize) == 0x00017C, "Member 'UDitItHitActorComponent::BoxHalfSize' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, BoxOrientation) == 0x000188, "Member 'UDitItHitActorComponent::BoxOrientation' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, CapsuleRadius) == 0x000194, "Member 'UDitItHitActorComponent::CapsuleRadius' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, CapsuleHalfHeight) == 0x000198, "Member 'UDitItHitActorComponent::CapsuleHalfHeight' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, SphereRadius) == 0x00019C, "Member 'UDitItHitActorComponent::SphereRadius' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, MyKismetTraceType) == 0x0001A0, "Member 'UDitItHitActorComponent::MyKismetTraceType' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, MyTraceChannel) == 0x0001A1, "Member 'UDitItHitActorComponent::MyTraceChannel' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, MyObjectTypesToHit) == 0x0001A8, "Member 'UDitItHitActorComponent::MyObjectTypesToHit' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, ShouldTraceComplex) == 0x0001B8, "Member 'UDitItHitActorComponent::ShouldTraceComplex' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, MyActorsToIgnore) == 0x0001C0, "Member 'UDitItHitActorComponent::MyActorsToIgnore' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, ShouldIgnoreSelf) == 0x0001D0, "Member 'UDitItHitActorComponent::ShouldIgnoreSelf' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, MyDrawTime) == 0x0001D4, "Member 'UDitItHitActorComponent::MyDrawTime' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, MyTraceColor) == 0x0001D8, "Member 'UDitItHitActorComponent::MyTraceColor' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, MyTraceHitColor) == 0x0001E8, "Member 'UDitItHitActorComponent::MyTraceHitColor' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, MyDrawDebugType) == 0x0001F8, "Member 'UDitItHitActorComponent::MyDrawDebugType' has a wrong offset!");
static_assert(offsetof(UDitItHitActorComponent, MyWorldContextObject) == 0x000200, "Member 'UDitItHitActorComponent::MyWorldContextObject' has a wrong offset!");

}

