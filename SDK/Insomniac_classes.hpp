#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Insomniac

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AIModule_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass insomniac.insomniac_C
// 0x0070 (0x0530 - 0x04C0)
class AInsomniac_C : public ACharacter
{
public:
	uint8                                         Pad_2816[0x8];                                     // 0x04B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                    Eyes;                                              // 0x04C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                    SpringArm;                                         // 0x04D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         A_a_F8DCDEF449034E5490B096AE42811C1E;              // 0x04D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            A__Direction_F8DCDEF449034E5490B096AE42811C1E;     // 0x04DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2817[0x3];                                     // 0x04DD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     A;                                                 // 0x04E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInsomniac_Skeleton_AnimBlueprint_C*    Anim;                                              // 0x04E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Alpha;                                             // 0x04F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2818[0x4];                                     // 0x04F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dynmat_body;                                       // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Walking;                                           // 0x0500(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2819[0x7];                                     // 0x0501(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dynmat_eyes;                                       // 0x0508(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                LastPoint;                                         // 0x0510(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Spooker;                                           // 0x051C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_281A[0x3];                                     // 0x051D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Engage;                                            // 0x0520(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          NewVar_0;                                          // 0x0524(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_insomniac(int32 EntryPoint);
	void StartWalk();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnCompleted_1A9050824C2776F602A04D9627382DA6(class FName NotifyName);
	void OnBlendOut_1A9050824C2776F602A04D9627382DA6(class FName NotifyName);
	void OnInterrupted_1A9050824C2776F602A04D9627382DA6(class FName NotifyName);
	void OnNotifyBegin_1A9050824C2776F602A04D9627382DA6(class FName NotifyName);
	void OnNotifyEnd_1A9050824C2776F602A04D9627382DA6(class FName NotifyName);
	void OnSuccess_B694B567498643F56EBCC5B4D7CD8C9D(EPathFollowingResult MovementResult);
	void OnFail_B694B567498643F56EBCC5B4D7CD8C9D(EPathFollowingResult MovementResult);
	void A__UpdateFunc();
	void A__FinishedFunc();
	void MakeMats();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"insomniac_C">();
	}
	static class AInsomniac_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AInsomniac_C>();
	}
};
static_assert(alignof(AInsomniac_C) == 0x000010, "Wrong alignment on AInsomniac_C");
static_assert(sizeof(AInsomniac_C) == 0x000530, "Wrong size on AInsomniac_C");
static_assert(offsetof(AInsomniac_C, UberGraphFrame) == 0x0004C0, "Member 'AInsomniac_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AInsomniac_C, Eyes) == 0x0004C8, "Member 'AInsomniac_C::Eyes' has a wrong offset!");
static_assert(offsetof(AInsomniac_C, SpringArm) == 0x0004D0, "Member 'AInsomniac_C::SpringArm' has a wrong offset!");
static_assert(offsetof(AInsomniac_C, A_a_F8DCDEF449034E5490B096AE42811C1E) == 0x0004D8, "Member 'AInsomniac_C::A_a_F8DCDEF449034E5490B096AE42811C1E' has a wrong offset!");
static_assert(offsetof(AInsomniac_C, A__Direction_F8DCDEF449034E5490B096AE42811C1E) == 0x0004DC, "Member 'AInsomniac_C::A__Direction_F8DCDEF449034E5490B096AE42811C1E' has a wrong offset!");
static_assert(offsetof(AInsomniac_C, A) == 0x0004E0, "Member 'AInsomniac_C::A' has a wrong offset!");
static_assert(offsetof(AInsomniac_C, Anim) == 0x0004E8, "Member 'AInsomniac_C::Anim' has a wrong offset!");
static_assert(offsetof(AInsomniac_C, Alpha) == 0x0004F0, "Member 'AInsomniac_C::Alpha' has a wrong offset!");
static_assert(offsetof(AInsomniac_C, Dynmat_body) == 0x0004F8, "Member 'AInsomniac_C::Dynmat_body' has a wrong offset!");
static_assert(offsetof(AInsomniac_C, Walking) == 0x000500, "Member 'AInsomniac_C::Walking' has a wrong offset!");
static_assert(offsetof(AInsomniac_C, Dynmat_eyes) == 0x000508, "Member 'AInsomniac_C::Dynmat_eyes' has a wrong offset!");
static_assert(offsetof(AInsomniac_C, LastPoint) == 0x000510, "Member 'AInsomniac_C::LastPoint' has a wrong offset!");
static_assert(offsetof(AInsomniac_C, Spooker) == 0x00051C, "Member 'AInsomniac_C::Spooker' has a wrong offset!");
static_assert(offsetof(AInsomniac_C, Engage) == 0x000520, "Member 'AInsomniac_C::Engage' has a wrong offset!");
static_assert(offsetof(AInsomniac_C, NewVar_0) == 0x000524, "Member 'AInsomniac_C::NewVar_0' has a wrong offset!");

}
