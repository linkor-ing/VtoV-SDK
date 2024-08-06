#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_triggerSave

#include "Basic.hpp"

#include "Struct_sound_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct struct_triggerSave.struct_triggerSave
// 0x00F0 (0x00F0 - 0x0000)
struct FStruct_triggerSave final
{
public:
	class UClass*                                 Class_34_E4935B654044FBAF31FF8AB5A0B3BC82;         // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Transform_33_AB4FF62B42B0F5AFBCEABE887D331566;     // 0x0010(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class FString                                 Key_2_A2FB16CD4ACC0541A1B053BEAF0CDFDE;            // 0x0040(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         Object_keys_5_B1B46B6F4BB5A39423743583EE27C2E7;    // 0x0050(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 Object_index_8_CF0ADC09450DCCE804A844835A766641;   // 0x0060(0x0010)(Edit, BlueprintVisible)
	TArray<bool>                                  bools_11_E577338045C780CD84FDFE8F6CE67FFA;         // 0x0070(0x0010)(Edit, BlueprintVisible)
	TArray<int32>                                 Ints_14_E4548ACA4CB5ABF7814C98B01EB69E20;          // 0x0080(0x0010)(Edit, BlueprintVisible)
	TArray<uint8>                                 bytes_17_5AF6FA71477C08C9A9562FA469D26D37;         // 0x0090(0x0010)(Edit, BlueprintVisible)
	TArray<float>                                 Floats_20_77263AE5466AB88A7C8EF89CE09A552D;        // 0x00A0(0x0010)(Edit, BlueprintVisible)
	TArray<class FString>                         Strings_23_1D09CAD34161B50A026D9FA08CA3A410;       // 0x00B0(0x0010)(Edit, BlueprintVisible)
	TArray<struct FVector>                        Vectors_26_D93BA0254E6F9691301EC5A34C471827;       // 0x00C0(0x0010)(Edit, BlueprintVisible)
	TArray<struct FStruct_sound>                  Sounds_39_36B2A8794F2C6F06610A5EB05AD49C0E;        // 0x00D0(0x0010)(Edit, BlueprintVisible)
	TArray<class UClass*>                         Classes_43_475C61B74C37B5E2686944B9C54CD1F6;       // 0x00E0(0x0010)(Edit, BlueprintVisible)
};
static_assert(alignof(FStruct_triggerSave) == 0x000010, "Wrong alignment on FStruct_triggerSave");
static_assert(sizeof(FStruct_triggerSave) == 0x0000F0, "Wrong size on FStruct_triggerSave");
static_assert(offsetof(FStruct_triggerSave, Class_34_E4935B654044FBAF31FF8AB5A0B3BC82) == 0x000000, "Member 'FStruct_triggerSave::Class_34_E4935B654044FBAF31FF8AB5A0B3BC82' has a wrong offset!");
static_assert(offsetof(FStruct_triggerSave, Transform_33_AB4FF62B42B0F5AFBCEABE887D331566) == 0x000010, "Member 'FStruct_triggerSave::Transform_33_AB4FF62B42B0F5AFBCEABE887D331566' has a wrong offset!");
static_assert(offsetof(FStruct_triggerSave, Key_2_A2FB16CD4ACC0541A1B053BEAF0CDFDE) == 0x000040, "Member 'FStruct_triggerSave::Key_2_A2FB16CD4ACC0541A1B053BEAF0CDFDE' has a wrong offset!");
static_assert(offsetof(FStruct_triggerSave, Object_keys_5_B1B46B6F4BB5A39423743583EE27C2E7) == 0x000050, "Member 'FStruct_triggerSave::Object_keys_5_B1B46B6F4BB5A39423743583EE27C2E7' has a wrong offset!");
static_assert(offsetof(FStruct_triggerSave, Object_index_8_CF0ADC09450DCCE804A844835A766641) == 0x000060, "Member 'FStruct_triggerSave::Object_index_8_CF0ADC09450DCCE804A844835A766641' has a wrong offset!");
static_assert(offsetof(FStruct_triggerSave, bools_11_E577338045C780CD84FDFE8F6CE67FFA) == 0x000070, "Member 'FStruct_triggerSave::bools_11_E577338045C780CD84FDFE8F6CE67FFA' has a wrong offset!");
static_assert(offsetof(FStruct_triggerSave, Ints_14_E4548ACA4CB5ABF7814C98B01EB69E20) == 0x000080, "Member 'FStruct_triggerSave::Ints_14_E4548ACA4CB5ABF7814C98B01EB69E20' has a wrong offset!");
static_assert(offsetof(FStruct_triggerSave, bytes_17_5AF6FA71477C08C9A9562FA469D26D37) == 0x000090, "Member 'FStruct_triggerSave::bytes_17_5AF6FA71477C08C9A9562FA469D26D37' has a wrong offset!");
static_assert(offsetof(FStruct_triggerSave, Floats_20_77263AE5466AB88A7C8EF89CE09A552D) == 0x0000A0, "Member 'FStruct_triggerSave::Floats_20_77263AE5466AB88A7C8EF89CE09A552D' has a wrong offset!");
static_assert(offsetof(FStruct_triggerSave, Strings_23_1D09CAD34161B50A026D9FA08CA3A410) == 0x0000B0, "Member 'FStruct_triggerSave::Strings_23_1D09CAD34161B50A026D9FA08CA3A410' has a wrong offset!");
static_assert(offsetof(FStruct_triggerSave, Vectors_26_D93BA0254E6F9691301EC5A34C471827) == 0x0000C0, "Member 'FStruct_triggerSave::Vectors_26_D93BA0254E6F9691301EC5A34C471827' has a wrong offset!");
static_assert(offsetof(FStruct_triggerSave, Sounds_39_36B2A8794F2C6F06610A5EB05AD49C0E) == 0x0000D0, "Member 'FStruct_triggerSave::Sounds_39_36B2A8794F2C6F06610A5EB05AD49C0E' has a wrong offset!");
static_assert(offsetof(FStruct_triggerSave, Classes_43_475C61B74C37B5E2686944B9C54CD1F6) == 0x0000E0, "Member 'FStruct_triggerSave::Classes_43_475C61B74C37B5E2686944B9C54CD1F6' has a wrong offset!");

}
