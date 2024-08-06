#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_signalDataDynamic

#include "Basic.hpp"

#include "Enum_freq_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Struct_byteImage_structs.hpp"
#include "Enum_quality_structs.hpp"
#include "Enum_objectType_structs.hpp"


namespace SDK
{

// UserDefinedStruct struct_signalDataDynamic.struct_signalDataDynamic
// 0x0070 (0x0070 - 0x0000)
struct FStruct_signalDataDynamic final
{
public:
	class FString                                 Name_15_4DC53B564EDE34E0A8A16A92BD26B4AD;          // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         Level_8_986E7CB3437BFD9FC9F6DF824C794EA8;          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Id_26_DD9E8AA643A0BF449C8D1E8993752C16;            // 0x0018(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	float                                         Size_4_C0BC00CB4E2BC1C588F54A9817B305BC;           // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Decoded_5_A9CAC26F480C342A406FFFB77DD0AB68;        // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              Date_12_F50EB15345B9D56ABE75F0BEF6FBD1E1;          // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCopy_18_CDA9083D42C1928C15981B83A970D261;        // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Polarity_21_0FB3FE464F37A2FB75F40DB7178528EC;      // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SignalLocation_36_9224BE954D1F5B5B6E90B987873DA5E4; // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Object_29_E761FBB84E89C2B5F7FEC98F5EB54F9E;        // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Signal_35_B233DB2C4C2201A4A75992ADBFC69B1B;        // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_byteImage                      Image_32_E58FAF5C406E24C9CD24FC848CCC7F66;         // 0x0058(0x0010)(Edit, BlueprintVisible, HasGetValueTypeHash)
	Enum_freq                                     Frequency_39_69C38A4C41C47B47BA14A1B3EB2AE3EF;     // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_quality                                  Quality_42_EEFCBB3B4BD2BBFCEEEE369E68BE127C;       // 0x0069(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Enum_objectType                               ObjectType_46_95397E754A4283526BEB559C9EE7D7EE;    // 0x006A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_signalDataDynamic) == 0x000008, "Wrong alignment on FStruct_signalDataDynamic");
static_assert(sizeof(FStruct_signalDataDynamic) == 0x000070, "Wrong size on FStruct_signalDataDynamic");
static_assert(offsetof(FStruct_signalDataDynamic, Name_15_4DC53B564EDE34E0A8A16A92BD26B4AD) == 0x000000, "Member 'FStruct_signalDataDynamic::Name_15_4DC53B564EDE34E0A8A16A92BD26B4AD' has a wrong offset!");
static_assert(offsetof(FStruct_signalDataDynamic, Level_8_986E7CB3437BFD9FC9F6DF824C794EA8) == 0x000010, "Member 'FStruct_signalDataDynamic::Level_8_986E7CB3437BFD9FC9F6DF824C794EA8' has a wrong offset!");
static_assert(offsetof(FStruct_signalDataDynamic, Id_26_DD9E8AA643A0BF449C8D1E8993752C16) == 0x000018, "Member 'FStruct_signalDataDynamic::Id_26_DD9E8AA643A0BF449C8D1E8993752C16' has a wrong offset!");
static_assert(offsetof(FStruct_signalDataDynamic, Size_4_C0BC00CB4E2BC1C588F54A9817B305BC) == 0x000028, "Member 'FStruct_signalDataDynamic::Size_4_C0BC00CB4E2BC1C588F54A9817B305BC' has a wrong offset!");
static_assert(offsetof(FStruct_signalDataDynamic, Decoded_5_A9CAC26F480C342A406FFFB77DD0AB68) == 0x00002C, "Member 'FStruct_signalDataDynamic::Decoded_5_A9CAC26F480C342A406FFFB77DD0AB68' has a wrong offset!");
static_assert(offsetof(FStruct_signalDataDynamic, Date_12_F50EB15345B9D56ABE75F0BEF6FBD1E1) == 0x000030, "Member 'FStruct_signalDataDynamic::Date_12_F50EB15345B9D56ABE75F0BEF6FBD1E1' has a wrong offset!");
static_assert(offsetof(FStruct_signalDataDynamic, IsCopy_18_CDA9083D42C1928C15981B83A970D261) == 0x000038, "Member 'FStruct_signalDataDynamic::IsCopy_18_CDA9083D42C1928C15981B83A970D261' has a wrong offset!");
static_assert(offsetof(FStruct_signalDataDynamic, Polarity_21_0FB3FE464F37A2FB75F40DB7178528EC) == 0x00003C, "Member 'FStruct_signalDataDynamic::Polarity_21_0FB3FE464F37A2FB75F40DB7178528EC' has a wrong offset!");
static_assert(offsetof(FStruct_signalDataDynamic, SignalLocation_36_9224BE954D1F5B5B6E90B987873DA5E4) == 0x000040, "Member 'FStruct_signalDataDynamic::SignalLocation_36_9224BE954D1F5B5B6E90B987873DA5E4' has a wrong offset!");
static_assert(offsetof(FStruct_signalDataDynamic, Object_29_E761FBB84E89C2B5F7FEC98F5EB54F9E) == 0x000048, "Member 'FStruct_signalDataDynamic::Object_29_E761FBB84E89C2B5F7FEC98F5EB54F9E' has a wrong offset!");
static_assert(offsetof(FStruct_signalDataDynamic, Signal_35_B233DB2C4C2201A4A75992ADBFC69B1B) == 0x000050, "Member 'FStruct_signalDataDynamic::Signal_35_B233DB2C4C2201A4A75992ADBFC69B1B' has a wrong offset!");
static_assert(offsetof(FStruct_signalDataDynamic, Image_32_E58FAF5C406E24C9CD24FC848CCC7F66) == 0x000058, "Member 'FStruct_signalDataDynamic::Image_32_E58FAF5C406E24C9CD24FC848CCC7F66' has a wrong offset!");
static_assert(offsetof(FStruct_signalDataDynamic, Frequency_39_69C38A4C41C47B47BA14A1B3EB2AE3EF) == 0x000068, "Member 'FStruct_signalDataDynamic::Frequency_39_69C38A4C41C47B47BA14A1B3EB2AE3EF' has a wrong offset!");
static_assert(offsetof(FStruct_signalDataDynamic, Quality_42_EEFCBB3B4BD2BBFCEEEE369E68BE127C) == 0x000069, "Member 'FStruct_signalDataDynamic::Quality_42_EEFCBB3B4BD2BBFCEEEE369E68BE127C' has a wrong offset!");
static_assert(offsetof(FStruct_signalDataDynamic, ObjectType_46_95397E754A4283526BEB559C9EE7D7EE) == 0x00006A, "Member 'FStruct_signalDataDynamic::ObjectType_46_95397E754A4283526BEB559C9EE7D7EE' has a wrong offset!");

}
