#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LaserEmitter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass laserEmitter.laserEmitter_C
// 0x0098 (0x02B8 - 0x0220)
class ALaserEmitter_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0220(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*               EndEffect;                                         // 0x0228(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0230(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0238(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UParticleSystemComponent*>       beams;                                             // 0x0240(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	float                                         Length;                                            // 0x0250(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NumOfHits;                                         // 0x0254(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UPointLightComponent*>           Lights;                                            // 0x0258(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class AActor*>                         Ignores;                                           // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                          IgnorePlayer;                                      // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RestrictReflections;                               // 0x0279(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2AA3[0x2];                                     // 0x027A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Damage;                                            // 0x027C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DamageDelay;                                       // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2AA4[0x4];                                     // 0x0284(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 DaamgedActor;                                      // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                        LaserBeam;                                         // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Color;                                             // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                         HitActors;                                         // 0x02A8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)

public:
	void ExecuteUbergraph_laserEmitter(int32 EntryPoint);
	void ReceiveDestroyed();
	void Damaging();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void DamageActor(class AActor* Param_DaamgedActor);
	void UserConstructionScript();
	void FireLaser();
	void GenerateEffect(TArray<struct FVector>& Hits);
	void UpdateLightElement(class UPointLightComponent* InputPin, const struct FVector& InputPin2, const struct FVector& InputPin3);
	void FinishLaser();
	void ResetIgnores();
	void Slerp(const struct FVector& Direction, const struct FVector& Normal, float Alpha, struct FVector* Res);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"laserEmitter_C">();
	}
	static class ALaserEmitter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALaserEmitter_C>();
	}
};
static_assert(alignof(ALaserEmitter_C) == 0x000008, "Wrong alignment on ALaserEmitter_C");
static_assert(sizeof(ALaserEmitter_C) == 0x0002B8, "Wrong size on ALaserEmitter_C");
static_assert(offsetof(ALaserEmitter_C, UberGraphFrame) == 0x000220, "Member 'ALaserEmitter_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, EndEffect) == 0x000228, "Member 'ALaserEmitter_C::EndEffect' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, Arrow) == 0x000230, "Member 'ALaserEmitter_C::Arrow' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, DefaultSceneRoot) == 0x000238, "Member 'ALaserEmitter_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, beams) == 0x000240, "Member 'ALaserEmitter_C::beams' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, Length) == 0x000250, "Member 'ALaserEmitter_C::Length' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, NumOfHits) == 0x000254, "Member 'ALaserEmitter_C::NumOfHits' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, Lights) == 0x000258, "Member 'ALaserEmitter_C::Lights' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, Ignores) == 0x000268, "Member 'ALaserEmitter_C::Ignores' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, IgnorePlayer) == 0x000278, "Member 'ALaserEmitter_C::IgnorePlayer' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, RestrictReflections) == 0x000279, "Member 'ALaserEmitter_C::RestrictReflections' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, Damage) == 0x00027C, "Member 'ALaserEmitter_C::Damage' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, DamageDelay) == 0x000280, "Member 'ALaserEmitter_C::DamageDelay' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, DaamgedActor) == 0x000288, "Member 'ALaserEmitter_C::DaamgedActor' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, LaserBeam) == 0x000290, "Member 'ALaserEmitter_C::LaserBeam' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, Color) == 0x000298, "Member 'ALaserEmitter_C::Color' has a wrong offset!");
static_assert(offsetof(ALaserEmitter_C, HitActors) == 0x0002A8, "Member 'ALaserEmitter_C::HitActors' has a wrong offset!");

}

