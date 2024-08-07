#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_signal_data2

#include "Basic.hpp"

#include "Enum_signalResponse_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Struct_spaceObject_structs.hpp"
#include "Struct_byteImage_structs.hpp"


namespace SDK
{

// UserDefinedStruct struct_signal_data2.struct_signal_data2
// 0x01D0 (0x01D0 - 0x0000)
struct FStruct_signal_data2 final
{
public:
	int32                                         Decoded_64_601E52FF4BF8B63A0440DA8CAC072798;       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Size_61_AC87FA6F474CCBFD4A53A283B59F8E53;          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              Date_57_5BF184664B434DA21A911387B956499F;          // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         Download_67_BD2FD3404A9E3AE102E7F2A40CED061E;      // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3078[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Image_raw_35_7149A06F430853FE3D31D1AFAB32AF7D;     // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Image_low_80_112D06294087F45E84A67EB3C2809FF9;     // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Image_noisy_81_6C9F477348D8060C7D9F33B450007C1D;   // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             Image_high_29_10F5A07644F72A16E664F0914813E0D2;    // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_raw_45_31832F2B497C09C78171268E6D2E49B9;     // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_low_84_E9B069CC489EC4F4E89475BD572E868C;     // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_noisy_85_32C5BC80466B7890090CD59F6EECDDB5;   // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound_high_42_6520C74945264C483D56DAA4E1833C45;    // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Text_raw_54_3A6BCDA74F3BE9C4AACC84BDD46CFC42;      // 0x0058(0x0018)(Edit, BlueprintVisible)
	class FText                                   Text_low_86_9B154E664B709A5AB02E26A49F6099C0;      // 0x0070(0x0018)(Edit, BlueprintVisible)
	class FText                                   Text_noisy_87_F1A4990B4F4D4CF2A2AF789EB021C7E4;    // 0x0088(0x0018)(Edit, BlueprintVisible)
	class FText                                   Text_high_48_A4A12DFB44D0242555BAD1B10DD44A1A;     // 0x00A0(0x0018)(Edit, BlueprintVisible)
	int32                                         Price_raw_76_69949A1C445698EEDC2FF882CD638444;     // 0x00B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Price_low_79_15A665A2421B154B6025CC8EDA009064;     // 0x00BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Price_noisy_88_B4B7F4854A28E3CF9156CD95C804E3D8;   // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Price_high_90_7C5186B94C31D1A990F23CBAA86770CD;    // 0x00C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_signalResponse                           Response_raw_103_B2D945C746759AB2A53B4592A87ACFCD; // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_signalResponse                           Response_low_107_84A32F0B467B5FECA0E9549161310FF1; // 0x00C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_signalResponse                           Response_noisy_108_4A04B10E405DDA7D4D0318B813A1A47C; // 0x00CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_signalResponse                           Response_clear_109_4E777DE54D79D0883E8F31882D133683; // 0x00CB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3079[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SpecialResponse_135_9BA54D8E4C097F8D700033905A5B82BE; // 0x00D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         SpecialPriority_138_5AFA19AA439E02923CB4E18796C7CF91; // 0x00E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsACopy_100_B1BF09584271A2DAB5592BA7EC86CDC4;      // 0x00E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_307A[0x3];                                     // 0x00E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PolarityDir_115_5AD01FF44CC64307106F8A9036D994D9;  // 0x00E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SignalLocation_114_F9DDA5C344672EB06EBB6CAC9334FDDE; // 0x00EC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_307B[0x4];                                     // 0x00F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Unique_ID_93_3B2470FB4FA54361FA2858916834375A;     // 0x00F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Name_73_1AF14C284ED1662FF52A6D96FF1DEC6A;          // 0x0108(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FStruct_byteImage                      ObjImg_96_270C18764880B3876E76708CDFA9DB36;        // 0x0118(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FStruct_spaceObject                    ObjectData_98_9820AEB440ED69CBAF5FF3AC4E5561AC;    // 0x0128(0x0068)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<class FString>                         Properties_119_1EA3E5964841884938003C878DC99744;   // 0x0190(0x0010)(Edit, BlueprintVisible)
	bool                                          Unique_123_D831C713433CAD415EB3E3ABEFAB07EF;       // 0x01A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_307C[0x7];                                     // 0x01A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FIntPoint>                      DayIntervals_127_E5C8B5C346E35A63DD512990FCE8A368; // 0x01A8(0x0010)(Edit, BlueprintVisible)
	TArray<struct FIntPoint>                      HourIntervals_130_8A025F574FEC857E36D7619C78039149; // 0x01B8(0x0010)(Edit, BlueprintVisible)
	bool                                          IsFunny_132_331D31E2467124D72694FBB16FAAFE2F;      // 0x01C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FStruct_signal_data2) == 0x000008, "Wrong alignment on FStruct_signal_data2");
static_assert(sizeof(FStruct_signal_data2) == 0x0001D0, "Wrong size on FStruct_signal_data2");
static_assert(offsetof(FStruct_signal_data2, Decoded_64_601E52FF4BF8B63A0440DA8CAC072798) == 0x000000, "Member 'FStruct_signal_data2::Decoded_64_601E52FF4BF8B63A0440DA8CAC072798' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Size_61_AC87FA6F474CCBFD4A53A283B59F8E53) == 0x000004, "Member 'FStruct_signal_data2::Size_61_AC87FA6F474CCBFD4A53A283B59F8E53' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Date_57_5BF184664B434DA21A911387B956499F) == 0x000008, "Member 'FStruct_signal_data2::Date_57_5BF184664B434DA21A911387B956499F' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Download_67_BD2FD3404A9E3AE102E7F2A40CED061E) == 0x000010, "Member 'FStruct_signal_data2::Download_67_BD2FD3404A9E3AE102E7F2A40CED061E' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Image_raw_35_7149A06F430853FE3D31D1AFAB32AF7D) == 0x000018, "Member 'FStruct_signal_data2::Image_raw_35_7149A06F430853FE3D31D1AFAB32AF7D' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Image_low_80_112D06294087F45E84A67EB3C2809FF9) == 0x000020, "Member 'FStruct_signal_data2::Image_low_80_112D06294087F45E84A67EB3C2809FF9' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Image_noisy_81_6C9F477348D8060C7D9F33B450007C1D) == 0x000028, "Member 'FStruct_signal_data2::Image_noisy_81_6C9F477348D8060C7D9F33B450007C1D' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Image_high_29_10F5A07644F72A16E664F0914813E0D2) == 0x000030, "Member 'FStruct_signal_data2::Image_high_29_10F5A07644F72A16E664F0914813E0D2' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Sound_raw_45_31832F2B497C09C78171268E6D2E49B9) == 0x000038, "Member 'FStruct_signal_data2::Sound_raw_45_31832F2B497C09C78171268E6D2E49B9' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Sound_low_84_E9B069CC489EC4F4E89475BD572E868C) == 0x000040, "Member 'FStruct_signal_data2::Sound_low_84_E9B069CC489EC4F4E89475BD572E868C' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Sound_noisy_85_32C5BC80466B7890090CD59F6EECDDB5) == 0x000048, "Member 'FStruct_signal_data2::Sound_noisy_85_32C5BC80466B7890090CD59F6EECDDB5' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Sound_high_42_6520C74945264C483D56DAA4E1833C45) == 0x000050, "Member 'FStruct_signal_data2::Sound_high_42_6520C74945264C483D56DAA4E1833C45' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Text_raw_54_3A6BCDA74F3BE9C4AACC84BDD46CFC42) == 0x000058, "Member 'FStruct_signal_data2::Text_raw_54_3A6BCDA74F3BE9C4AACC84BDD46CFC42' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Text_low_86_9B154E664B709A5AB02E26A49F6099C0) == 0x000070, "Member 'FStruct_signal_data2::Text_low_86_9B154E664B709A5AB02E26A49F6099C0' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Text_noisy_87_F1A4990B4F4D4CF2A2AF789EB021C7E4) == 0x000088, "Member 'FStruct_signal_data2::Text_noisy_87_F1A4990B4F4D4CF2A2AF789EB021C7E4' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Text_high_48_A4A12DFB44D0242555BAD1B10DD44A1A) == 0x0000A0, "Member 'FStruct_signal_data2::Text_high_48_A4A12DFB44D0242555BAD1B10DD44A1A' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Price_raw_76_69949A1C445698EEDC2FF882CD638444) == 0x0000B8, "Member 'FStruct_signal_data2::Price_raw_76_69949A1C445698EEDC2FF882CD638444' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Price_low_79_15A665A2421B154B6025CC8EDA009064) == 0x0000BC, "Member 'FStruct_signal_data2::Price_low_79_15A665A2421B154B6025CC8EDA009064' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Price_noisy_88_B4B7F4854A28E3CF9156CD95C804E3D8) == 0x0000C0, "Member 'FStruct_signal_data2::Price_noisy_88_B4B7F4854A28E3CF9156CD95C804E3D8' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Price_high_90_7C5186B94C31D1A990F23CBAA86770CD) == 0x0000C4, "Member 'FStruct_signal_data2::Price_high_90_7C5186B94C31D1A990F23CBAA86770CD' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Response_raw_103_B2D945C746759AB2A53B4592A87ACFCD) == 0x0000C8, "Member 'FStruct_signal_data2::Response_raw_103_B2D945C746759AB2A53B4592A87ACFCD' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Response_low_107_84A32F0B467B5FECA0E9549161310FF1) == 0x0000C9, "Member 'FStruct_signal_data2::Response_low_107_84A32F0B467B5FECA0E9549161310FF1' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Response_noisy_108_4A04B10E405DDA7D4D0318B813A1A47C) == 0x0000CA, "Member 'FStruct_signal_data2::Response_noisy_108_4A04B10E405DDA7D4D0318B813A1A47C' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Response_clear_109_4E777DE54D79D0883E8F31882D133683) == 0x0000CB, "Member 'FStruct_signal_data2::Response_clear_109_4E777DE54D79D0883E8F31882D133683' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, SpecialResponse_135_9BA54D8E4C097F8D700033905A5B82BE) == 0x0000D0, "Member 'FStruct_signal_data2::SpecialResponse_135_9BA54D8E4C097F8D700033905A5B82BE' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, SpecialPriority_138_5AFA19AA439E02923CB4E18796C7CF91) == 0x0000E0, "Member 'FStruct_signal_data2::SpecialPriority_138_5AFA19AA439E02923CB4E18796C7CF91' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, IsACopy_100_B1BF09584271A2DAB5592BA7EC86CDC4) == 0x0000E4, "Member 'FStruct_signal_data2::IsACopy_100_B1BF09584271A2DAB5592BA7EC86CDC4' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, PolarityDir_115_5AD01FF44CC64307106F8A9036D994D9) == 0x0000E8, "Member 'FStruct_signal_data2::PolarityDir_115_5AD01FF44CC64307106F8A9036D994D9' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, SignalLocation_114_F9DDA5C344672EB06EBB6CAC9334FDDE) == 0x0000EC, "Member 'FStruct_signal_data2::SignalLocation_114_F9DDA5C344672EB06EBB6CAC9334FDDE' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Unique_ID_93_3B2470FB4FA54361FA2858916834375A) == 0x0000F8, "Member 'FStruct_signal_data2::Unique_ID_93_3B2470FB4FA54361FA2858916834375A' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Name_73_1AF14C284ED1662FF52A6D96FF1DEC6A) == 0x000108, "Member 'FStruct_signal_data2::Name_73_1AF14C284ED1662FF52A6D96FF1DEC6A' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, ObjImg_96_270C18764880B3876E76708CDFA9DB36) == 0x000118, "Member 'FStruct_signal_data2::ObjImg_96_270C18764880B3876E76708CDFA9DB36' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, ObjectData_98_9820AEB440ED69CBAF5FF3AC4E5561AC) == 0x000128, "Member 'FStruct_signal_data2::ObjectData_98_9820AEB440ED69CBAF5FF3AC4E5561AC' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Properties_119_1EA3E5964841884938003C878DC99744) == 0x000190, "Member 'FStruct_signal_data2::Properties_119_1EA3E5964841884938003C878DC99744' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, Unique_123_D831C713433CAD415EB3E3ABEFAB07EF) == 0x0001A0, "Member 'FStruct_signal_data2::Unique_123_D831C713433CAD415EB3E3ABEFAB07EF' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, DayIntervals_127_E5C8B5C346E35A63DD512990FCE8A368) == 0x0001A8, "Member 'FStruct_signal_data2::DayIntervals_127_E5C8B5C346E35A63DD512990FCE8A368' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, HourIntervals_130_8A025F574FEC857E36D7619C78039149) == 0x0001B8, "Member 'FStruct_signal_data2::HourIntervals_130_8A025F574FEC857E36D7619C78039149' has a wrong offset!");
static_assert(offsetof(FStruct_signal_data2, IsFunny_132_331D31E2467124D72694FBB16FAAFE2F) == 0x0001C8, "Member 'FStruct_signal_data2::IsFunny_132_331D31E2467124D72694FBB16FAAFE2F' has a wrong offset!");

}

