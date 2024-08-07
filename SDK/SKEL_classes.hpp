#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SKEL

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SKEL.SKEL_C
// 0x0050 (0x0270 - 0x0220)
class ASKEL_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         A_skulls_72FD817B469A2AD948F6D18784C4B049;         // 0x0238(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         A_skel_72FD817B469A2AD948F6D18784C4B049;           // 0x023C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         A_pp_72FD817B469A2AD948F6D18784C4B049;             // 0x0240(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         A_ween_72FD817B469A2AD948F6D18784C4B049;           // 0x0244(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         A_appears_72FD817B469A2AD948F6D18784C4B049;        // 0x0248(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         A_skele_72FD817B469A2AD948F6D18784C4B049;          // 0x024C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            A__Direction_72FD817B469A2AD948F6D18784C4B049;     // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_251[0x7];                                      // 0x0251(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     A;                                                 // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USKELEON_C*                             SKEL;                                              // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Ime;                                               // 0x0268(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Im;                                                // 0x026C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_SKEL(int32 EntryPoint);
	void BndEvt__Audio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void A__UpdateFunc();
	void A__FinishedFunc();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SKEL_C">();
	}
	static class ASKEL_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASKEL_C>();
	}
};
static_assert(alignof(ASKEL_C) == 0x000008, "Wrong alignment on ASKEL_C");
static_assert(sizeof(ASKEL_C) == 0x000270, "Wrong size on ASKEL_C");
static_assert(offsetof(ASKEL_C, UberGraphFrame) == 0x000220, "Member 'ASKEL_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ASKEL_C, Audio) == 0x000228, "Member 'ASKEL_C::Audio' has a wrong offset!");
static_assert(offsetof(ASKEL_C, DefaultSceneRoot) == 0x000230, "Member 'ASKEL_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ASKEL_C, A_skulls_72FD817B469A2AD948F6D18784C4B049) == 0x000238, "Member 'ASKEL_C::A_skulls_72FD817B469A2AD948F6D18784C4B049' has a wrong offset!");
static_assert(offsetof(ASKEL_C, A_skel_72FD817B469A2AD948F6D18784C4B049) == 0x00023C, "Member 'ASKEL_C::A_skel_72FD817B469A2AD948F6D18784C4B049' has a wrong offset!");
static_assert(offsetof(ASKEL_C, A_pp_72FD817B469A2AD948F6D18784C4B049) == 0x000240, "Member 'ASKEL_C::A_pp_72FD817B469A2AD948F6D18784C4B049' has a wrong offset!");
static_assert(offsetof(ASKEL_C, A_ween_72FD817B469A2AD948F6D18784C4B049) == 0x000244, "Member 'ASKEL_C::A_ween_72FD817B469A2AD948F6D18784C4B049' has a wrong offset!");
static_assert(offsetof(ASKEL_C, A_appears_72FD817B469A2AD948F6D18784C4B049) == 0x000248, "Member 'ASKEL_C::A_appears_72FD817B469A2AD948F6D18784C4B049' has a wrong offset!");
static_assert(offsetof(ASKEL_C, A_skele_72FD817B469A2AD948F6D18784C4B049) == 0x00024C, "Member 'ASKEL_C::A_skele_72FD817B469A2AD948F6D18784C4B049' has a wrong offset!");
static_assert(offsetof(ASKEL_C, A__Direction_72FD817B469A2AD948F6D18784C4B049) == 0x000250, "Member 'ASKEL_C::A__Direction_72FD817B469A2AD948F6D18784C4B049' has a wrong offset!");
static_assert(offsetof(ASKEL_C, A) == 0x000258, "Member 'ASKEL_C::A' has a wrong offset!");
static_assert(offsetof(ASKEL_C, SKEL) == 0x000260, "Member 'ASKEL_C::SKEL' has a wrong offset!");
static_assert(offsetof(ASKEL_C, Ime) == 0x000268, "Member 'ASKEL_C::Ime' has a wrong offset!");
static_assert(offsetof(ASKEL_C, Im) == 0x00026C, "Member 'ASKEL_C::Im' has a wrong offset!");

}
