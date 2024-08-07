#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArchVisCharacter

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// Class ArchVisCharacter.ArchVisCharacter
// 0x0060 (0x0520 - 0x04C0)
class AArchVisCharacter final : public ACharacter
{
public:
	class FString                                 LookUpAxisName;                                    // 0x04B8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 LookUpAtRateAxisName;                              // 0x04C8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TurnAxisName;                                      // 0x04D8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 TurnAtRateAxisName;                                // 0x04E8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MoveForwardAxisName;                               // 0x04F8(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MoveRightAxisName;                                 // 0x0508(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MouseSensitivityScale_Pitch;                       // 0x0518(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MouseSensitivityScale_Yaw;                         // 0x051C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ArchVisCharacter">();
	}
	static class AArchVisCharacter* GetDefaultObj()
	{
		return GetDefaultObjImpl<AArchVisCharacter>();
	}
};
static_assert(alignof(AArchVisCharacter) == 0x000010, "Wrong alignment on AArchVisCharacter");
static_assert(sizeof(AArchVisCharacter) == 0x000520, "Wrong size on AArchVisCharacter");
static_assert(offsetof(AArchVisCharacter, LookUpAxisName) == 0x0004B8, "Member 'AArchVisCharacter::LookUpAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, LookUpAtRateAxisName) == 0x0004C8, "Member 'AArchVisCharacter::LookUpAtRateAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, TurnAxisName) == 0x0004D8, "Member 'AArchVisCharacter::TurnAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, TurnAtRateAxisName) == 0x0004E8, "Member 'AArchVisCharacter::TurnAtRateAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MoveForwardAxisName) == 0x0004F8, "Member 'AArchVisCharacter::MoveForwardAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MoveRightAxisName) == 0x000508, "Member 'AArchVisCharacter::MoveRightAxisName' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MouseSensitivityScale_Pitch) == 0x000518, "Member 'AArchVisCharacter::MouseSensitivityScale_Pitch' has a wrong offset!");
static_assert(offsetof(AArchVisCharacter, MouseSensitivityScale_Yaw) == 0x00051C, "Member 'AArchVisCharacter::MouseSensitivityScale_Yaw' has a wrong offset!");

// Class ArchVisCharacter.ArchVisCharMovementComponent
// 0x0050 (0x0B40 - 0x0AF0)
class UArchVisCharMovementComponent final : public UCharacterMovementComponent
{
public:
	struct FRotator                               RotationalAcceleration;                            // 0x0AF0(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                               RotationalDeceleration;                            // 0x0AFC(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                               MaxRotationalVelocity;                             // 0x0B08(0x000C)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                         MinPitch;                                          // 0x0B14(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxPitch;                                          // 0x0B18(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WalkingFriction;                                   // 0x0B1C(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WalkingSpeed;                                      // 0x0B20(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         WalkingAcceleration;                               // 0x0B24(0x0004)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1927[0x18];                                    // 0x0B28(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ArchVisCharMovementComponent">();
	}
	static class UArchVisCharMovementComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UArchVisCharMovementComponent>();
	}
};
static_assert(alignof(UArchVisCharMovementComponent) == 0x000010, "Wrong alignment on UArchVisCharMovementComponent");
static_assert(sizeof(UArchVisCharMovementComponent) == 0x000B40, "Wrong size on UArchVisCharMovementComponent");
static_assert(offsetof(UArchVisCharMovementComponent, RotationalAcceleration) == 0x000AF0, "Member 'UArchVisCharMovementComponent::RotationalAcceleration' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, RotationalDeceleration) == 0x000AFC, "Member 'UArchVisCharMovementComponent::RotationalDeceleration' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, MaxRotationalVelocity) == 0x000B08, "Member 'UArchVisCharMovementComponent::MaxRotationalVelocity' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, MinPitch) == 0x000B14, "Member 'UArchVisCharMovementComponent::MinPitch' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, MaxPitch) == 0x000B18, "Member 'UArchVisCharMovementComponent::MaxPitch' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, WalkingFriction) == 0x000B1C, "Member 'UArchVisCharMovementComponent::WalkingFriction' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, WalkingSpeed) == 0x000B20, "Member 'UArchVisCharMovementComponent::WalkingSpeed' has a wrong offset!");
static_assert(offsetof(UArchVisCharMovementComponent, WalkingAcceleration) == 0x000B24, "Member 'UArchVisCharMovementComponent::WalkingAcceleration' has a wrong offset!");

}

