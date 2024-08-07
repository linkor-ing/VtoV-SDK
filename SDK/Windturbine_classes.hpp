#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Windturbine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Actor_save_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass windturbine.windturbine_C
// 0x00E0 (0x0328 - 0x0248)
class AWindturbine_C final : public AActor_save_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Windturbine_C;                      // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      boundCaps;                                         // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Motor;                                             // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MotorH;                                            // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SpawnAudioWoosh;                                   // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Ladder3;                                           // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Indoors3;                                          // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Indoors2;                                          // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Indoors1;                                          // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Door;                                              // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Ladder2;                                           // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Ladder1;                                           // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Axis_motor1;                                       // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Axis_blades;                                       // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Axis_motor;                                        // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MotorDoor;                                         // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   MotorIn;                                           // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   blades;                                            // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Head;                                              // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Axis_room;                                         // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Base;                                              // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         Alpha_blades;                                      // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Speed;                                             // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeadRotation;                                      // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatSpringState                      HeadSpring;                                        // 0x02FC(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         TargetRot;                                         // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Woosh;                                             // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_30C[0x4];                                      // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AWindturbine_C*>                 Subs;                                              // 0x0310(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	float                                         Mult;                                              // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void GetData(struct FStruct_save* Data);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GatherDataFromKey(bool* Gather);
	void SetTargetRots(float Param_TargetRot);
	void SetRots();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void SetRandRot();
	void ExecuteUbergraph_windturbine(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"windturbine_C">();
	}
	static class AWindturbine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWindturbine_C>();
	}
};
static_assert(alignof(AWindturbine_C) == 0x000008, "Wrong alignment on AWindturbine_C");
static_assert(sizeof(AWindturbine_C) == 0x000328, "Wrong size on AWindturbine_C");
static_assert(offsetof(AWindturbine_C, UberGraphFrame_Windturbine_C) == 0x000248, "Member 'AWindturbine_C::UberGraphFrame_Windturbine_C' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, boundCaps) == 0x000250, "Member 'AWindturbine_C::boundCaps' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Motor) == 0x000258, "Member 'AWindturbine_C::Motor' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, MotorH) == 0x000260, "Member 'AWindturbine_C::MotorH' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, SpawnAudioWoosh) == 0x000268, "Member 'AWindturbine_C::SpawnAudioWoosh' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Ladder3) == 0x000270, "Member 'AWindturbine_C::Ladder3' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Indoors3) == 0x000278, "Member 'AWindturbine_C::Indoors3' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Indoors2) == 0x000280, "Member 'AWindturbine_C::Indoors2' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Indoors1) == 0x000288, "Member 'AWindturbine_C::Indoors1' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Door) == 0x000290, "Member 'AWindturbine_C::Door' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Ladder2) == 0x000298, "Member 'AWindturbine_C::Ladder2' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Ladder1) == 0x0002A0, "Member 'AWindturbine_C::Ladder1' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Axis_motor1) == 0x0002A8, "Member 'AWindturbine_C::Axis_motor1' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Axis_blades) == 0x0002B0, "Member 'AWindturbine_C::Axis_blades' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Axis_motor) == 0x0002B8, "Member 'AWindturbine_C::Axis_motor' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, MotorDoor) == 0x0002C0, "Member 'AWindturbine_C::MotorDoor' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, MotorIn) == 0x0002C8, "Member 'AWindturbine_C::MotorIn' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, blades) == 0x0002D0, "Member 'AWindturbine_C::blades' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Head) == 0x0002D8, "Member 'AWindturbine_C::Head' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Axis_room) == 0x0002E0, "Member 'AWindturbine_C::Axis_room' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Base) == 0x0002E8, "Member 'AWindturbine_C::Base' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Alpha_blades) == 0x0002F0, "Member 'AWindturbine_C::Alpha_blades' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Speed) == 0x0002F4, "Member 'AWindturbine_C::Speed' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, HeadRotation) == 0x0002F8, "Member 'AWindturbine_C::HeadRotation' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, HeadSpring) == 0x0002FC, "Member 'AWindturbine_C::HeadSpring' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, TargetRot) == 0x000304, "Member 'AWindturbine_C::TargetRot' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Woosh) == 0x000308, "Member 'AWindturbine_C::Woosh' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Subs) == 0x000310, "Member 'AWindturbine_C::Subs' has a wrong offset!");
static_assert(offsetof(AWindturbine_C, Mult) == 0x000320, "Member 'AWindturbine_C::Mult' has a wrong offset!");

}

