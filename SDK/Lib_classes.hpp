#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lib

#include "Basic.hpp"

#include "Enum_action_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Enum_signalResponse_structs.hpp"
#include "Enum_notifyType_structs.hpp"
#include "Enum_difficulty_structs.hpp"
#include "Enum_emailChars_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass lib.lib_C
// 0x0000 (0x0028 - 0x0028)
class ULib_C final : public UBlueprintFunctionLibrary
{
public:
	static void PhysSound(class UPhysicalMaterial* PhysMat, class UObject* __WorldContext, struct FStruct_physSound* Return);
	static void GetMainGamemode(class UObject* __WorldContext, class AMainGamemode_C** AsMain_Gamemode);
	static void GetMainPlayer(class UObject* __WorldContext, class AMainPlayer_C** AsMain_Player);
	static void SetSettings_d(class UObject* __WorldContext);
	static void Fourdir(const struct FVector& In, class UObject* __WorldContext, struct FVector* Return);
	static void GetSatelliteName(int32 Param_Index, class UObject* __WorldContext, class FText* Return);
	static void RandObject_all(class UObject* __WorldContext, class FName* Return);
	static void GetNRT(const class USoundBase*& Key, class UObject* __WorldContext, class UConstantQNRT** NewParam);
	static void SetButtonOffset(class USceneComponent* Comp, float Z, class UObject* __WorldContext);
	static void AddPoints(int32 Add, class UObject* __WorldContext);
	static void GetPoints(class UObject* __WorldContext, int32* Points);
	static void CountServerEff(TArray<class AServerBox_C*>& Servers, int32 Type, class UObject* __WorldContext, float* Eff);
	static void GetServerTypes(TArray<class AServerBox_C*>& Servers, int32 Type, class UObject* __WorldContext, TArray<class AServerBox_C*>* Eff);
	static void RandObject_acc(class UObject* __WorldContext, class FName* Return);
	static void WeightedRandom(TArray<float>& Weights, class UObject* __WorldContext, int32* Param_Index);
	static void GetWeightedObject(class UObject* __WorldContext, class FName* Output);
	static void FindNRT(const class USoundBase*& Key, class UObject* __WorldContext, TSoftObjectPtr<class UObject>* Soft);
	static void GetMainGameInstance(class UObject* __WorldContext, class UGameInst_C** AsGame_Inst);
	static void SetButtonRot(class USceneComponent* Comp, float Z, class UObject* __WorldContext);
	static void SetSignalID(struct FStruct_signalDataDynamic& Data, class UObject* __WorldContext, struct FStruct_signalDataDynamic* OutputPin);
	static void SetSettings(class UObject* __WorldContext);
	static void RunSubtitle(class FName RowName, class UAudioComponent* AudioComponent, bool CustomTime, float Speed, float Time, class UObject* __WorldContext);
	static void AddHint(const class FText& InText, Enum_notifyType Type, class UObject* __WorldContext);
	static void IsBuoyant_(class AActor* Actor, class UObject* __WorldContext, bool* buoyant_);
	static void AddEmail(class UTexture2D* Item_Pfp, Enum_emailChars Item_Username1, const class FText& Item_Topic, const class FText& Item_Text, class UObject* __WorldContext);
	static void Add_task(const struct FStruct_task& Task, const class FText& Suff, class UObject* __WorldContext);
	static void IsDreaming(class UObject* __WorldContext, bool* Dreaming);
	static void SavToObj(const struct FStruct_save& Sav, class UObject* __WorldContext, struct FStruct_object* Obj);
	static void ObjToSav(const struct FStruct_object& Sav, class UObject* __WorldContext, struct FStruct_save* Obj);
	static void ProgressAchievement(const class FName Achievement, bool Popup, class UObject* __WorldContext);
	static void ProgressAdvancement(const class FName Advancement, class UObject* __WorldContext, bool* Finished, class FName* Param_Name);
	static void NameLocText(Enum_action Action, class UObject* __WorldContext, class FString* Strng);
	static bool buttonLoc(class FName Tag, class UObject* __WorldContext, class FString* Return);
	static bool HasAchievement(class FName Achievement, class UObject* __WorldContext);
	static void GetResponse(Enum_signalResponse Response, const class FString& Special, class UObject* __WorldContext, class FText* Topic, class FText* Desc, Enum_emailChars* Character, class UTexture2D** Avatar);
	static void GetResponsePriority(Enum_signalResponse Response, class UObject* __WorldContext, int32* Priority);
	static class UMaterialInterface* GetCarpet(int32 Param_Index, class UObject* __WorldContext);
	static bool PropToObject(class FName Prop, class UObject* __WorldContext, struct FStruct_food1* FoodData, class UClass** Object, bool* Isfood, struct FStruct_prop* PropData);
	static void GetPic(int32 Dim, int32 Param_Index, class UObject* __WorldContext, class UTexture2D** Tex);
	static void GetCusPic(int32 Dim, int32 Param_Index, class UObject* __WorldContext, class UTexture2D** Tex, TArray<class UTexture2D*>* Arra);
	static void GameVersion(const class FString& Prefix, const class FString& Suffix, class UObject* __WorldContext, class FString* Version);
	static void SetEvent(bool IsEventActive, class UObject* __WorldContext);
	static void GetEvent(class UObject* __WorldContext, bool* IsEventActive);
	static void Get_Key_Bind(const struct FKey& Key, class UObject* __WorldContext, struct FKey* bind);
	static void GetBoyoancy(class UPhysicalMaterial* Phys, class UObject* __WorldContext, float* Value);
	static void PropDescription(const class FString& Prop, bool AddName, class UObject* __WorldContext, class FText* Desc, class FText* Param_Name);
	static void PropToIcon(const class FString& ItemToFind, class UObject* __WorldContext, class UTexture2D** Output);
	static void PropToDynamic(const struct FStruct_save& Data, class UObject* __WorldContext, struct FStruct_propDynamic* Equip);
	static void DynamicToProp(const struct FStruct_propDynamic& Data, class UObject* __WorldContext, struct FStruct_save* Equip);
	static void GetSaveSlot(class UObject* __WorldContext, class USaveSlot_C** SaveSlot);
	static void HasEquipment(class FName Param_Name, class UObject* __WorldContext, bool* Return);
	static void RecountChildren(class UPanelWidget* Target, class UObject* __WorldContext);
	static void RecountChildren_reverse(class UPanelWidget* Target, class UObject* __WorldContext);
	static void GetMainSave(class UObject* __WorldContext, class USave_main_C** Save_main);
	static void ClosestActor(TArray<class AActor*>& Actors, const struct FVector& Location, class UObject* __WorldContext, class AActor** Nearest);
	static void ClosestClosedDoor(TArray<class AActor*>& Actors, const struct FVector& Location, class UObject* __WorldContext, class ADoor_C** Output);
	static void ballistic(const struct FVector& A, const struct FVector& B, float H, class UObject* __WorldContext, struct FVector* Velocity);
	static void End(class UObject* __WorldContext);
	static void HiddenSpawnMenu(const struct FStruct_prop& Item, class UObject* __WorldContext, bool* Hidden, bool* Key);
	static void UpdateCollision(class UPrimitiveComponent* Component, class UObject* __WorldContext);
	static void AchievementObjects(const struct FStruct_prop& Struct_prop, class UObject* __WorldContext, bool* Hidden);
	static void IsMature(class UObject* __WorldContext, bool* Mature);
	static void UserAssetFolder(class UObject* __WorldContext, class FString* Path);
	static void NameToSignal(class FName Param_Name, class UObject* __WorldContext, struct FStruct_signal_data2* Data);
	static void SignalToDynamic(const struct FStruct_signal_data2& Data, class UObject* __WorldContext, struct FStruct_signalDataDynamic* Dynamic);
	static void DynamicToSignal(const struct FStruct_signalDataDynamic& Dynamic, class UObject* __WorldContext, struct FStruct_signal_data2* Data);
	static void IsSignalUnique(class FName Param_Name, class UObject* __WorldContext, bool* Unique);
	static void RadioStations(class UObject* __WorldContext, TArray<class FString>* StringArray);
	static void IsGeneratorsFine(class UObject* __WorldContext, bool* Fine);
	static void IsFlammable(const class UPhysicalMaterial*& Phys, class UObject* __WorldContext, bool* Param_IsFlammable);
	static void FindInventoryObject(class UClass* B, bool AutoRemove, bool RemoveVol, class UObject* __WorldContext, int32* Array_Index, struct FStruct_save* Array_Element, bool* Return);
	static void GetPosters(int32 Type, class UObject* __WorldContext, class UTexture2D** Output);
	static bool IsUnderwater(const class AActor*& ItemToFind, class UObject* __WorldContext);
	static void ForbiddenMailProps(class UObject* __WorldContext, TArray<class FName>* Props);
	static void GetKeybindFromName(const class FName Param_Name, class UObject* __WorldContext, struct FKey* bind);
	static void AddGloss(class FName Param_Name, int32 Level, class UObject* __WorldContext);
	static void GenerateAssetDirectory(class UObject* __WorldContext, class FString* Path);
	static void Get_Volume(const class UStaticMesh* Mesh, const class FString& Param_Name, class UObject* __WorldContext, float* Volume, float* Mass);
	static void Step(class ACharacter* Character, float Z_offset, class AActor* CallActor, class UObject* __WorldContext);
	static void GetAttachActorRoot(class AActor* Actor, class UObject* __WorldContext, class AActor** RootActor);
	static void IsFunny(class UObject* __WorldContext, bool* Param_IsFunny);
	static void AriralRep(float Rep, class UObject* __WorldContext);
	static void FindInventoryObject_fromSlot(struct FStruct_save& Origin, TArray<struct FStruct_save>& Array, class UClass* B, bool AutoRemove, bool RemoveVol, bool RemoveIndex, class UObject* __WorldContext, int32* Array_Index, struct FStruct_save* Array_Element, bool* Return);
	static class FString Hiddens(class UObject* __WorldContext, TArray<bool>* Param_Hiddens);
	static void CustomWall_getBricks(const struct FVector& ActorScale, int32 Shape, class UObject* __WorldContext, float* ToCeil);
	static void CustomWall_shape(int32 Type, class UObject* __WorldContext, class UStaticMesh** Shape);
	static void CustomWall_material(int32 Type, class UObject* __WorldContext, class UMaterialInterface** Material, class FName* Drop, class FName* Requirement);
	static void SellObject(class FName Object, bool OnlyShop, class UObject* __WorldContext, int32* Points, bool* Sold);
	static void SafeAsProp(class AActor* Actor, class UObject* __WorldContext, bool* IsValid, class AProp_C** Prop);
	static void DetecCyr(const class FText& Text, class UObject* __WorldContext, bool* Return, class FString* Str1);
	static void Lag(class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"lib_C">();
	}
	static class ULib_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULib_C>();
	}
};
static_assert(alignof(ULib_C) == 0x000008, "Wrong alignment on ULib_C");
static_assert(sizeof(ULib_C) == 0x000028, "Wrong size on ULib_C");

}
