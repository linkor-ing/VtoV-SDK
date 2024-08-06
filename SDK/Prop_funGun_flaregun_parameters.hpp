#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_funGun_flaregun

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function prop_funGun_flaregun.prop_funGun_flaregun_C.fireBulletPrimary
// 0x0090 (0x0090 - 0x0000)
struct Prop_funGun_flaregun_C_FireBulletPrimary final
{
public:
	class UClass*                                 Flare;                                             // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x0008(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0020(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x002C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0038(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0xC];                                       // 0x0044(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0050(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_flare_C*                          CallFunc_FinishSpawningActor_ReturnValue;          // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_funGun_flaregun_C_FireBulletPrimary) == 0x000010, "Wrong alignment on Prop_funGun_flaregun_C_FireBulletPrimary");
static_assert(sizeof(Prop_funGun_flaregun_C_FireBulletPrimary) == 0x000090, "Wrong size on Prop_funGun_flaregun_C_FireBulletPrimary");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletPrimary, Flare) == 0x000000, "Member 'Prop_funGun_flaregun_C_FireBulletPrimary::Flare' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletPrimary, CallFunc_RandomUnitVector_ReturnValue) == 0x000008, "Member 'Prop_funGun_flaregun_C_FireBulletPrimary::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletPrimary, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x000014, "Member 'Prop_funGun_flaregun_C_FireBulletPrimary::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletPrimary, CallFunc_GetForwardVector_ReturnValue) == 0x000020, "Member 'Prop_funGun_flaregun_C_FireBulletPrimary::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletPrimary, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x00002C, "Member 'Prop_funGun_flaregun_C_FireBulletPrimary::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletPrimary, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000038, "Member 'Prop_funGun_flaregun_C_FireBulletPrimary::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletPrimary, CallFunc_MakeTransform_ReturnValue) == 0x000050, "Member 'Prop_funGun_flaregun_C_FireBulletPrimary::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletPrimary, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000080, "Member 'Prop_funGun_flaregun_C_FireBulletPrimary::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletPrimary, CallFunc_FinishSpawningActor_ReturnValue) == 0x000088, "Member 'Prop_funGun_flaregun_C_FireBulletPrimary::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function prop_funGun_flaregun.prop_funGun_flaregun_C.fireBulletSecondary
// 0x0080 (0x0080 - 0x0000)
struct Prop_funGun_flaregun_C_FireBulletSecondary final
{
public:
	struct FVector                                CallFunc_RandomUnitVector_ReturnValue;             // 0x0000(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x000C(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetForwardVector_ReturnValue;             // 0x0018(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x0030(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0040(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AProp_flareGren_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Prop_funGun_flaregun_C_FireBulletSecondary) == 0x000010, "Wrong alignment on Prop_funGun_flaregun_C_FireBulletSecondary");
static_assert(sizeof(Prop_funGun_flaregun_C_FireBulletSecondary) == 0x000080, "Wrong size on Prop_funGun_flaregun_C_FireBulletSecondary");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletSecondary, CallFunc_RandomUnitVector_ReturnValue) == 0x000000, "Member 'Prop_funGun_flaregun_C_FireBulletSecondary::CallFunc_RandomUnitVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletSecondary, CallFunc_Multiply_VectorFloat_ReturnValue) == 0x00000C, "Member 'Prop_funGun_flaregun_C_FireBulletSecondary::CallFunc_Multiply_VectorFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletSecondary, CallFunc_GetForwardVector_ReturnValue) == 0x000018, "Member 'Prop_funGun_flaregun_C_FireBulletSecondary::CallFunc_GetForwardVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletSecondary, CallFunc_K2_GetComponentLocation_ReturnValue) == 0x000024, "Member 'Prop_funGun_flaregun_C_FireBulletSecondary::CallFunc_K2_GetComponentLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletSecondary, CallFunc_Multiply_VectorFloat_ReturnValue_1) == 0x000030, "Member 'Prop_funGun_flaregun_C_FireBulletSecondary::CallFunc_Multiply_VectorFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletSecondary, CallFunc_MakeTransform_ReturnValue) == 0x000040, "Member 'Prop_funGun_flaregun_C_FireBulletSecondary::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletSecondary, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000070, "Member 'Prop_funGun_flaregun_C_FireBulletSecondary::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Prop_funGun_flaregun_C_FireBulletSecondary, CallFunc_FinishSpawningActor_ReturnValue) == 0x000078, "Member 'Prop_funGun_flaregun_C_FireBulletSecondary::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

}

