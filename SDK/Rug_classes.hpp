#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Rug

#include "Basic.hpp"

#include "Enum_interactionActions_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Actor_save_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass rug.rug_c
// 0x0088 (0x02D0 - 0x0248)
class ARug_c final : public AActor_save_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_Rug_c;                              // 0x0248(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Box;                                               // 0x0250(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProceduralMeshComponent*               ProceduralMesh;                                    // 0x0258(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              Res;                                               // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        Ps;                                                // 0x0268(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 Ris;                                               // 0x0278(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FVector2D>                      UVs;                                               // 0x0288(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Type;                                              // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                         R;                                                 // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Name_Rug_c;                                        // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          Smoo;                                              // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2E59[0x3];                                     // 0x02A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Smh;                                               // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Skin;                                              // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_2E5A[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dynmat;                                            // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                        Norms;                                             // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_rug(int32 EntryPoint);
	void ReceiveBeginPlay();
	void UpdateStrAgl();
	void DamageByPlayer(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void Thrown(class AMainPlayer_C* Player);
	void broken_fire();
	void broken();
	void SendName(class FName Param_Name);
	void Kicked(bool Kick);
	void Player_use(class AMainPlayer_C* Player, const struct FHitResult& Hit);
	void DriveDetached();
	void Gen();
	void Check(const struct FVector& InputPin, const struct FVector& Curr, struct FVector* OutputPin, int32* Is);
	void Smooh(TArray<struct FVector>& A1, TArray<struct FVector>* b1);
	bool CheckWall(const struct FVector& A, bool Condition, class UPrimitiveComponent* Target, const struct FVector& B, struct FVector* Location);
	void IsValid(int32 ID, int32 Max, const struct FVector& Def, struct FVector* Output);
	void SetSkin();
	void AsProp(class AProp_C** Return);
	void CanPickup(bool* Return);
	void NoRespawn(bool Param_NoRespawn, bool* Return);
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace);
	void IsButtonUsed(bool* Failed);
	void CanBePutInContainer(bool* Return);
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Hit, int32 Param_Index, Enum_interactionActions Action);
	void UserConstructionScript();
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"rug_c">();
	}
	static class ARug_c* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARug_c>();
	}
};
static_assert(alignof(ARug_c) == 0x000008, "Wrong alignment on ARug_c");
static_assert(sizeof(ARug_c) == 0x0002D0, "Wrong size on ARug_c");
static_assert(offsetof(ARug_c, UberGraphFrame_Rug_c) == 0x000248, "Member 'ARug_c::UberGraphFrame_Rug_c' has a wrong offset!");
static_assert(offsetof(ARug_c, Box) == 0x000250, "Member 'ARug_c::Box' has a wrong offset!");
static_assert(offsetof(ARug_c, ProceduralMesh) == 0x000258, "Member 'ARug_c::ProceduralMesh' has a wrong offset!");
static_assert(offsetof(ARug_c, Res) == 0x000260, "Member 'ARug_c::Res' has a wrong offset!");
static_assert(offsetof(ARug_c, Ps) == 0x000268, "Member 'ARug_c::Ps' has a wrong offset!");
static_assert(offsetof(ARug_c, Ris) == 0x000278, "Member 'ARug_c::Ris' has a wrong offset!");
static_assert(offsetof(ARug_c, UVs) == 0x000288, "Member 'ARug_c::UVs' has a wrong offset!");
static_assert(offsetof(ARug_c, Type) == 0x000298, "Member 'ARug_c::Type' has a wrong offset!");
static_assert(offsetof(ARug_c, R) == 0x00029C, "Member 'ARug_c::R' has a wrong offset!");
static_assert(offsetof(ARug_c, Name_Rug_c) == 0x0002A0, "Member 'ARug_c::Name_Rug_c' has a wrong offset!");
static_assert(offsetof(ARug_c, Smoo) == 0x0002A8, "Member 'ARug_c::Smoo' has a wrong offset!");
static_assert(offsetof(ARug_c, Smh) == 0x0002AC, "Member 'ARug_c::Smh' has a wrong offset!");
static_assert(offsetof(ARug_c, Skin) == 0x0002B0, "Member 'ARug_c::Skin' has a wrong offset!");
static_assert(offsetof(ARug_c, Dynmat) == 0x0002B8, "Member 'ARug_c::Dynmat' has a wrong offset!");
static_assert(offsetof(ARug_c, Norms) == 0x0002C0, "Member 'ARug_c::Norms' has a wrong offset!");

}
