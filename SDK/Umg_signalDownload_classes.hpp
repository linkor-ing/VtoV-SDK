#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Umg_signalDownload

#include "Basic.hpp"

#include "Struct_spaceObject_structs.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Enum_quality_structs.hpp"
#include "Struct_signalDataDynamic_structs.hpp"
#include "Enum_freq_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "Enum_objectType_structs.hpp"
#include "Enum_difficulty_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass umg_signalDownload.umg_signalDownload_C
// 0x0278 (0x04D8 - 0x0260)
class UUmg_signalDownload_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBackgroundBlur*                        BackgroundBlur_68;                                 // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canv_nosign;                                       // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_19;                                          // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_125;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_activated;                                     // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_frequency;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_image;                                         // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_polarity;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_consum;                                       // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_DEffic;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_det;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_FFilter_data;                                 // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_FFilter_offset;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_FFilter_speed;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_object;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_PFilter_data;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_PFilter_offset;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_PFilter_speed;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_SDownloaded;                                  // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_SFrequency;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_sQuality;                                     // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_SSize;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         Alpha;                                             // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2131[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Signal_image;                                      // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat_image;                                      // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Singal_sound;                                      // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Signal_text;                                       // 0x0338(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         Duration;                                          // 0x0350(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2132[0x4];                                     // 0x0354(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APanel_download_C*                      Panel;                                             // 0x0358(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Decoder;                                           // 0x0360(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2133[0x4];                                     // 0x0364(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_spaceObject                    Data;                                              // 0x0368(0x0068)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                 Prev;                                              // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvas*                                Canv;                                              // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              Size;                                              // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrFilter_speed;                                    // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrFilter_data;                                     // 0x03EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FrFilter_offset;                                   // 0x03F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PoFilter_offset;                                   // 0x03F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PoFilter_speed;                                    // 0x03F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PoFilter_data;                                     // 0x03FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active_poFIlter;                                   // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          Active_frFilter;                                   // 0x0401(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2134[0x6];                                     // 0x0402(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Dynmat_frequency;                                  // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Dynmat_polarity;                                   // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DownloadSpeed;                                     // 0x0418(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2135[0x4];                                     // 0x041C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FStruct_signalDataDynamic              DownloadData;                                      // 0x0420(0x0070)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                         NoiseScale;                                        // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Active;                                            // 0x0494(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2136[0x3];                                     // 0x0495(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PrecMult;                                          // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Downloading;                                       // 0x049C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NosigA;                                            // 0x04A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2137[0x4];                                     // 0x04A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APanel_download_tutorial3_C*            Tutor;                                             // 0x04A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Rain;                                              // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Diff_download;                                     // 0x04B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ResPercent;                                        // 0x04B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DownloadMultiplier;                                // 0x04BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         PolarityDir;                                       // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         I;                                                 // 0x04C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMainGamemode_C*                        GameMode;                                          // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Tst;                                               // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_umg_signalDownload(int32 EntryPoint);
	void SettingsApplied(const struct FStruct_settings& Settings);
	void Calculate();
	void PowerChanged(bool Active_calc, bool Active_downl, bool Active_coords, bool Active_play, bool Active_light);
	void GamemodeBeginPlay();
	void SignalDeleted();
	void RepeatPlay();
	void PlaySignal();
	void ApplyColor(const struct FLinearColor& Color);
	void PropRenderer_finishProps();
	void GamemodeMakeKeys();
	void AnyKey(const struct FKey& Key, bool Pressed);
	void GamemodePreLoad();
	void Unfocused();
	void Unfoc();
	void StuffUpgraded(class AMainGamemode_C* Param_GameMode);
	void SignalSaved();
	void Init_Download_Sig(const struct FVector2D& SignalLocation);
	void InitTutor(class APanel_download_tutorial3_C* Param_Tutor);
	void Texts();
	void DreamInv(TArray<struct FStruct_save>& Invv, class ADreamBase_C** Base);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"umg_signalDownload_C">();
	}
	static class UUmg_signalDownload_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUmg_signalDownload_C>();
	}
};
static_assert(alignof(UUmg_signalDownload_C) == 0x000008, "Wrong alignment on UUmg_signalDownload_C");
static_assert(sizeof(UUmg_signalDownload_C) == 0x0004D8, "Wrong size on UUmg_signalDownload_C");
static_assert(offsetof(UUmg_signalDownload_C, UberGraphFrame) == 0x000260, "Member 'UUmg_signalDownload_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, BackgroundBlur_68) == 0x000268, "Member 'UUmg_signalDownload_C::BackgroundBlur_68' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Canv_nosign) == 0x000270, "Member 'UUmg_signalDownload_C::Canv_nosign' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Image_19) == 0x000278, "Member 'UUmg_signalDownload_C::Image_19' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Image_125) == 0x000280, "Member 'UUmg_signalDownload_C::Image_125' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Img_activated) == 0x000288, "Member 'UUmg_signalDownload_C::Img_activated' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Img_frequency) == 0x000290, "Member 'UUmg_signalDownload_C::Img_frequency' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Img_image) == 0x000298, "Member 'UUmg_signalDownload_C::Img_image' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Img_polarity) == 0x0002A0, "Member 'UUmg_signalDownload_C::Img_polarity' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Text_consum) == 0x0002A8, "Member 'UUmg_signalDownload_C::Text_consum' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Text_DEffic) == 0x0002B0, "Member 'UUmg_signalDownload_C::Text_DEffic' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Text_det) == 0x0002B8, "Member 'UUmg_signalDownload_C::Text_det' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Text_FFilter_data) == 0x0002C0, "Member 'UUmg_signalDownload_C::Text_FFilter_data' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Text_FFilter_offset) == 0x0002C8, "Member 'UUmg_signalDownload_C::Text_FFilter_offset' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Text_FFilter_speed) == 0x0002D0, "Member 'UUmg_signalDownload_C::Text_FFilter_speed' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Text_object) == 0x0002D8, "Member 'UUmg_signalDownload_C::Text_object' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Text_PFilter_data) == 0x0002E0, "Member 'UUmg_signalDownload_C::Text_PFilter_data' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Text_PFilter_offset) == 0x0002E8, "Member 'UUmg_signalDownload_C::Text_PFilter_offset' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Text_PFilter_speed) == 0x0002F0, "Member 'UUmg_signalDownload_C::Text_PFilter_speed' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Text_SDownloaded) == 0x0002F8, "Member 'UUmg_signalDownload_C::Text_SDownloaded' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Text_SFrequency) == 0x000300, "Member 'UUmg_signalDownload_C::Text_SFrequency' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Text_sQuality) == 0x000308, "Member 'UUmg_signalDownload_C::Text_sQuality' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Text_SSize) == 0x000310, "Member 'UUmg_signalDownload_C::Text_SSize' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Alpha) == 0x000318, "Member 'UUmg_signalDownload_C::Alpha' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Signal_image) == 0x000320, "Member 'UUmg_signalDownload_C::Signal_image' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Dynmat_image) == 0x000328, "Member 'UUmg_signalDownload_C::Dynmat_image' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Singal_sound) == 0x000330, "Member 'UUmg_signalDownload_C::Singal_sound' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Signal_text) == 0x000338, "Member 'UUmg_signalDownload_C::Signal_text' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Duration) == 0x000350, "Member 'UUmg_signalDownload_C::Duration' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Panel) == 0x000358, "Member 'UUmg_signalDownload_C::Panel' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Decoder) == 0x000360, "Member 'UUmg_signalDownload_C::Decoder' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Data) == 0x000368, "Member 'UUmg_signalDownload_C::Data' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Prev) == 0x0003D0, "Member 'UUmg_signalDownload_C::Prev' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Canv) == 0x0003D8, "Member 'UUmg_signalDownload_C::Canv' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Size) == 0x0003E0, "Member 'UUmg_signalDownload_C::Size' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, FrFilter_speed) == 0x0003E8, "Member 'UUmg_signalDownload_C::FrFilter_speed' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, FrFilter_data) == 0x0003EC, "Member 'UUmg_signalDownload_C::FrFilter_data' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, FrFilter_offset) == 0x0003F0, "Member 'UUmg_signalDownload_C::FrFilter_offset' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, PoFilter_offset) == 0x0003F4, "Member 'UUmg_signalDownload_C::PoFilter_offset' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, PoFilter_speed) == 0x0003F8, "Member 'UUmg_signalDownload_C::PoFilter_speed' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, PoFilter_data) == 0x0003FC, "Member 'UUmg_signalDownload_C::PoFilter_data' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Active_poFIlter) == 0x000400, "Member 'UUmg_signalDownload_C::Active_poFIlter' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Active_frFilter) == 0x000401, "Member 'UUmg_signalDownload_C::Active_frFilter' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Dynmat_frequency) == 0x000408, "Member 'UUmg_signalDownload_C::Dynmat_frequency' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Dynmat_polarity) == 0x000410, "Member 'UUmg_signalDownload_C::Dynmat_polarity' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, DownloadSpeed) == 0x000418, "Member 'UUmg_signalDownload_C::DownloadSpeed' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, DownloadData) == 0x000420, "Member 'UUmg_signalDownload_C::DownloadData' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, NoiseScale) == 0x000490, "Member 'UUmg_signalDownload_C::NoiseScale' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Active) == 0x000494, "Member 'UUmg_signalDownload_C::Active' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, PrecMult) == 0x000498, "Member 'UUmg_signalDownload_C::PrecMult' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Downloading) == 0x00049C, "Member 'UUmg_signalDownload_C::Downloading' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, NosigA) == 0x0004A0, "Member 'UUmg_signalDownload_C::NosigA' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Tutor) == 0x0004A8, "Member 'UUmg_signalDownload_C::Tutor' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Rain) == 0x0004B0, "Member 'UUmg_signalDownload_C::Rain' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Diff_download) == 0x0004B4, "Member 'UUmg_signalDownload_C::Diff_download' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, ResPercent) == 0x0004B8, "Member 'UUmg_signalDownload_C::ResPercent' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, DownloadMultiplier) == 0x0004BC, "Member 'UUmg_signalDownload_C::DownloadMultiplier' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, PolarityDir) == 0x0004C0, "Member 'UUmg_signalDownload_C::PolarityDir' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, I) == 0x0004C4, "Member 'UUmg_signalDownload_C::I' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, GameMode) == 0x0004C8, "Member 'UUmg_signalDownload_C::GameMode' has a wrong offset!");
static_assert(offsetof(UUmg_signalDownload_C, Tst) == 0x0004D0, "Member 'UUmg_signalDownload_C::Tst' has a wrong offset!");

}

