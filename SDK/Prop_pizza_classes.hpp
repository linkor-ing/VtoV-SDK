#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Prop_pizza

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Prop_classes.hpp"
#include "Enum_interactionActions_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass prop_pizza.prop_pizza_C
// 0x0058 (0x03C0 - 0x0368)
class AProp_pizza_C : public AProp_C
{
public:
	uint8                                         Pad_1070[0x7];                                     // 0x0361(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_Prop_pizza_C;                       // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Pizzaslices_slice6;                                // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pizzaslices_slice5;                                // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pizzaslices_slice4;                                // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pizzaslices_slice3;                                // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pizzaslices_slice2;                                // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Pizzaslices_slice1;                                // 0x0398(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SkeletalMesh;                                      // 0x03A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          Open;                                              // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Opened;                                            // 0x03A9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1071[0x2];                                     // 0x03AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Health;                                            // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>           Slices;                                            // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	void ExecuteUbergraph_prop_pizza(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ActionOptionIndex(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, int32 Param_Index, Enum_interactionActions Action);
	void Openanim();
	void OnCompleted_65498482477B12E33D62FBBDD42CD9F5(class FName NotifyName);
	void OnBlendOut_65498482477B12E33D62FBBDD42CD9F5(class FName NotifyName);
	void OnInterrupted_65498482477B12E33D62FBBDD42CD9F5(class FName NotifyName);
	void OnNotifyBegin_65498482477B12E33D62FBBDD42CD9F5(class FName NotifyName);
	void OnNotifyEnd_65498482477B12E33D62FBBDD42CD9F5(class FName NotifyName);
	void OnCompleted_48B260CB4441F19A490ABE87A199EFFE(class FName NotifyName);
	void OnBlendOut_48B260CB4441F19A490ABE87A199EFFE(class FName NotifyName);
	void OnInterrupted_48B260CB4441F19A490ABE87A199EFFE(class FName NotifyName);
	void OnNotifyBegin_48B260CB4441F19A490ABE87A199EFFE(class FName NotifyName);
	void OnNotifyEnd_48B260CB4441F19A490ABE87A199EFFE(class FName NotifyName);
	void UpdSlices();
	void UserConstructionScript();
	void LookAt(class AMainPlayer_C* Player, const struct FHitResult& Param_Hit, bool* Return, class FString* Text, class UPrimitiveComponent** boundObjectReplace);
	void LoadData(const struct FStruct_save& Data, bool* Return);
	void GetData(struct FStruct_save* Data);
	void GetActionOptions(class AMainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, TArray<class FString>* Options, TArray<Enum_interactionActions>* Options_enum, TArray<class FText>* OptionsNamesOverlay);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"prop_pizza_C">();
	}
	static class AProp_pizza_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AProp_pizza_C>();
	}
};
static_assert(alignof(AProp_pizza_C) == 0x000008, "Wrong alignment on AProp_pizza_C");
static_assert(sizeof(AProp_pizza_C) == 0x0003C0, "Wrong size on AProp_pizza_C");
static_assert(offsetof(AProp_pizza_C, UberGraphFrame_Prop_pizza_C) == 0x000368, "Member 'AProp_pizza_C::UberGraphFrame_Prop_pizza_C' has a wrong offset!");
static_assert(offsetof(AProp_pizza_C, Pizzaslices_slice6) == 0x000370, "Member 'AProp_pizza_C::Pizzaslices_slice6' has a wrong offset!");
static_assert(offsetof(AProp_pizza_C, Pizzaslices_slice5) == 0x000378, "Member 'AProp_pizza_C::Pizzaslices_slice5' has a wrong offset!");
static_assert(offsetof(AProp_pizza_C, Pizzaslices_slice4) == 0x000380, "Member 'AProp_pizza_C::Pizzaslices_slice4' has a wrong offset!");
static_assert(offsetof(AProp_pizza_C, Pizzaslices_slice3) == 0x000388, "Member 'AProp_pizza_C::Pizzaslices_slice3' has a wrong offset!");
static_assert(offsetof(AProp_pizza_C, Pizzaslices_slice2) == 0x000390, "Member 'AProp_pizza_C::Pizzaslices_slice2' has a wrong offset!");
static_assert(offsetof(AProp_pizza_C, Pizzaslices_slice1) == 0x000398, "Member 'AProp_pizza_C::Pizzaslices_slice1' has a wrong offset!");
static_assert(offsetof(AProp_pizza_C, SkeletalMesh) == 0x0003A0, "Member 'AProp_pizza_C::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(AProp_pizza_C, Open) == 0x0003A8, "Member 'AProp_pizza_C::Open' has a wrong offset!");
static_assert(offsetof(AProp_pizza_C, Opened) == 0x0003A9, "Member 'AProp_pizza_C::Opened' has a wrong offset!");
static_assert(offsetof(AProp_pizza_C, Health) == 0x0003AC, "Member 'AProp_pizza_C::Health' has a wrong offset!");
static_assert(offsetof(AProp_pizza_C, Slices) == 0x0003B0, "Member 'AProp_pizza_C::Slices' has a wrong offset!");

}
